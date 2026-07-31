`timescale 1ns/1ps

module tb_io_5296;
    logic clk=0,reset=1,rd=0,wr=0;
    logic [5:0] addr=0;
    logic [7:0] din=0,dout;
    logic [63:0] port_in=64'h8877665544332211;
    logic [63:0] port_out;
    logic [7:0] port_dir;
    logic [2:0] cnt;
    always #5 clk=~clk;
    s24_io_5296 dut(.*);

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
        write_io(6'h0f,8'h01);
        addr=0;#1;
        assert(dout==8'ha5 && port_out[7:0]==8'ha5)
            else $fatal(1,"latched output %h/%h",dout,port_out[7:0]);
        write_io(6'h0f,8'h00);
        addr=0;#1;assert(dout==8'h11 && port_out[7:0]==0)
            else $fatal(1,"direction release");

        addr=8;#1;assert(dout==8'h53) else $fatal(1,"SEGA ID S");
        addr=9;#1;assert(dout==8'h45) else $fatal(1,"SEGA ID E");
        addr=10;#1;assert(dout==8'h47) else $fatal(1,"SEGA ID G");
        addr=11;#1;assert(dout==8'h41) else $fatal(1,"SEGA ID A");
        write_io(6'h0e,8'h05);
        assert(cnt==3'b101) else $fatal(1,"CNT outputs %b",cnt);
        $display("PASS 315-5296 ports, direction, ID, and CNT latch");
        $finish;
    end
endmodule
