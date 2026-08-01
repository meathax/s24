import s24_pkg::*;

// System 24 timer and interrupt controller at a00000-a00007.
module s24_irq (
    input  logic        clk,
    input  logic        reset,
    input  logic        ce_8m,
    input  logic        hsync_tick,
    input  logic [9:0]  vcount,
    input  logic        ym_irq,
    input  logic        frc_irq,
    input  logic        rd_a,
    input  logic        rd_b,
    input  logic        wr,
    input  logic [1:0]  addr,
    input  logic [15:0] din,
    input  logic [1:0]  be,
    output logic [15:0] dout,
    output logic [2:0]  ipl_a_n,
    output logic [2:0]  ipl_b_n
);
    logic [11:0] timer_data, timer_value;
    logic [1:0] timer_mode;
    logic [5:0] allow_a, allow_b;
    logic timer_a, timer_b, vblank_irq, sprite_irq;
    // Sticky diagnostic breadcrumbs for the MAME dcclub timer polling loop.
    // They do not participate in functional behavior and are observed only
    // by the verification bench.
    logic timer_reload_seen, timer_zero_read_a, timer_zero_read_b;
    // MAME's continuously-synchronised timer can expose the zero value to a
    // CPU read even when the other CPU's discrete bus phase misses the exact
    // hsync edge. Retain one zero observation per CPU for zero-data reloads;
    // the pending bit is consumed by that CPU's next IRQ-controller read.
    logic timer_zero_pending_a, timer_zero_pending_b;

    function automatic logic [11:0] merge_timer(
        input logic [11:0] old_data,
        input logic [15:0] new_data,
        input logic [1:0] byte_en
    );
        logic [15:0] merged;
        begin
            merged = merge16({4'h0,old_data}, new_data, byte_en);
            merge_timer = merged[11:0];
        end
    endfunction

    function automatic [2:0] encoded_ipl(input [5:0] p);
        if      (p[5]) encoded_ipl = 3'd6;
        else if (p[4]) encoded_ipl = 3'd5;
        else if (p[3]) encoded_ipl = 3'd4;
        else if (p[2]) encoded_ipl = 3'd3;
        else if (p[1]) encoded_ipl = 3'd2;
        else           encoded_ipl = 3'd0;
    endfunction

    // MAME's timer callback first reaches 0x1000, raises the pending flags,
    // and only then reloads m_irq_tdata.  irq_r() returns the low 12 bits, so
    // a read serviced on that callback boundary can observe zero even though
    // the registered RTL counter reloads in the same edge.  Keep the state
    // compact and expose that transient only through the read datapath.
    wire timer_tick = (timer_mode == 2'd1 && hsync_tick) ||
                      (timer_mode == 2'd3 && ce_8m);
    wire timer_read_boundary = timer_tick && timer_value == 12'hfff;
    wire timer_zero_visible = timer_read_boundary ||
                              (rd_a && timer_zero_pending_a) ||
                              (rd_b && timer_zero_pending_b);

    logic [5:0] pending_a, pending_b;
    always_comb begin
        pending_a = 6'b0;
        pending_b = 6'b0;
        pending_a[IRQ_YM2151] = ym_irq;
        pending_b[IRQ_YM2151] = ym_irq;
        pending_a[IRQ_TIMER]  = timer_a;
        pending_b[IRQ_TIMER]  = timer_b;
        pending_a[IRQ_VBLANK] = vblank_irq;
        pending_b[IRQ_VBLANK] = vblank_irq;
        pending_a[IRQ_SPRITE] = sprite_irq;
        pending_b[IRQ_SPRITE] = sprite_irq;
        pending_a[IRQ_FRC]    = frc_irq;
        pending_b[IRQ_FRC]    = frc_irq;
        ipl_a_n = ~encoded_ipl(pending_a & allow_a);
        ipl_b_n = ~encoded_ipl(pending_b & allow_b);
        dout = {4'h0, timer_zero_visible ? 12'h000 : timer_value};
    end

    always_ff @(posedge clk) begin
        if (reset) begin
            timer_data <= 0;
            timer_value <= 0;
            timer_mode <= 0;
            allow_a <= 0;
            allow_b <= 0;
            timer_a <= 0;
            timer_b <= 0;
            vblank_irq <= 0;
            sprite_irq <= 0;
            timer_reload_seen <= 0;
            timer_zero_read_a <= 0;
            timer_zero_read_b <= 0;
            timer_zero_pending_a <= 0;
            timer_zero_pending_b <= 0;
        end else begin
            // hsync_tick is registered at the wrap edge, so vcount still
            // names the line that just ended. Assert at 423->0 and 383->384
            // to match MAME's sprite and vblank scanline callbacks.
            if (hsync_tick) begin
                vblank_irq <= (vcount == 10'd383);
                sprite_irq <= (vcount == 10'd423);
            end

            if (timer_tick) begin
                if (timer_value == 12'hfff) begin
                    timer_value <= timer_data;
                    timer_a <= 1'b1;
                    timer_b <= 1'b1;
                    timer_reload_seen <= 1'b1;
                    if (timer_data == 0) begin
                        timer_zero_pending_a <= 1'b1;
                        timer_zero_pending_b <= 1'b1;
                    end
                end else timer_value <= timer_value + 1'd1;
            end

            // MAME returns the timer value for every IRQ-controller read;
            // dcclub's wait loop polls A00002 (register 1), not register 2.
            if (rd_a && (timer_value == 0 || timer_zero_pending_a ||
                         timer_read_boundary))
                timer_zero_read_a <= 1'b1;
            if (rd_b && (timer_value == 0 || timer_zero_pending_b ||
                         timer_read_boundary))
                timer_zero_read_b <= 1'b1;

            if (rd_a) timer_zero_pending_a <= 1'b0;
            if (rd_b) timer_zero_pending_b <= 1'b0;

            if (rd_a && addr == 2) timer_a <= 1'b0;
            if (rd_b && addr == 3) timer_b <= 1'b0;

            if (wr) begin
                case (addr)
                    2'd0: timer_data <= merge_timer(timer_data, din, be);
                    2'd1: if (be[0]) begin
                        // Changing to stopped mode advances once in MAME.
                        if (timer_mode != 0 && din[1:0] == 0) begin
                            if (timer_value == 12'hfff) begin
                                timer_value <= timer_data;
                                timer_a <= 1'b1;
                                timer_b <= 1'b1;
                            end else timer_value <= timer_value + 1'd1;
                        end
                        timer_mode <= din[1:0];
                    end
                    2'd2: begin
                        allow_a <= din[5:0];
                        timer_a <= 1'b0;
                    end
                    2'd3: begin
                        allow_b <= din[5:0];
                        timer_b <= 1'b0;
                    end
                endcase
            end
        end
    end
endmodule
