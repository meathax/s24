// Sega 315-5292 four-layer tile generator. Tile/control RAM is local; the
// writable 4-bpp character RAM remains in SDRAM. The inactive line is rendered
// ahead into a double-buffer, leaving enough bandwidth for all four layers.
module s24_tile (
    input  logic        clk,
    input  logic        reset,
    input  logic        ce_pixel,
    input  logic [9:0]  hcount,
    input  logic [9:0]  vcount,
    input  logic        cpu_wr,
    input  logic [14:0] cpu_addr,
    input  logic [15:0] cpu_din,
    input  logic [1:0]  cpu_be,
    output logic [15:0] cpu_dout,
    output logic [11:0] layer0_pixel,
    output logic [11:0] layer1_pixel,
    output logic [11:0] layer2_pixel,
    output logic [11:0] layer3_pixel,
    output logic        layer0_cat,
    output logic        layer1_cat,
    output logic        layer2_cat,
    output logic        layer3_cat,
    output logic        layer0_valid,
    output logic        layer1_valid,
    output logic        layer2_valid,
    output logic        layer3_valid,
    output logic        mem_req,
    output logic [26:3] mem_addr,
    input  logic [63:0] mem_data,
    input  logic        mem_ack
);
    import s24_pkg::*;

    // The CPU-visible 32K-word RAM has a synchronous video read port. Keep
    // byte lanes separate so Quartus infers byte-enabled true dual-port M10Ks.
    (* ramstyle = "M10K, no_rw_check" *) logic [7:0] tile_ram_lo [0:32767];
    (* ramstyle = "M10K, no_rw_check" *) logic [7:0] tile_ram_hi [0:32767];
    // Replicate only the small video-facing upper regions. Both copies use
    // synchronous video reads so their paths terminate in M10K output
    // registers instead of long asynchronous MLAB muxes.
    (* ramstyle = "M10K, no_rw_check" *) logic [7:0] line_scroll_issue_lo [0:2047];
    (* ramstyle = "M10K, no_rw_check" *) logic [7:0] line_scroll_issue_hi [0:2047];
    (* ramstyle = "M10K, no_rw_check" *) logic [7:0] mask_ram_lo [0:4095];
    (* ramstyle = "M10K, no_rw_check" *) logic [7:0] mask_ram_hi [0:4095];
    logic [15:0] control_regs [0:7];
    // Preserve the verification bench's diagnostic hierarchy without putting
    // this redundant array into the synthesized design.
    // synthesis translate_off
    logic [15:0] tile_ram [0:32767];
    // synthesis translate_on
    // A line entry retains validity separately from its raw palette/pen value.
    // Pen zero is transparent to the normal priority pass, but MAME's opaque
    // backdrop pass still needs color zero from the selected tile's palette.
    (* ramstyle = "M10K, no_rw_check" *) logic [13:0] line0 [0:1023];
    (* ramstyle = "M10K, no_rw_check" *) logic [13:0] line1 [0:1023];
    (* ramstyle = "M10K, no_rw_check" *) logic [13:0] line2 [0:1023];
    (* ramstyle = "M10K, no_rw_check" *) logic [13:0] line3 [0:1023];

    // MAME's 315-5292 device clears both character and tile RAM at device
    // start. Character RAM lives in the core SDRAM and is cleared by the ROM
    // loader; give the local tile/control RAM and scanline stores the same
    // deterministic power-on contents. An initial image maps to M10K startup
    // data and avoids a 32K-cycle reset scrub or reset mux on every RAM bit.
    integer ram_init0,ram_init1,ram_init2,ram_init3;
    integer ram_init4,ram_init5,ram_init6,ram_init7;
    initial for (ram_init0=0; ram_init0<4096; ram_init0=ram_init0+1) begin
        tile_ram_lo[ram_init0] = 8'h00;
        tile_ram_hi[ram_init0] = 8'h00;
    end
    initial for (ram_init1=4096; ram_init1<8192; ram_init1=ram_init1+1) begin
        tile_ram_lo[ram_init1] = 8'h00;
        tile_ram_hi[ram_init1] = 8'h00;
    end
    initial for (ram_init2=8192; ram_init2<12288; ram_init2=ram_init2+1) begin
        tile_ram_lo[ram_init2] = 8'h00;
        tile_ram_hi[ram_init2] = 8'h00;
    end
    initial for (ram_init3=12288; ram_init3<16384; ram_init3=ram_init3+1) begin
        tile_ram_lo[ram_init3] = 8'h00;
        tile_ram_hi[ram_init3] = 8'h00;
    end
    initial for (ram_init4=16384; ram_init4<20480; ram_init4=ram_init4+1) begin
        tile_ram_lo[ram_init4] = 8'h00;
        tile_ram_hi[ram_init4] = 8'h00;
    end
    initial for (ram_init5=20480; ram_init5<24576; ram_init5=ram_init5+1) begin
        tile_ram_lo[ram_init5] = 8'h00;
        tile_ram_hi[ram_init5] = 8'h00;
    end
    initial for (ram_init6=24576; ram_init6<28672; ram_init6=ram_init6+1) begin
        tile_ram_lo[ram_init6] = 8'h00;
        tile_ram_hi[ram_init6] = 8'h00;
    end
    initial for (ram_init7=28672; ram_init7<32768; ram_init7=ram_init7+1) begin
        tile_ram_lo[ram_init7] = 8'h00;
        tile_ram_hi[ram_init7] = 8'h00;
    end

    integer small_ram_init;
    initial begin
        for (small_ram_init=0; small_ram_init<2048;
             small_ram_init=small_ram_init+1) begin
            line_scroll_issue_lo[small_ram_init] = 8'h00;
            line_scroll_issue_hi[small_ram_init] = 8'h00;
        end
        for (small_ram_init=0; small_ram_init<4096;
             small_ram_init=small_ram_init+1) begin
            mask_ram_lo[small_ram_init] = 8'h00;
            mask_ram_hi[small_ram_init] = 8'h00;
        end
        for (small_ram_init=0; small_ram_init<1024;
             small_ram_init=small_ram_init+1) begin
            line0[small_ram_init] = 14'h0000;
            line1[small_ram_init] = 14'h0000;
            line2[small_ram_init] = 14'h0000;
            line3[small_ram_init] = 14'h0000;
        end
    end

    integer shadow_init;
    // synthesis translate_off
    initial begin
        for (shadow_init=0; shadow_init<32768; shadow_init=shadow_init+1)
            tile_ram[shadow_init] = 16'h0000;
    end
    // synthesis translate_on

    integer control_init;
    initial begin
        for (control_init=0; control_init<8; control_init=control_init+1)
            control_regs[control_init] = 16'h0000;
    end

    logic render_active;
    logic pipeline_advance, line_stage_valid;
    logic [1:0] render_layer, issue_line_layer;
    logic [8:0] render_x, render_y;
    logic [15:0] tile_word, mask_word, line_scroll_word;
    logic [14:0] tile_addr, mask_addr;
    always_ff @(posedge clk) begin
        cpu_dout <= {tile_ram_hi[cpu_addr],tile_ram_lo[cpu_addr]};
        if (pipeline_advance) begin
            line_scroll_word <= {
                line_scroll_issue_hi[{issue_line_layer,render_y}],
                line_scroll_issue_lo[{issue_line_layer,render_y}]
            };
            if (line_stage_valid) begin
                tile_word <= {tile_ram_hi[tile_addr],tile_ram_lo[tile_addr]};
                mask_word <= {mask_ram_hi[mask_addr[11:0]],
                              mask_ram_lo[mask_addr[11:0]]};
            end
        end
        if (cpu_wr) begin
            if (cpu_be[0]) tile_ram_lo[cpu_addr] <= cpu_din[7:0];
            if (cpu_be[1]) tile_ram_hi[cpu_addr] <= cpu_din[15:8];
            if (cpu_addr >= 15'h4000 && cpu_addr < 15'h4800) begin
                if (cpu_be[0]) begin
                    line_scroll_issue_lo[cpu_addr[10:0]] <= cpu_din[7:0];
                end
                if (cpu_be[1]) begin
                    line_scroll_issue_hi[cpu_addr[10:0]] <= cpu_din[15:8];
                end
            end
            if (cpu_addr >= 15'h6000 && cpu_addr < 15'h7000) begin
                if (cpu_be[0]) mask_ram_lo[cpu_addr[11:0]] <= cpu_din[7:0];
                if (cpu_be[1]) mask_ram_hi[cpu_addr[11:0]] <= cpu_din[15:8];
            end
            if (cpu_addr >= 15'h5000 && cpu_addr < 15'h5008)
                control_regs[cpu_addr[2:0]]
                    <= merge16(control_regs[cpu_addr[2:0]],cpu_din,cpu_be);
            // synthesis translate_off
            tile_ram[cpu_addr] <= merge16(tile_ram[cpu_addr],cpu_din,cpu_be);
            // synthesis translate_on
        end
    end

    logic display_bank, fill_bank;
    logic [9:0] line_read_addr;
    logic [13:0] line0_q,line1_q,line2_q,line3_q;
    logic cache_valid;
    logic [11:0] cache_char;
    logic [2:0] cache_row;
    logic [31:0] cache_bits;
    logic [11:0] request_char;
    logic [2:0] request_row;
    logic request_row_odd;

    assign line_read_addr = (hcount == 10'd655)
                            ? {~display_bank,9'd0}
                            : {display_bank,hcount[8:0]+1'd1};

    logic [15:0] hscr_word, vscr_word, ctrl_word, line_hscr_word;
    logic [8:0] source_x, source_y;
    logic selected, disabled;
    logic chosen_odd, mask_bit;
    logic [1:0] pair_even_layer;
    logic [1:0] ctrl_mode;
    logic [9:0] neg_vscroll;
    logic [8:0] horizontal_value;
    logic [11:0] wanted_char;
    logic [2:0] wanted_row;
    logic [3:0] wanted_pen;
    logic [11:0] wanted_pixel;
    logic [9:0] line_index;
    logic lookup_valid;
    logic renderer_can_advance, fast_skip;
    logic [1:0] lookup_layer_q;
    logic [8:0] lookup_x_q;
    logic [8:0] lookup_source_x_q,lookup_source_y_q;
    logic [1:0] lookup_ctrl_mode_q;
    logic lookup_disabled_q,lookup_chosen_odd_q;
    logic [14:0] lookup_tile_addr_q,lookup_mask_addr_q;
    logic [1:0] current_line_layer;
    logic [1:0] issue_layer, issue_pair_even_layer, issue_fetch_layer;
    logic [8:0] issue_x;
    logic [15:0] issue_hscr_word, issue_vscr_word, issue_ctrl_word;
    logic [1:0] issue_ctrl_mode;
    logic [8:0] issue_source_x, issue_source_y;
    logic [9:0] issue_neg_vscroll;
    logic issue_chosen_odd;
    logic [1:0] line_layer_q;
    logic [8:0] line_x_q, line_render_y_q;
    logic [15:0] line_hscr_q, line_vscr_q;
    logic [1:0] line_ctrl_mode_q;

    function automatic logic [26:3] character_line_address(
        input logic [11:0] character,
        input logic [2:0] row
    );
        logic [26:0] byte_address;
        begin
            // One 64-bit read contains two adjacent 32-bit character rows.
            byte_address = SDR_CHAR_BASE + {10'd0,character,5'd0}
                           + {22'd0,row[2:1],3'd0};
            character_line_address = byte_address[26:3];
        end
    endfunction

    // Coordinate and window selection are a direct streaming form of MAME's
    // draw_common(). A mask bit of one selects the odd layer in each pair.
    always_comb begin
        // tile_word and mask_word are synchronous RAM outputs. Consume them
        // only with metadata registered on the same edge as their addresses;
        // live render/control signals may already describe the next pixel.
        pair_even_layer = {lookup_layer_q[1],1'b0};
        hscr_word = 0;
        vscr_word = 0;
        ctrl_word = 0;
        ctrl_mode = lookup_ctrl_mode_q;
        current_line_layer = lookup_layer_q;
        line_hscr_word = 0;
        mask_bit = mask_word[15-lookup_x_q[6:3]];

        // In normal mode the window RAM selects the physical tilemap within
        // each pair.  MAME draw_rect() inverts the mask for the odd physical
        // map, so a zero chooses the even map and a one chooses the odd map.
        // Tile-word bit 15 is an independent mixer category and must not take
        // part in window selection (Crack Down's radar uses both values).
        selected = (lookup_ctrl_mode_q == 0)
                   ? (mask_bit == lookup_layer_q[0])
                   : !lookup_layer_q[0];
        disabled = lookup_disabled_q;
        horizontal_value = 0;
        neg_vscroll = 0;
        chosen_odd = lookup_chosen_odd_q;
        source_x = lookup_source_x_q;
        source_y = lookup_source_y_q;

        wanted_char = tile_word[11:0];
        wanted_row = source_y[2:0];
        // MAME's STEP8(0,4) layout is MS-nibble first within each 16-bit
        // character-RAM word. Preserve the two-word left-to-right order for
        // an eight-pixel row while reversing the four nibble positions inside
        // each word: 1234_5678 renders as pens 1,2,3,4,5,6,7,8.
        wanted_pen = cache_bits[{source_x[2],~source_x[1:0],2'b00} +: 4];
        wanted_pixel = {tile_word[14:7],wanted_pen};
        line_index = {fill_bank,lookup_x_q};

        // The display port erases the old scanline as it reads it.  A whole
        // transparent eight-pixel selection span therefore needs no writes
        // on the renderer port.  Skipping it preserves one-write-per-port RAM
        // inference while leaving enough clocks to prepare every scanline.
        fast_skip = lookup_valid && (disabled || !selected)
                    && lookup_x_q[2:0] == 0
                    && lookup_x_q <= 9'd488;

        renderer_can_advance = lookup_valid && render_active && !mem_req
                               && (disabled || !selected
                                   || (cache_valid
                                       && cache_char == wanted_char
                                       && cache_row == wanted_row));
        pipeline_advance = render_active && !mem_req
                           && (!lookup_valid || renderer_can_advance);

        // The line-scroll stage is the tail of the two-entry lookup pipeline.
        // Advance from that tail, rather than from the renderer head, so the
        // synchronous line-scroll and tile/mask stages remain one pixel apart.
        issue_layer = line_stage_valid ? line_layer_q : render_layer;
        issue_x = line_stage_valid ? line_x_q : render_x;
        if (line_stage_valid && line_x_q == 9'd495
            && line_layer_q != 2'd3) begin
            issue_layer = line_layer_q + 1'd1;
            issue_x = 0;
        end else if (line_stage_valid && line_x_q != 9'd495) begin
            issue_x = line_x_q + 1'd1;
        end

        // Form the line-scroll request while the current pixel is consumed.
        // The matching control metadata is registered with the synchronous
        // RAM result below.
        issue_pair_even_layer = {issue_layer[1],1'b0};
        // MAME's draw_common() indexes scroll by the physical tilemap after
        // the category pass is folded out: maps 0/1/2/3 use 5000/5001/5002/
        // 5003 and 5004/5005/5006/5007 respectively. Only special modes
        // below collapse the selected physical map onto the even member of
        // its pair, matching MAME's early return for the odd map.
        issue_hscr_word = control_regs[{1'b0,issue_layer}];
        issue_vscr_word = control_regs[3'd4 + issue_layer];
        issue_ctrl_word = control_regs[3'd4 + {issue_layer[1],1'b0}];
        issue_ctrl_mode = issue_ctrl_word[14:13];
        issue_line_layer = (issue_ctrl_mode == 0) ? issue_layer
                                                  : issue_pair_even_layer;
        if (issue_ctrl_mode != 0) begin
            issue_hscr_word =
                control_regs[{1'b0,issue_pair_even_layer}];
            issue_vscr_word =
                control_regs[3'd4 + issue_pair_even_layer];
        end

        // Consume the preceding line-scroll result and its registered
        // metadata to form the synchronous tile and mask requests.
        issue_fetch_layer = line_layer_q;
        issue_source_x = line_x_q - line_hscr_q[8:0];
        issue_source_y = line_render_y_q + line_vscr_q[8:0];
        issue_neg_vscroll = 0;
        issue_chosen_odd = 0;

        if (line_ctrl_mode_q == 0) begin
            if (line_hscr_q[15])
                issue_source_x = line_x_q - line_scroll_word[8:0];
        end else begin
            issue_source_x = line_x_q
                             - (line_hscr_q[15]
                                ? line_scroll_word[8:0]
                                : line_hscr_q[8:0]);
            issue_source_y = line_render_y_q + line_vscr_q[8:0];
            issue_neg_vscroll = 10'd0 - {1'b0,line_vscr_q[8:0]};
            if (line_ctrl_mode_q == 1)
                issue_chosen_odd = !issue_neg_vscroll[9]
                                   ^ (line_render_y_q
                                      >= issue_neg_vscroll[8:0]);
            else
                issue_chosen_odd =
                    !(line_hscr_q[15] ? line_scroll_word[9]
                                      : line_hscr_q[9])
                    ^ (line_x_q >= (line_hscr_q[15]
                                    ? line_scroll_word[8:0]
                                    : line_hscr_q[8:0]));
            issue_fetch_layer = {line_layer_q[1],issue_chosen_odd};
        end

        tile_addr = {1'b0,issue_fetch_layer,
                     issue_source_y[8:3],issue_source_x[8:3]};
        mask_addr = (line_layer_q[1] ? 15'h6800 : 15'h6000)
                    + {line_render_y_q,2'b00}
                    + {13'd0,line_x_q[8:7]};
    end

    task automatic write_line_pixel(input logic [13:0] value);
        begin
            case (lookup_layer_q)
                2'd0: line0[line_index] <= value;
                2'd1: line1[line_index] <= value;
                2'd2: line2[line_index] <= value;
                default: line3[line_index] <= value;
            endcase
        end
    endtask

    task automatic advance_renderer;
        begin
            if (lookup_x_q == 9'd495) begin
                render_x <= 0;
                cache_valid <= 1'b0;
                if (lookup_layer_q == 2'd3) render_active <= 1'b0;
                else render_layer <= lookup_layer_q + 1'd1;
            end else render_x <= lookup_x_q + 1'd1;
        end
    endtask

    task automatic advance_renderer_skip;
        begin
            if (lookup_x_q >= 9'd488) begin
                render_x <= 0;
                cache_valid <= 1'b0;
                if (lookup_layer_q == 2'd3) render_active <= 1'b0;
                else render_layer <= lookup_layer_q + 1'd1;
            end else render_x <= lookup_x_q + 9'd8;
            // Discard metadata already issued for the skipped span and
            // restart the synchronous lookup pipeline at the next boundary.
            lookup_valid <= 1'b0;
            line_stage_valid <= 1'b0;
        end
    endtask

    // Port A supplies the visible pixel and erases it after the registered
    // value has been captured.  Port B below renders into the opposite bank.
    // This follows the proven JTS16 object/scroll line-buffer discipline and
    // avoids multi-address writes on either physical RAM port.
    always @(posedge clk) begin
        line0_q <= line0[line_read_addr];
        line1_q <= line1[line_read_addr];
        line2_q <= line2[line_read_addr];
        line3_q <= line3[line_read_addr];
        if (ce_pixel) begin
            line0[line_read_addr] <= 14'd0;
            line1[line_read_addr] <= 14'd0;
            line2[line_read_addr] <= 14'd0;
            line3[line_read_addr] <= 14'd0;
        end
    end

    always @(posedge clk) begin
        if (pipeline_advance) begin
            line_stage_valid <= 1'b1;
            line_layer_q <= issue_layer;
            line_x_q <= issue_x;
            line_render_y_q <= render_y;
            line_hscr_q <= issue_hscr_word;
            line_vscr_q <= issue_vscr_word;
            line_ctrl_mode_q <= issue_ctrl_mode;
            lookup_valid <= line_stage_valid;
            if (line_stage_valid) begin
                lookup_layer_q <= line_layer_q;
                lookup_x_q <= line_x_q;
                lookup_source_x_q <= issue_source_x;
                lookup_source_y_q <= issue_source_y;
                lookup_ctrl_mode_q <= line_ctrl_mode_q;
                lookup_disabled_q <= line_vscr_q[15];
                lookup_chosen_odd_q <= issue_chosen_odd;
                lookup_tile_addr_q <= tile_addr;
                lookup_mask_addr_q <= mask_addr;
            end
        end
        if (reset) begin
            display_bank <= 0;
            fill_bank <= 1;
            render_active <= 0;
            render_layer <= 0;
            render_x <= 0;
            render_y <= 0;
            lookup_valid <= 0;
            line_stage_valid <= 0;
            line_layer_q <= 0;
            line_x_q <= 0;
            line_render_y_q <= 0;
            line_hscr_q <= 0;
            line_vscr_q <= 0;
            line_ctrl_mode_q <= 0;
            lookup_layer_q <= 0;
            lookup_x_q <= 0;
            lookup_source_x_q <= 0;
            lookup_source_y_q <= 0;
            lookup_ctrl_mode_q <= 0;
            lookup_disabled_q <= 0;
            lookup_chosen_odd_q <= 0;
            lookup_tile_addr_q <= 0;
            lookup_mask_addr_q <= 0;
            cache_valid <= 0;
            cache_char <= 0;
            cache_row <= 0;
            cache_bits <= 0;
            request_char <= 0;
            request_row <= 0;
            request_row_odd <= 0;
            mem_req <= 0;
            mem_addr <= 0;
            layer0_pixel <= 0; layer1_pixel <= 0;
            layer2_pixel <= 0; layer3_pixel <= 0;
            layer0_cat <= 0; layer1_cat <= 0;
            layer2_cat <= 0; layer3_cat <= 0;
            layer0_valid <= 0; layer1_valid <= 0;
            layer2_valid <= 0; layer3_valid <= 0;
        end else begin
            // The read address is one pixel ahead because hcount advances on
            // the same edge; the line RAM output is then stable for 3 clocks.
            if (ce_pixel) begin
                if (hcount == 10'd655) begin
                    display_bank <= ~display_bank;
                    {layer0_valid,layer0_cat,layer0_pixel} <= line0_q;
                    {layer1_valid,layer1_cat,layer1_pixel} <= line1_q;
                    {layer2_valid,layer2_cat,layer2_pixel} <= line2_q;
                    {layer3_valid,layer3_cat,layer3_pixel} <= line3_q;

                    // At the line boundary vcount still names the old line.
                    // Render the line after the one about to be displayed.
                    if (!render_active) begin
                        fill_bank <= display_bank;
                        render_layer <= 0;
                        render_x <= 0;
                        render_y <= (vcount >= 10'd422) ? vcount - 10'd422
                                                       : vcount[8:0] + 9'd2;
                        render_active <= (vcount >= 10'd422) || (vcount < 10'd382);
                        lookup_valid <= 0;
                        line_stage_valid <= 0;
                        cache_valid <= 0;
                    end
                end else if (hcount < 10'd495) begin
                    {layer0_valid,layer0_cat,layer0_pixel} <= line0_q;
                    {layer1_valid,layer1_cat,layer1_pixel} <= line1_q;
                    {layer2_valid,layer2_cat,layer2_pixel} <= line2_q;
                    {layer3_valid,layer3_cat,layer3_pixel} <= line3_q;
                end else begin
                    layer0_pixel <= 0; layer1_pixel <= 0;
                    layer2_pixel <= 0; layer3_pixel <= 0;
                    layer0_cat <= 0; layer1_cat <= 0;
                    layer2_cat <= 0; layer3_cat <= 0;
                    layer0_valid <= 0; layer1_valid <= 0;
                    layer2_valid <= 0; layer3_valid <= 0;
                end
            end

            if (mem_req) begin
                if (mem_ack) begin
                    mem_req <= 1'b0;
                    cache_char <= request_char;
                    cache_row <= request_row;
                    cache_bits <= request_row_odd ? mem_data[63:32]
                                                  : mem_data[31:0];
                    cache_valid <= 1'b1;
                end
            end else if (render_active) begin
                // synthesis translate_off
                if (lookup_valid &&
                    (lookup_layer_q != render_layer ||
                     lookup_x_q != render_x))
                    $fatal(1,
                        "tile lookup metadata drift layer/x %0d/%0d state %0d/%0d addr %h mask %h",
                        lookup_layer_q,lookup_x_q,render_layer,render_x,
                        lookup_tile_addr_q,lookup_mask_addr_q);
                // synthesis translate_on
                if (fast_skip) begin
                    advance_renderer_skip();
                end else if (lookup_valid && (disabled || !selected)) begin
                    advance_renderer();
                end else if (lookup_valid && cache_valid
                             && cache_char == wanted_char
                             && cache_row == wanted_row) begin
                    write_line_pixel({1'b1,tile_word[15],wanted_pixel});
                    advance_renderer();
                end else if (lookup_valid) begin
                    mem_addr <= character_line_address(wanted_char,wanted_row);
                    request_char <= wanted_char;
                    request_row <= wanted_row;
                    request_row_odd <= wanted_row[0];
                    mem_req <= 1'b1;
                end
            end
        end
    end
endmodule
