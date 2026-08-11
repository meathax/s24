`timescale 1ns/1ps

// Digital model of the YM3012's mantissa/exponent reconstruction boundary.
//
// The YM2151 serial word contains three unused leading bits, followed by a
// signed 10-bit mantissa and a 3-bit exponent.  The analogue chip's digital
// section reconstructs that word before its sample/hold and op-amp stages.
// This module models that digital boundary; the FPGA's audio output remains a
// signed PCM representation and does not claim to reproduce the cabinet's
// analogue filter or amplifier response.
module s24_ym3012 (
    input  logic signed [15:0] linear_left,
    input  logic signed [15:0] linear_right,
    output logic signed [15:0] audio_left,
    output logic signed [15:0] audio_right
);
    logic [9:0] left_mantissa, right_mantissa;
    logic [2:0] left_exponent, right_exponent;

    function automatic [12:0] encode(input logic signed [15:0] value);
        logic [9:0] mantissa;
        logic [2:0] exponent;
        begin
            casez (value[15:9])
                7'b10?????: begin mantissa=value[15:6]; exponent=3'd7; end
                7'b110????: begin mantissa=value[14:5]; exponent=3'd6; end
                7'b1110???: begin mantissa=value[13:4]; exponent=3'd5; end
                7'b11110??: begin mantissa=value[12:3]; exponent=3'd4; end
                7'b111110?: begin mantissa=value[11:2]; exponent=3'd3; end
                7'b1111110: begin mantissa=value[10:1]; exponent=3'd2; end
                7'b1111111: begin mantissa=value[9:0];  exponent=3'd1; end
                7'b01?????: begin mantissa=value[15:6]; exponent=3'd7; end
                7'b001????: begin mantissa=value[14:5]; exponent=3'd6; end
                7'b0001???: begin mantissa=value[13:4]; exponent=3'd5; end
                7'b00001??: begin mantissa=value[12:3]; exponent=3'd4; end
                7'b000001?: begin mantissa=value[11:2]; exponent=3'd3; end
                7'b0000001: begin mantissa=value[10:1]; exponent=3'd2; end
                7'b0000000: begin mantissa=value[9:0];  exponent=3'd1; end
                default:    begin mantissa=value[9:0];   exponent=3'd1; end
            endcase
            encode={exponent,mantissa};
        end
    endfunction

    function automatic logic signed [15:0] decode(
        input logic [9:0] mantissa,
        input logic [2:0] exponent
    );
        case (exponent)
            3'd7: decode={mantissa,6'b0};
            3'd6: decode={{1{mantissa[9]}},mantissa,5'b0};
            3'd5: decode={{2{mantissa[9]}},mantissa,4'b0};
            3'd4: decode={{3{mantissa[9]}},mantissa,3'b0};
            3'd3: decode={{4{mantissa[9]}},mantissa,2'b0};
            3'd2: decode={{5{mantissa[9]}},mantissa,1'b0};
            3'd1: decode={{6{mantissa[9]}},mantissa};
            default: decode=16'sd0;
        endcase
    endfunction

    always_comb begin
        {left_exponent,left_mantissa}=encode(linear_left);
        {right_exponent,right_mantissa}=encode(linear_right);
        audio_left=decode(left_mantissa,left_exponent);
        audio_right=decode(right_mantissa,right_exponent);
    end
endmodule

// Production boundary: YM3012 presents a sample-and-hold output between
// serial sample boundaries.  JT51's `sample` pulse is the corresponding
// frame boundary in this core.  Keeping this as a separate wrapper preserves
// the combinational quantizer above for table-driven verification while
// preventing the FPGA audio pin from following JT51's internal accumulator
// between samples.
module s24_ym3012_sample_hold (
    input  logic               clk,
    input  logic               reset,
    input  logic               sample,
    input  logic signed [15:0] linear_left,
    input  logic signed [15:0] linear_right,
    output logic signed [15:0] audio_left,
    output logic signed [15:0] audio_right
);
    logic signed [15:0] quantized_left, quantized_right;

    s24_ym3012 quantizer(
        .linear_left(linear_left),.linear_right(linear_right),
        .audio_left(quantized_left),.audio_right(quantized_right));

    always_ff @(posedge clk) begin
        if (reset) begin
            audio_left  <= 16'sd0;
            audio_right <= 16'sd0;
        end else if (sample) begin
            audio_left  <= quantized_left;
            audio_right <= quantized_right;
        end
    end
endmodule
