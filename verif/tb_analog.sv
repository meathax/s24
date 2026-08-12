`timescale 1ns/1ps
import s24_pkg::*;
module tb_analog;
    logic clk=0,reset=1;
    integer i;
    logic saved_toggle;
    always #5 clk=~clk;

    logic [8:0] sx=0,sy=0;
    logic [1:0] uaddr=0;
    logic uread=0;
    logic [7:0] udout;
    s24_upd4701 upd(
        .clk(clk),.reset(reset),.spinner_x(sx),.spinner_y(sy),
        .addr(uaddr),.read(uread),.dout(udout));

    logic select=0,shift=0;
    logic [7:0] din=0;
    logic [7:0] adout;
    s24_msm6253 adc(
        .clk(clk),.reset(reset),.select(select),.shift(shift),.din(din),
        .an0(8'h12),.an1(8'h34),.an2(8'ha5),.an3(8'hff),.dout(adout));
    logic wheel_tick=0;
    logic signed [7:0] stick_x=0;
    logic [2:0] speed_code=0;
    logic [1:0] response_code=0;
    logic digital_left=0,digital_right=0;
    logic [1:0] analogue_profile=ANALOGUE_STANDARD;
    logic stick_enable=1;
    logic [8:0] wheel_spinner=0,wheel_out;
    logic hotrod_io=0;
    logic [3:0] pedal_button1=0;
    logic [7:0] pedal_in0=8'h12,pedal_in1=8'h34;
    logic [7:0] pedal_in2=8'h56,pedal_in3=8'h78;
    logic [7:0] pedal_out0,pedal_out1,pedal_out2,pedal_out3;
    s24_wheel_input wheel(
        .clk(clk),.reset(reset),.tick(wheel_tick),.stick_enable(stick_enable),
        .stick_x(stick_x),.speed_code(speed_code),
        .response_code(response_code),
        .analogue_profile(analogue_profile),
        .digital_left(digital_left),.digital_right(digital_right),
        .spinner_in(wheel_spinner),.spinner_out(wheel_out));
    s24_pedal_merge pedal_merge(
        .hotrod_io(hotrod_io),.button1(pedal_button1),
        .paddle0(pedal_in0),.paddle1(pedal_in1),
        .paddle2(pedal_in2),.paddle3(pedal_in3),
        .pedal0(pedal_out0),.pedal1(pedal_out1),
        .pedal2(pedal_out2),.pedal3(pedal_out3));

    task automatic tick;
        @(posedge clk);#1;
    endtask

    task automatic collect_wheel(
        input integer ticks,
        output integer total
    );
        logic old_toggle;
        begin
            total=0;
            repeat(ticks) begin
                old_toggle=wheel_out[8];
                wheel_tick=1;tick;wheel_tick=0;tick;
                if(wheel_out[8]!==old_toggle)
                    total=total+{24'd0,wheel_out[7:0]};
            end
        end
    endtask

    task automatic wheel_event(
        input logic expect_event,
        input logic [7:0] expect_delta
    );
        logic old_toggle;
        begin
            old_toggle=wheel_out[8];
            wheel_tick=1;tick;wheel_tick=0;tick;
            if(expect_event) begin
                if(wheel_out[8]===old_toggle || wheel_out[7:0]!==expect_delta)
                    $fatal(1,"wheel event mismatch toggle=%b->%b delta=%02x expected=%02x",
                           old_toggle,wheel_out[8],wheel_out[7:0],expect_delta);
            end else if(wheel_out[8]!==old_toggle) begin
                $fatal(1,"unexpected wheel event delta=%02x",wheel_out[7:0]);
            end
        end
    endtask

    initial begin
        tick;reset=0;tick;

        // MiSTer spinner event: +5, then -2. Counter wraps at 12 bits.
        sx={1'b1,8'h05};tick;
        uread=1;tick;uread=0;#1;
        if(udout!==8'h05)$fatal(1,"uPD4701 +delta mismatch: %02x",udout);
        sx={1'b0,8'hfe};tick;
        // Motion after the low-byte read must not change the high byte from
        // that same µPD4701A snapshot.
        uaddr=1;#1;
        if(udout!==8'h00)$fatal(1,"uPD4701 latched high nibble mismatch: %02x",udout);
        uaddr=0;uread=1;tick;uread=0;#1;
        if(udout!==8'h03)$fatal(1,"uPD4701 -delta mismatch: %02x",udout);
        sx={1'b1,8'h04};tick;
        uaddr=1;#1;
        if(udout!==8'h00)$fatal(1,"uPD4701 high byte moved with no read latch: %02x",udout);

        // Native MiSTer spinner events pass through unchanged, independently
        // of the synthetic left-stick source.
        saved_toggle=wheel_out[8];wheel_spinner={1'b1,8'd6};tick;
        if(wheel_out[8]===saved_toggle || wheel_out[7:0]!==8'd6)
            $fatal(1,"native spinner positive delta mismatch: %02x",wheel_out[7:0]);
        saved_toggle=wheel_out[8];wheel_spinner={1'b0,8'hfd};tick;
        if(wheel_out[8]===saved_toggle || wheel_out[7:0]!==8'hfd)
            $fatal(1,"native spinner negative delta mismatch: %02x",wheel_out[7:0]);

        // Button 1 overrides only its own Hot Rod pedal channel. All four
        // channels remain native paddle values outside the Hot Rod profile.
        hotrod_io=1;pedal_button1=4'b1111;#1;
        if({pedal_out3,pedal_out2,pedal_out1,pedal_out0}!==32'hffff_ffff)
            $fatal(1,"Hot Rod pedal Button 1 full-scale merge mismatch");
        pedal_button1=4'b0101;#1;
        if({pedal_out3,pedal_out2,pedal_out1,pedal_out0}!==32'h78ff_34ff)
            $fatal(1,"Hot Rod per-player pedal merge mismatch");
        hotrod_io=0;pedal_button1=4'b1111;#1;
        if({pedal_out3,pedal_out2,pedal_out1,pedal_out0}!==32'h7856_3412)
            $fatal(1,"non-Hot Rod pedal mapping changed by Button 1");

        // Select ADC channel 2 (0xa5), then verify MSB-first D7 shifting.
        din=8'h02;select=1;tick;select=0;#1;
        if(adout!==8'h80)$fatal(1,"MSM6253 bit7 mismatch: %02x",adout);
        shift=1;tick;shift=0;#1;
        if(adout!==8'h00)$fatal(1,"MSM6253 bit6 mismatch: %02x",adout);
        shift=1;tick;shift=0;#1;
        if(adout!==8'h80)$fatal(1,"MSM6253 bit5 mismatch: %02x",adout);

        // Hot Rod D-pad steering produces a balanced +/-7-count event. The
        // event toggle is merged on the clock after the frame-rate tick.
        digital_left=1;wheel_event(1'b1,8'hf9);
        digital_left=0;digital_right=1;wheel_event(1'b1,8'h07);

        // Hot Rod's entry deadzone rejects normal centre jitter. Crossing the
        // threshold emits a fine one-count event; returning through the lower
        // exit threshold stops without toggle chatter.
        digital_right=0;stick_x=8'sd11;
        wheel_event(1'b0,8'h00);
        stick_x=8'sd12;
        wheel_event(1'b1,8'd1);
        stick_x=8'sd8;
        wheel_event(1'b0,8'h00);

        // Opposing directions cancel rather than forwarding the stick.
        digital_left=1;digital_right=1;stick_x=8'sd127;
        wheel_event(1'b0,8'h00);

        // Hot Rod retains its quadratic curve with the requested lower
        // full-scale ceiling of 13 counts.
        digital_left=0;digital_right=0;stick_x=8'sd127;
        wheel_event(1'b1,8'd13);

        // Representative reachable bases prove the exact mapping: values up
        // to five are unchanged, while larger values lose exactly one.
        stick_x=8'sd64;#1;
        if(wheel.speed_base!=6'd4 || wheel.speed_mag!=8'd4)
            $fatal(1,"Hot Rod low-curve mapping base=%0d speed=%0d",
                   wheel.speed_base,wheel.speed_mag);
        wheel_event(1'b1,8'd4);
        stick_x=8'sd98;#1;
        if(wheel.speed_base!=6'd9 || wheel.speed_mag!=8'd8)
            $fatal(1,"Hot Rod mid-curve mapping base=%0d speed=%0d",
                   wheel.speed_base,wheel.speed_mag);
        wheel_event(1'b1,8'd8);

        // Rough Racer keeps its fractional quadratic fine control at half
        // rate: full travel alternates 2/3 counts and totals 10 over 4 ticks.
        analogue_profile=ANALOGUE_STANDARD;stick_x=0;wheel_event(1'b0,8'h00);
        analogue_profile=ANALOGUE_ROUGHRAC;stick_x=8'sd127;tick;
        wheel_event(1'b1,8'd2);wheel_event(1'b1,8'd3);
        wheel_event(1'b1,8'd2);wheel_event(1'b1,8'd3);

        // A representative odd old-Q8 rate (261) must retain its half count
        // through Q9 carry: no event, +1, no event, +1 over four ticks.
        analogue_profile=ANALOGUE_STANDARD;stick_x=0;wheel_event(1'b0,8'h00);
        analogue_profile=ANALOGUE_ROUGHRAC;stick_x=8'sd64;tick;
        if(wheel.rough_rate!=11'd261)
            $fatal(1,"Rough Racer intermediate old-Q8 rate=%0d",wheel.rough_rate);
        wheel_event(1'b0,8'h00);wheel_event(1'b1,8'd1);
        wheel_event(1'b0,8'h00);wheel_event(1'b1,8'd1);

        stick_x=0;digital_left=1;wheel_event(1'b1,8'hfc);
        digital_left=0;digital_right=1;wheel_event(1'b1,8'd4);
        digital_left=1;stick_x=8'sd127;wheel_event(1'b0,8'h00);
        digital_left=0;digital_right=0;

        // Default 100%/Normal has already proven the legacy 13-count Hot Rod
        // and 2,3,2,3 Rough Racer sequences above. Check every visible speed
        // factor at full travel; a setting-change tick clears the remainder.
        analogue_profile=ANALOGUE_STANDARD;stick_x=8'sd127;response_code=0;
        speed_code=7;wheel_event(1'b0,8'h00);
        for(int code=0;code<7;code++) begin
            speed_code=code[2:0];wheel_event(1'b0,8'h00);
            collect_wheel(4,i);
            case(code)
                0: if(i!=52) $fatal(1,"Hot Rod 100%% aggregate %0d",i);
                1: if(i!=13) $fatal(1,"Hot Rod 25%% aggregate %0d",i);
                2: if(i!=26) $fatal(1,"Hot Rod 50%% aggregate %0d",i);
                3: if(i!=39) $fatal(1,"Hot Rod 75%% aggregate %0d",i);
                4: if(i!=65) $fatal(1,"Hot Rod 125%% aggregate %0d",i);
                5: if(i!=78) $fatal(1,"Hot Rod 150%% aggregate %0d",i);
                6: if(i!=91) $fatal(1,"Hot Rod 175%% aggregate %0d",i);
            endcase
        end
        speed_code=7;wheel_event(1'b0,8'h00);collect_wheel(4,i);
        if(i!=52) $fatal(1,"Hot Rod reserved speed did not default to 100%%: %0d",i);

        analogue_profile=ANALOGUE_ROUGHRAC;stick_x=8'sd127;tick;
        for(int code=0;code<7;code++) begin
            speed_code=code[2:0];wheel_event(1'b0,8'h00);
            collect_wheel(8,i);
            case(code)
                0: if(i!=20) $fatal(1,"Rough Racer 100%% aggregate %0d",i);
                1: if(i!=5)  $fatal(1,"Rough Racer 25%% aggregate %0d",i);
                2: if(i!=10) $fatal(1,"Rough Racer 50%% aggregate %0d",i);
                3: if(i!=15) $fatal(1,"Rough Racer 75%% aggregate %0d",i);
                4: if(i!=25) $fatal(1,"Rough Racer 125%% aggregate %0d",i);
                5: if(i!=30) $fatal(1,"Rough Racer 150%% aggregate %0d",i);
                6: if(i!=35) $fatal(1,"Rough Racer 175%% aggregate %0d",i);
            endcase
        end
        speed_code=7;wheel_event(1'b0,8'h00);collect_wheel(8,i);
        if(i!=20) $fatal(1,"Rough reserved speed did not default to 100%%: %0d",i);

        // Response changes shape only below the endpoint cap.
        analogue_profile=ANALOGUE_STANDARD;speed_code=0;stick_x=8'sd98;
        response_code=1;wheel_event(1'b0,8'h00);
        i={24'd0,wheel.speed_mag};
        response_code=0;wheel_event(1'b0,8'h00);
        if(!(i<wheel.speed_mag)) $fatal(1,"Fine response not below Normal");
        i={24'd0,wheel.speed_mag};
        response_code=2;wheel_event(1'b0,8'h00);
        if(!(i<wheel.speed_mag)) $fatal(1,"Fast response not above Normal");
        response_code=3;wheel_event(1'b0,8'h00);
        if(wheel.response_select!=0) $fatal(1,"reserved response not Normal");
        for(int response=0;response<3;response++) begin
            response_code=response[1:0];wheel_event(1'b0,8'h00);
            stick_x=8'sd127;#1;
            if(wheel.speed_mag!=8'd13)
                $fatal(1,"response endpoint cap mismatch response=%0d speed=%0d",
                       response,wheel.speed_mag);
            stick_x=8'sd98;
        end

        // A setting change discards a nonzero fractional remainder.
        response_code=0;speed_code=1;stick_x=8'sd127;
        wheel_event(1'b0,8'h00);wheel_event(1'b1,8'd3);
        speed_code=2;wheel_event(1'b0,8'h00);wheel_event(1'b1,8'd6);

        // Disabling the synthetic source must not block a native spinner.
        stick_enable=0;saved_toggle=wheel_out[8];wheel_spinner={1'b1,8'd2};tick;
        if(wheel_out[8]===saved_toggle || wheel_out[7:0]!==8'd2)
            $fatal(1,"native spinner was blocked with stick source disabled");

        $display("PASS System 24 analog devices and D-pad wheel steering");
        $finish;
    end
endmodule
