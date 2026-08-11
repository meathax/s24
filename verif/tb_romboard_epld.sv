`timescale 1ns/1ps

module tb_romboard_epld;
    logic clk=0, reset=1, phi1=0;
    logic mode_write=0, mode_data=0;
    logic mode;
    logic [7:0] count;
    logic int3_n;
    logic irq_tick;
    integer irq_count=0;

    always #5 clk=~clk;

    s24_romboard_epld dut(
        .clk(clk),.reset(reset),.phi1(phi1),
        .mode_write(mode_write),.mode_data(mode_data),
        .mode(mode),.count(count),.int3_n(int3_n),.irq_tick(irq_tick));

    task automatic phi_pulse;
        begin
            @(negedge clk); phi1=1'b1;
            @(negedge clk); phi1=1'b0;
            #1;
            if(irq_tick) irq_count=irq_count+1;
        end
    endtask

    task automatic set_mode(input logic value);
        begin
            @(negedge clk); mode_data=value; mode_write=1'b1;
            @(negedge clk); mode_write=1'b0; mode_data=1'b0;
            #1;
        end
    endtask

    initial begin
        repeat(3) @(posedge clk);
        reset=0;

        // 625 kHz visible counter: one increment per sixteen 10 MHz phi1
        // events, with the documented modulo-256 mode-zero wrap.
        repeat(15) phi_pulse();
        if(count!==8'h00) $fatal(1,"mode-0 count advanced early: %02x",count);
        phi_pulse();
        if(count!==8'h01) $fatal(1,"mode-0 /16 count mismatch: %02x",count);
        repeat(254*16) phi_pulse();
        if(count!==8'hff) $fatal(1,"mode-0 modulo-256 mismatch: %02x",count);
        repeat(16) phi_pulse();
        if(count!==8'h00) $fatal(1,"mode-0 wrap mismatch: %02x",count);

        // A MODE write resets the counter and phase.  Mode one wraps after
        // 0x66, i.e. 103 visible states, while the second 74HC4040 output
        // produces one interrupt tick every 1024 phi1 events.
        set_mode(1'b1);
        if(!mode || count!==8'h00) $fatal(1,"mode write reset mismatch mode=%b count=%02x",mode,count);
        if(int3_n) $fatal(1,"mode-1 INT3# not asserted");
        repeat(102*16) phi_pulse();
        if(count!==8'h66) $fatal(1,"mode-1 modulo-103 pre-wrap mismatch: %02x",count);
        repeat(16) phi_pulse();
        if(count!==8'h00) $fatal(1,"mode-1 wrap mismatch: %02x",count);

        set_mode(1'b0);
        if(!int3_n) $fatal(1,"mode-0 INT3# not released");

        if(irq_count!=((254*16+16+102*16+16)/1024))
            $fatal(1,"unexpected interrupt divider count: %0d",irq_count);
        $display("PASS EPM5032 625 kHz counter, modulo-256/103 modes, reset phase, INT3# level, and /1024 FRC event");
        $finish;
    end
endmodule
