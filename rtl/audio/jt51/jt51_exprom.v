

/* This file is part of JT51.

 
    JT51 program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    JT51 program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with JT51.  If not, see <http://www.gnu.org/licenses/>.

    Based on hardware measurements and Sauraen VHDL version of OPN/OPN2,
    which is based on die shots.

    Author: Jose Tejada Gomez. Twitter: @topapate
    Version: 1.0
    Date: 14-4-2017 

*/

module jt51_exprom
(
    input [4:0]         addr,
    input               clk,
    input               cen,
    output reg [44:0]   exp
);

    function automatic [44:0] exp_value(input [4:0] index);
        case (index)
        5'd0:  exp_value = 45'b111110101011010110001011010000010010111011011;
        5'd1:  exp_value = 45'b111101010011010101000011001100101110110101011;
        5'd2:  exp_value = 45'b111011111011010011110111001000110010101110011;
        5'd3:  exp_value = 45'b111010100101010010101111000100110010101000011;
        5'd4:  exp_value = 45'b111001001101010001100111000000110010100001011;
        5'd5:  exp_value = 45'b110111111011010000011110111101010010011011011;
        5'd6:  exp_value = 45'b110110100011001111010110111001010010010100100;
        5'd7:  exp_value = 45'b110101001011001110001110110101110010001110011;
        5'd8:  exp_value = 45'b110011111011001101000110110001110010001000011;
        5'd9:  exp_value = 45'b110010100011001011111110101110010010000010011;
        5'd10: exp_value = 45'b110001010011001010111010101010010001111011011;
        5'd11: exp_value = 45'b101111111011001001110010100110110001110101011;
        5'd12: exp_value = 45'b101110101011001000101010100011001101101111011;
        5'd13: exp_value = 45'b101101010101000111100110011111010001101001011;
        5'd14: exp_value = 45'b101100000011000110100010011011110001100011011;
        5'd15: exp_value = 45'b101010110011000101011110011000010001011101011;
        5'd16: exp_value = 45'b101001100011000100011010010100101101010111011;
        5'd17: exp_value = 45'b101000010011000011010010010001001101010001011;
        5'd18: exp_value = 45'b100111000011000010010010001101101101001011011;
        5'd19: exp_value = 45'b100101110011000001001110001010001101000101011;
        5'd20: exp_value = 45'b100100100011000000001010000110010000111111011;
        5'd21: exp_value = 45'b100011010010111111001010000011001100111001011;
        5'd22: exp_value = 45'b100010000010111110000101111111101100110011011;
        5'd23: exp_value = 45'b100000110010111101000001111100001100101101011;
        5'd24: exp_value = 45'b011111101010111100000001111000101100101000010;
        5'd25: exp_value = 45'b011110011010111011000001110101001100100010011;
        5'd26: exp_value = 45'b011101001010111010000001110001110000011100011;
        5'd27: exp_value = 45'b011100000010111001000001101110010000010110011;
        5'd28: exp_value = 45'b011010110010111000000001101011001100010001011;
        5'd29: exp_value = 45'b011001101010110111000001100111101100001011011;
        5'd30: exp_value = 45'b011000100000110110000001100100010000000110010;
        default: exp_value = 45'b010111010010110101000001100001001100000000011;
        endcase
    endfunction

    always @ (posedge clk) if(cen) begin
        exp <= exp_value(addr);
    end

endmodule
