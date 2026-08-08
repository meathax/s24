`timescale 1ns/1ps

// Focused YM2151 timer regression.  A counter reaching overflow while the
// timer is not being loaded is not itself a status event; the upstream JT51
// implementation asserts the sticky flag only on the qualified load event.
module tb_jt51_timers;
    logic clk=0, rst=1, cen=1, zero=1, load=0, clr_flag=0;
    logic [2:0] start_value=3'd6;
    logic flag, overflow;

    always #5 clk=~clk;

    jt51_timer #(.CW(3)) dut(
        .rst(rst), .clk(clk), .cen(cen), .zero(zero),
        .start_value(start_value), .load(load),
        .clr_flag(clr_flag), .flag(flag), .overflow(overflow));

    task automatic tick;
        @(posedge clk);
        #1;
    endtask

    initial begin
        repeat(2) tick();
        rst=0;

        // Establish a known load edge, then reach the terminal count.
        load=0; tick();
        load=1; tick(); // cnt=6
        load=1; tick(); // cnt=7
        if(!overflow || flag)
            $fatal(1,"timer overflow precondition wrong overflow=%b flag=%b",overflow,flag);

        // Overflow while load is low must reload the counter but not assert
        // the status flag.  The old local implementation failed here.
        load=0; tick();
        if(flag)
            $fatal(1,"timer flag asserted without a qualified load event");

        // A subsequent qualified overflow must set the sticky flag.
        load=1; tick(); // cnt=6
        load=1; tick(); // cnt=7
        load=1; tick(); // qualified overflow
        if(!flag)
            $fatal(1,"timer flag did not assert on qualified overflow");

        clr_flag=1; tick();
        clr_flag=0;
        if(flag)
            $fatal(1,"timer flag did not clear");

        $display("PASS JT51 timer overflow qualification and sticky flag");
        $finish;
    end
endmodule
