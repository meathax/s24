`timescale 1ns/1ps

module tb_irq;
    import s24_pkg::*;
    logic clk=0,reset=1,ce_8m=0,hsync_tick=0;
    logic [9:0] vcount=0;
    logic ym_irq=0,frc_irq=0,rd_a=0,rd_b=0,wr=0;
    logic [1:0] addr=0,be=2'b11;
    logic [15:0] din=0,dout;
    logic [2:0] ipl_a_n,ipl_b_n;
    always #5 clk=~clk;

    s24_irq dut(.*);

    task automatic write_irq(input [1:0] a,input [15:0] d);
        begin
            @(negedge clk);addr=a;din=d;wr=1;
            @(negedge clk);wr=0;
        end
    endtask
    task automatic line_wrap(input [9:0] old_line);
        begin
            @(negedge clk);vcount=old_line;hsync_tick=1;
            @(negedge clk);hsync_tick=0;#1;
        end
    endtask
    task automatic timer_tick_hsync;
        begin
            @(negedge clk);hsync_tick=1;
            @(negedge clk);hsync_tick=0;#1;
        end
    endtask
    task automatic read_irq_a(input [1:0] a);
        begin
            @(negedge clk);addr=a;rd_a=1;
            @(negedge clk);rd_a=0;#1;
        end
    endtask

    initial begin
        repeat(2) @(posedge clk);@(negedge clk);reset=0;
        write_irq(2,16'h0018); // CPU A: vblank + sprite

        line_wrap(10'd423); // entering line 0
        assert(ipl_a_n == ~3'd5) else $fatal(1,"sprite IRQ phase %b",ipl_a_n);
        line_wrap(10'd0);
        assert(ipl_a_n == 3'b111) else $fatal(1,"sprite IRQ width %b",ipl_a_n);

        line_wrap(10'd383); // entering line 384
        assert(ipl_a_n == ~3'd4) else $fatal(1,"vblank IRQ phase %b",ipl_a_n);
        line_wrap(10'd384);
        assert(ipl_a_n == 3'b111) else $fatal(1,"vblank IRQ width %b",ipl_a_n);

        // segas24.cpp:1114-1176: timer register 0 supplies the 12-bit reload,
        // mode 1 clocks on hsync, register 2 acknowledges CPU A only, and all
        // IRQ-controller reads return the live counter value.
        write_irq(0,16'h0ffe);
        write_irq(1,16'h0001);
        write_irq(2,16'h0004); // CPU A timer enable
        write_irq(3,16'h0004); // CPU B timer enable
        // MAME leaves m_irq_tval at its reset value when a stopped timer is
        // started; m_irq_tdata is only copied in by the overflow callback.
        // Advance the initial 0x000 phase to 0xfff before checking reload.
        repeat(12'hfff) timer_tick_hsync();
        if(dut.timer_value!==12'hfff) $fatal(1,"timer did not reach fff");
        timer_tick_hsync();
        if(dut.timer_value!==12'hffe || ipl_a_n!=~3'd3 || ipl_b_n!=~3'd3)
            $fatal(1,"timer reload/pending mismatch value=%h A=%b B=%b",
                   dut.timer_value,ipl_a_n,ipl_b_n);
        read_irq_a(2);
        if(ipl_a_n!=3'b111 || ipl_b_n!=~3'd3)
            $fatal(1,"CPU-specific timer acknowledge mismatch A=%b B=%b",
                   ipl_a_n,ipl_b_n);

        // Switching a running timer to mode 0 performs MAME's final one-count
        // synchronization step before stopping (irq_timer_start, case 0).
        write_irq(1,16'h0000);
        if(dut.timer_value!==12'hfff)
            $fatal(1,"running-to-stopped timer did not advance once");
        repeat(3) timer_tick_hsync();
        if(dut.timer_value!==12'hfff)
            $fatal(1,"mode-0 timer continued counting");

        $display("PASS System 24 raster IRQ phase, timer reload and per-CPU ack");
        $finish;
    end
endmodule
