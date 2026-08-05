`timescale 1ns/1ps

import s24_pkg::*;

// JT51 bus-boundary regression.  This stub checks the pins presented to the
// real core while leaving synthesis RTL untouched.
module jt51(
    input  logic               rst,
    input  logic               clk,
    input  logic               cen,
    input  logic               cen_p1,
    input  logic               cs_n,
    input  logic               wr_n,
    input  logic               a0,
    input  logic [7:0]         din,
    output logic [7:0]         dout,
    output logic               ct1,
    output logic               ct2,
    output logic               irq_n,
    output logic               sample,
    output logic signed [15:0] left,
    output logic signed [15:0] right,
    output logic signed [15:0] xleft,
    output logic signed [15:0] xright
);
    integer strobe_count = 0;
    logic expected_a0 [0:2];
    logic [7:0] expected_data [0:2];

    assign dout   = 8'h00;
    assign ct1    = 1'b0;
    assign ct2    = 1'b0;
    assign irq_n  = 1'b1;
    assign sample = 1'b0;
    assign left   = '0;
    assign right  = '0;
    assign xleft  = '0;
    assign xright = '0;

    initial begin
        expected_a0[0] = 1'b0;
        expected_a0[1] = 1'b1;
        expected_a0[2] = 1'b0;
        expected_data[0] = 8'h14;
        expected_data[1] = 8'h7f;
        expected_data[2] = 8'ha5;
    end

    always_ff @(posedge clk) begin
        if (!rst) begin
            if (cs_n != wr_n)
                $fatal(1, "JT51 cs_n/wr_n disagreement");
            if (!cs_n) begin
                if (!cen_p1)
                    $fatal(1, "JT51 write was not aligned to cen_p1");
                if (!cen)
                    $fatal(1, "JT51 write occurred without cen");
                if (strobe_count >= 3)
                    $fatal(1, "extra JT51 write strobe");
                if (a0 !== expected_a0[strobe_count] ||
                    din !== expected_data[strobe_count])
                    $fatal(1,
                           "JT51 payload %0d mismatch: got a0=%b data=%02h",
                           strobe_count, a0, din);
                strobe_count <= strobe_count + 1;
            end
        end
    end
endmodule

module tb_ym_write;
    logic clk = 0;
    logic reset = 1;
    board_desc_t board;

    logic ce_pixel, hblank, vblank, hsync, vsync;
    logic [7:0] red, green, blue;
    logic [15:0] audio_l, audio_r;
    logic p0_req, p0_ack = 0, p2_req, p2_ack = 0;
    logic p3_req, p3_ack = 0, p4_req, p4_ack = 0;
    logic wr_req, wr_ack = 0;
    logic [26:1] p0_addr, p3_addr, p4_addr, wr_addr;
    logic [26:4] p2_addr;
    logic [15:0] wr_data;
    logic [1:0] wr_be;
    logic [23:0] bus_addr_drive;
    logic [7:0] bus_data_drive;
    logic [1:0] bus_be_drive;

    always #5 clk = ~clk;

    s24_core dut (
        .clk(clk), .reset(reset), .pause(1'b0), .board(board),
        .key_wr(1'b0), .key_word_addr('0), .key_wdata('0),
        .input_ports(64'hffff_ffff_ffff_ffff),
        .spinner0('0), .spinner1('0), .spinner2('0), .spinner3('0),
        .paddle0(8'h80), .paddle1(8'h80), .paddle2(8'h80), .paddle3(8'h80),
        .ce_pixel(ce_pixel), .hblank(hblank), .vblank(vblank),
        .hsync(hsync), .vsync(vsync), .red(red), .green(green), .blue(blue),
        .audio_l(audio_l), .audio_r(audio_r),
        .p0_req(p0_req), .p0_addr(p0_addr), .p0_data(16'h4e71), .p0_ack(p0_ack),
        .p2_req(p2_req), .p2_addr(p2_addr), .p2_data('0), .p2_ack(p2_ack),
        .p3_req(p3_req), .p3_addr(p3_addr), .p3_data(16'hffff), .p3_ack(p3_ack),
        .p4_req(p4_req), .p4_addr(p4_addr), .p4_data('0), .p4_ack(p4_ack),
        .wr_req(wr_req), .wr_addr(wr_addr), .wr_data(wr_data),
        .wr_be(wr_be), .wr_ack(wr_ack)
    );

    task automatic cpu_local_write(input logic [23:0] address,
                                   input logic [7:0] data);
        integer cycles_to_ack;
        begin
            @(negedge clk);
            bus_addr_drive = address;
            bus_data_drive = data;
            force dut.bus_cpu  = 1'b0;
            force dut.bus_rnw  = 1'b0;
            force dut.bus_be   = 2'b01;
            force dut.bus_addr = bus_addr_drive;
            force dut.bus_dout = {8'h00, bus_data_drive};
            force dut.bus_req  = 1'b1;

            cycles_to_ack = 0;
            while (!dut.bus_ack && cycles_to_ack < 64) begin
                @(posedge clk);
                cycles_to_ack = cycles_to_ack + 1;
            end
            if (!dut.bus_ack)
                $fatal(1, "YM CPU write did not acknowledge");

            @(negedge clk);
            force dut.bus_req = 1'b0;
            repeat (2) @(posedge clk);
            release dut.bus_req;
            release dut.bus_cpu;
            release dut.bus_rnw;
            release dut.bus_be;
            release dut.bus_addr;
            release dut.bus_dout;
            repeat (2) @(posedge clk);
        end
    endtask

    task automatic cpu_ym_write(input logic a0, input logic [7:0] data);
        cpu_local_write(24'h800100 | {22'd0, a0, 1'b0}, data);
    endtask

    task automatic cpu_local_read(input logic [23:0] address,
                                  input logic [1:0] byte_en,
                                  input logic [15:0] expected);
        integer cycles_to_ack;
        logic [15:0] lane_mask;
        begin
            @(negedge clk);
            bus_addr_drive = address;
            bus_be_drive = byte_en;
            force dut.bus_cpu  = 1'b0;
            force dut.bus_rnw  = 1'b1;
            force dut.bus_be   = bus_be_drive;
            force dut.bus_addr = bus_addr_drive;
            force dut.bus_req  = 1'b1;

            cycles_to_ack = 0;
            while (!dut.bus_ack && cycles_to_ack < 64) begin
                @(posedge clk);
                cycles_to_ack = cycles_to_ack + 1;
            end
            if (!dut.bus_ack)
                $fatal(1, "local read %06h did not acknowledge", address);

            lane_mask = {{8{byte_en[1]}},{8{byte_en[0]}}};
            if ((dut.bus_din & lane_mask) !== (expected & lane_mask))
                $fatal(1, "local read %06h got %04h mask %04h expected %04h",
                       address,dut.bus_din,lane_mask,expected);

            @(negedge clk);
            force dut.bus_req = 1'b0;
            repeat (2) @(posedge clk);
            release dut.bus_req;
            release dut.bus_cpu;
            release dut.bus_rnw;
            release dut.bus_be;
            release dut.bus_addr;
            repeat (2) @(posedge clk);
        end
    endtask

    initial begin
        board = '0;
        repeat (12) @(posedge clk);
        reset = 0;

        // System 24 leaves its address-space unmapped value low.  Devices on
        // D7:D0 therefore read zero on D15:D8; the full-width IOD stub is the
        // exception and explicitly returns ffff.
        board.has_upd4701 = 1'b1;
        board.has_adc = 1'b1;
        cpu_local_read(24'h800010,2'b11,16'h0053); // I/O ID 'S'
        cpu_local_read(24'h800020,2'b11,16'h00ff); // unused 315-5296 reg
        cpu_local_read(24'h800010,2'b10,16'h0000); // unmapped upper lane
        cpu_local_read(24'h800100,2'b11,16'h0000); // YM status from stub
        cpu_local_read(24'hc00000,2'b11,16'h0000); // uPD4701 X low
        cpu_local_read(24'hc00010,2'b11,16'h0000); // MSM6253 D7 low
        cpu_local_read(24'h800040,2'b11,16'hffff); // explicit IOD stub

        // CNT is register 0e in the 315-5296 I/O block, hence byte address
        // $80001c. CNT2 drives the YM2151 active-low /IC pin, while JT51's
        // reset input is active high. System 24 writes CNT=04 to release YM.
        cpu_local_write(24'h80001c, 8'h04);
        if (!dut.io_cnt[2])
            $fatal(1, "I/O CNT2 release pin did not go high");
        if (dut.ym.rst)
            $fatal(1, "JT51 remained reset after CNT2 release");
        cpu_local_write(24'h80001c, 8'h00);
        if (dut.io_cnt[2])
            $fatal(1, "I/O CNT2 reset pin did not go low");
        if (!dut.ym.rst)
            $fatal(1, "JT51 reset was not asserted after CNT2 cleared");
        cpu_local_write(24'h80001c, 8'h04);
        if (dut.ym.rst)
            $fatal(1, "JT51 failed to leave reset after CNT2 re-release");
        repeat (4) @(posedge clk);

        // Start at different points in the divided-enable sequence.  The core
        // must retain each payload until the next JT51 sampling opportunity.
        cpu_ym_write(1'b0, 8'h14);
        repeat (1) @(posedge clk);
        cpu_ym_write(1'b1, 8'h7f);
        repeat (7) @(posedge clk);
        cpu_ym_write(1'b0, 8'ha5);
        repeat (32) @(posedge clk);

        if (dut.ym.strobe_count != 3)
            $fatal(1, "expected 3 JT51 strobes, got %0d",
                   dut.ym.strobe_count);
        if (dut.ym_write_pending)
            $fatal(1, "YM write remained pending after final strobe");
        if (dut.ym_wr)
            $fatal(1, "YM write strobe remained asserted");

        // Port H feeds an unsigned 8-bit R-2R DAC.  MAME routes it at 0.50
        // to both speakers, matching the per-channel YM route gain.
        cpu_local_write(24'h80001e,8'h80); // port H output
        cpu_local_write(24'h80000e,8'h00);
        #1;
        if (audio_l !== 16'hc000 || audio_r !== 16'hc000)
            $fatal(1,"DAC zero-scale mix mismatch %04h/%04h",audio_l,audio_r);
        cpu_local_write(24'h80000e,8'hff);
        #1;
        if (audio_l !== 16'h3f80 || audio_r !== 16'h3f80)
            $fatal(1,"DAC full-scale mix mismatch %04h/%04h",audio_l,audio_r);

        $display("PASS tb_ym_write: open-bus reads, JT51 writes and stereo DAC routing");
        $finish;
    end
endmodule
