`timescale 1ns/1ps

module tb_palette;
    logic [15:0] palette_word=0;
    logic shadow_bank=0;
    logic [7:0] red,green,blue;
    s24_palette dut(.*);

    initial begin
        #1;
        assert({red,green,blue}==24'h000000) else $fatal(1,"black expansion");

        // Five-bit red value 1 expands to 8.
        palette_word=16'h1000;shadow_bank=0;#1;
        assert(red==8'd8) else $fatal(1,"5-bit expansion %0d",red);
        shadow_bank=1;#1;
        assert(red==8'd4) else $fatal(1,"shadow rounding %0d",red);

        // Bit 15 selects highlight for the shadow palette bank. MAME truncates
        // floor(255 - 0.6*(255-8)) to 106, not 107.
        palette_word=16'h9000;#1;
        assert(red==8'd106) else $fatal(1,"highlight rounding %0d",red);

        palette_word=16'hffff;#1;
        assert({red,green,blue}==24'hffffff) else $fatal(1,"white highlight");
        $display("PASS 315-5242 expansion and shadow/highlight rounding");
        $finish;
    end
endmodule
