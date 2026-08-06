// CPU-B decrypted-opcode cache.
//
// Why this exists: every CPU-B memory cycle crosses the clk_sys->clk_ram
// bridge into SDRAM, and opcode fetches additionally pay the FD1094 decrypt
// pipeline -- ~18 clk_sys from AS to DTACK against the 68000's ~9.7 clk_sys
// zero-wait deadline, i.e. 2-3 wait states on every single fetch.  Measured
// on hardware (Crack Down, debug overlay): CPU-B sat stalled on memory for
// 40-50% of every frame while CPU-A idled at ~3% waiting for it, and the
// frame-locked game loop quantized that deficit into a uniform half-speed
// game with occasional normal-speed bursts when the workload briefly fit.
// Real System 24 work RAM is zero-wait; serving repeat fetches from BRAM
// moves the core toward the real machine, not away from it.
//
// Scope: CPU-B PROGRAM fetches (fc[1]) in the FD1094 decrypt window
// (< 0x100000), excluding the reset-vector words (word address <= 3, which
// interact with irq_enter).  Data reads of the same addresses bypass the
// cache entirely in both directions -- they return raw memory, not
// decrypted opcodes, and must never be mixed.
//
// Address scheme: within the cached window the CPU-B logical address maps
// 1:1 onto the WORKB (< 0x080000) / WORKA (0x080000-0x0fffff) SDRAM regions
// with the low 18 byte-address bits preserved, and no second CPU-B fc[1]
// window reaches those regions.  Lines are therefore indexed and tagged by
// the CPU-B logical address (which the FD1094 key schedule also uses), while
// write snooping arrives as a PHYSICAL address and is translated back --
// that direction is where aliasing lives (CPU-A reaches WORKA/WORKB through
// its own f80000/f00000 windows, and the write channel serves both CPUs).
//
// The FD1094 state byte is part of the tag, so CMP-driven state changes and
// IRQ-mode entry need no flush: a line decrypted under another state simply
// misses.  The full valid array is swept clear after every reset assertion
// (2048 cycles), which also covers ROM/key loading -- the loader only runs
// while the core is held in reset.
//
// Coherency granularity: an invalidating write and a lookup hit can land on
// the same edge; the hit may then return the pre-write word.  A CPU-B fetch
// racing a CPU-A store to the same word is equally unordered on the real
// dual-bus hardware, so this one-cycle window does not narrow real
// behaviour.
module s24_b_opcache (
    input  logic        clk,
    input  logic        reset,

    // Lookup port.  address is the live CPU-B logical word address held
    // stable by the bus front-end for the whole transaction; the tag/data
    // RAMs register it every cycle, so lookup_q_valid tells the consumer
    // when the RAM outputs correspond to it (one registered address cycle
    // behind).  hit is only meaningful while lookup_q_valid is high.
    input  logic [23:1] address,
    input  logic        fetch_window,   // fc[1] && addr < 0x100000, word > 3
    input  logic [7:0]  state_now,      // FD1094 current_state (0 if no FD1094)
    output logic        lookup_q_valid,
    output logic        hit,
    output logic [15:0] hit_data,

    // Fill port: one-cycle strobe when a fetch completes with its plaintext.
    // state_used is the state byte the decrypt actually consumed.
    input  logic        fill,
    input  logic [23:1] fill_address,
    input  logic [7:0]  fill_state,
    input  logic [15:0] fill_data,

    // Snoop port: one-cycle strobe per accepted SDRAM write, physical BYTE
    // address.  Writes outside WORKA/WORKB are ignored here (cheap filter at
    // the call site keeps char/sprite traffic from thrashing lines).
    input  logic        snoop,
    input  logic [26:0] snoop_phys
);
    import s24_pkg::*;

    localparam int INDEX_BITS = 11;
    localparam int LINES = 1 << INDEX_BITS;
    // Tag: logical byte-address bits [19:12] (top bit is the WORKB/WORKA
    // region), the FD1094 state, and the valid bit.
    localparam int TAG_BITS = 8 + 8 + 1;

    // --- physical -> cached-logical translation for the snoop port -------
    logic snoop_in_workb, snoop_in_worka;
    logic [19:12] snoop_tag_addr;
    logic [11:1]  snoop_index;
    always_comb begin
        snoop_in_workb = (snoop_phys[26:18] == SDR_WORKB_BASE[26:18]);
        snoop_in_worka = (snoop_phys[26:18] == SDR_WORKA_BASE[26:18]);
        // WORKB offset o maps to logical o (bits [19:18] = 00); WORKA offset
        // o maps to logical 0x080000+o (bit [19] = 1, bit [18] = 0).
        snoop_tag_addr = {snoop_in_worka, 1'b0, snoop_phys[17:12]};
        snoop_index    = snoop_phys[11:1];
    end
    wire snoop_hits_window = snoop && (snoop_in_workb || snoop_in_worka);

    // --- post-reset valid sweep ------------------------------------------
    logic [INDEX_BITS:0] sweep_count;
    wire sweeping = !sweep_count[INDEX_BITS];
    always_ff @(posedge clk) begin
        if (reset) sweep_count <= '0;
        else if (sweeping) sweep_count <= sweep_count + 1'b1;
    end

    // --- tag/data arrays --------------------------------------------------
    // One write port each, one unconditional registered read port each, so
    // Quartus 17 infers M10K (see CLAUDE.md on uninferred RAM shapes).
    logic [TAG_BITS-1:0] tag_ram  [0:LINES-1];
    logic [15:0]         data_ram [0:LINES-1];

    // Write-port arbitration, priority order:
    //   sweep  -- owns the port until the valid array is clear;
    //   snoop  -- an invalidation lost is a stale opcode executed later, so
    //             it must never be dropped outside reset;
    //   fill   -- a dropped fill is only a future miss.
    logic                 tag_we;
    logic [INDEX_BITS-1:0] tag_waddr;
    logic [TAG_BITS-1:0]  tag_wdata;
    always_comb begin
        tag_we    = 1'b1;
        if (sweeping) begin
            tag_waddr = sweep_count[INDEX_BITS-1:0];
            tag_wdata = '0;
        end else if (snoop_hits_window) begin
            tag_waddr = snoop_index;
            tag_wdata = '0;              // conservative: clear whatever is there
        end else if (fill) begin
            tag_waddr = fill_address[11:1];
            tag_wdata = {1'b1, fill_state, fill_address[19:12]};
        end else begin
            tag_we    = 1'b0;
            tag_waddr = '0;
            tag_wdata = '0;
        end
    end

    wire data_we = fill && !sweeping && !snoop_hits_window;

    logic [TAG_BITS-1:0] tag_q;
    logic [15:0]         data_q;
    always_ff @(posedge clk) begin
        if (tag_we) tag_ram[tag_waddr] <= tag_wdata;
        tag_q <= tag_ram[address[11:1]];
    end
    always_ff @(posedge clk) begin
        if (data_we) data_ram[fill_address[11:1]] <= fill_data;
        data_q <= data_ram[address[11:1]];
    end

    // --- lookup ----------------------------------------------------------
    // The RAM outputs lag the live address by one registered cycle; publish
    // a one-cycle-delayed copy of the address so the consumer can require
    // q to correspond to the word it is about to acknowledge.
    logic [11:1] q_index;
    logic        q_valid_r;
    always_ff @(posedge clk) begin
        if (reset) begin
            q_index   <= '0;
            q_valid_r <= 1'b0;
        end else begin
            q_index   <= address[11:1];
            q_valid_r <= 1'b1;
        end
    end
    assign lookup_q_valid = q_valid_r && !sweeping && (q_index == address[11:1]);

    assign hit = lookup_q_valid && fetch_window &&
                 tag_q[TAG_BITS-1] &&                      // valid
                 (tag_q[15:8] == state_now) &&             // FD1094 state
                 (tag_q[7:0]  == address[19:12]);          // address tag
    assign hit_data = data_q;
endmodule
