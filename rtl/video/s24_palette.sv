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

    // Only 32 expanded component values are possible. Precomputing both
    // shadow/highlight results removes three combinational divide-by-five
    // networks while preserving MAME's exact truncation. The intermediate
    // widths are explicit because the MAME expression is wider than an
    // 8-bit palette component; relying on implicit truncation made Verilator
    // report WIDTHTRUNC and obscured the intended floor operation.
    (* romstyle="MLAB" *) logic [7:0] shade_r [0:63];
    (* romstyle="MLAB" *) logic [7:0] shade_g [0:63];
    (* romstyle="MLAB" *) logic [7:0] shade_b [0:63];

    function automatic [7:0] shade_value(
        input logic [4:0] component,
        input logic        highlight
    );
        logic [8:0] expanded;
        logic [10:0] numerator;
        logic [10:0] quotient;
        begin
            expanded = {1'b0, component, component[4:2]};
            numerator = highlight
                      ? 11'd510 + (expanded * 11'd3)
                      : expanded * 11'd3;
            quotient = numerator / 11'd5;
            shade_value = quotient[7:0];
        end
    endfunction

    integer shade_init;
    initial begin
        for (shade_init=0; shade_init<32; shade_init=shade_init+1) begin
            shade_r[shade_init] = shade_value(shade_init[4:0],1'b0);
            shade_g[shade_init] = shade_value(shade_init[4:0],1'b0);
            shade_b[shade_init] = shade_value(shade_init[4:0],1'b0);
            shade_r[32+shade_init] = shade_value(shade_init[4:0],1'b1);
            shade_g[32+shade_init] = shade_value(shade_init[4:0],1'b1);
            shade_b[32+shade_init] = shade_value(shade_init[4:0],1'b1);
        end
    end

    logic [4:0] r5, g5, b5;
    logic [7:0] r0, g0, b0;
    always_comb begin
        r5 = {palette_word[3:0],  palette_word[12]};
        g5 = {palette_word[7:4],  palette_word[13]};
        b5 = {palette_word[11:8], palette_word[14]};
        r0 = expand5(r5);
        g0 = expand5(g5);
        b0 = expand5(b5);
        if (shadow_bank) begin
            red   = shade_r[{palette_word[15],r5}];
            green = shade_g[{palette_word[15],g5}];
            blue  = shade_b[{palette_word[15],b5}];
        end else begin
            red = r0; green = g0; blue = b0;
        end
    end
endmodule
