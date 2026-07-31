`timescale 1ns/1ps

module tb_switches;
    logic clk=0,reset=1,ioctl_wr=0;
    logic [15:0] ioctl_index=0,ioctl_dout=0;
    logic [26:0] ioctl_addr=0;
    logic [7:0] coinage,dsw;

    always #5 clk=~clk;
    s24_switches dut(.*);

    task automatic write_switch(input logic [26:0] addr,
                                input logic [15:0] data);
        begin
            ioctl_index=16'd254;ioctl_addr=addr;ioctl_dout=data;ioctl_wr=1;
            @(posedge clk);#1;ioctl_wr=0;@(posedge clk);#1;
        end
    endtask

    initial begin
        repeat(2) @(posedge clk);reset=0;@(posedge clk);#1;
        if(coinage!=8'hff || dsw!=8'hff) $fatal(1,"reset defaults");

        // WIDE=1: MRA "FF ED" arrives together at address zero.
        write_switch(0,16'hedff);
        if(coinage!=8'hff || dsw!=8'hed) $fatal(1,"wide switch capture");

        // An unrelated download must not alter switches.
        ioctl_index=16'd3;ioctl_addr=0;ioctl_dout=16'h0000;ioctl_wr=1;
        @(posedge clk);#1;ioctl_wr=0;@(posedge clk);#1;
        if(coinage!=8'hff || dsw!=8'hed) $fatal(1,"unrelated write");

        // Retain the byte-wide address-one convention as a fallback.
        write_switch(1,16'h00fb);
        if(coinage!=8'hff || dsw!=8'hfb) $fatal(1,"byte switch capture");

        $display("PASS tb_switches wide and byte MRA switch downloads");
        $finish;
    end
endmodule
