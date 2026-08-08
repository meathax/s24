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
    logic wheel_tick=0;
    logic signed [7:0] stick_x=0;
    logic digital_left=0,digital_right=0;
    logic [1:0] analogue_profile=ANALOGUE_STANDARD;
    logic [8:0] wheel_spinner=0,wheel_out;
    s24_wheel_input wheel(
        .clk(clk),.reset(reset),.tick(wheel_tick),.stick_x(stick_x),
        .analogue_profile(analogue_profile),
        .digital_left(digital_left),.digital_right(digital_right),
        .spinner_in(wheel_spinner),.spinner_out(wheel_out));

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
        if(adout!==8'h80)$fatal(1,"MSM6253 bit7 mismatch: %02x",adout);
        shift=1;tick;shift=0;#1;
        if(adout!==8'h00)$fatal(1,"MSM6253 bit6 mismatch: %02x",adout);
        shift=1;tick;shift=0;#1;
        if(adout!==8'h80)$fatal(1,"MSM6253 bit5 mismatch: %02x",adout);

        // D-pad steering produces a balanced +/-8-count wheel event. The
        // event toggle is merged on the clock after the frame-rate tick.
        digital_left=1;wheel_tick=1;tick;wheel_tick=0;tick;
        if(wheel_out[7:0]!==8'hf8)
            $fatal(1,"digital left wheel delta mismatch: %02x",wheel_out[7:0]);
        digital_left=0;digital_right=1;wheel_tick=1;tick;wheel_tick=0;tick;
        if(wheel_out[7:0]!==8'h08)
            $fatal(1,"digital right wheel delta mismatch: %02x",wheel_out[7:0]);

        // Opposing directions cancel rather than forwarding the stick.
        digital_left=1;stick_x=8'sd127;
        wheel_tick=1;tick;wheel_tick=0;tick;
        if(wheel_out[7:0]!==8'h08)
            $fatal(1,"opposing digital directions did not cancel");

        // Hot Rod retains its quadratic curve with the requested lower
        // full-scale ceiling (14 counts versus the former 16).
        digital_left=0;digital_right=0;stick_x=8'sd127;
        wheel_tick=1;tick;wheel_tick=0;tick;
        if(wheel_out[7:0]!==8'd14)
            $fatal(1,"Hot Rod full-scale delta mismatch: %02x",wheel_out[7:0]);

        // Rough Racer keeps its fractional quadratic fine control but now
        // reaches five counts per frame at full travel.
        analogue_profile=ANALOGUE_ROUGHRAC;
        wheel_tick=1;tick;wheel_tick=0;tick;
        if(wheel_out[7:0]!==8'd5)
            $fatal(1,"Rough Racer full-scale delta mismatch: %02x",wheel_out[7:0]);

        $display("PASS System 24 analog devices and D-pad wheel steering");
        $finish;
    end
endmodule
