`timescale 1ns/1ps

import s24_pkg::*;

// Full-core reset/boot smoke test.  The tiny read-only image supplies valid
// 68000 vectors followed by NOP/BRA.S code; the other SDRAM clients receive
// deterministic zero-filled data.  This verifies integration and forward
// progress without depending on a particular game's media image.
module tb_core_smoke;
    logic clk = 0;
    logic reset = 1;
    logic pause = 0;
    board_desc_t board;

    logic ce_pixel, hblank, vblank, hsync, vsync;
    logic [7:0] red, green, blue;
    logic [15:0] audio_l, audio_r;
    logic p0_req, p0_ack, p2_req, p2_ack;
    logic p3_req, p3_ack, p4_req, p4_ack;
    logic wr_req, wr_ack;
    logic [26:1] p0_addr, p3_addr, p4_addr, wr_addr;
    logic [26:4] p2_addr;
    logic [15:0] p0_data, p3_data, p4_data, wr_data;
    logic [127:0] p2_data;
    logic [1:0] wr_be;

    integer boot_reads;
    integer instruction_starts;
    integer hsync_edges;

    always #5 clk = ~clk;

    // Big-endian 68000 reset image: SSP=$00081000, PC=$00000010,
    // then NOP; BRA.S -2 at $10.  Physical p0 addresses are word based.
    always_comb begin
        case (p0_addr)
            26'd0: p0_data = 16'h0008;
            26'd1: p0_data = 16'h1000;
            26'd2: p0_data = 16'h0000;
            26'd3: p0_data = 16'h0010;
            26'd8: p0_data = 16'h4e71;
            26'd9: p0_data = 16'h60fe;
            default: p0_data = 16'h4e71;
        endcase
    end

    assign p2_data = '0;
    assign p3_data = 16'hffff;
    assign p4_data = '0;

    // One-clock SDRAM response latency on every independent port.
    always_ff @(posedge clk) begin
        if (reset) begin
            p0_ack <= 0; p2_ack <= 0; p3_ack <= 0;
            p4_ack <= 0; wr_ack <= 0;
            boot_reads <= 0;
            instruction_starts <= 0;
            hsync_edges <= 0;
        end else begin
            p0_ack <= p0_req;
            p2_ack <= p2_req;
            p3_ack <= p3_req;
            p4_ack <= p4_req;
            wr_ack <= wr_req;

            if (p0_req && !p0_ack) boot_reads <= boot_reads + 1;
            if (dut.cpu_a.instr_start)
                instruction_starts <= instruction_starts + 1;
            if (dut.hsync_tick) hsync_edges <= hsync_edges + 1;
        end
    end

    s24_core dut (
        .clk(clk), .reset(reset), .pause(pause), .flicker_blend(1'b0),.board(board),
        .key_wr(1'b0), .key_word_addr('0), .key_wdata('0),
        .mahjong_line(),
        .input_ports(64'hffff_ffff_ffff_ffff),
        .spinner0('0), .spinner1('0), .spinner2('0), .spinner3('0),
        .paddle0(8'h80), .paddle1(8'h80), .paddle2(8'h80), .paddle3(8'h80),
        .ce_pixel(ce_pixel), .hblank(hblank), .vblank(vblank),
        .hsync(hsync), .vsync(vsync), .red(red), .green(green), .blue(blue),
        .audio_l(audio_l), .audio_r(audio_r),
        .p0_req(p0_req), .p0_addr(p0_addr), .p0_data(p0_data), .p0_ack(p0_ack),
        .p2_req(p2_req), .p2_addr(p2_addr), .p2_data(p2_data), .p2_ack(p2_ack),
        .p3_req(p3_req), .p3_addr(p3_addr), .p3_data(p3_data), .p3_ack(p3_ack),
        .p4_req(p4_req), .p4_addr(p4_addr), .p4_data(p4_data), .p4_ack(p4_ack),
        .wr_req(wr_req), .wr_addr(wr_addr), .wr_data(wr_data),
        .wr_be(wr_be), .wr_ack(wr_ack)
    );

    initial begin
        board = '0;
        #1;
        if (!dut.is_memory(1'b0,24'hf00000) ||
            !dut.is_memory(1'b1,24'hf80000))
            $fatal(1,"shared high work-RAM mirrors must decode for both CPUs");
        if (!dut.is_writable(1'b0,24'hf00000) ||
            !dut.is_writable(1'b1,24'hf80000))
            $fatal(1,"both CPUs must write both common high RAM mirrors");
        if (!dut.is_writable(1'b0,24'h080000) ||
            !dut.is_writable(1'b1,24'h080000) ||
            !dut.is_writable(1'b1,24'h0ffffe))
            $fatal(1,"both CPUs must write the common low Work-A window");
        if (!dut.is_memory(1'b0,24'h280000) ||
            !dut.is_memory(1'b0,24'h2c0000) ||
            !dut.is_memory(1'b1,24'h2ffffe) ||
            !dut.is_writable(1'b0,24'h280000) ||
            !dut.is_writable(1'b0,24'h2c0000) ||
            !dut.is_writable(1'b1,24'h2ffffe) ||
            dut.physical(1'b0,24'h280000,4'd0) != SDR_CHAR_BASE ||
            dut.physical(1'b0,24'h2c0000,4'd0) != SDR_CHAR_BASE ||
            dut.physical(1'b1,24'h2ffffe,4'd0) != SDR_CHAR_BASE+27'h1fffe)
            $fatal(1,"character RAM window or physical mapping mismatch");
        if (dut.physical(1'b0,24'hf00000,4'd0) != SDR_WORKB_BASE ||
            dut.physical(1'b1,24'hf80000,4'd0) != SDR_WORKA_BASE)
            $fatal(1,"shared high work-RAM physical mapping mismatch");
        repeat (16) @(posedge clk);
        reset = 0;
        repeat (12000) @(posedge clk);

        if (boot_reads < 6)
            $fatal(1, "CPU A made only %0d boot-memory reads", boot_reads);
        if (instruction_starts < 2)
            $fatal(1, "CPU A made only %0d instruction starts", instruction_starts);
        if (hsync_edges < 4)
            $fatal(1, "Video timing made only %0d line ticks", hsync_edges);

        // JTS16's final color stage exposed a useful cross-core invariant:
        // display blanking must gate RGB after the palette lookup.  Palette
        // entry zero is writable, so replacing the mixed index with zero is
        // not itself a black-output guarantee.
        @(negedge clk);
        dut.palette_ram_lo[0] = 8'h0f;
        dut.palette_ram_hi[0] = 8'h00;
        dut.mixer.regs[13] = 16'h0001;
        repeat (3) @(posedge clk);
        #1;
        if (dut.palette_red == 0)
            $fatal(1, "display-blank regression did not exercise a lit palette entry");
        if ({red,green,blue} !== 24'h000000)
            $fatal(1, "display blank leaked palette entry zero: %h", {red,green,blue});
        @(negedge clk);
        dut.mixer.regs[13] = 16'h0000;
        repeat (3) @(posedge clk);
        #1;
        if (red == 0)
            $fatal(1, "unblanked palette entry zero did not reach RGB");

        $display("PASS tb_core_smoke reads=%0d instructions=%0d lines=%0d",
                 boot_reads, instruction_starts, hsync_edges);
        $finish;
    end
endmodule
