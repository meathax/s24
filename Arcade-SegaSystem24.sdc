# Core clocks are derived from the generated PLL IP.
derive_pll_clocks
derive_clock_uncertainty

# fx68k architectural state advances only on alternating 20 MHz phase enables
# inside clk_sys. Do not add false paths: DTACK and bus decode remain timed in
# the parent clock domain.

