`timescale 1ns/1ps
module tb_analog;
    logic clk=0,reset=1;
    always #5 clk=~clk;

    logic [8:0] sx=0,sy=0;
    logic [1:0] uaddr=0;
    logic [7:0] udout;
    s24_upd4701 upd(
        .clk(clk),.reset(reset),.spinner_x(sx),.spinner_y(sy),
        .addr(uaddr),.dout(udout));

    logic select=0,shift=0;
    logic [7:0] din=0;
    logic [7:0] adout;
    s24_msm6253 adc(
        .clk(clk),.reset(reset),.select(select),.shift(shift),.din(din),
        .an0(8'h12),.an1(8'h34),.an2(8'ha5),.an3(8'hff),.dout(adout));

    task automatic tick;
        @(posedge clk);#1;
    endtask

    initial begin
        tick;reset=0;tick;

        // MiSTer spinner event: +5, then -2. Counter wraps at 12 bits.
        sx={1'b1,8'h05};tick;
        if(udout!==8'h05)$fatal(1,"uPD4701 +delta mismatch: %02x",udout);
        sx={1'b0,8'hfe};tick;
        if(udout!==8'h03)$fatal(1,"uPD4701 -delta mismatch: %02x",udout);
        uaddr=1;#1;
        if(udout!==8'h00)$fatal(1,"uPD4701 high nibble mismatch: %02x",udout);

        // Select ADC channel 2 (0xa5), then verify MSB-first D7 shifting.
        din=8'h02;select=1;tick;select=0;#1;
        if(adout!==8'hff)$fatal(1,"MSM6253 bit7 mismatch: %02x",adout);
        shift=1;tick;shift=0;#1;
        if(adout!==8'h7f)$fatal(1,"MSM6253 bit6 mismatch: %02x",adout);
        shift=1;tick;shift=0;#1;
        if(adout!==8'hff)$fatal(1,"MSM6253 bit5 mismatch: %02x",adout);

        $display("PASS System 24 uPD4701 and MSM6253 source model");
        $finish;
    end
endmodule
