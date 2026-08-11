`timescale 1ns/1ps

module tb_ym3012;
    logic signed [15:0] linear_left,linear_right;
    logic signed [15:0] audio_left,audio_right;

    s24_ym3012 dut(
        .linear_left(linear_left),.linear_right(linear_right),
        .audio_left(audio_left),.audio_right(audio_right));

    task automatic check(input logic signed [15:0] value_left,
                         input logic signed [15:0] value_right,
                         input logic signed [15:0] expected_left,
                         input logic signed [15:0] expected_right);
        begin
            linear_left=value_left;
            linear_right=value_right;
            #1;
            if (audio_left !== expected_left || audio_right !== expected_right)
                $fatal(1,"YM3012 %04h -> %04h/%04h expected %04h/%04h",
                       value_left,audio_left,audio_right,
                       expected_left,expected_right);
        end
    endtask

    initial begin
        check(16'sh0000,16'sh0000,16'sh0000,16'sh0000);
        check(16'sh0123,-16'sh0123,16'sh0123,-16'sh0123);
        check(16'sh1234,-16'sh1234,16'sh1230,-16'sh1240);
        check(16'sh7fff,-16'sh7fff,16'sh7fc0,-16'sh8000);
        check(-16'sh8000,16'sh7fff,-16'sh8000,16'sh7fc0);
        $display("PASS YM3012 10-bit mantissa/3-bit exponent reconstruction");
        $finish;
    end
endmodule
