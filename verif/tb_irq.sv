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

        $display("PASS System 24 raster IRQ phase and one-line width");
        $finish;
    end
endmodule
