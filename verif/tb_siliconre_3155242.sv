`timescale 1ns/1ps

// SiliconRE-derived contract test for the 315-5242/M71064 output stage.
// This checks the silicon-traced RGB latch, blanking gate, grayscale path and
// each component's independent shade-output enable. The external resistor-DAC
// voltage for driven nonzero components remains covered by tb_palette.sv.
module tb_siliconre_3155242;
    logic clk = 1'b0;
    logic nblank = 1'b1;
    logic ngrey = 1'b1;
    logic nshade = 1'b1;
    logic hi_lo = 1'b0;
    logic [4:0] r = 5'd0, g = 5'd0, b = 5'd0;
    logic [4:0] rout, gout, bout;
    tri rout_sh, gout_sh, bout_sh;
    logic [15:0] palette_word;
    logic palette_shadow_bank;
    logic [7:0] production_r, production_g, production_b;

    always #5 clk = ~clk;

    M71064 silicon(
        .CLK(clk), .nBLANK(nblank), .nGREY(ngrey), .nSHADE(nshade),
        .HI_LO(hi_lo), .R(r), .G(g), .B(b),
        .ROUT(rout), .ROUT_SH(rout_sh), .GOUT(gout), .GOUT_SH(gout_sh),
        .BOUT(bout), .BOUT_SH(bout_sh));

    s24_palette production_palette(
        .palette_word(palette_word), .shadow_bank(palette_shadow_bank),
        .red(production_r), .green(production_g), .blue(production_b));

    task automatic sample_expected(input logic [4:0] er,
                                   input logic [4:0] eg,
                                   input logic [4:0] eb);
        begin
            @(posedge clk); #1;
            if ({rout,gout,bout} !== {er,eg,eb})
                $fatal(1, "315-5242 latch mismatch in=%h/%h/%h controls blank=%b grey=%b got=%h/%h/%h expected=%h/%h/%h",
                       r,g,b,nblank,ngrey,rout,gout,bout,er,eg,eb);
        end
    endtask

    initial begin
        // Reset-like blanking must force the registered RGB outputs low.
        r=5'h1f; g=5'h12; b=5'h09; nblank=1'b0; ngrey=1'b1;
        sample_expected(5'h00,5'h00,5'h00);

        // Normal colour mode is a registered transparent 5-bit RGB latch.
        nblank=1'b1; ngrey=1'b1; nshade=1'b1; hi_lo=1'b0;
        for (int i=0; i<32; i++) begin
            r=5'(i); g=5'(31-i); b=5'((i*13)&31);
            palette_word={1'b0,b[0],g[0],r[0],b[4:1],g[4:1],r[4:1]};
            palette_shadow_bank=1'b0;
            sample_expected(5'(i),5'(31-i),5'((i*13)&31));
            if ({production_r,production_g,production_b} !==
                {{r,r[4:2]}, {g,g[4:2]}, {b,b[4:2]}})
                $fatal(1, "production normal DAC expansion mismatch word=%h got=%h/%h/%h",
                       palette_word,production_r,production_g,production_b);
        end

        // The die trace's nGREY input selects its logic-only grayscale path.
        // Check the full RGB cube at a representative coarse grid; this is
        // independent of MAME's palette arithmetic and catches wiring errors.
        ngrey=1'b0;
        for (int rr=0; rr<32; rr+=3)
            for (int gg=0; gg<32; gg+=3)
                for (int bb=0; bb<32; bb+=3) begin
                    r=5'(rr); g=5'(gg); b=5'(bb);
                    @(posedge clk); #1;
                    if (!((rout==gout) && (gout==bout)))
                        $fatal(1, "315-5242 grayscale mismatch in=%h/%h/%h out=%h/%h/%h",
                               r,g,b,rout,gout,bout);
                end

        // Each shade pin is enabled only by its own nonzero component. Prove
        // zero stays high-Z independently while nonzero peers are driven, for
        // both the low/shadow and high/highlight shade polarities.
        ngrey=1'b1; nblank=1'b1; nshade=1'b0;
        for (int polarity=0; polarity<2; polarity++) begin
            hi_lo=polarity[0];
            r=5'd0; g=5'd7; b=5'd0;
            @(posedge clk); #1;
            if (rout_sh !== 1'bz || gout_sh !== ~polarity[0] || bout_sh !== 1'bz)
                $fatal(1, "315-5242 per-channel shade enable mismatch polarity=%0d pins=%b/%b/%b",
                       polarity,rout_sh,gout_sh,bout_sh);

            r=5'd11; g=5'd0; b=5'd19;
            @(posedge clk); #1;
            if (rout_sh !== ~polarity[0] || gout_sh !== 1'bz ||
                bout_sh !== ~polarity[0])
                $fatal(1, "315-5242 per-channel shade enable mismatch polarity=%0d pins=%b/%b/%b",
                       polarity,rout_sh,gout_sh,bout_sh);
        end

        // Blanking remains dominant over grayscale and shade controls.
        nblank=1'b0; nshade=1'b0; hi_lo=1'b1;
        r=5'h1f; g=5'h1f; b=5'h1f;
        sample_expected(5'h00,5'h00,5'h00);

        $display("PASS SiliconRE 315-5242 RGB latch, blanking, grayscale and per-channel shade-enable contract");
        $finish;
    end
endmodule
