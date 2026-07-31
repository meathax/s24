`timescale 1ns/1ps

// Focused MiSTer 128 MB SDRAM contract test.  Covers both module devices,
// single and 128-bit burst reads, and the A11/A12-short byte-mask convention.
module tb_sdram;
    logic clk = 0, init = 1;
    wire ready;
    tri [15:0] SDRAM_DQ;
    wire [12:0] SDRAM_A;
    wire [1:0] SDRAM_BA;
    wire SDRAM_DQML, SDRAM_DQMH, SDRAM_nCS;
    wire SDRAM_nCAS, SDRAM_nRAS, SDRAM_nWE, SDRAM_CKE;

    logic [15:0] mem_dq = 0;
    logic mem_oe = 0;
    assign SDRAM_DQ = mem_oe ? mem_dq : 16'hzzzz;

    logic wr_req = 0;
    logic [26:1] wr_addr = 0;
    logic [15:0] wr_din = 0;
    logic [1:0] wr_be = 0;
    wire wr_ack;

    logic p0_req = 0, p1_req = 0, p2_req = 0;
    logic p3_req = 0, p4_req = 0, p5_req = 0;
    logic [26:1] p0_addr = 0, p3_addr = 0, p4_addr = 0;
    logic [26:3] p1_addr = 0, p5_addr = 0;
    logic [26:4] p2_addr = 0;
    wire [15:0] p0_dout, p3_dout, p4_dout;
    wire [63:0] p1_dout, p5_dout;
    wire [127:0] p2_dout;
    wire p0_ack, p1_ack, p2_ack, p3_ack, p4_ack, p5_ack;

    logic [1:0] read_pipe = 0;
    logic [9:0] col_pipe [0:1];
    logic chip_pipe [0:1];
    logic saw_write = 0;
    logic [1:0] write_mask = 0;

    always #5 clk = ~clk;

    function automatic [15:0] read_word(input logic chip,
                                         input logic [9:0] col);
        read_word = 16'ha000 ^ {chip, 5'b0, col};
    endfunction

    wire read_cmd = ({SDRAM_nRAS,SDRAM_nCAS,SDRAM_nWE} == 3'b101);
    wire write_cmd = ({SDRAM_nRAS,SDRAM_nCAS,SDRAM_nWE} == 3'b100);
    always @(negedge clk) begin
        read_pipe[1] <= read_pipe[0];
        read_pipe[0] <= read_cmd;
        col_pipe[1] <= col_pipe[0];
        col_pipe[0] <= SDRAM_A[9:0];
        chip_pipe[1] <= chip_pipe[0];
        chip_pipe[0] <= SDRAM_nCS;
        mem_oe = read_pipe[1];
        if (read_pipe[1]) mem_dq = read_word(chip_pipe[1],col_pipe[1]);
        if (write_cmd) begin
            saw_write = 1;
            write_mask = SDRAM_A[12:11];
        end
    end

    sdram dut (
        .clk(clk),.init(init),.ready(ready),.SDRAM_DQ(SDRAM_DQ),
        .SDRAM_A(SDRAM_A),.SDRAM_BA(SDRAM_BA),.SDRAM_DQML(SDRAM_DQML),
        .SDRAM_DQMH(SDRAM_DQMH),.SDRAM_nCS(SDRAM_nCS),
        .SDRAM_nCAS(SDRAM_nCAS),.SDRAM_nRAS(SDRAM_nRAS),
        .SDRAM_nWE(SDRAM_nWE),.SDRAM_CKE(SDRAM_CKE),
        .wr_req(wr_req),.wr_addr(wr_addr),.wr_din(wr_din),
        .wr_be(wr_be),.wr_ack(wr_ack),
        .p0_req(p0_req),.p0_addr(p0_addr),.p0_dout(p0_dout),.p0_ack(p0_ack),
        .p1_req(p1_req),.p1_addr(p1_addr),.p1_dout(p1_dout),.p1_ack(p1_ack),
        .p2_req(p2_req),.p2_addr(p2_addr),.p2_dout(p2_dout),.p2_ack(p2_ack),
        .p3_req(p3_req),.p3_addr(p3_addr),.p3_dout(p3_dout),.p3_ack(p3_ack),
        .p4_req(p4_req),.p4_addr(p4_addr),.p4_dout(p4_dout),.p4_ack(p4_ack),
        .p5_req(p5_req),.p5_addr(p5_addr),.p5_dout(p5_dout),.p5_ack(p5_ack));

    task automatic read_p0(input logic [26:1] a,
                            input logic [15:0] expected);
        integer timeout;
        begin
            @(negedge clk); p0_addr=a; p0_req=1;
            @(negedge clk); p0_req=0;
            timeout=0;
            while(!p0_ack && timeout<100) begin @(posedge clk); #1; timeout++; end
            if(!p0_ack) $fatal(1,"p0 timeout at %h",a);
            if(p0_dout!==expected)
                $fatal(1,"p0 data %h expected %h at %h",p0_dout,expected,a);
            while(p0_ack) begin @(posedge clk); #1; end
        end
    endtask

    integer timeout;
    logic [9:0] burst_col;
    logic [127:0] burst_expected;
    initial begin
        repeat(4) @(posedge clk);
        @(negedge clk); init=0;
        timeout=0;
        while(!ready && timeout<70000) begin @(posedge clk); #1; timeout++; end
        if(!ready) $fatal(1,"SDRAM initialization timeout");

        read_p0(26'h0000025,read_word(1'b0,10'h025));
        read_p0(26'h2000025,read_word(1'b1,10'h025));

        burst_col=10'h028;
        burst_expected={read_word(0,burst_col+7),read_word(0,burst_col+6),
                        read_word(0,burst_col+5),read_word(0,burst_col+4),
                        read_word(0,burst_col+3),read_word(0,burst_col+2),
                        read_word(0,burst_col+1),read_word(0,burst_col)};
        @(negedge clk); p2_addr=23'h000005; p2_req=1;
        @(negedge clk); p2_req=0;
        timeout=0;
        while(!p2_ack && timeout<160) begin @(posedge clk); #1; timeout++; end
        if(!p2_ack || p2_dout!==burst_expected)
            $fatal(1,"p2 burst mismatch %h expected %h",p2_dout,burst_expected);
        while(p2_ack) begin @(posedge clk); #1; end

        saw_write=0;
        @(negedge clk); wr_addr=26'h0000042; wr_din=16'h55aa;
        wr_be=2'b01; wr_req=1;
        @(negedge clk); wr_req=0;
        timeout=0;
        while(!wr_ack && timeout<100) begin @(posedge clk); #1; timeout++; end
        if(!wr_ack || !saw_write) $fatal(1,"SDRAM write timeout");
        if(write_mask!==2'b10 || {SDRAM_DQMH,SDRAM_DQML}!==SDRAM_A[12:11])
            $fatal(1,"shorted DQM mask mismatch %b",write_mask);

        $display("PASS tb_sdram 128MB device/burst/DQM contract");
        $finish;
    end
endmodule
