module tb_tile_ownership(
    input  logic clk,
    output logic test_failed
);
    logic reset = 1;
    logic ce_pixel = 0;
    logic [9:0] hcount = 0;
    logic [9:0] vcount = 0;
    logic [11:0] pixel0,pixel1,pixel2,pixel3;
    logic cat0,cat1,cat2,cat3;
    logic valid0,valid1,valid2,valid3;
    logic [3:0] layer_blink;
    integer state = 0;
    integer reset_clocks = 0;
    integer render_clocks = 0;
    integer probe_clocks = 0;
    logic probe_complete = 0;
    logic unauthorized_write_seen = 0;

    s24_tile dut(
        .clk(clk),.reset(reset),.ce_pixel(ce_pixel),
        .hcount(hcount),.vcount(vcount),
        .cpu_wr(1'b0),.cpu_addr(15'd0),.cpu_din(16'd0),.cpu_be(2'b11),
        .char_wr(1'b0),.char_addr(16'd0),.char_din(16'd0),
        .char_be(2'b11),.blend_en(1'b0),.layer_blink(layer_blink),
        .cpu_dout(),
        .layer0_pixel(pixel0),.layer1_pixel(pixel1),
        .layer2_pixel(pixel2),.layer3_pixel(pixel3),
        .layer0_cat(cat0),.layer1_cat(cat1),
        .layer2_cat(cat2),.layer3_cat(cat3),
        .layer0_valid(valid0),.layer1_valid(valid1),
        .layer2_valid(valid2),.layer3_valid(valid3));

    // No delayed/event-controlled stimulus is used here. The C++ harness
    // drives clk so this focused regression remains compatible with the
    // model save API and always leaves an automatic checkpoint.
    always @(posedge clk) begin
        if (reset)
            unauthorized_write_seen <= 1'b0;
        else if (dut.line_write_fire && (dut.disabled || !dut.selected))
            unauthorized_write_seen <= 1'b1;
    end

    always @(negedge clk) begin
        case (state)
            0: begin
                reset_clocks = reset_clocks + 1;
                if (reset_clocks == 4) begin
                    reset = 0;
                    if (!probe_complete) begin
                        // Render one real line with layer 0 selected at X=0
                        // and masked out at X=8. The same character spans both
                        // cells, so X=8 is a cache hit which must not write.
                        dut.control_regs[4] = 16'h0000;
                        dut.control_regs[5] = 16'h8000;
                        dut.control_regs[6] = 16'h8000;
                        dut.control_regs[7] = 16'h8000;
                        dut.mask_ram_hi[4] = 8'h40;
                        dut.mask_ram_lo[4] = 8'h00;
                        hcount = 10'd655;
                        vcount = 10'd423;
                        ce_pixel = 1;
                        probe_clocks = 0;
                        state = 10;
                    end else begin
                        // Disable every physical tilemap. The renderer
                        // therefore skips the complete line without
                        // overwriting any pixel.
                        dut.control_regs[4] = 16'h8000;
                        dut.control_regs[5] = 16'h8000;
                        dut.control_regs[6] = 16'h8000;
                        dut.control_regs[7] = 16'h8000;

                    // Poison bank 0, layer 0, X=0 with a valid white glyph.
                    // This models an old scrolling scoreboard pixel that a
                    // masked heading span must never expose on a later fill.
                        dut.line0[0] = '0;
                        dut.line0[0][13:0] = 14'h2fff;

                    // 423->0 displays bank 1 and claims bank 0 to render line
                    // 1, leaving the poisoned masked-out cell untouched.
                        hcount = 10'd655;
                        vcount = 10'd423;
                        ce_pixel = 1;
                        render_clocks = 0;
                        state = 1;
                    end
                end
            end
            10: begin
                ce_pixel = 0;
                hcount = 0;
                state = 11;
            end
            11: begin
                probe_clocks = probe_clocks + 1;
                if (probe_clocks > 656*3) begin
                    $display("FAIL tile write-guard probe deadline %0d",
                             probe_clocks);
                    test_failed = 1;
                    $finish;
                end else if (!dut.render_active && probe_clocks > 4) begin
                    if (unauthorized_write_seen) begin
                        $display("FAIL masked tile issued a cache-hit line-buffer write");
                        test_failed = 1;
                    end
                    // Cold-reset the DUT before the original generation-tag
                    // scenario so the two checks remain independent.
                    reset = 1;
                    reset_clocks = 0;
                    probe_complete = 1;
                    state = 0;
                end
            end
            1: begin
                ce_pixel = 0;
                hcount = 0;
                state = 2;
            end
            2: begin
                render_clocks = render_clocks + 1;
                if (!dut.render_active && render_clocks > 4) begin
                    if (render_clocks > 656*3) begin
                        $display("FAIL tile ownership render deadline %0d",
                                 render_clocks);
                        test_failed = 1;
                        $finish;
                    end

                    // Prefetch bank 0/X=0 for the following line boundary.
                    hcount = 10'd655;
                    vcount = 0;
                    ce_pixel = 0;
                    state = 3;
                end
            end
            3: begin
                // Swap bank 0 onto the display. A fresh-generation check must
                // reject the poisoned entry before it reaches layer0_valid.
                ce_pixel = 1;
                state = 4;
            end
            4: begin
                ce_pixel = 0;
                if (valid0 || pixel0 != 0) begin
                    $display("FAIL stale masked tile escaped valid=%b pixel=%h",
                             valid0,pixel0);
                    test_failed = 1;
                end

                // Also prove that a genuinely current pen-zero heading pixel
                // remains valid. The mixer needs this coverage bit to keep a
                // lower white scoreboard glyph behind the black plaque.
                dut.render_active = 0;
                dut.lookup_valid = 0;
                dut.line_stage_valid = 0;
                dut.bank_generation[1] = 10'd7;
                dut.bank_line_y[1] = 9'd383;
                dut.bank_epoch[1] = dut.frame_epoch;
                dut.bank_complete[1] = 1;
                dut.line0[512] = {10'd7,14'h2ab0};
                hcount = 10'd655;
                // 382->383 is the one visible boundary on which the ahead
                // renderer intentionally does not claim another fill bank.
                vcount = 10'd382;
                ce_pixel = 0;
                state = 5;
            end
            5: begin
                ce_pixel = 1;
                state = 6;
            end
            default: begin
                ce_pixel = 0;
                if (!valid0 || cat0 || pixel0 != 12'hab0) begin
                    $display("FAIL current opaque heading lost valid=%b cat=%b pixel=%h",
                             valid0,cat0,pixel0);
                    test_failed = 1;
                end
                if (!test_failed)
                    $display("PASS masked cache-hit suppressed, stale tile rejected, and opaque heading retained clocks=%0d",
                             render_clocks);
                $finish;
            end
        endcase
    end

    initial test_failed = 0;
endmodule
