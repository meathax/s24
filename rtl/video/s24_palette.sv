// 315-5242 palette conversion used by MAME's segas24_state::paletteram_w.
module s24_palette (
    input  logic [15:0] palette_word,
    input  logic        shadow_bank,
    output logic [7:0]  red,
    output logic [7:0]  green,
    output logic [7:0]  blue
);
    function automatic [7:0] expand5(input [4:0] c);
        expand5 = {c, c[4:2]};
    endfunction
    function automatic [7:0] shade(input [7:0] c, input hi);
        // Highlight numerator reaches 1275, so eleven bits are required.
        // Keeping this explicitly wide avoids Verilog expression truncation
        // before the divide.
        logic [10:0] scaled;
        begin
            // Match the truncation of MAME's floating expressions exactly.
            // Highlight: floor(255 - 0.6*(255-c)) = floor((510+3c)/5).
            if (hi) scaled = (11'd510 + ({3'b000,c} * 11'd3)) / 11'd5;
            else    scaled = ({3'b000,c} * 11'd3) / 11'd5;
            shade = scaled[7:0];
        end
    endfunction

    logic [7:0] r0, g0, b0;
    always_comb begin
        r0 = expand5({palette_word[3:0],  palette_word[12]});
        g0 = expand5({palette_word[7:4],  palette_word[13]});
        b0 = expand5({palette_word[11:8], palette_word[14]});
        if (shadow_bank) begin
            red   = shade(r0, palette_word[15]);
            green = shade(g0, palette_word[15]);
            blue  = shade(b0, palette_word[15]);
        end else begin
            red = r0; green = g0; blue = b0;
        end
    end
endmodule
