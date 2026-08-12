`timescale 1ns/1ps

import s24_pkg::*;

// Focused full-core interconnect test. The fx68k external bus pins are forced
// so the two physical read channels and the shared-device path can be tested
// without depending on an instruction program.
module tb_core_dual_bus;
    logic clk=0,reset=1;
    board_desc_t board='0;
    logic p0_req,p0_ack=0,p3_req,p3_ack=0,wr_req,wr_ack=0;
    logic [26:1] p0_addr,p3_addr,wr_addr;
    logic [15:0] p0_data=16'haaaa,p3_data=16'hbbbb,wr_data;
    logic [1:0] wr_be;

    logic a_as_n=1,a_rw_n=1,a_uds_n=1,a_lds_n=1;
    logic b_as_n=1,b_rw_n=1,b_uds_n=1,b_lds_n=1;
    logic [2:0] a_fc=3'b001,b_fc=3'b001;
    logic [23:1] a_addr='0,b_addr='0;
    logic [15:0] a_dout=0,b_dout=0;
    logic a_halted_n=1;
    integer i;

    always #5 clk=~clk;

    s24_core dut(
        .clk(clk),.reset(reset),.pause(1'b0),.flicker_blend(1'b0),.board(board),
        .key_wr(1'b0),.key_word_addr('0),.key_wdata('0),
        .input_ports(64'hffff_ffff_ffff_ffff),
        .spinner0('0),.spinner1('0),.spinner2('0),.spinner3('0),
        .paddle0(8'h80),.paddle1(8'h80),.paddle2(8'h80),.paddle3(8'h80),
        .mahjong_line(),.ce_pixel(),.hblank(),.vblank(),.hsync(),.vsync(),.video_flip(),
        .red(),.green(),.blue(),.audio_l(),.audio_r(),
        .p0_req(p0_req),.p0_addr(p0_addr),.p0_data(p0_data),.p0_ack(p0_ack),
        .p2_req(),.p2_addr(),.p2_data('0),.p2_ack(1'b0),
        .p3_req(p3_req),.p3_addr(p3_addr),.p3_data(p3_data),.p3_ack(p3_ack),
        .p4_req(),.p4_addr(),.p4_data('0),.p4_ack(1'b0),
        .wr_req(wr_req),.wr_addr(wr_addr),.wr_data(wr_data),
        .wr_be(wr_be),.wr_ack(wr_ack));

    task automatic idle_cpu_cycles;
        begin
            a_as_n=1;a_uds_n=1;a_lds_n=1;
            b_as_n=1;b_uds_n=1;b_lds_n=1;
            repeat(3) @(posedge clk);
        end
    endtask

    task automatic cpu_a_char_write(
        input logic [23:0] address,
        input logic [15:0] data,
        input logic        uds_n_value,
        input logic        lds_n_value,
        input logic [1:0]  expected_be,
        input logic [15:0] expected_word
    );
        begin
            @(negedge clk);
            a_addr=address>>1;
            a_dout=data;
            a_rw_n=0;
            a_uds_n=uds_n_value;
            a_lds_n=lds_n_value;
            a_as_n=0;
            wait(wr_req);#1;
            if(wr_addr!=word_address(SDR_CHAR_BASE) ||
               wr_data!=data || wr_be!=expected_be)
                $fatal(1,"character write mismatch address=%h wr=%h/%h be=%b",
                       address,wr_addr,wr_data,wr_be);
            @(negedge clk);wr_ack=1;
            @(negedge clk);wr_ack=0;
            wait(!dut.a_dtack_n);#1;
            if(dut.tile.character_ram.mem[0]!==expected_word)
                $fatal(1,"character mirror mismatch address=%h value=%h expected=%h",
                       address,dut.tile.character_ram.mem[0],expected_word);
            a_rw_n=1;
            idle_cpu_cycles();
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
        force dut.a_halted_n=a_halted_n;

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

        // CPU-B crossings onto CPU-A's A00000-Afffff bus take four extra
        // 68000 clocks while CPU A runs, but no extra clocks while it is in
        // STOP. The delay is armed once at the shared completion boundary.
        @(negedge clk);
        a_halted_n=1;
        b_addr=24'ha00000>>1;b_as_n=0;b_uds_n=0;b_lds_n=0;
        wait(dut.cpu_bus.b_cross_delay);#1;
        i=dut.phi1 ? 1 : 0;
        while(dut.b_dtack_n) begin
            @(posedge clk);#1;
            if(dut.phi1) i=i+1;
        end
        if(i!=4) $fatal(1,"running CPU-A crossing delay clocks=%0d expected=4",i);
        repeat(2) begin
            @(posedge clk);#1;
            if(dut.b_dtack_n) $fatal(1,"crossing delay re-armed within one transaction");
        end
        idle_cpu_cycles();

        @(negedge clk);
        a_halted_n=0;
        b_addr=24'ha00000>>1;b_as_n=0;b_uds_n=0;b_lds_n=0;
        wait(dut.cpu_bus.b_complete);@(posedge clk);#1;
        if(dut.b_dtack_n) $fatal(1,"CPU-A STOP crossing received added delay");
        idle_cpu_cycles();
        a_halted_n=1;

        // MAME common_map() exposes Work-A at 080000-0fffff to both CPUs.
        // Exercise the CPU-B write through the complete core write channel,
        // not only through the address-decoder helper.
        @(negedge clk);
        b_addr=24'h080000>>1;b_dout=16'h5aa5;b_rw_n=0;
        b_as_n=0;b_uds_n=0;b_lds_n=0;
        wait(wr_req);#1;
        if(wr_addr!=word_address(SDR_WORKA_BASE) ||
           wr_data!=16'h5aa5 || wr_be!=2'b11)
            $fatal(1,"CPU-B common Work-A write mismatch addr=%h data=%h be=%b",
                   wr_addr,wr_data,wr_be);
        @(negedge clk);wr_ack=1;
        @(negedge clk);wr_ack=0;
        wait(!dut.b_dtack_n);
        b_rw_n=1;
        idle_cpu_cycles();

        // Character RAM aliases at A18:A17 and preserves individual 68000
        // byte lanes in both the shared SDRAM image and the local video port.
        cpu_a_char_write(24'h280000,16'h1234,1'b0,1'b0,2'b11,16'h1234);
        cpu_a_char_write(24'h280000,16'hab00,1'b0,1'b1,2'b10,16'hab34);
        cpu_a_char_write(24'h2c0000,16'h00cd,1'b1,1'b0,2'b01,16'habcd);

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

        // Palette cycles wait for a non-ce16 scheduler slot. Writes preserve
        // byte lanes and the following CPU read returns the merged word.
        @(negedge clk);
        a_addr=24'h400246>>1;a_dout=16'h1234;a_rw_n=0;
        a_as_n=0;a_uds_n=0;a_lds_n=0;
        wait(!dut.a_dtack_n);#1;
        if(dut.palette_mem.mem[13'h0123]!==16'h1234)
            $fatal(1,"palette full write=%h",dut.palette_mem.mem[13'h0123]);
        idle_cpu_cycles();

        @(negedge clk);
        a_addr=24'h400246>>1;a_dout=16'hab00;a_rw_n=0;
        a_as_n=0;a_uds_n=0;a_lds_n=1;
        wait(!dut.a_dtack_n);#1;
        if(dut.palette_mem.mem[13'h0123]!==16'hab34)
            $fatal(1,"palette upper-lane write=%h",dut.palette_mem.mem[13'h0123]);
        idle_cpu_cycles();

        @(negedge clk);
        a_addr=24'h400246>>1;a_rw_n=1;
        a_as_n=0;a_uds_n=0;a_lds_n=0;
        wait(!dut.a_dtack_n);#1;
        if(dut.a_din!==16'hab34)
            $fatal(1,"palette scheduled read=%h expected=ab34",dut.a_din);
        idle_cpu_cycles();

        $display("PASS tb_core_dual_bus parallel memory, shared serialization and A-bus contention");
        $finish;
    end
endmodule
