# Core clocks are derived from the generated PLL IP.
derive_pll_clocks
derive_clock_uncertainty

# The stock sys_top.sdc core-PLL wildcard expects an instance named "pll".
# This core intentionally names its generated PLL "pll_i", so Quartus 17 does
# not place clk_sys/clk_ram in the framework's exclusive clock groups.  List
# the generated clocks exactly here to prevent false core-audio/video paths
# into the independent framework audio, HDMI, HPS, and board clock domains.
set s24_core_clocks [get_clocks {
    emu|pll_i|pll_inst|altera_pll_i|general[0].gpll~PLL_OUTPUT_COUNTER|divclk
    emu|pll_i|pll_inst|altera_pll_i|general[1].gpll~PLL_OUTPUT_COUNTER|divclk
    emu|pll_i|pll_inst|altera_pll_i|general[2].gpll~PLL_OUTPUT_COUNTER|divclk
}]
set_clock_groups -asynchronous \
    -group $s24_core_clocks \
    -group [get_clocks {
        pll_hdmi|pll_hdmi_inst|altera_pll_i|cyclonev_pll|counter[0].output_counter|divclk
    }] \
    -group [get_clocks {
        pll_audio|pll_audio_inst|altera_pll_i|general[0].gpll~PLL_OUTPUT_COUNTER|divclk
    }] \
    -group [get_clocks {hdmi_sck}] \
    -group [get_clocks {*|h2f_user0_clk}] \
    -group [get_clocks {FPGA_CLK1_50}] \
    -group [get_clocks {FPGA_CLK2_50}] \
    -group [get_clocks {FPGA_CLK3_50}]

# fx68k architectural state advances only on alternating 20 MHz phase enables
# inside clk_sys. Do not add false paths: DTACK and bus decode remain timed in
# the parent clock domain.
