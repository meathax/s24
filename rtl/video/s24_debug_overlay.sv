//============================================================================
//  Sega System 24 for MiSTer -- hardware debug overlay
//
//  Draws a tiny fixed 8x8-per-glyph hex readout in the top-left corner of
//  the active display: two selector digits (sel is 5 bits, 0x00-0x1F, but
//  only ever needs the low nibble plus a lone bit 4 -- shown as two hex
//  digits for a uniform glyph grid), a colon, then six value digits (a
//  zero-padded 24-bit value). Purely combinational on hcount/vcount, so it
//  costs no extra pipeline latency and needs no framebuffer of its own --
//  every pixel is computed directly from its screen position.
//
//  This exists because this session's two open hardware bugs (SDRAM burst
//  corruption on sprites, Gain Ground's reset loop) are both confirmed
//  hardware-only: Verilator cannot reproduce either one, since it models no
//  SDRAM pad/routing timing and this design has no software-visible fault
//  state to trace otherwise. This is real visibility on real silicon with
//  no host connection or SignalTap needed -- s24_core.sv wires the actual
//  counters and the OSD selector into this module.
//============================================================================

module s24_debug_overlay (
    input  logic [9:0]  hcount,
    input  logic [9:0]  vcount,
    input  logic [4:0]  sel,
    input  logic [23:0] value,
    output logic        overlay_on,
    output logic        overlay_lit
);

    localparam int X0 = 10'd4;
    localparam int Y0 = 10'd4;
    localparam int CHAR_W = 8;
    localparam int CHAR_H = 8;
    localparam int N_CHARS = 9;   // 2 sel digits, ':', 6 value digits

    // 8x8 1bpp glyphs for hex digits 0-9/A-F plus ':'. Row 0 is the top
    // row; each byte's MSB is the leftmost pixel.
    function automatic logic [7:0] font_row(input logic [4:0] glyph,
                                             input logic [2:0] row);
        case(glyph)
            5'h0: case(row) // 0
                3'd0:font_row=8'b01111100; 3'd1:font_row=8'b11000110;
                3'd2:font_row=8'b11001110; 3'd3:font_row=8'b11010110;
                3'd4:font_row=8'b11100110; 3'd5:font_row=8'b11000110;
                3'd6:font_row=8'b01111100; default:font_row=8'b00000000;
            endcase
            5'h1: case(row) // 1
                3'd0:font_row=8'b00110000; 3'd1:font_row=8'b01110000;
                3'd2:font_row=8'b00110000; 3'd3:font_row=8'b00110000;
                3'd4:font_row=8'b00110000; 3'd5:font_row=8'b00110000;
                3'd6:font_row=8'b11111100; default:font_row=8'b00000000;
            endcase
            5'h2: case(row) // 2
                3'd0:font_row=8'b01111000; 3'd1:font_row=8'b11001100;
                3'd2:font_row=8'b00001100; 3'd3:font_row=8'b00011000;
                3'd4:font_row=8'b00110000; 3'd5:font_row=8'b01100000;
                3'd6:font_row=8'b11111100; default:font_row=8'b00000000;
            endcase
            5'h3: case(row) // 3
                3'd0:font_row=8'b01111000; 3'd1:font_row=8'b11001100;
                3'd2:font_row=8'b00001100; 3'd3:font_row=8'b00111000;
                3'd4:font_row=8'b00001100; 3'd5:font_row=8'b11001100;
                3'd6:font_row=8'b01111000; default:font_row=8'b00000000;
            endcase
            5'h4: case(row) // 4
                3'd0:font_row=8'b00011000; 3'd1:font_row=8'b00111000;
                3'd2:font_row=8'b01111000; 3'd3:font_row=8'b11011000;
                3'd4:font_row=8'b11111100; 3'd5:font_row=8'b00011000;
                3'd6:font_row=8'b00011000; default:font_row=8'b00000000;
            endcase
            5'h5: case(row) // 5
                3'd0:font_row=8'b11111100; 3'd1:font_row=8'b11000000;
                3'd2:font_row=8'b11111000; 3'd3:font_row=8'b00001100;
                3'd4:font_row=8'b00001100; 3'd5:font_row=8'b11001100;
                3'd6:font_row=8'b01111000; default:font_row=8'b00000000;
            endcase
            5'h6: case(row) // 6
                3'd0:font_row=8'b00111000; 3'd1:font_row=8'b01100000;
                3'd2:font_row=8'b11000000; 3'd3:font_row=8'b11111000;
                3'd4:font_row=8'b11001100; 3'd5:font_row=8'b11001100;
                3'd6:font_row=8'b01111000; default:font_row=8'b00000000;
            endcase
            5'h7: case(row) // 7
                3'd0:font_row=8'b11111100; 3'd1:font_row=8'b00001100;
                3'd2:font_row=8'b00011000; 3'd3:font_row=8'b00110000;
                3'd4:font_row=8'b00110000; 3'd5:font_row=8'b00110000;
                3'd6:font_row=8'b00110000; default:font_row=8'b00000000;
            endcase
            5'h8: case(row) // 8
                3'd0:font_row=8'b01111000; 3'd1:font_row=8'b11001100;
                3'd2:font_row=8'b11001100; 3'd3:font_row=8'b01111000;
                3'd4:font_row=8'b11001100; 3'd5:font_row=8'b11001100;
                3'd6:font_row=8'b01111000; default:font_row=8'b00000000;
            endcase
            5'h9: case(row) // 9
                3'd0:font_row=8'b01111000; 3'd1:font_row=8'b11001100;
                3'd2:font_row=8'b11001100; 3'd3:font_row=8'b01111100;
                3'd4:font_row=8'b00001100; 3'd5:font_row=8'b00011000;
                3'd6:font_row=8'b01110000; default:font_row=8'b00000000;
            endcase
            5'hA: case(row) // A
                3'd0:font_row=8'b00110000; 3'd1:font_row=8'b01111000;
                3'd2:font_row=8'b11001100; 3'd3:font_row=8'b11001100;
                3'd4:font_row=8'b11111100; 3'd5:font_row=8'b11001100;
                3'd6:font_row=8'b11001100; default:font_row=8'b00000000;
            endcase
            5'hB: case(row) // B
                3'd0:font_row=8'b11111000; 3'd1:font_row=8'b11001100;
                3'd2:font_row=8'b11001100; 3'd3:font_row=8'b11111000;
                3'd4:font_row=8'b11001100; 3'd5:font_row=8'b11001100;
                3'd6:font_row=8'b11111000; default:font_row=8'b00000000;
            endcase
            5'hC: case(row) // C
                3'd0:font_row=8'b01111100; 3'd1:font_row=8'b11000000;
                3'd2:font_row=8'b11000000; 3'd3:font_row=8'b11000000;
                3'd4:font_row=8'b11000000; 3'd5:font_row=8'b11000000;
                3'd6:font_row=8'b01111100; default:font_row=8'b00000000;
            endcase
            5'hD: case(row) // D
                3'd0:font_row=8'b11111000; 3'd1:font_row=8'b11001100;
                3'd2:font_row=8'b11001100; 3'd3:font_row=8'b11001100;
                3'd4:font_row=8'b11001100; 3'd5:font_row=8'b11001100;
                3'd6:font_row=8'b11111000; default:font_row=8'b00000000;
            endcase
            5'hE: case(row) // E
                3'd0:font_row=8'b11111100; 3'd1:font_row=8'b11000000;
                3'd2:font_row=8'b11000000; 3'd3:font_row=8'b11111000;
                3'd4:font_row=8'b11000000; 3'd5:font_row=8'b11000000;
                3'd6:font_row=8'b11111100; default:font_row=8'b00000000;
            endcase
            5'hF: case(row) // F
                3'd0:font_row=8'b11111100; 3'd1:font_row=8'b11000000;
                3'd2:font_row=8'b11000000; 3'd3:font_row=8'b11111000;
                3'd4:font_row=8'b11000000; 3'd5:font_row=8'b11000000;
                3'd6:font_row=8'b11000000; default:font_row=8'b00000000;
            endcase
            default: case(row) // ':' (glyph 5'h10)
                3'd1:font_row=8'b00110000; 3'd2:font_row=8'b00110000;
                3'd4:font_row=8'b00110000; 3'd5:font_row=8'b00110000;
                default:font_row=8'b00000000;
            endcase
        endcase
    endfunction

    logic [9:0] rel_x,rel_y;
    logic [3:0] char_index;
    logic [2:0] col_in_char,row_in_char;
    logic [4:0] glyph;
    logic [7:0] glyph_row_bits;

    always_comb begin
        rel_x = hcount - X0[9:0];
        rel_y = vcount - Y0[9:0];
        overlay_on = (hcount>=X0[9:0]) && (vcount>=Y0[9:0]) &&
                     (rel_x < N_CHARS*CHAR_W) && (rel_y < CHAR_H);
        char_index = rel_x[6:3];
        col_in_char = rel_x[2:0];
        row_in_char = rel_y[2:0];
        case(char_index)
            4'd0: glyph = {4'b0,sel[4]};                 // selector digit hi
            4'd1: glyph = {1'b0,sel[3:0]};                // selector digit lo
            4'd2: glyph = 5'h10;                         // ':'
            4'd3: glyph = {1'b0,value[23:20]};
            4'd4: glyph = {1'b0,value[19:16]};
            4'd5: glyph = {1'b0,value[15:12]};
            4'd6: glyph = {1'b0,value[11:8]};
            4'd7: glyph = {1'b0,value[7:4]};
            default: glyph = {1'b0,value[3:0]};          // char_index==8
        endcase
        glyph_row_bits = font_row(glyph,row_in_char);
        overlay_lit = overlay_on && glyph_row_bits[3'd7-col_in_char];
    end

endmodule
