module emu (
    `include "sys/emu_ports.vh"
);
    assign ADC_BUS='Z;
    assign USER_OUT='1;
    assign {UART_RTS,UART_TXD,UART_DTR}=0;
    assign {SD_SCK,SD_MOSI,SD_CS}='Z;
    assign {DDRAM_CLK,DDRAM_BURSTCNT,DDRAM_ADDR,DDRAM_DIN,
            DDRAM_BE,DDRAM_RD,DDRAM_WE}='0;
    assign VGA_SL=0; assign VGA_F1=0; assign VGA_SCALER=0; assign VGA_DISABLE=0;
    assign HDMI_FREEZE=0; assign HDMI_BLACKOUT=0; assign HDMI_BOB_DEINT=0;
    assign AUDIO_S=1; assign AUDIO_MIX=0;
    assign LED_DISK=0; assign LED_POWER=0; assign BUTTONS=0;
    assign VIDEO_ARX=13'd31; assign VIDEO_ARY=13'd24;

    `ifndef BUILD_DATE
    `define BUILD_DATE "S24-WIP"
    `endif
    localparam CONF_STR={
        "S24;;",
        "O[2:1],Aspect ratio,Original,Full Screen,[ARC1],[ARC2];",
        "O[5:3],Scandoubler Fx,None,CRT 25%,CRT 50%,CRT 75%;",
        "O[6],Pause,Off,On;",
        "O[7],Service Mode,Off,On;",
        "R[0],Reset;",
        "J1,B1,B2,B3,B4,Start,Coin,Service,Test;",
        "V,v",`BUILD_DATE
    };

    logic clk_sys,clk_ram,clk_aux,pll_locked;
    pll pll_i(
        .refclk_clk(CLK_50M),.reset_reset(1'b0),
        .outclk0_clk(clk_ram),.outclk1_clk(clk_sys),
        .outclk2_clk(SDRAM_CLK),.outclk3_clk(clk_aux),.locked_export(pll_locked));
    assign CLK_VIDEO=clk_sys;

    logic [1:0] buttons;
    logic [63:0] status;
    logic [31:0] joy0,joy1,joy2,joy3;
    logic [8:0] spinner0,spinner1,spinner2,spinner3;
    logic [7:0] paddle0,paddle1,paddle2,paddle3;
    logic forced_scandoubler;
    // Driven bidirectionally by hps_io and video_mixer; Quartus 17 requires
    // an inout connection to be a structural net, not a variable.
    wire [21:0] gamma_bus;
    logic ioctl_download,ioctl_upload,ioctl_wr,ioctl_rd,ioctl_wait;
    logic [15:0] ioctl_index;
    logic [26:0] ioctl_addr;
    logic [15:0] ioctl_dout,ioctl_din;
    logic [15:0] sdram_sz;
    s24_pkg::board_desc_t descriptor;
    hps_io #(.CONF_STR(CONF_STR),.WIDE(1)) hps(
        .clk_sys(clk_sys),.HPS_BUS(HPS_BUS),.EXT_BUS(),.gamma_bus(gamma_bus),
        .forced_scandoubler(forced_scandoubler),.buttons(buttons),.status(status),
        .status_menumask(16'd0),.joystick_0(joy0),.joystick_1(joy1),
        .joystick_2(joy2),.joystick_3(joy3),
        .paddle_0(paddle0),.paddle_1(paddle1),
        .paddle_2(paddle2),.paddle_3(paddle3),
        .spinner_0(spinner0),.spinner_1(spinner1),
        .spinner_2(spinner2),.spinner_3(spinner3),
        .ioctl_download(ioctl_download),.ioctl_upload(ioctl_upload),
        .ioctl_upload_req(1'b0),.ioctl_upload_index(8'd0),
        .ioctl_wr(ioctl_wr),.ioctl_rd(ioctl_rd),.ioctl_index(ioctl_index),
        .ioctl_addr(ioctl_addr),.ioctl_dout(ioctl_dout),.ioctl_din(ioctl_din),
        .ioctl_wait(ioctl_wait),.sdram_sz(sdram_sz));
    assign ioctl_din=0;

    logic [7:0] dsw,coinage;
    s24_switches switches(
        .clk(clk_sys),.reset(~pll_locked),.ioctl_wr(ioctl_wr),
        .ioctl_index(ioctl_index),.ioctl_addr(ioctl_addr),
        .ioctl_dout(ioctl_dout),.coinage(coinage),.dsw(dsw));
    logic [63:0] input_ports;
    s24_inputs inputs(.joy0(joy0),.joy1(joy1),.joy2(joy2),.joy3(joy3),
        .dsw(dsw),.coinage(coinage),.paddle(paddle0),.test_mode(status[7]),
        .golf_io(descriptor.golf_io),.hotrod_io(descriptor.hotrod_io),
        .golf_angle(descriptor.golf_io&&descriptor.has_upd4701),
        .gground_io(descriptor.input_profile==s24_pkg::INPUT_GGROUND),
        .ports(input_ports));

    logic sdram_ready,sdram_ready_m,sdram_ready_s;
    always_ff @(posedge clk_sys) begin
        if(!pll_locked) begin sdram_ready_m<=0;sdram_ready_s<=0;end
        else begin sdram_ready_m<=sdram_ready;sdram_ready_s<=sdram_ready_m;end
    end
    logic wrong_sdram_size;
    assign wrong_sdram_size=sdram_sz[15]&&(sdram_sz[1:0]!=2'b11);

    logic rom_loaded;
    logic lwr_req,lwr_ack;
    logic [26:1] lwr_addr;
    logic [15:0] lwr_data;
    logic [1:0] lwr_be;
    logic key_wr;
    logic [11:0] key_word_addr;
    logic [15:0] key_wdata;
    s24_rom_loader loader(
        .clk(clk_sys),.reset(~pll_locked),.mem_ready(sdram_ready_s),
        .ioctl_download(ioctl_download),.ioctl_index(ioctl_index[7:0]),
        .ioctl_wr(ioctl_wr),.ioctl_addr(ioctl_addr),.ioctl_dout(ioctl_dout),
        .ioctl_wait(ioctl_wait),.descriptor(descriptor),.rom_loaded(rom_loaded),
        .wr_req(lwr_req),.wr_addr(lwr_addr),.wr_data(lwr_data),.wr_be(lwr_be),.wr_ack(lwr_ack),
        .key_wr(key_wr),.key_word_addr(key_word_addr),.key_wdata(key_wdata));

    logic core_reset;
    assign core_reset=RESET|status[0]|buttons[1]|~pll_locked|~sdram_ready_s|
                      ~rom_loaded|ioctl_download|wrong_sdram_size;

    logic p0_req,p1_req,p2_req,p3_req,p4_req,p5_req;
    logic [26:1] p0_addr,p3_addr,p4_addr;
    logic [26:3] p1_addr,p5_addr;
    logic [26:4] p2_addr;
    logic [15:0] p0_data,p3_data,p4_data;
    logic [63:0] p1_data,p5_data;
    logic [127:0] p2_data;
    logic p0_ack,p1_ack,p2_ack,p3_ack,p4_ack,p5_ack;
    logic cwr_req,cwr_ack;
    logic [26:1] cwr_addr;
    logic [15:0] cwr_data;
    logic [1:0] cwr_be;
    logic core_ce,hblank,vblank,hsync,vsync;
    logic [7:0] r,g,b;
    s24_core core(
        .clk(clk_sys),.reset(core_reset),.pause(status[6]),.board(descriptor),
        .key_wr(key_wr),.key_word_addr(key_word_addr),.key_wdata(key_wdata),
        .input_ports(input_ports),
        .spinner0(spinner0),.spinner1(spinner1),
        .spinner2(spinner2),.spinner3(spinner3),
        .paddle0(paddle0),.paddle1(paddle1),
        .paddle2(paddle2),.paddle3(paddle3),
        .ce_pixel(core_ce),.hblank(hblank),.vblank(vblank),
        .hsync(hsync),.vsync(vsync),.red(r),.green(g),.blue(b),
        .audio_l(AUDIO_L),.audio_r(AUDIO_R),
        .p0_req(p0_req),.p0_addr(p0_addr),.p0_data(p0_data),.p0_ack(p0_ack),
        .p1_req(p1_req),.p1_addr(p1_addr),.p1_data(p1_data),.p1_ack(p1_ack),
        .p2_req(p2_req),.p2_addr(p2_addr),.p2_data(p2_data),.p2_ack(p2_ack),
        .p3_req(p3_req),.p3_addr(p3_addr),.p3_data(p3_data),.p3_ack(p3_ack),
        .p4_req(p4_req),.p4_addr(p4_addr),.p4_data(p4_data),.p4_ack(p4_ack),
        .p5_req(p5_req),.p5_addr(p5_addr),.p5_data(p5_data),.p5_ack(p5_ack),
        .wr_req(cwr_req),.wr_addr(cwr_addr),.wr_data(cwr_data),.wr_be(cwr_be),.wr_ack(cwr_ack));

    logic swr_req,swr_ack;
    logic [26:1] swr_addr;
    logic [15:0] swr_data;
    logic [1:0] swr_be;
    assign swr_req=lwr_req|cwr_req;
    assign swr_addr=lwr_req?lwr_addr:cwr_addr;
    assign swr_data=lwr_req?lwr_data:cwr_data;
    assign swr_be=lwr_req?lwr_be:cwr_be;
    assign lwr_ack=swr_ack&&lwr_req;
    assign cwr_ack=swr_ack&&cwr_req&&!lwr_req;

    sdram memory(
        .clk(clk_ram),.init(~pll_locked),.ready(sdram_ready),
        .SDRAM_DQ(SDRAM_DQ),.SDRAM_A(SDRAM_A),.SDRAM_BA(SDRAM_BA),
        .SDRAM_DQML(SDRAM_DQML),.SDRAM_DQMH(SDRAM_DQMH),.SDRAM_nCS(SDRAM_nCS),
        .SDRAM_nCAS(SDRAM_nCAS),.SDRAM_nRAS(SDRAM_nRAS),.SDRAM_nWE(SDRAM_nWE),
        .SDRAM_CKE(SDRAM_CKE),.wr_req(swr_req),.wr_addr(swr_addr),
        .wr_din(swr_data),.wr_be(swr_be),.wr_ack(swr_ack),
        .p0_req(p0_req),.p0_addr(p0_addr),.p0_dout(p0_data),.p0_ack(p0_ack),
        .p1_req(p1_req),.p1_addr(p1_addr),.p1_dout(p1_data),.p1_ack(p1_ack),
        .p2_req(p2_req),.p2_addr(p2_addr),.p2_dout(p2_data),.p2_ack(p2_ack),
        .p3_req(p3_req),.p3_addr(p3_addr),.p3_dout(p3_data),.p3_ack(p3_ack),
        .p4_req(p4_req),.p4_addr(p4_addr),.p4_dout(p4_data),.p4_ack(p4_ack),
        .p5_req(p5_req),.p5_addr(p5_addr),.p5_dout(p5_data),.p5_ack(p5_ack));

    video_mixer #(.LINE_LENGTH(500),.HALF_DEPTH(0),.GAMMA(1)) video(
        .CLK_VIDEO(clk_sys),.CE_PIXEL(CE_PIXEL),.ce_pix(core_ce),
        .scandoubler(forced_scandoubler),.hq2x(1'b0),.gamma_bus(gamma_bus),
        .R(r),.G(g),.B(b),.HSync(hsync),.VSync(vsync),.HBlank(hblank),.VBlank(vblank),
        .HDMI_FREEZE(1'b0),.freeze_sync(),.VGA_R(VGA_R),.VGA_G(VGA_G),.VGA_B(VGA_B),
        .VGA_VS(VGA_VS),.VGA_HS(VGA_HS),.VGA_DE(VGA_DE));

    assign LED_USER=~rom_loaded|ioctl_download|wrong_sdram_size;
endmodule
