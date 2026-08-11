// CPU-A plaintext opcode cache.
//
// System 24's program ROM and work RAM are directly attached to the CPU-side
// buses, but the MiSTer implementation stores them behind the SDRAM bridge.
// A repeated program fetch therefore pays several artificial wait states even
// though the PCB CPU would complete it without that bridge latency.  This
// direct-mapped cache serves only PROGRAM-space reads below 0x100000; data
// reads always bypass it and retain the board-visible memory path.
//
// The lower half of CPU-A's window is immutable boot ROM.  The upper half is
// shared Work-A RAM, so accepted writes from either CPU invalidate by physical
// address.  A conservative whole-word line invalidation is sufficient because
// each cache entry holds exactly one 16-bit word.
module s24_a_opcache (
    input  logic        clk,
    input  logic        reset,

    input  logic [23:1] address,
    input  logic        fetch_window,
    output logic        lookup_q_valid,
    output logic        hit,
    output logic [15:0] hit_data,

    input  logic        fill,
    input  logic [23:1] fill_address,
    input  logic [15:0] fill_data,

    input  logic        snoop,
    input  logic [26:0] snoop_phys
);
    import s24_pkg::*;

    localparam int INDEX_BITS = 11;
    localparam int LINES = 1 << INDEX_BITS;
    localparam int TAG_BITS = 9; // valid + logical byte address [19:12]

    logic [INDEX_BITS:0] sweep_count;
    wire sweeping = !sweep_count[INDEX_BITS];
    always_ff @(posedge clk) begin
        if (reset) sweep_count <= '0;
        else if (sweeping) sweep_count <= sweep_count + 1'b1;
    end

    // Only Work-A is writable in CPU-A's cached logical window.  Boot ROM
    // writes are not accepted by s24_core, and Work-B is not mapped here.
    wire snoop_in_worka =
        snoop_phys[26:18] == SDR_WORKA_BASE[26:18];
    wire snoop_hits_window = snoop && snoop_in_worka;

    logic [TAG_BITS-1:0] tag_ram [0:LINES-1];
    logic [15:0] data_ram [0:LINES-1];
    logic tag_we;
    logic [INDEX_BITS-1:0] tag_waddr;
    logic [TAG_BITS-1:0] tag_wdata;

    always_comb begin
        tag_we = 1'b1;
        if (sweeping) begin
            tag_waddr = sweep_count[INDEX_BITS-1:0];
            tag_wdata = '0;
        end else if (snoop_hits_window) begin
            tag_waddr = snoop_phys[11:1];
            tag_wdata = '0;
        end else if (fill) begin
            tag_waddr = fill_address[11:1];
            tag_wdata = {1'b1,fill_address[19:12]};
        end else begin
            tag_we = 1'b0;
            tag_waddr = '0;
            tag_wdata = '0;
        end
    end

    wire data_we = fill && !sweeping && !snoop_hits_window;
    logic [TAG_BITS-1:0] tag_q;
    logic [15:0] data_q;
    always_ff @(posedge clk) begin
        if (tag_we) tag_ram[tag_waddr] <= tag_wdata;
        tag_q <= tag_ram[address[11:1]];
    end
    always_ff @(posedge clk) begin
        if (data_we) data_ram[fill_address[11:1]] <= fill_data;
        data_q <= data_ram[address[11:1]];
    end

    logic [11:1] q_index;
    logic q_valid_r;
    always_ff @(posedge clk) begin
        if (reset) begin
            q_index <= '0;
            q_valid_r <= 1'b0;
        end else begin
            q_index <= address[11:1];
            q_valid_r <= 1'b1;
        end
    end

    assign lookup_q_valid = q_valid_r && !sweeping &&
                            q_index == address[11:1];
    assign hit = lookup_q_valid && fetch_window && tag_q[TAG_BITS-1] &&
                 tag_q[7:0] == address[19:12];
    assign hit_data = data_q;
endmodule
