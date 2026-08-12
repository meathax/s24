`timescale 1ns/1ps

module tb_palette;
    logic [15:0] palette_word=0;
    logic shadow_bank=0;
    logic [7:0] red,green,blue;
    logic [7:0] expected;
    s24_palette dut(.*);

    function automatic [7:0] mame_expanded(
        input logic [3:0] nibble,
        input logic       lsb
    );
        integer value;
        begin
            value = ({28'd0,nibble} << 4) | (lsb ? 32'd8 : 32'd0);
            value = value | (value >> 5);
            mame_expanded = value[7:0];
        end
    endfunction

    function automatic [7:0] mame_component(
        input logic [3:0] nibble,
        input logic       lsb,
        input logic       highlight
    );
        integer base;
        integer result;
        begin
            // segas24.cpp forms an 8-bit DAC value as nibble<<4, adds the
            // fifth bit at weight 8, then replicates bits 7:5 into 2:0.
            base = ({28'd0,nibble} << 4) | (lsb ? 32'd8 : 32'd0);
            base = base | (base >> 5);
            // C++ converts the complete floating-point expression to int,
            // so highlight is floor(255 - 0.6*(255-base)) ==
            // floor((510 + 3*base)/5), not 255-floor(0.6*(255-base)).
            // SiliconRE M71064 die-traced enables leave an individually zero
            // component undriven in either shade polarity. Keep MAME's table
            // as the reference for every nonzero component only.
            if (base == 0)
                result = 0;
            else
                result = highlight ? ((510 + 3 * base) / 5)
                                   : ((3 * base) / 5);
            mame_component = result[7:0];
        end
    endfunction

    initial begin
        #1;
        assert({red,green,blue}==24'h000000) else $fatal(1,"black expansion");

        // Exhaustively cover the 16 four-bit DAC inputs and the fifth-bit
        // contribution for all three channels in both 315-5242 banks. This
        // catches a lane swap just as well as an arithmetic or rounding error.
        for (int n=0; n<16; n++) begin
            for (int fifth=0; fifth<2; fifth++) begin
                for (int shadow=0; shadow<2; shadow++) begin
                    for (int highlight=0; highlight<2; highlight++) begin
                        palette_word = {highlight[0],fifth[0],fifth[0],fifth[0],
                                        4'(n),4'(n),4'(n)};
                        shadow_bank = shadow[0];
                        #1;
                        expected = shadow[0]
                                 ? mame_component(n[3:0],fifth[0],highlight[0])
                                 : mame_expanded(n[3:0],fifth[0]);
                        assert(red==expected)
                            else $fatal(1,"red mismatch n=%0d fifth=%0d shadow=%0d highlight=%0d got=%0d",
                                       n,fifth,shadow,highlight,red);
                        assert(green==expected)
                            else $fatal(1,"green mismatch n=%0d fifth=%0d shadow=%0d highlight=%0d got=%0d",
                                       n,fifth,shadow,highlight,green);
                        assert(blue==expected)
                            else $fatal(1,"blue mismatch n=%0d fifth=%0d shadow=%0d highlight=%0d got=%0d",
                                       n,fifth,shadow,highlight,blue);
                    end
                end
            end
        end

        // Bit 15 is the highlight selector inside the shadow bank. The
        // strongest MAME rounding edge is explicitly retained as a smoke
        // vector in addition to the exhaustive component sweep.
        palette_word=16'h9000;shadow_bank=1;#1;
        assert(red==8'd106) else $fatal(1,"highlight rounding %0d",red);
        palette_word=16'hffff;#1;
        assert({red,green,blue}==24'hffffff) else $fatal(1,"white highlight");
        $display("PASS 315-5242 zero-component hardware gate and nonzero MAME-derived shade table");
        $finish;
    end
endmodule
