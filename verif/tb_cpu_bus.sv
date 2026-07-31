`timescale 1ns/1ps

module tb_cpu_bus;
    logic clk=0,reset=1;
    logic a_as_n=1,a_rw_n=1,a_uds_n=1,a_lds_n=1;
    logic b_as_n=1,b_rw_n=1,b_uds_n=1,b_lds_n=1;
    logic [2:0] a_fc=3'b001,b_fc=3'b001;
    logic [23:1] a_addr='0,b_addr='0;
    logic [15:0] a_dout='0,b_dout='0,a_din,b_din;
    logic a_dtack_n,b_dtack_n;
    logic bus_req,bus_cpu,bus_rnw,bus_ack=0;
    logic [1:0] bus_be;
    logic [2:0] bus_fc;
    logic [23:0] bus_addr;
    logic [15:0] bus_dout;
    logic [15:0] bus_din=16'ha55a;

    always #5 clk=~clk;

    s24_cpu_bus dut(.*);

    task automatic finish_a_cycle;
        begin
            bus_ack=1; @(posedge clk); #1; bus_ack=0;
            if(a_dtack_n) $fatal(1,"CPU A did not receive DTACK");
            repeat(2) begin
                @(posedge clk); #1;
                if(bus_req) $fatal(1,"acknowledged CPU A cycle was reissued");
            end
            a_as_n=1;a_uds_n=1;a_lds_n=1;
            @(posedge clk); #1;
            if(!a_dtack_n) $fatal(1,"CPU A DTACK did not clear with AS");
        end
    endtask

    task automatic start_a_cycle(input logic uds_n,input logic lds_n,
                                 input logic [23:1] addr,input logic [15:0] data);
        begin
            a_addr=addr;a_dout=data;a_rw_n=0;a_as_n=0;
            // AS precedes the byte strobes in fx68k.  This phase must not be
            // captured as a zero-byte write.
            a_uds_n=1;a_lds_n=1;
            repeat(2) begin @(posedge clk); #1;
                if(bus_req) $fatal(1,"cycle captured before a byte strobe");
            end
            a_uds_n=uds_n;a_lds_n=lds_n;
            while(!bus_req) begin @(posedge clk); #1; end
        end
    endtask

    initial begin
        repeat(3) @(posedge clk); reset=0; @(posedge clk); #1;

        start_a_cycle(0,0,23'h12345,16'hcafe);
        if(bus_cpu || bus_be!=2'b11 || bus_addr!=24'h02468a
                || bus_dout!=16'hcafe)
            $fatal(1,"full-word capture mismatch");
        finish_a_cycle();

        start_a_cycle(0,1,23'h00100,16'h5aa5);
        if(bus_be!=2'b10) $fatal(1,"UDS-only capture mismatch");
        finish_a_cycle();

        start_a_cycle(1,0,23'h00101,16'h5aa5);
        if(bus_be!=2'b01) $fatal(1,"LDS-only capture mismatch");
        finish_a_cycle();

        if(a_din!=16'ha55a) $fatal(1,"readback latch mismatch");
        $display("PASS tb_cpu_bus delayed strobes, byte enables and single-ack handshake");
        $finish;
    end
endmodule
