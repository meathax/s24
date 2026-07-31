`timescale 1ns/1ps
// Simulation/behavioral placeholder for the Quartus fPLL IP.
// Hardware uses rtl/pll/synthesis/pll.qip (50 MHz -> 96 / 48 MHz).
module pll (
    input  refclk_clk,
    input  reset_reset,
output outclk0_clk,   // 96 MHz
output outclk1_clk,   // 48 MHz
output outclk2_clk,   // 96 MHz, 180 deg (SDRAM_CLK)
output outclk3_clk,   // 24 MHz (unused helper)
    output locked_export
);
`ifdef SIMULATION
reg c0 = 1'b0, c1 = 1'b0, c3 = 1'b0;
always #5.208  c0 = ~c0;
always #10.417 c1 = ~c1;
always #20.833 c3 = ~c3;
assign outclk0_clk = c0;
assign outclk1_clk = c1;
assign outclk2_clk = ~c0;
assign outclk3_clk = c3;
assign locked_export = 1'b1;
`else
// Hardware builds include synthesis/pll.qip. These pass-through assignments
// exist only so standalone lint can elaborate this placeholder.
assign outclk0_clk = refclk_clk;
assign outclk1_clk = refclk_clk;
assign outclk2_clk = ~refclk_clk;
assign outclk3_clk = refclk_clk;
assign locked_export = ~reset_reset;
`endif
endmodule
