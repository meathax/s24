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

    (* ramstyle = "M10K, no_rw_check" *) logic [15:0] tile_ram [0:32767];
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
    integer ram_init;
    initial begin
        for (ram_init=0; ram_init<32768; ram_init=ram_init+1)
            tile_ram[ram_init] = 16'h0000;
        for (ram_init=0; ram_init<1024; ram_init=ram_init+1) begin
            line0[ram_init] = 14'h0000;
            line1[ram_init] = 14'h0000;
            line2[ram_init] = 14'h0000;
            line3[ram_init] = 14'h0000;
        end
    end

    assign cpu_dout = tile_ram[cpu_addr];
    always_ff @(posedge clk) begin
        if (cpu_wr)
            tile_ram[cpu_addr] <= merge16(tile_ram[cpu_addr], cpu_din, cpu_be);
    end

    logic display_bank, fill_bank;
    logic render_active;
    logic [1:0] render_layer;
    logic [8:0] render_x, render_y;
    logic cache_valid;
    logic [11:0] cache_char;
    logic [2:0] cache_row;
    logic [31:0] cache_bits;
    logic [11:0] request_char;
    logic [2:0] request_row;
    logic request_row_odd;

    logic [15:0] hscr_word, vscr_word, ctrl_word, line_hscr_word;
    logic [15:0] mask_word, tile_word;
    logic [8:0] source_x, source_y;
    logic selected, disabled;
    logic chosen_odd, mask_bit;
    logic [1:0] pair_even_layer;
    logic [1:0] fetch_layer;
    logic [1:0] ctrl_mode;
    logic [9:0] neg_vscroll;
    logic [8:0] horizontal_value;
    logic [14:0] mask_addr, scroll_addr, tile_addr;
    logic [11:0] wanted_char;
    logic [2:0] wanted_row;
    logic [3:0] wanted_pen;
    logic [11:0] wanted_pixel;
    logic [9:0] line_index;

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
        pair_even_layer = {render_layer[1],1'b0};
        hscr_word = tile_ram[15'h5000 + render_layer];
        vscr_word = tile_ram[15'h5004 + render_layer];
        ctrl_word = tile_ram[15'h5004 + {13'd0,render_layer[1],1'b0}];
        ctrl_mode = ctrl_word[14:13];

        scroll_addr = 15'h4000 + {render_layer,9'd0} + render_y;
        line_hscr_word = tile_ram[scroll_addr];
        mask_addr = (render_layer[1] ? 15'h6800 : 15'h6000)
                    + {render_y,2'b00} + {13'd0,render_x[8:7]};
        mask_word = tile_ram[mask_addr];
        mask_bit = mask_word[15-render_x[6:3]];

        selected = 1'b1;
        disabled = vscr_word[15];
        fetch_layer = render_layer;
        horizontal_value = 0;
        neg_vscroll = 0;
        chosen_odd = 0;
        source_x = render_x - hscr_word[8:0];
        source_y = render_y + vscr_word[8:0];

        if (ctrl_mode == 0) begin
            if (hscr_word[15])
                source_x = render_x - line_hscr_word[8:0];
            selected = (mask_bit == render_layer[0]);
        end else begin
            // Special modes are controlled by the even layer and select one
            // physical layer from the pair rather than using mask RAM.
            hscr_word = tile_ram[15'h5000 + pair_even_layer];
            vscr_word = tile_ram[15'h5004 + pair_even_layer];
            disabled = vscr_word[15];
            line_hscr_word = tile_ram[15'h4000 + {pair_even_layer,9'd0} + render_y];
            horizontal_value = hscr_word[15] ? line_hscr_word[8:0]
                                             : hscr_word[8:0];
            source_x = render_x - horizontal_value;
            source_y = render_y + vscr_word[8:0];
            neg_vscroll = 10'd0 - {1'b0,vscr_word[8:0]};
            if (ctrl_mode == 1)
                chosen_odd = !neg_vscroll[9] ^ (render_y >= neg_vscroll[8:0]);
            else
                chosen_odd = !(hscr_word[15] ? line_hscr_word[9] : hscr_word[9])
                             ^ (render_x >= horizontal_value);
            // MAME suppresses the odd physical layer's draw pass in special
            // modes. Route the selected pair member through the even logical
            // stream so it inherits the pair's even-layer mixer priority.
            selected = !render_layer[0];
            fetch_layer = {render_layer[1],chosen_odd};
        end

        tile_addr = {fetch_layer,source_y[8:3],source_x[8:3]};
        tile_word = tile_ram[tile_addr];
        wanted_char = tile_word[11:0];
        wanted_row = source_y[2:0];
        wanted_pen = cache_bits[{source_x[2:0],2'b00} +: 4];
        wanted_pixel = {tile_word[14:7],wanted_pen};
        line_index = {fill_bank,render_x};
    end

    task automatic write_line_pixel(input logic [13:0] value);
        begin
            case (render_layer)
                2'd0: line0[line_index] <= value;
                2'd1: line1[line_index] <= value;
                2'd2: line2[line_index] <= value;
                default: line3[line_index] <= value;
            endcase
        end
    endtask

    task automatic advance_renderer;
        begin
            if (render_x == 9'd495) begin
                render_x <= 0;
                cache_valid <= 1'b0;
                if (render_layer == 2'd3) render_active <= 1'b0;
                else render_layer <= render_layer + 1'd1;
            end else render_x <= render_x + 1'd1;
        end
    endtask

    always_ff @(posedge clk) begin
        if (reset) begin
            display_bank <= 0;
            fill_bank <= 1;
            render_active <= 0;
            render_layer <= 0;
            render_x <= 0;
            render_y <= 0;
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
                    {layer0_valid,layer0_cat,layer0_pixel} <= line0[{~display_bank,9'd0}];
                    {layer1_valid,layer1_cat,layer1_pixel} <= line1[{~display_bank,9'd0}];
                    {layer2_valid,layer2_cat,layer2_pixel} <= line2[{~display_bank,9'd0}];
                    {layer3_valid,layer3_cat,layer3_pixel} <= line3[{~display_bank,9'd0}];

                    // At the line boundary vcount still names the old line.
                    // Render the line after the one about to be displayed.
                    if (!render_active) begin
                        fill_bank <= display_bank;
                        render_layer <= 0;
                        render_x <= 0;
                        render_y <= (vcount >= 10'd422) ? vcount - 10'd422
                                                       : vcount[8:0] + 9'd2;
                        render_active <= (vcount >= 10'd422) || (vcount < 10'd382);
                        cache_valid <= 0;
                    end
                end else if (hcount < 10'd495) begin
                    {layer0_valid,layer0_cat,layer0_pixel} <= line0[{display_bank,hcount[8:0]+1'd1}];
                    {layer1_valid,layer1_cat,layer1_pixel} <= line1[{display_bank,hcount[8:0]+1'd1}];
                    {layer2_valid,layer2_cat,layer2_pixel} <= line2[{display_bank,hcount[8:0]+1'd1}];
                    {layer3_valid,layer3_cat,layer3_pixel} <= line3[{display_bank,hcount[8:0]+1'd1}];
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
                if (disabled || !selected) begin
                    write_line_pixel(14'd0);
                    advance_renderer();
                end else if (cache_valid && cache_char == wanted_char
                             && cache_row == wanted_row) begin
                    write_line_pixel({1'b1,tile_word[15],wanted_pixel});
                    advance_renderer();
                end else begin
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
