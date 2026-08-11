`timescale 1ns/1ps

module tb_io_5296;
    logic clk=0,reset=1,ce_16m=1,rd=0,wr=0;
    logic [5:0] addr=0;
    logic [7:0] din=0,dout;
    logic [63:0] port_in=64'h8877665544332211;
    logic [63:0] port_out,port_write_data;
    logic [7:0] port_dir,port_write;
    logic [2:0] cnt;
    logic cnt2_clock,ckot_clock;
    logic [2:0] mahjong_line;
    always #5 clk=~clk;
    s24_io_5296 dut(.*);
    s24_mahjong_mux mux(
        .clk(clk),.reset(reset),.enable(1'b1),
        .port_d_write(port_write[3]),
        .port_d_data(port_write_data[31:24]),
        .line(mahjong_line));

    task automatic write_io(input [5:0] a,input [7:0] d);
        begin
            @(negedge clk);addr=a;din=d;wr=1;
            @(negedge clk);wr=0;
        end
    endtask

    initial begin
        repeat(2) @(posedge clk);@(negedge clk);reset=0;
        addr=0;#1;assert(dout==8'h11) else $fatal(1,"input read %h",dout);
        write_io(0,8'ha5); // latch changes while port remains input
        assert(port_out[7:0]==0) else $fatal(1,"input drove output");
        assert(port_write==0) else $fatal(1,"input write invoked callback");
        write_io(6'h0f,8'h01);
        assert(port_write==8'h01) else $fatal(1,"direction callback missing");
        assert(port_write_data[7:0]==8'ha5)
            else $fatal(1,"direction callback payload mismatch");
        addr=0;#1;
        assert(dout==8'ha5 && port_out[7:0]==8'ha5)
            else $fatal(1,"latched output %h/%h",dout,port_out[7:0]);
        write_io(6'h0f,8'h00);
        assert(port_write==8'h01) else $fatal(1,"direction release callback missing");
        assert(port_write_data[7:0]==8'h00)
            else $fatal(1,"direction release callback payload mismatch");
        addr=0;#1;assert(dout==8'h11 && port_out[7:0]==0)
            else $fatal(1,"direction release");

        write_io(6'h0f,8'h08);
        write_io(6'h03,8'h04);
        assert(port_write==8'h08) else $fatal(1,"output write callback missing");
        assert(port_write_data[31:24]==8'h04)
            else $fatal(1,"output callback payload mismatch");
        @(posedge clk);#1;
        assert(mahjong_line==1) else $fatal(1,"mahjong mux first strobe missing");
        write_io(6'h03,8'h04);
        assert(port_write==8'h08) else $fatal(1,"repeated output callback missing");
        @(posedge clk);#1;
        assert(mahjong_line==2) else $fatal(1,"mahjong mux repeated strobe missing");

        addr=8;#1;assert(dout==8'h53) else $fatal(1,"SEGA ID S");
        addr=9;#1;assert(dout==8'h45) else $fatal(1,"SEGA ID E");
        addr=10;#1;assert(dout==8'h47) else $fatal(1,"SEGA ID G");
        addr=11;#1;assert(dout==8'h41) else $fatal(1,"SEGA ID A");
        write_io(6'h0e,8'h05);
        assert(cnt==3'b101) else $fatal(1,"CNT outputs %b",cnt);

        // CNT2 clock mode ignores data bit 2 and implements the documented
        // CLK/4 divider. A square-wave output toggles every two source ticks.
        write_io(6'h0e,8'h0c);
        assert(cnt[2]==1'b0 && cnt2_clock==1'b0)
            else $fatal(1,"CNT2 clock mode initial phase %b/%b",cnt[2],cnt2_clock);
        repeat(1) @(posedge clk);#1;
        assert(cnt2_clock==1'b0) else $fatal(1,"CNT2 clock toggled early");
        repeat(1) @(posedge clk);#1;
        assert(cnt2_clock==1'b1 && cnt[2]==1'b1)
            else $fatal(1,"CNT2 CLK/4 first half-period %b/%b",cnt2_clock,cnt[2]);
        repeat(2) @(posedge clk);#1;
        assert(cnt2_clock==1'b0) else $fatal(1,"CNT2 CLK/4 period");

        // CKOT has its independent upper divider field. Rewriting CNT resets
        // both divider phases, so a CLK/8 output toggles after four ticks.
        write_io(6'h0e,8'h4c);
        repeat(3) @(posedge clk);#1;
        assert(ckot_clock==1'b0) else $fatal(1,"CKOT toggled early");
        repeat(1) @(posedge clk);#1;
        assert(ckot_clock==1'b1) else $fatal(1,"CKOT CLK/8 first half-period");
        write_io(6'h0e,8'h04);
        assert(cnt[2]==1'b1 && cnt2_clock==1'b0 && ckot_clock==1'b0)
            else $fatal(1,"CNT programmable mode restore %b/%b/%b",cnt[2],cnt2_clock,ckot_clock);
        $display("PASS 315-5296 ports, callbacks, direction, ID, and CNT latch");
        $finish;
    end
endmodule
