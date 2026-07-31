// Fast simulation-only YM2151 boundary model for long real-ROM boot tests.
// Focused audio regressions use the real JT51 implementation; boot software
// only needs an idle status/IRQ interface until the video attract milestone.
module jt51(
    input rst, input clk, input cen, input cen_p1,
    input cs_n, input wr_n, input a0, input [7:0] din,
    output [7:0] dout, output ct1, output ct2, output irq_n,
    output sample, output signed [15:0] left, output signed [15:0] right,
    output signed [15:0] xleft, output signed [15:0] xright
);
    assign dout=8'h00;
    assign ct1=1'b0;
    assign ct2=1'b0;
    assign irq_n=1'b1;
    assign sample=1'b0;
    assign left='0;
    assign right='0;
    assign xleft='0;
    assign xright='0;
endmodule
