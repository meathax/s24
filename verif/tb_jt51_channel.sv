`timescale 1ns/1ps

// Regression for the current upstream JT51 channel-register organization.
// System 24 software commonly writes adjacent channel registers without an
// eight-channel pipeline gap; each write must land in its addressed channel.
module tb_jt51_channel;
    logic clk = 0;
    logic rst = 1;
    logic cen = 1;
    logic cen_p1 = 1;
    logic cs_n = 1;
    logic wr_n = 1;
    logic a0 = 0;
    logic [7:0] din = 0;
    logic [7:0] dout;
    logic ct1,ct2,irq_n,sample;
    logic signed [15:0] left,right,xleft,xright;

    always #5 clk = ~clk;

    jt51 dut(
        .rst(rst),.clk(clk),.cen(cen),.cen_p1(cen_p1),.cs_n(cs_n),.wr_n(wr_n),
        .a0(a0),.din(din),.dout(dout),.ct1(ct1),.ct2(ct2),.irq_n(irq_n),
        .sample(sample),.left(left),.right(right),.xleft(xleft),.xright(xright));

    task automatic write_reg(input logic address_select, input logic [7:0] data);
        begin
            @(negedge clk);
            a0 = address_select;
            din = data;
            cs_n = 1'b0;
            wr_n = 1'b0;
            @(negedge clk);
            cs_n = 1'b1;
            wr_n = 1'b1;
        end
    endtask

    initial begin
        repeat (4) @(negedge clk);
        rst = 1'b0;

        // KC channel 0 and channel 1 with no idle gap between the data
        // writes.  The old CSR implementation could overwrite one with the
        // other before its eight-stage rotation completed.
        write_reg(1'b0,8'h28);
        write_reg(1'b1,8'h11);
        write_reg(1'b0,8'h29);
        write_reg(1'b1,8'h22);

        // Allow both scheduled updates to reach their channel write points.
        repeat (48) @(posedge clk);
        if (dut.u_mmr.u_reg.u_reg_ch.reg_kc[0] !== 7'h11)
            $fatal(1,"channel 0 KC lost: %02h",dut.u_mmr.u_reg.u_reg_ch.reg_kc[0]);
        if (dut.u_mmr.u_reg.u_reg_ch.reg_kc[1] !== 7'h22)
            $fatal(1,"channel 1 KC lost: %02h",dut.u_mmr.u_reg.u_reg_ch.reg_kc[1]);

        // Verify the same direct-storage rule for the channel-level RL/FB/
        // CON register, which shares the update timing but has three fields.
        write_reg(1'b0,8'h20);
        write_reg(1'b1,8'he5);
        write_reg(1'b0,8'h21);
        write_reg(1'b1,8'h3a);
        repeat (48) @(posedge clk);
        if (dut.u_mmr.u_reg.u_reg_ch.reg_rl[0] !== 2'b11 ||
            dut.u_mmr.u_reg.u_reg_ch.reg_fb[0] !== 3'b100 ||
            dut.u_mmr.u_reg.u_reg_ch.reg_con[0] !== 3'b101)
            $fatal(1,"channel 0 RL/FB/CON mismatch");
        if (dut.u_mmr.u_reg.u_reg_ch.reg_rl[1] !== 2'b00 ||
            dut.u_mmr.u_reg.u_reg_ch.reg_fb[1] !== 3'b111 ||
            dut.u_mmr.u_reg.u_reg_ch.reg_con[1] !== 3'b010)
            $fatal(1,"channel 1 RL/FB/CON mismatch");

        $display("PASS JT51 direct channel registers preserve adjacent writes");
        $finish;
    end
endmodule
