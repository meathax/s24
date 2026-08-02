import s24_pkg::*;

module s24_core (
    input  logic        clk,
    input  logic        reset,
    input  logic        pause,
    input  board_desc_t board,
    input  logic        key_wr,
    input  logic [11:0] key_word_addr,
    input  logic [15:0] key_wdata,
    input  logic [63:0] input_ports,
    input  logic [8:0]  spinner0,
    input  logic [8:0]  spinner1,
    input  logic [8:0]  spinner2,
    input  logic [8:0]  spinner3,
    input  logic [7:0]  paddle0,
    input  logic [7:0]  paddle1,
    input  logic [7:0]  paddle2,
    input  logic [7:0]  paddle3,

    output logic [2:0]  mahjong_line,

    output logic        ce_pixel,
    output logic        hblank,
    output logic        vblank,
    output logic        hsync,
    output logic        vsync,
    output logic [7:0]  red,
    output logic [7:0]  green,
    output logic [7:0]  blue,
    output logic [15:0] audio_l,
    output logic [15:0] audio_r,

    output logic        p0_req,
    output logic [26:1] p0_addr,
    input  logic [15:0] p0_data,
    input  logic        p0_ack,
    output logic        p1_req,
    output logic [26:3] p1_addr,
    input  logic [63:0] p1_data,
    input  logic        p1_ack,
    output logic        p2_req,
    output logic [26:4] p2_addr,
    input  logic [127:0] p2_data,
    input  logic        p2_ack,
    output logic        p3_req,
    output logic [26:1] p3_addr,
    input  logic [15:0] p3_data,
    input  logic        p3_ack,
    output logic        p4_req,
    output logic [26:1] p4_addr,
    input  logic [15:0] p4_data,
    input  logic        p4_ack,
    output logic        p5_req,
    output logic [26:3] p5_addr,
    input  logic [63:0] p5_data,
    input  logic        p5_ack,
    output logic        wr_req,
    output logic [26:1] wr_addr,
    output logic [15:0] wr_data,
    output logic [1:0]  wr_be,
    input  logic        wr_ack
);
    logic phi1, phi2, ce16, ce8, ce4;
    s24_clock_enables clocks(
        .clk(clk),.reset(reset),.pause(pause),.phi1(phi1),.phi2(phi2),
        .ce_16m(ce16),.ce_8m(ce8),.ce_4m(ce4));
    assign ce_pixel = ce16;

    logic [9:0] hcount, vcount;
    logic hsync_tick;
    // Same-cycle 655->0 raster boundary for consumers whose sequential logic
    // must observe the pre-increment vcount.
    logic line_wrap;
    assign line_wrap = ce16 && (hcount == 10'd655);
    s24_video_timing timing(
        .clk(clk),.reset(reset),.ce_pixel(ce16),.hcount(hcount),.vcount(vcount),
        .hblank(hblank),.vblank(vblank),.hsync(hsync),.vsync(vsync),
        .hsync_tick(hsync_tick));

    // ------------------------------- CPUs ---------------------------------
    logic a_rw_n,a_as_n,a_lds_n,a_uds_n,b_rw_n,b_as_n,b_lds_n,b_uds_n;
    logic a_dtack_n,b_dtack_n;
    logic [2:0] a_fc,b_fc,a_ipl_n,b_ipl_n;
    logic [15:0] a_din,a_dout,b_din,b_dout;
    logic [23:1] a_word_addr,b_word_addr;
    logic b_instr_start;
    logic [15:0] b_instr_opcode;
    logic [23:1] b_instr_address;
    logic [2:0] io_cnt;
    logic io_cnt1_d;
    logic [3:0] sub_reset_count;
    logic sub_reset;
    logic b_phi1,b_phi2;
    logic [26:0] gground_slow_count;
    logic [3:0] gground_pair_index;
    logic gground_pair_enable;
    logic gground_slow;

    // On real System 24/MAME, raising 315-5296 CNT1 releases CPU B from HALT
    // and pulses its RESET input. Preserve state on later CNT1-low halts, but
    // provide a bounded reset pulse on every low-to-high transition.
    assign sub_reset = reset | (io_cnt[1] && !io_cnt1_d) |
                       (sub_reset_count != 0);
    assign gground_slow = (gground_slow_count != 0);

    // Gain Ground measures the shared timer immediately after CPU B is
    // released. MAME models the otherwise-unrepresented bus contention by
    // scaling CPU B to 0.7 for two seconds. Keep complete phi1/phi2 pairs and
    // pass seven of every ten pairs so fx68k sees the same temporary rate.
    assign b_phi1 = phi1 && (!gground_slow || (gground_pair_index < 4'd7));
    assign b_phi2 = phi2 && (!gground_slow || gground_pair_enable);
    always_ff @(posedge clk) begin
        if(reset) begin
            io_cnt1_d<=0;
            sub_reset_count<=0;
            gground_slow_count<=0;
            gground_pair_index<=0;
            gground_pair_enable<=1'b1;
        end else begin
            io_cnt1_d<=io_cnt[1];
            if(io_cnt[1] && !io_cnt1_d) sub_reset_count<=4'd8;
            else if(sub_reset_count!=0) sub_reset_count<=sub_reset_count-1'b1;

            if(io_cnt[1] && !io_cnt1_d &&
               board.input_profile==INPUT_GGROUND) begin
                // clk is 48 MHz: 96,000,000 clocks is exactly two seconds.
                gground_slow_count<=27'd96000000;
                gground_pair_index<=0;
                gground_pair_enable<=1'b1;
            end else begin
                if(!pause && gground_slow_count!=0)
                    gground_slow_count<=gground_slow_count-1'b1;
                if(phi1) begin
                    gground_pair_enable<=!gground_slow ||
                                         (gground_pair_index < 4'd7);
                    if(gground_slow)
                        gground_pair_index<=(gground_pair_index==4'd9) ?
                                             4'd0 : gground_pair_index+1'b1;
                    else
                        gground_pair_index<=0;
                end
            end
        end
    end

    fx68k cpu_a(
        .clk(clk),.HALTn(1'b1),.extReset(reset),.pwrUp(reset),
        .enPhi1(phi1),.enPhi2(phi2),.eRWn(a_rw_n),.ASn(a_as_n),
        .LDSn(a_lds_n),.UDSn(a_uds_n),.E(),.VMAn(),
        .FC0(a_fc[0]),.FC1(a_fc[1]),.FC2(a_fc[2]),.BGn(),.oRESETn(),.oHALTEDn(),
        .DTACKn(a_dtack_n),.VPAn(~(&a_fc)),.BERRn(1'b1),.BRn(1'b1),.BGACKn(1'b1),
        .IPL0n(a_ipl_n[0]),.IPL1n(a_ipl_n[1]),.IPL2n(a_ipl_n[2]),
        .iEdb(a_din),.oEdb(a_dout),.eab(a_word_addr),
        .instr_start(),.instr_opcode(),.instr_address());
    fx68k cpu_b(
        .clk(clk),.HALTn(io_cnt[1]),.extReset(sub_reset),.pwrUp(reset),
        .enPhi1(b_phi1),.enPhi2(b_phi2),.eRWn(b_rw_n),.ASn(b_as_n),
        .LDSn(b_lds_n),.UDSn(b_uds_n),.E(),.VMAn(),
        .FC0(b_fc[0]),.FC1(b_fc[1]),.FC2(b_fc[2]),.BGn(),.oRESETn(),.oHALTEDn(),
        .DTACKn(b_dtack_n),.VPAn(~(&b_fc)),.BERRn(1'b1),.BRn(1'b1),.BGACKn(1'b1),
        .IPL0n(b_ipl_n[0]),.IPL1n(b_ipl_n[1]),.IPL2n(b_ipl_n[2]),
        .iEdb(b_din),.oEdb(b_dout),.eab(b_word_addr),
        .instr_start(b_instr_start),.instr_opcode(b_instr_opcode),
        .instr_address(b_instr_address));

    logic bus_req,bus_cpu,bus_rnw,bus_ack;
    logic [1:0] bus_be;
    logic [2:0] bus_fc;
    logic [23:0] bus_addr;
    logic [15:0] bus_dout,bus_din;
    logic a_mem_req,b_mem_req,a_mem_ack,b_mem_ack;
    logic [2:0] a_mem_fc,b_mem_fc;
    logic [23:0] a_mem_addr,b_mem_addr;
    logic [15:0] a_mem_din,b_mem_din;
    s24_cpu_bus cpu_bus(
        .clk(clk),.reset(reset),
        .a_as_n(a_as_n),.a_rw_n(a_rw_n),.a_uds_n(a_uds_n),.a_lds_n(a_lds_n),
        .a_fc(a_fc),.a_addr(a_word_addr),.a_dout(a_dout),.a_din(a_din),.a_dtack_n(a_dtack_n),
        .b_as_n(b_as_n),.b_rw_n(b_rw_n),.b_uds_n(b_uds_n),.b_lds_n(b_lds_n),
        .b_fc(b_fc),.b_addr(b_word_addr),.b_dout(b_dout),.b_din(b_din),.b_dtack_n(b_dtack_n),
        .bus_req(bus_req),.bus_cpu(bus_cpu),.bus_rnw(bus_rnw),.bus_be(bus_be),
        .bus_fc(bus_fc),.bus_addr(bus_addr),.bus_dout(bus_dout),
        .bus_din(bus_din),.bus_ack(bus_ack),.has_romboard(board.has_romboard),
        .a_mem_req(a_mem_req),.a_mem_fc(a_mem_fc),.a_mem_addr(a_mem_addr),
        .a_mem_din(a_mem_din),.a_mem_ack(a_mem_ack),
        .b_mem_req(b_mem_req),.b_mem_fc(b_mem_fc),.b_mem_addr(b_mem_addr),
        .b_mem_din(b_mem_din),.b_mem_ack(b_mem_ack));

    logic fd_start,fd_busy,fd_done,fd_irq_enter,b_iack_seen;
    logic [15:0] fd_ciphertext,fd_plaintext;
    logic [7:0] fd_state;
    s24_fd1094 fd1094(
        .clk(clk),.reset(sub_reset),.key_wr(key_wr),.key_word_addr(key_word_addr),
        .key_wdata(key_wdata),.start(fd_start),.word_address(b_mem_addr[23:1]),
        .encrypted(fd_ciphertext),.irq_enter(fd_irq_enter),.busy(fd_busy),
        .instruction_start(b_instr_start),.instruction_opcode(b_instr_opcode),
        .instruction_address(b_instr_address),
        .done(fd_done),.plaintext(fd_plaintext),.current_state(fd_state));

    always_ff @(posedge clk) begin
        fd_irq_enter<=1'b0;
        if(reset) b_iack_seen<=1'b0;
        else begin
            if(b_as_n) b_iack_seen<=1'b0;
            else if(!b_iack_seen && b_fc==3'b111) begin
                b_iack_seen<=1'b1;
                fd_irq_enter<=board.has_fd1094;
            end
        end
    end

    // ------------------------------ devices -------------------------------
    logic io_rd,io_wr;
    logic [7:0] io_dout;
    logic [63:0] io_port_out;
    logic [63:0] io_port_write_data;
    logic [7:0] io_dir,io_port_write;
    s24_io_5296 io(
        .clk(clk),.reset(reset),.rd(io_rd),.wr(io_wr),
        .addr({1'b0,bus_addr[5:1]}),
        .din(bus_dout[7:0]),.dout(io_dout),.port_in(input_ports),
        .port_out(io_port_out),.port_dir(io_dir),
        .port_write(io_port_write),.port_write_data(io_port_write_data),
        .cnt(io_cnt));
    s24_mahjong_mux mahjong_mux(
        .clk(clk),.reset(reset),
        .enable(board.input_profile==INPUT_MAHJONG),
        .port_d_write(io_port_write[3]),
        .port_d_data(io_port_write_data[31:24]),.line(mahjong_line));

    // Optional 834-6510 daughterboard. Hot Rod uses both encoder counters and
    // both ADCs; golf cabinets use the first counter when the descriptor says
    // the analog angle control is fitted.
    logic [7:0] upd0_dout,upd1_dout,adc0_dout,adc1_dout;
    logic adc0_select,adc1_select,adc0_shift,adc1_shift;
    logic [7:0] pedal0,pedal1,pedal2,pedal3;
    assign pedal0=(paddle0==0)?8'h01:paddle0;
    assign pedal1=(paddle1==0)?8'h01:paddle1;
    assign pedal2=(paddle2==0)?8'h01:paddle2;
    assign pedal3=(paddle3==0)?8'h01:paddle3;
    s24_upd4701 upd0(
        .clk(clk),.reset(reset),.spinner_x(spinner0),.spinner_y(spinner1),
        .addr(bus_addr[2:1]),.dout(upd0_dout));
    s24_upd4701 upd1(
        .clk(clk),.reset(reset),.spinner_x(spinner2),.spinner_y(spinner3),
        .addr(bus_addr[2:1]),.dout(upd1_dout));
    s24_msm6253 adc0(
        .clk(clk),.reset(reset),.select(adc0_select),.shift(adc0_shift),
        .din(bus_dout[7:0]),.an0(pedal0),.an1(pedal1),
        .an2(pedal2),.an3(pedal3),.dout(adc0_dout));
    s24_msm6253 adc1(
        .clk(clk),.reset(reset),.select(adc1_select),.shift(adc1_shift),
        .din(bus_dout[7:0]),.an0(8'hff),.an1(8'hff),
        .an2(8'hff),.an3(8'hff),.dout(adc1_dout));

    logic ym_wr, ym_write_pending, ym_addr_q;
    logic [7:0] ym_data_q;
    logic [7:0] ym_dout;
    logic ym_irq_n,ym_half;
    logic signed [15:0] ym_l,ym_r;
    always_ff @(posedge clk) if (reset) ym_half<=0; else if (ce4) ym_half<=~ym_half;
    jt51 ym(
        // The 315-5296 CNT2 callback drives YM2151 reset directly: high is
        // reset asserted and low is normal operation (MAME reset_w binding).
        .rst(reset | io_cnt[2]),.clk(clk),.cen(ce4),.cen_p1(ce4 & ym_half),
        .cs_n(~ym_wr),.wr_n(~ym_wr),.a0(ym_addr_q),.din(ym_data_q),
        .dout(ym_dout),.ct1(),.ct2(),.irq_n(ym_irq_n),.sample(),
        .left(),.right(),.xleft(ym_l),.xright(ym_r));

    logic irq_rd_a,irq_rd_b,irq_wr;
    logic irq_read_pending;
    logic [15:0] irq_dout;
    logic frc_tick;
    logic frc_mode;
    logic frc_mode_write,frc_ack_write;
    s24_irq irq(
        .clk(clk),.reset(reset),.ce_8m(ce8),.hsync_tick(line_wrap),.vcount(vcount),
        .ym_irq(~ym_irq_n),.frc_tick(frc_tick),.frc_mode(frc_mode),
        .frc_ack(frc_ack_write),.rd_a(irq_rd_a),.rd_b(irq_rd_b),
        .wr(irq_wr),.addr(bus_addr[2:1]),.din(bus_dout),.be(bus_be),
        .dout(irq_dout),.ipl_a_n(a_ipl_n),.ipl_b_n(b_ipl_n));

    logic magic_wr;
    logic [7:0] magic_dout;
    s24_magic_latch magic(
        .clk(clk),.reset(reset),.wr(magic_wr),.din(bus_dout[7:0]),
        .selector(magic_sel_t'(board.magic_table)),.dout(magic_dout));

    logic [10:0] frc_div;
    logic [10:0] frc_irq_div;
    logic [7:0] frc_count;
    always_ff @(posedge clk) begin
        if (reset) begin
            frc_div<=0; frc_irq_div<=0; frc_count<=0; frc_mode<=0;
            frc_tick<=0;
        end
        else begin
            frc_tick <= 1'b0;
            if (phi1) begin
                if (frc_irq_div == 1535) begin
                    frc_irq_div <= 0;
                    frc_tick <= 1'b1;
                end else frc_irq_div <= frc_irq_div + 1'd1;
                if ((!frc_mode && frc_div==23) || (frc_mode && frc_div==1535)) begin
                    frc_div<=0;
                    if (frc_mode) begin
                        frc_count <= (frc_count==8'h66)?0:frc_count+1'd1;
                    end else frc_count <= frc_count + 1'd1;
                end else frc_div<=frc_div+1'd1;
            end
            if (frc_mode_write) begin frc_mode<=bus_dout[0];frc_div<=0;frc_count<=0; end
        end
    end

    logic [4:0] index_count;
    always_ff @(posedge clk) begin
        if(reset) index_count<=0;
        // MAME advances the floppy index cadence at the start of scanline
        // 384, i.e. on the same 383->384 wrap that raises vblank.
        else if(line_wrap && vcount==383) index_count <= index_count==19?0:index_count+1'd1;
    end

    logic fdc_rd,fdc_wr,fdc_wait,fdc_media_req,fdc_media_wr,fdc_media_ack;
    logic fdc_read_ack,fdc_write_ack;
    logic [2:0] fdc_addr;
    logic [7:0] fdc_dout,fdc_media_wdata,fdc_media_rdata;
    logic [26:0] fdc_media_addr;
    s24_fdc fdc(
        .clk(clk),.reset(reset),.track_size({board.track_bytes_hi,board.track_bytes_lo}),
        .index_pulse(index_count!=0),.bus_rd(fdc_rd),.bus_wr(fdc_wr),.bus_addr(fdc_addr),
        .bus_din(bus_dout[7:0]),.bus_dout(fdc_dout),.bus_wait(fdc_wait),
        .media_req(fdc_media_req),.media_wr(fdc_media_wr),.media_addr(fdc_media_addr),
        .media_wdata(fdc_media_wdata),.media_rdata(fdc_media_rdata),.media_ack(fdc_media_ack));
    assign fdc_media_ack = fdc_read_ack | fdc_write_ack;

    // ------------------------------- video --------------------------------
    logic tile_wr;
    logic [15:0] tile_dout;
    // Write-only 315-5292 side registers. System 24 MAME currently models
    // these as no-ops, but they must decode separately from tile-name RAM.
    // Retaining the values gives later die/board work a safe integration point
    // without changing the current video behavior.
    logic [15:0] tile_absel, tile_xhout, tile_xvout, tile_syncmode;
    logic [11:0] t0,t1,t2,t3;
    logic tc0,tc1,tc2,tc3;
    logic tv0,tv1,tv2,tv3;
    s24_tile tile(
        .clk(clk),.reset(reset),.ce_pixel(ce16),.hcount(hcount),.vcount(vcount),
        .cpu_wr(tile_wr),.cpu_addr(bus_addr[15:1]),.cpu_din(bus_dout),.cpu_be(bus_be),
        .cpu_dout(tile_dout),.layer0_pixel(t0),.layer1_pixel(t1),
        .layer2_pixel(t2),.layer3_pixel(t3),.layer0_cat(tc0),.layer1_cat(tc1),
        .layer2_cat(tc2),.layer3_cat(tc3),.layer0_valid(tv0),.layer1_valid(tv1),
        .layer2_valid(tv2),.layer3_valid(tv3),.mem_req(p1_req),.mem_addr(p1_addr),
        .mem_data(p1_data),.mem_ack(p1_ack));
    logic [13:0] sp0,sp1,sp2,sp3,mixed;
    logic [10:0] sr0,sr1,sr2,sr3;
    s24_sprite sprite(
        .clk(clk),.reset(reset),.ce_pixel(ce16),.hcount(hcount),.vcount(vcount),
        .pixel0(sp0),.pixel1(sp1),.pixel2(sp2),.pixel3(sp3),
        .rank0(sr0),.rank1(sr1),.rank2(sr2),.rank3(sr3),
        .mem_req(p2_req),.mem_addr(p2_addr),
        .mem_data(p2_data),.mem_ack(p2_ack));

    logic mixer_wr;
    logic [15:0] mixer_dout;
    logic display_blank;
    s24_mixer mixer(
        .clk(clk),.reset(reset),.cpu_wr(mixer_wr),.cpu_addr(bus_addr[4:1]),
        .cpu_din(bus_dout),.cpu_be(bus_be),.cpu_dout(mixer_dout),
        .tile0_pixel(t0),.tile1_pixel(t1),.tile2_pixel(t2),.tile3_pixel(t3),
        .tile0_cat(tc0),.tile1_cat(tc1),.tile2_cat(tc2),.tile3_cat(tc3),
        .tile0_valid(tv0),.tile1_valid(tv1),.tile2_valid(tv2),.tile3_valid(tv3),
        .sprite0_pixel(sp0),.sprite1_pixel(sp1),.sprite2_pixel(sp2),.sprite3_pixel(sp3),
        .sprite0_rank(sr0),.sprite1_rank(sr1),.sprite2_rank(sr2),.sprite3_rank(sr3),
        .mixed_pixel(mixed),
        .display_blank(display_blank));

    // Keep the byte lanes separate so Quartus can infer byte-enabled true
    // dual-port M10Ks: port A supplies the pixel stream while port B serves
    // CPU reads and writes.
    (* ramstyle="M10K, no_rw_check" *) logic [7:0] palette_ram_lo [0:8191];
    (* ramstyle="M10K, no_rw_check" *) logic [7:0] palette_ram_hi [0:8191];
    logic palette_wr;
    logic [15:0] palette_word, palette_cpu_word;
    logic palette_shadow_bank, palette_display_blank;
    logic [7:0] palette_red, palette_green, palette_blue;
    integer palette_init;
    initial begin
        // Quartus 17 rejects a single elaboration loop above 5000 iterations.
        for (palette_init=0; palette_init<4096; palette_init=palette_init+1)
            {palette_ram_hi[palette_init],palette_ram_lo[palette_init]} = 16'h0000;
        for (palette_init=4096; palette_init<8192; palette_init=palette_init+1)
            {palette_ram_hi[palette_init],palette_ram_lo[palette_init]} = 16'h0000;
    end
    always_ff @(posedge clk) begin
        palette_word <= {palette_ram_hi[mixed[12:0]],
                         palette_ram_lo[mixed[12:0]]};
        palette_shadow_bank <= mixed[13];
        // The palette lookup is synchronous, so delay the 315-5294 display
        // blank by the same cycle.  Blanking the palette index alone is not
        // sufficient because software can program palette entry zero.
        palette_display_blank <= display_blank;
        palette_cpu_word <= {palette_ram_hi[bus_addr[13:1]],
                             palette_ram_lo[bus_addr[13:1]]};
        if(palette_wr && bus_be[0])
            palette_ram_lo[bus_addr[13:1]] <= bus_dout[7:0];
        if(palette_wr && bus_be[1])
            palette_ram_hi[bus_addr[13:1]] <= bus_dout[15:8];
    end
    s24_palette pal(.palette_word(palette_word),.shadow_bank(palette_shadow_bank),
                    .red(palette_red),.green(palette_green),.blue(palette_blue));
    always_comb begin
        red   = (reset || palette_display_blank) ? 8'h00 : palette_red;
        green = (reset || palette_display_blank) ? 8'h00 : palette_green;
        blue  = (reset || palette_display_blank) ? 8'h00 : palette_blue;
    end

    // --------------------------- board interconnect ------------------------
    function automatic logic is_tile_window(input logic [23:0] a);
        // MAME: 200000-20ffff mirrored by 110000. A20 and A16 are mirror
        // bits; A19:A17 must remain zero.
        is_tile_window = (a[23:21] == 3'b001) && (a[19:17] == 3'b000);
    endfunction
    function automatic logic is_tile_absel(input logic [23:0] a);
        // 220000-220001 mirrored by 11fffe.
        is_tile_absel = ((a & 24'hee0000) == 24'h220000);
    endfunction
    function automatic logic is_tile_xhout(input logic [23:0] a);
        // 240000-240001 mirrored by 11fffe.
        is_tile_xhout = ((a & 24'hee0000) == 24'h240000);
    endfunction
    function automatic logic is_tile_xvout(input logic [23:0] a);
        // 260000-260001 mirrored by 10fffe.
        is_tile_xvout = ((a & 24'hef0000) == 24'h260000);
    endfunction
    function automatic logic is_tile_syncmode(input logic [23:0] a);
        // 270000-270001 mirrored by 10fffe.
        is_tile_syncmode = ((a & 24'hef0000) == 24'h270000);
    endfunction
    function automatic logic is_fdc_window(input logic [23:0] a);
        // B00000-B0000f mirrored by 07fff0: the full B00000-B7ffff block.
        is_fdc_window = (a[23:19] == 5'b10110);
    endfunction
    function automatic logic is_sprite_window(input logic [23:0] a);
        // MAME: 600000-63ffff mirrored by 180000. A20 and A19 are mirror
        // bits, while A18 remains decoded and must be zero.
        is_sprite_window = ((a & 24'he40000) == 24'h600000);
    endfunction
    function automatic logic is_memory(input logic cpu,input logic [23:0] a);
        if (a < 24'h200000) is_memory=1;
        // Both CPUs can address both shared work-RAM banks through the common
        // high mirrors.  MAME common_map installs these before the two
        // CPU-specific low windows.
        else if (a >= 24'hf00000) is_memory=1;
        else if (a[23:21]==3'b001 && a[19]) is_memory=1; // character RAM
        else if (is_sprite_window(a)) is_memory=1;       // sprite RAM
        else if ((a>=24'hb80000&&a<=24'hbbffff)||(a>=24'hc80000&&a<=24'hcbffff))
            is_memory=board.has_romboard;
        else is_memory=0;
    endfunction
    function automatic logic is_writable(input logic cpu,input logic [23:0] a);
        if (a>=24'hf00000) is_writable=1;
        // MAME common_map() installs the 080000-0fffff Work-A window in
        // both CPU maps. It is shared RAM, not CPU-A-private memory.
        else if (a>=24'h080000&&a<24'h100000) is_writable=1;
        else if (cpu && a<24'h080000) is_writable=1;
        else if (a[23:21]==3'b001 && a[19]) is_writable=1;
        else if (is_sprite_window(a)) is_writable=1;
        else is_writable=0;
    endfunction
    function automatic [26:0] physical(input logic cpu,input logic [23:0] a,input logic [3:0] bank);
        if (a >= 24'hf80000)
            physical=SDR_WORKA_BASE+{9'd0,a[17:0]};
        else if (a >= 24'hf00000)
            physical=SDR_WORKB_BASE+{9'd0,a[17:0]};
        else if (a < 24'h080000)
            physical=(cpu?SDR_WORKB_BASE:SDR_BOOT_BASE)+{9'd0,a[17:0]};
        else if (a < 24'h100000) physical=SDR_WORKA_BASE+{9'd0,a[17:0]};
        else if (a < 24'h200000) physical=SDR_BOOT_BASE+{9'd0,a[17:0]};
        // System 24 populates 128 KB of character RAM. A18:A17 are ignored
        // throughout the mirrored 512 KB CPU window (Model 1/2 populate more).
        else if (a[23:21]==3'b001 && a[19]) physical=SDR_CHAR_BASE+{10'd0,a[16:0]};
        else if (is_sprite_window(a)) physical=SDR_SPRITE_BASE+{9'd0,a[17:0]};
        else physical=SDR_ROMBOARD_BASE+{5'd0,bank,a[17:0]};
    endfunction

    // Each physical CPU bus has its own read path into SDRAM. Keep a request
    // occupied until the CPU front-end has observed the completion pulse, so
    // its level-held AS cycle cannot be launched twice. CPU-B opcode reads add
    // the FD1094 stage after p3 returns the encrypted word.
    typedef enum logic [1:0] {MR_IDLE,MR_SDRAM,MR_DECRYPT,MR_DROP} mrstate_t;
    mrstate_t a_mrstate,b_mrstate;
    always_ff @(posedge clk) begin
        a_mem_ack<=1'b0;
        b_mem_ack<=1'b0;
        fd_start<=1'b0;
        if(reset) begin
            a_mrstate<=MR_IDLE;
            b_mrstate<=MR_IDLE;
            a_mem_din<=16'h0000;
            b_mem_din<=16'h0000;
            p0_req<=1'b0;
            p3_req<=1'b0;
            p0_addr<='0;
            p3_addr<='0;
            fd_ciphertext<=16'h0000;
        end else begin
            case(a_mrstate)
                MR_IDLE: if(a_mem_req) begin
                    p0_addr<=word_address(physical(1'b0,a_mem_addr,rom_bank[3:0]));
                    p0_req<=1'b1;
                    a_mrstate<=MR_SDRAM;
                end
                MR_SDRAM: if(p0_ack) begin
                    p0_req<=1'b0;
                    a_mem_din<=p0_data;
                    a_mem_ack<=1'b1;
                    a_mrstate<=MR_DROP;
                end
                MR_DROP: if(!a_mem_req) a_mrstate<=MR_IDLE;
                default: a_mrstate<=MR_IDLE;
            endcase

            case(b_mrstate)
                MR_IDLE: if(b_mem_req) begin
                    p3_addr<=word_address(physical(1'b1,b_mem_addr,rom_bank[3:0]));
                    p3_req<=1'b1;
                    b_mrstate<=MR_SDRAM;
                end
                MR_SDRAM: if(p3_ack) begin
                    p3_req<=1'b0;
                    if(board.has_fd1094 && b_mem_fc[1] &&
                       b_mem_addr<24'h100000) begin
                        fd_ciphertext<=p3_data;
                        fd_start<=1'b1;
                        b_mrstate<=MR_DECRYPT;
                    end else begin
                        b_mem_din<=p3_data;
                        b_mem_ack<=1'b1;
                        b_mrstate<=MR_DROP;
                    end
                end
                MR_DECRYPT: if(fd_done) begin
                    b_mem_din<=fd_plaintext;
                    b_mem_ack<=1'b1;
                    b_mrstate<=MR_DROP;
                end
                MR_DROP: if(!b_mem_req) b_mrstate<=MR_IDLE;
                default: b_mrstate<=MR_IDLE;
            endcase
        end
    end

    typedef enum logic [3:0] {X_IDLE,X_WRITE,X_LOCAL,X_TILE,
                              X_PALETTE,X_YM,X_FDC,X_WAIT} xstate_t;
    xstate_t xs;
    logic [7:0] rom_bank;
    logic cpu_wr_pending;
    logic [26:0] cpu_phys;
    logic fdc_read_busy;
    logic fdc_read_odd;

    // FDC read service uses p4; write service shares the SDRAM write port.
    always_ff @(posedge clk) begin
        fdc_read_ack<=0;
        if(reset) begin
            p4_req<=0;
            p4_addr<=0;
            fdc_media_rdata<=0;
            fdc_read_busy<=0;
            fdc_read_odd<=0;
        end
        else begin
            // The FDC holds media_req through the cycle in which it observes
            // media_ack. Keep a separate transaction guard so the still-high
            // request cannot be mistaken for the following byte after p4_req
            // drops. Also retain the requested byte lane with the address.
            if(fdc_media_req && !fdc_media_wr && !fdc_read_busy) begin
                p4_req<=1;
                p4_addr<=word_address(SDR_FLOPPY_BASE+fdc_media_addr);
                fdc_read_odd<=fdc_media_addr[0];
                fdc_read_busy<=1;
            end
            if(p4_ack&&p4_req) begin
                p4_req<=0;fdc_read_ack<=1;
                fdc_media_rdata<=fdc_read_odd?p4_data[15:8]:p4_data[7:0];
            end
            if(fdc_read_busy && !fdc_media_req)
                fdc_read_busy<=0;
        end
    end

    always_comb begin
        wr_req=cpu_wr_pending | (fdc_media_req&&fdc_media_wr);
        if(fdc_media_req&&fdc_media_wr) begin
            wr_addr=word_address(SDR_FLOPPY_BASE+fdc_media_addr);
            wr_data={fdc_media_wdata,fdc_media_wdata};
            wr_be=fdc_media_addr[0]?2'b10:2'b01;
        end else begin
            wr_addr=cpu_phys[26:1];wr_data=bus_dout;wr_be=bus_be;
        end
    end

    // JT51 samples writes only on cen_p1. Hold the CPU payload until that
    // exact enable instead of presenting a one-clk pulse that is usually
    // invisible to the chip.
    assign ym_wr = ym_write_pending && ce4 && ym_half;

    always_ff @(posedge clk) begin
        bus_ack<=0;io_rd<=0;io_wr<=0;irq_rd_a<=0;irq_rd_b<=0;irq_wr<=0;
        magic_wr<=0;tile_wr<=0;mixer_wr<=0;palette_wr<=0;fdc_rd<=0;fdc_wr<=0;
        adc0_select<=0;adc1_select<=0;adc0_shift<=0;adc1_shift<=0;
        frc_mode_write<=0;frc_ack_write<=0;
        if(reset) begin
            xs<=X_IDLE;bus_din<=16'h0000;
            cpu_wr_pending<=0;cpu_phys<=0;rom_bank<=0;
            p5_req<=0;p5_addr<=0;fdc_addr<=0;
            tile_absel<=0;tile_xhout<=0;tile_xvout<=0;tile_syncmode<=0;
            ym_write_pending<=0;ym_addr_q<=0;ym_data_q<=0;
            irq_read_pending<=0;
        end else begin
            if (ym_wr)
                ym_write_pending <= 1'b0;
            case(xs)
            X_IDLE: if(bus_req) begin
                irq_read_pending<=0;
                // A00000-AFFFFF lives on CPU A's physical bus. A CPU-B
                // crossing waits for an in-flight CPU-A memory cycle; when A
                // is idle there is no added delay, matching the measured STOP
                // exception without trying to infer the STOP instruction.
                if(bus_cpu && bus_addr[23:20]==4'ha && a_mem_req) begin
                    // Hold X_IDLE and leave the shared request pending.
                end else if(is_memory(bus_cpu,bus_addr)) begin
                    cpu_phys<=physical(bus_cpu,bus_addr,rom_bank[3:0]);
                    if(!bus_rnw && is_writable(bus_cpu,bus_addr)) begin
                        cpu_wr_pending<=1;xs<=X_WRITE;
                    end else begin bus_din<=16'h0000;xs<=X_LOCAL; end
                end else if(is_tile_window(bus_addr)) begin
                    if(bus_rnw) xs<=X_TILE;
                    else begin tile_wr<=1;xs<=X_LOCAL; end
                end else if(is_tile_absel(bus_addr)) begin
                    bus_din<=16'h0000;
                    if(!bus_rnw)tile_absel<=merge16(tile_absel,bus_dout,bus_be);
                    xs<=X_LOCAL;
                end else if(is_tile_xhout(bus_addr)) begin
                    bus_din<=16'h0000;
                    if(!bus_rnw)tile_xhout<=merge16(tile_xhout,bus_dout,bus_be);
                    xs<=X_LOCAL;
                end else if(is_tile_xvout(bus_addr)) begin
                    bus_din<=16'h0000;
                    if(!bus_rnw)tile_xvout<=merge16(tile_xvout,bus_dout,bus_be);
                    xs<=X_LOCAL;
                end else if(is_tile_syncmode(bus_addr)) begin
                    bus_din<=16'h0000;
                    if(!bus_rnw)tile_syncmode<=merge16(tile_syncmode,bus_dout,bus_be);
                    xs<=X_LOCAL;
                end else if(bus_addr[23:21]==3'b010 && !bus_addr[14]) begin
                    if(bus_rnw) xs<=X_PALETTE;
                    else begin palette_wr<=1;xs<=X_LOCAL; end
                end else if(bus_addr[23:21]==3'b010 && bus_addr[14]) begin
                    bus_din<=mixer_dout;if(!bus_rnw)mixer_wr<=1;xs<=X_LOCAL;
                end else if((bus_addr[23:21]==3'b100)&&bus_addr[8:6]==0) begin
                    // System 24 leaves the program-space unmapped value low;
                    // the 315-5296 occupies only D7:D0.  A D15:D8-only read
                    // therefore completes with zero without touching the
                    // low-lane device.
                    bus_din<={8'h00,io_dout};
                    io_rd<=bus_rnw&&bus_be[0];
                    io_wr<=~bus_rnw&&bus_be[0];
                    xs<=X_LOCAL;
                end else if((bus_addr[23:21]==3'b100)&&bus_addr[8:6]==1) begin
                    // The optional I/O daughterboard handler is a deliberate
                    // exception to the default-low map and returns 0xffff.
                    bus_din<=16'hffff;xs<=X_LOCAL;
                end else if((bus_addr[23:21]==3'b100)&&
                            bus_addr[8:2]==7'b1000000) begin
                    bus_din<={8'h00,ym_dout};
                    if(bus_rnw || !bus_be[0]) xs<=X_LOCAL;
                    else begin
                        ym_addr_q<=bus_addr[1];
                        ym_data_q<=bus_dout[7:0];
                        ym_write_pending<=1'b1;
                        xs<=X_YM;
                    end
                end else if(bus_addr[23:19]==5'b11000 && !bus_addr[4] &&
                            board.has_upd4701 &&
                            (board.hotrod_io || !bus_addr[3])) begin
                    bus_din<={8'h00,bus_addr[3]?upd1_dout:upd0_dout};
                    xs<=X_LOCAL;
                end else if(bus_addr[23:19]==5'b11000 && bus_addr[4] &&
                            board.has_adc) begin
                    bus_din<={8'h00,bus_addr[1]?adc1_dout:adc0_dout};
                    if(bus_be[0]) begin
                        if(bus_addr[1]) begin
                            adc1_shift<=bus_rnw;adc1_select<=~bus_rnw;
                        end else begin
                            adc0_shift<=bus_rnw;adc0_select<=~bus_rnw;
                        end
                    end
                    xs<=X_LOCAL;
                end else if(bus_addr[23:20]==4'ha) begin
                    bus_din<=irq_dout;irq_rd_a<=bus_rnw&&!bus_cpu;irq_rd_b<=bus_rnw&&bus_cpu;
                    irq_wr<=~bus_rnw;irq_read_pending<=bus_rnw;xs<=X_LOCAL;
                // MAME mirrors the two FDC blocks by 0x07fff0, covering the
                // complete B00000-B7FFFF region. A3 selects data/status and
                // A2:A1 select the four word registers in the data block.
                end else if(is_fdc_window(bus_addr)) begin
                    fdc_addr<=bus_addr[3] ? 3'd4 : {1'b0,bus_addr[2:1]};
                    fdc_rd<=bus_rnw;
                    // segas24.cpp accepts writes only through D7:D0.
                    // A high-byte-only 68000 write must leave the FDC intact.
                    fdc_wr<=~bus_rnw && bus_be[0];
                    xs<=X_FDC;
                end else if((bus_addr[23:18]==6'b101111)||
                            (bus_addr[23:18]==6'b110011)) begin
                    // The mapped registers live at odd byte addresses. The
                    // shared bus carries the aligned word address, so A[2:1]
                    // selects BC/CC0001,3,5,7 respectively.
                    case(bus_addr[2:1])
                        2'd0: begin
                            // The BC/CC0001 bank latch is populated only on
                            // ROM-board configurations. Floppy-only boards
                            // leave this byte open, matching rombd_common_map.
                            bus_din<=board.has_romboard?{8'h00,rom_bank}:16'h0000;
                            if(!bus_rnw && bus_be[0] && board.has_romboard)
                                rom_bank<=bus_dout[7:0];
                        end
                        2'd1: begin
                            bus_din<={15'd0,frc_mode};
                            if(!bus_rnw && bus_be[0])frc_mode_write<=1;
                        end
                        2'd2: begin
                            bus_din<={8'h00,frc_count};
                            if(!bus_rnw && bus_be[0])frc_ack_write<=1;
                        end
                        default: begin
                            bus_din<={8'h00,magic_dout};
                            if(!bus_rnw && bus_be[0])magic_wr<=1;
                        end
                    endcase
                    xs<=X_LOCAL;
                end else begin bus_din<=16'h0000;xs<=X_LOCAL; end
            end
            X_WRITE: if(wr_ack) begin cpu_wr_pending<=0;bus_ack<=1;xs<=X_WAIT;end
            X_LOCAL: begin
                // MAME's irq_r synchronizes the timer when the read handler
                // runs.  Re-sample the combinational timer payload here,
                // after the request phase, so a line-boundary update cannot
                // return the stale value captured at X_IDLE.
                if(irq_read_pending) bus_din<=irq_dout;
                bus_ack<=1;xs<=X_WAIT;
            end
            X_TILE: begin bus_din<=tile_dout;bus_ack<=1;xs<=X_WAIT;end
            X_PALETTE: begin bus_din<=palette_cpu_word;bus_ack<=1;xs<=X_WAIT;end
            X_YM: if(!ym_write_pending) begin bus_ack<=1;xs<=X_WAIT;end
            // segas24_state::fdc_r/status_r return a 16-bit 0x00xx value
            // when a floppy controller is populated.  With no media profile
            // the handler returns 0xffff instead.
            X_FDC: if(!fdc_wait) begin
                bus_din<={board.has_floppy ? 8'h00 : 8'hff,fdc_dout};
                bus_ack<=1;xs<=X_WAIT;
            end
            // bus_ack is registered in this clock domain.  The arbiter drops
            // bus_req one edge later, so do not treat that still-high request
            // as a new transaction on the intervening edge.
            X_WAIT: if(!bus_req) xs<=X_IDLE;
            default: xs<=X_IDLE;
            endcase
        end
    end

    // Complete a floppy write byte after SDRAM accepts it.
    always_ff @(posedge clk) begin
        fdc_write_ack <= 1'b0;
        if (reset) fdc_write_ack <= 1'b0;
        else if (fdc_media_req && fdc_media_wr && wr_ack)
            fdc_write_ack <= 1'b1;
    end

    // DAC is port H. MAME configures the YM channel and unsigned R-2R DAC
    // route at equal 0.50 gain into each corresponding stereo output.
    logic signed [15:0] dac_sample;
    assign dac_sample={~io_port_out[63],io_port_out[62:56],8'h00};
    function automatic logic signed [15:0] mix_sat(
        input logic signed [15:0] fm,
        input logic signed [15:0] dac
    );
        logic signed [16:0] sum;
        begin
            sum = ($signed({fm[15],fm}) >>> 1) +
                  ($signed({dac[15],dac}) >>> 1);
            if (sum > 17'sd32767)       mix_sat = 16'sh7fff;
            else if (sum < -17'sd32768) mix_sat = 16'sh8000;
            else                        mix_sat = sum[15:0];
        end
    endfunction
    assign audio_l=pause?16'sd0:mix_sat(ym_l,dac_sample);
    assign audio_r=pause?16'sd0:mix_sat(ym_r,dac_sample);
endmodule
