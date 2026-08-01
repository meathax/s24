`timescale 1ns/1ps

import s24_pkg::*;

// Focused full-core interconnect test. The fx68k external bus pins are forced
// so the two physical read channels and the shared-device path can be tested
// without depending on an instruction program.
module tb_core_dual_bus;
    logic clk=0,reset=1;
    board_desc_t board='0;
    logic p0_req,p0_ack=0,p3_req,p3_ack=0,wr_req;
    logic [26:1] p0_addr,p3_addr,wr_addr;
    logic [15:0] p0_data=16'haaaa,p3_data=16'hbbbb,wr_data;
    logic [1:0] wr_be;

    logic a_as_n=1,a_rw_n=1,a_uds_n=1,a_lds_n=1;
    logic b_as_n=1,b_rw_n=1,b_uds_n=1,b_lds_n=1;
    logic [2:0] a_fc=3'b001,b_fc=3'b001;
    logic [23:1] a_addr='0,b_addr='0;
    logic [15:0] a_dout=0,b_dout=0;

    always #5 clk=~clk;

    s24_core dut(
        .clk(clk),.reset(reset),.pause(1'b0),.board(board),
        .key_wr(1'b0),.key_word_addr('0),.key_wdata('0),
        .input_ports(64'hffff_ffff_ffff_ffff),
        .spinner0('0),.spinner1('0),.spinner2('0),.spinner3('0),
        .paddle0(8'h80),.paddle1(8'h80),.paddle2(8'h80),.paddle3(8'h80),
        .mahjong_line(),.ce_pixel(),.hblank(),.vblank(),.hsync(),.vsync(),
        .red(),.green(),.blue(),.audio_l(),.audio_r(),
        .p0_req(p0_req),.p0_addr(p0_addr),.p0_data(p0_data),.p0_ack(p0_ack),
        .p1_req(),.p1_addr(),.p1_data('0),.p1_ack(1'b0),
        .p2_req(),.p2_addr(),.p2_data('0),.p2_ack(1'b0),
        .p3_req(p3_req),.p3_addr(p3_addr),.p3_data(p3_data),.p3_ack(p3_ack),
        .p4_req(),.p4_addr(),.p4_data('0),.p4_ack(1'b0),
        .p5_req(),.p5_addr(),.p5_data('0),.p5_ack(1'b0),
        .wr_req(wr_req),.wr_addr(wr_addr),.wr_data(wr_data),
        .wr_be(wr_be),.wr_ack(1'b0));

    task automatic idle_cpu_cycles;
        begin
            a_as_n=1;a_uds_n=1;a_lds_n=1;
            b_as_n=1;b_uds_n=1;b_lds_n=1;
            repeat(3) @(posedge clk);
        end
    endtask

    initial begin
        force dut.a_as_n=a_as_n; force dut.a_rw_n=a_rw_n;
        force dut.a_uds_n=a_uds_n; force dut.a_lds_n=a_lds_n;
        force dut.a_fc=a_fc; force dut.a_word_addr=a_addr;
        force dut.a_dout=a_dout;
        force dut.b_as_n=b_as_n; force dut.b_rw_n=b_rw_n;
        force dut.b_uds_n=b_uds_n; force dut.b_lds_n=b_lds_n;
        force dut.b_fc=b_fc; force dut.b_word_addr=b_addr;
        force dut.b_dout=b_dout;

        repeat(4) @(posedge clk);reset=0;repeat(2) @(posedge clk);

        // CPU A work RAM and CPU B private RAM launch together on p0 and p3.
        @(negedge clk);
        a_addr=24'h080000>>1;b_addr=24'h000100>>1;
        a_rw_n=1;b_rw_n=1;a_uds_n=0;a_lds_n=0;b_uds_n=0;b_lds_n=0;
        a_as_n=0;b_as_n=0;
        wait(p0_req&&p3_req);#1;
        if(p0_addr!=word_address(SDR_WORKA_BASE) ||
           p3_addr!=word_address(SDR_WORKB_BASE+27'h0000100))
            $fatal(1,"parallel physical addresses A=%h B=%h",p0_addr,p3_addr);
        if(dut.bus_req) $fatal(1,"memory reads entered shared-device arbiter");
        @(negedge clk);p0_ack=1;p3_ack=1;
        @(negedge clk);p0_ack=0;p3_ack=0;
        wait(!dut.a_dtack_n&&!dut.b_dtack_n);#1;
        if(dut.a_din!=16'haaaa || dut.b_din!=16'hbbbb)
            $fatal(1,"parallel read payload mismatch A=%h B=%h",dut.a_din,dut.b_din);
        idle_cpu_cycles();

        // Protected CPU-B program reads retain the p3 -> FD1094 -> DTACK
        // sequence; the encrypted SDRAM word must not acknowledge directly.
        board.has_fd1094=1'b1;
        @(negedge clk);
        b_fc=3'b010;b_addr=24'h000100>>1;b_as_n=0;b_uds_n=0;b_lds_n=0;
        wait(p3_req);@(negedge clk);p3_ack=1;
        @(negedge clk);p3_ack=0;
        wait(dut.fd_start);#1;
        if(!dut.b_dtack_n) $fatal(1,"encrypted p3 word bypassed FD1094");
        wait(dut.fd_done);wait(!dut.b_dtack_n);
        idle_cpu_cycles();
        board.has_fd1094=1'b0;b_fc=3'b001;

        // Local-device cycles remain serialized: both CPUs target the IRQ
        // controller, but DTACK must not be asserted to both on one edge.
        @(negedge clk);
        a_addr=24'ha00000>>1;b_addr=24'ha00000>>1;
        a_as_n=0;b_as_n=0;a_uds_n=0;a_lds_n=0;b_uds_n=0;b_lds_n=0;
        wait(!dut.a_dtack_n || !dut.b_dtack_n);#1;
        if(!dut.a_dtack_n && !dut.b_dtack_n)
            $fatal(1,"shared-device reads completed simultaneously");
        if(!dut.a_dtack_n) begin
            a_as_n=1;a_uds_n=1;a_lds_n=1;
            wait(!dut.b_dtack_n);
        end else begin
            b_as_n=1;b_uds_n=1;b_lds_n=1;
            wait(!dut.a_dtack_n);
        end
        idle_cpu_cycles();

        // CPU B's A-bus crossing waits while CPU A has a live memory cycle.
        @(negedge clk);
        a_addr=24'h080000>>1;a_as_n=0;a_uds_n=0;a_lds_n=0;
        b_addr=24'ha00000>>1;b_as_n=0;b_uds_n=0;b_lds_n=0;
        wait(p0_req);repeat(5) @(posedge clk);#1;
        if(!dut.b_dtack_n)
            $fatal(1,"CPU B crossed to A00000 during CPU A memory cycle");
        @(negedge clk);p0_ack=1;
        @(negedge clk);p0_ack=0;
        wait(!dut.a_dtack_n);a_as_n=1;a_uds_n=1;a_lds_n=1;
        wait(!dut.b_dtack_n);
        idle_cpu_cycles();

        $display("PASS tb_core_dual_bus parallel memory, shared serialization and A-bus contention");
        $finish;
    end
endmodule
