// Sega 315-5293/315-5295 linked-list sprite system. This is a streaming
// translation of MAME segaic24.cpp: entries are collected in list order and
// rendered backwards into an inactive scanline buffer. Sprite descriptors,
// indirect palette tables, and 4-bpp tile data all share the 256 KiB sprite
// RAM and are fetched through aligned 128-bit bursts.

// Quartus 17 does not reliably infer the sprite line buffers from a
// three-port array (display read/clear plus renderer read/write).  Keep the
// behavioural model for Verilator, but map the FPGA implementation directly
// to the Cyclone V dual-port primitive so these buffers remain M10K-backed.
module s24_sprite_line_ram #(
    parameter int WIDTH = 26,
    parameter int ADDR_WIDTH = 10
) (
    input  logic clk,
    input  logic [ADDR_WIDTH-1:0] address_a,
    input  logic [WIDTH-1:0] data_a,
    input  logic wren_a,
    output logic [WIDTH-1:0] q_a,
    input  logic [ADDR_WIDTH-1:0] address_b,
    input  logic [WIDTH-1:0] data_b,
    input  logic wren_b,
    output logic [WIDTH-1:0] q_b
);
`ifdef VERILATOR
    logic [WIDTH-1:0] mem [0:(1<<ADDR_WIDTH)-1];
    always_ff @(posedge clk) begin
        q_a <= mem[address_a];
        q_b <= mem[address_b];
        if(wren_a) mem[address_a] <= data_a;
        if(wren_b) mem[address_b] <= data_b;
    end
`else
    altsyncram ram (
        .clock0(clk), .address_a(address_a), .data_a(data_a),
        .wren_a(wren_a), .q_a(q_a),
        .clock1(clk), .address_b(address_b), .data_b(data_b),
        .wren_b(wren_b), .q_b(q_b),
        .aclr0(1'b0), .aclr1(1'b0), .addressstall_a(1'b0),
        .addressstall_b(1'b0), .byteena_a(1'b1), .byteena_b(1'b1),
        .clocken0(1'b1), .clocken1(1'b1), .clocken2(1'b1),
        .clocken3(1'b1), .eccstatus(), .rden_a(1'b1), .rden_b(1'b1)
    );
    defparam
        ram.operation_mode = "BIDIR_DUAL_PORT",
        ram.width_a = WIDTH,
        ram.width_b = WIDTH,
        ram.widthad_a = ADDR_WIDTH,
        ram.widthad_b = ADDR_WIDTH,
        ram.numwords_a = (1 << ADDR_WIDTH),
        ram.numwords_b = (1 << ADDR_WIDTH),
        ram.ram_block_type = "M10K",
        ram.intended_device_family = "Cyclone V",
        ram.lpm_type = "altsyncram",
        ram.outdata_reg_a = "CLOCK0",
        ram.outdata_reg_b = "CLOCK1",
        ram.read_during_write_mode_port_a = "NEW_DATA_NO_NBE_READ",
        ram.read_during_write_mode_port_b = "NEW_DATA_NO_NBE_READ",
        ram.width_byteena_a = 1,
        ram.width_byteena_b = 1,
        ram.power_up_uninitialized = "FALSE";
`endif
endmodule

// A descriptor/clip pair is read as a packed pair while only one half is
// written during list collection. Separate low/high arrays give Quartus one
// clean write port per inferred RAM instead of a variable part-select write.
module s24_sprite_pair_ram #(
    parameter int WIDTH = 128,
    parameter int ADDR_WIDTH = 9
) (
    input logic clk,
    input logic [ADDR_WIDTH-1:0] read_addr,
    output logic [WIDTH*2-1:0] read_data,
    input logic [ADDR_WIDTH-1:0] write_addr,
    input logic [WIDTH-1:0] write_data,
    input logic write_enable,
    input logic write_high
);
`ifdef VERILATOR
    logic [WIDTH-1:0] mem_lo [0:(1<<ADDR_WIDTH)-1];
    logic [WIDTH-1:0] mem_hi [0:(1<<ADDR_WIDTH)-1];
    always_ff @(posedge clk) begin
        read_data <= {mem_hi[read_addr],mem_lo[read_addr]};
        if(write_enable) begin
            if(write_high) mem_hi[write_addr] <= write_data;
            else mem_lo[write_addr] <= write_data;
        end
    end
`else
    logic [WIDTH-1:0] q_lo,q_hi;
    altsyncram ram_lo (
        .clock0(clk), .address_a(read_addr), .data_a('0),
        .wren_a(1'b0), .q_a(q_lo),
        .clock1(clk), .address_b(write_addr), .data_b(write_data),
        .wren_b(write_enable && !write_high), .q_b(),
        .aclr0(1'b0), .aclr1(1'b0), .addressstall_a(1'b0),
        .addressstall_b(1'b0), .byteena_a(1'b1), .byteena_b(1'b1),
        .clocken0(1'b1), .clocken1(1'b1), .clocken2(1'b1),
        .clocken3(1'b1), .eccstatus(), .rden_a(1'b1), .rden_b(1'b0)
    );
    altsyncram ram_hi (
        .clock0(clk), .address_a(read_addr), .data_a('0),
        .wren_a(1'b0), .q_a(q_hi),
        .clock1(clk), .address_b(write_addr), .data_b(write_data),
        .wren_b(write_enable && write_high), .q_b(),
        .aclr0(1'b0), .aclr1(1'b0), .addressstall_a(1'b0),
        .addressstall_b(1'b0), .byteena_a(1'b1), .byteena_b(1'b1),
        .clocken0(1'b1), .clocken1(1'b1), .clocken2(1'b1),
        .clocken3(1'b1), .eccstatus(), .rden_a(1'b1), .rden_b(1'b0)
    );
    // q_lo/q_hi are already registered by the M10K output registers.  A
    // second fabric register here made hardware reads one cycle later than
    // the behavioural Verilator model and displaced descriptor/clip pairs.
    assign read_data = {q_hi,q_lo};
    defparam
        ram_lo.operation_mode = "BIDIR_DUAL_PORT",
        ram_hi.operation_mode = "BIDIR_DUAL_PORT",
        ram_lo.width_a = WIDTH, ram_hi.width_a = WIDTH,
        ram_lo.width_b = WIDTH, ram_hi.width_b = WIDTH,
        ram_lo.widthad_a = ADDR_WIDTH, ram_hi.widthad_a = ADDR_WIDTH,
        ram_lo.widthad_b = ADDR_WIDTH, ram_hi.widthad_b = ADDR_WIDTH,
        ram_lo.numwords_a = (1 << ADDR_WIDTH),
        ram_hi.numwords_a = (1 << ADDR_WIDTH),
        ram_lo.numwords_b = (1 << ADDR_WIDTH),
        ram_hi.numwords_b = (1 << ADDR_WIDTH),
        ram_lo.ram_block_type = "M10K", ram_hi.ram_block_type = "M10K",
        ram_lo.intended_device_family = "Cyclone V",
        ram_hi.intended_device_family = "Cyclone V",
        ram_lo.lpm_type = "altsyncram", ram_hi.lpm_type = "altsyncram",
        ram_lo.outdata_reg_a = "CLOCK0", ram_hi.outdata_reg_a = "CLOCK0",
        ram_lo.width_byteena_a = 1, ram_hi.width_byteena_a = 1,
        ram_lo.width_byteena_b = 1, ram_hi.width_byteena_b = 1,
        ram_lo.power_up_uninitialized = "FALSE",
        ram_hi.power_up_uninitialized = "FALSE";
`endif
endmodule

module s24_sprite (
    input  logic         clk,
    input  logic         reset,
    input  logic         ce_pixel,
    input  logic [9:0]   hcount,
    input  logic [9:0]   vcount,
    // The frontmost nontransparent candidate for each of the four sprite
    // priority groups. A later-list sprite that is blocked by tile priority
    // must not hide an earlier sprite from another group, so final selection
    // belongs in the mixer. Rank is the reverse-list position (larger is
    // nearer the front).
    output logic [13:0]  pixel0,
    output logic [13:0]  pixel1,
    output logic [13:0]  pixel2,
    output logic [13:0]  pixel3,
    output logic [10:0]  rank0,
    output logic [10:0]  rank1,
    output logic [10:0]  rank2,
    output logic [10:0]  rank3,
    output logic         mem_req,
    output logic [26:4]  mem_addr,
    input  logic [127:0] mem_data,
    input  logic         mem_ack
);
    import s24_pkg::*;

    localparam int STACK_DEPTH = 1024;
    localparam int STACK_BITS = 10;
    localparam logic [STACK_BITS:0] STACK_COUNT_LIMIT = 11'd1024;
    localparam logic [STACK_BITS:0] STACK_LAST = 11'd1023;

    // {valid, reverse-list rank, 14-bit palette/shadow pixel}. Keeping one
    // candidate per priority group reproduces MAME's rule that a tile-blocked
    // front sprite leaves the priority bitmap unlocked for earlier sprites.
    // Port A feeds the visible scanline while port B performs the renderer's
    // read-before-write validity check and pixel update.
    // Complete normal descriptors are buffered once per frame. The small
    // index stack is then reused as the active-scanline list.
    // Two adjacent descriptors share each wide RAM word.  The per-line
    // active filter consumes the pair together, halving the scan cost for
    // long lists such as SSpirits' 1002 normal descriptors without storing
    // any additional descriptor bits.
    (* ramstyle="M10K, no_rw_check" *) logic [9:0] sprite_stack [0:STACK_DEPTH-1];
    // {valid, flags, top, left, bottom, right}; raw clip coordinates are kept
    // because the -8 X origin and reverse-Y rule are applied while rendering.
    logic line_b_wren;
    logic [1:0] line_b_sel;
    logic [9:0] line_b_addr;
    logic [25:0] line_b_data;
    logic descriptor_write_enable,descriptor_write_high;
    logic [8:0] descriptor_write_addr;
    logic [127:0] descriptor_write_data;
    logic [80:0] clip_write_data;

    s24_sprite_pair_ram #(.WIDTH(128),.ADDR_WIDTH(9)) descriptor_stack_ram (
        .clk(clk),.read_addr(descriptor_read_pair),
        .read_data(descriptor_stack_pair_q),.write_addr(descriptor_write_addr),
        .write_data(descriptor_write_data),.write_enable(descriptor_write_enable),
        .write_high(descriptor_write_high));
    s24_sprite_pair_ram #(.WIDTH(81),.ADDR_WIDTH(9)) clip_stack_ram (
        .clk(clk),.read_addr(descriptor_read_pair),
        .read_data(clip_stack_pair_q),.write_addr(descriptor_write_addr),
        .write_data(clip_write_data),.write_enable(descriptor_write_enable),
        .write_high(descriptor_write_high));

    function automatic logic [15:0] burst_word(
        input logic [127:0] data,input logic [2:0] index
    );
        burst_word = data[index*16 +: 16];
    endfunction

    function automatic logic [26:4] sprite_burst(input logic [16:0] word_offset);
        begin
            sprite_burst = SDR_SPRITE_BASE[26:4] + {9'd0,word_offset[16:3]};
        end
    endfunction

    function automatic logic [7:0] palette_entry(
        input logic [127:0] palette_data,input logic [3:0] pen
    );
        logic [15:0] pair;
        begin
            pair = burst_word(palette_data,pen[3:1]);
            palette_entry = pen[0] ? pair[7:0] : pair[15:8];
        end
    endfunction

    typedef enum logic [4:0] {
        S_IDLE,S_CLEAR,S_LIST_REQ,S_LIST_WAIT,S_SCAN_PREFETCH,S_SCAN,S_SCAN_SECOND,
        S_RENDER_PREFETCH,S_RENDER_REQ,
        S_RENDER_WAIT,S_RENDER_SETUP,S_YDIV,S_YMAP,S_PALETTE_WAIT,S_X_SOURCE,S_DATA_WAIT,S_X_EMIT,
        S_NEXT_SPRITE
    } state_t;
    state_t state;

    logic display_bank,fill_bank;
    logic [1:0] line_valid;
    logic [9:0] display_read_addr,render_read_addr;
    logic [25:0] line0_display_q,line1_display_q;
    logic [25:0] line2_display_q,line3_display_q;
    logic [25:0] line0_render_q,line1_render_q;
    logic [25:0] line2_render_q,line3_render_q;
    logic [8:0] clear_x,target_y;
    logic [12:0] list_index;
    logic [13:0] list_seen;
    logic list_cache_valid;
    logic frame_epoch,cache_epoch;
    logic [15:0] current_clip_flags,current_clip_top,current_clip_left;
    logic [15:0] current_clip_bottom,current_clip_right;
    logic current_clip_valid;
    logic [STACK_BITS:0] stack_count,render_pos;
    logic [STACK_BITS-1:0] stack_head;
    logic [STACK_BITS-1:0] stack_write_slot,stack_render_slot;
    logic [9:0] sprite_stack_q;
    logic [255:0] descriptor_stack_pair_q;
    logic [161:0] clip_stack_pair_q;
    logic [127:0] descriptor_stack_q,scan_descriptor1;
    logic [80:0] clip_stack_q,scan_clip1;
    logic [80:0] render_clip;
    logic [127:0] descriptor,palette_table,data_cache;
    (* ramstyle="MLAB, no_rw_check" *) logic [127:0] palette_cache_data [0:7];
    logic [13:0] palette_cache_tags [0:7];
    logic [7:0] palette_cache_valid;
    logic [2:0] palette_cache_index;
    logic palette_cache_hit;
    logic [13:0] data_cache_tag;
    logic data_cache_valid;

    logic [8:0] zoomx_step,zoomy_step;
    logic [5:0] x_accum,y_accum;
    logic [2:0] emit_count;
    logic [10:0] source_row,source_column,total_rows,total_columns;
    logic signed [12:0] dest_y,dest_x;
    logic flipx,flipy;
    logic [7:0] size_x_tiles,size_y_tiles;
    logic [16:0] wanted_word;
    logic [3:0] wanted_nibble;
    logic [3:0] current_pen;
    logic [7:0] mapped_color;
    logic [16:0] line_value;
    logic vertical_allowed;
    logic signed [12:0] clip_min_x,clip_max_x,clip_first,clip_last;
    logic signed [12:0] descriptor_origin_x;
    logic [12:0] descriptor_output_width;
    logic signed [13:0] descriptor_right_x;

    logic [15:0] d2,d3,d5;
    // Quartus 17 cannot apply a part-select directly to a function call.
    // Decode the active burst once so the sequential state machine can use
    // ordinary signals for descriptor fields.
    logic [15:0] mem_w0,mem_w1,mem_w2,mem_w3,mem_w4,mem_w5;
    logic [13:0] palette_base;
    logic [16:0] tile_base;
    logic [7:0] tile_x,tile_y;
    logic [2:0] within_x,within_y;
    logic [17:0] word_calc;
    logic [13:0] tile_ordinal;
    logic [13:0] wanted_tag;
    logic [15:0] wanted_data_word;
    logic [8:0] x_sum,y_sum;
    logic [8:0] descriptor_zoomy_step;
    logic [10:0] descriptor_total_rows;
    logic signed [12:0] descriptor_origin_y;
    logic signed [13:0] descriptor_bottom_y;
    logic [17:0] ydiv_dividend,ydiv_quotient;
    logic [18:0] ydiv_remainder,ydiv_next_remainder;
    logic [8:0] ydiv_divisor;
    logic [10:0] ydiv_total_rows;
    logic [4:0] ydiv_count;
    logic [18:0] ydiv_shifted_remainder;
    logic [17:0] ydiv_next_quotient;
    logic signed [9:0] ydiv_adjust_value;
    logic [11:0] descriptor_target_offset;
    logic [STACK_BITS:0] scan_pos,active_count;
    logic [STACK_BITS-1:0] stack_scan_slot;
    logic [STACK_BITS-2:0] descriptor_read_pair;
    logic [15:0] scan_w1,scan_w4,scan1_w1,scan1_w4;
    logic [15:0] render_w0,render_w1,render_w2,render_w3,render_w4,render_w5;
    logic [8:0] render_zoomx_step;
    logic [19:0] descriptor_width_sum;
    logic [8:0] scan_zoomy_step;
    logic [10:0] scan_total_rows;
    logic [19:0] scan_height_sum;
    logic [12:0] scan_height;
    logic signed [12:0] scan_origin_y;
    logic signed [13:0] scan_bottom_y;
    logic scan_vertical_allowed,scan_active;
    logic [8:0] scan1_zoomy_step;
    logic [10:0] scan1_total_rows;
    logic [19:0] scan1_height_sum;
    logic [12:0] scan1_height;
    logic signed [12:0] scan1_origin_y;
    logic signed [13:0] scan1_bottom_y;
    logic scan1_vertical_allowed,scan1_active;
    logic scan_pair_valid;
    logic [1:0] scan_advance;
    logic [STACK_BITS:0] scan_next_pos;
    logic [STACK_BITS-1:0] scan_next_slot;
    logic [STACK_BITS-1:0] scan_second_index;
    logic scan_second_last;

    // STACK_DEPTH is a power of two; assignment truncation performs wrap.
    // Once full, overwrite the oldest cached descriptor so the bounded ring
    // retains MAME's newest/frontmost list entries.
    assign stack_write_slot=(stack_count<STACK_COUNT_LIMIT)
                            ? stack_count[STACK_BITS-1:0] : stack_head;
    assign stack_render_slot=render_pos[STACK_BITS-1:0];
    assign stack_scan_slot=stack_head+scan_pos[STACK_BITS-1:0];
    // Packed descriptor RAM supplies two logical entries per clock whenever
    // the ring cursor is physically even.  An odd head peels one upper-half
    // entry, then resumes paired scanning at the next even physical slot.
    assign scan_pair_valid=!stack_scan_slot[0] &&
                           (scan_pos+1'b1<stack_count);
    assign scan_advance=scan_pair_valid ? 2'd2 : 2'd1;
    assign scan_next_pos=scan_pos+{{(STACK_BITS-1){1'b0}},scan_advance};
    assign scan_next_slot=stack_scan_slot+
                          {{(STACK_BITS-2){1'b0}},scan_advance};

    always_comb begin
        if(state==S_SCAN_PREFETCH)
            descriptor_read_pair=stack_scan_slot[STACK_BITS-1:1];
        else if(state==S_SCAN || state==S_SCAN_SECOND)
            descriptor_read_pair=scan_next_slot[STACK_BITS-1:1];
        else
            descriptor_read_pair=sprite_stack_q[STACK_BITS-1:1];

        if(state==S_SCAN_PREFETCH || state==S_SCAN || state==S_SCAN_SECOND) begin
            if(stack_scan_slot[0]) begin
                descriptor_stack_q=descriptor_stack_pair_q[255:128];
                clip_stack_q=clip_stack_pair_q[161:81];
            end else begin
                descriptor_stack_q=descriptor_stack_pair_q[127:0];
                clip_stack_q=clip_stack_pair_q[80:0];
            end
        end else if(sprite_stack_q[0]) begin
            descriptor_stack_q=descriptor_stack_pair_q[255:128];
            clip_stack_q=clip_stack_pair_q[161:81];
        end else begin
            descriptor_stack_q=descriptor_stack_pair_q[127:0];
            clip_stack_q=clip_stack_pair_q[80:0];
        end
        scan_descriptor1=descriptor_stack_pair_q[255:128];
        scan_clip1=clip_stack_pair_q[161:81];
    end

    always_comb begin
        display_read_addr = (hcount==10'd655)
                            ? {~display_bank,9'd0}
                            : {display_bank,hcount[8:0]+1'b1};
        render_read_addr = {fill_bank,dest_x[8:0]};
        if(state==S_X_EMIT)
            render_read_addr = {fill_bank,dest_x[8:0]+1'b1};

        mem_w0=burst_word(mem_data,0);mem_w1=burst_word(mem_data,1);
        mem_w2=burst_word(mem_data,2);mem_w3=burst_word(mem_data,3);
        mem_w4=burst_word(mem_data,4);mem_w5=burst_word(mem_data,5);
        d2=burst_word(descriptor,2);d3=burst_word(descriptor,3);
        d5=burst_word(descriptor,5);
        palette_base=d3[13:0];
        palette_cache_index=palette_base[2:0];
        palette_cache_hit=palette_cache_valid[palette_cache_index] &&
                          palette_cache_tags[palette_cache_index]==palette_base;
        tile_base={d2[12:0],4'b0};
        total_rows={size_y_tiles,3'b0};
        total_columns={size_x_tiles,3'b0};

        tile_y=source_row[10:3];
        within_y=source_row[2:0];
        tile_x=source_column[10:3];
        within_x=source_column[2:0];
        if(flipy) begin
            tile_y=size_y_tiles-1'b1-tile_y;
            within_y=3'd7-within_y;
        end
        if(flipx) begin
            tile_x=size_x_tiles-1'b1-tile_x;
            within_x=3'd7-within_x;
        end
        // MAME masks every sprite-data word address to the 0x20000-word RAM.
        // Widen before multiplication. An 8-bit multiply would truncate
        // ordinals for sprites wider/taller than 32 tiles before MAME's final
        // 0x1ffff-word RAM address mask is applied.
        tile_ordinal=({6'd0,tile_y}*{6'd0,size_x_tiles})+{6'd0,tile_x};
        word_calc={1'b0,tile_base} + {tile_ordinal,4'b0}
                  + {14'd0,within_y,1'b0} + {17'd0,within_x[2]};
        wanted_word=word_calc[16:0];
        wanted_nibble={~within_x[1:0],2'b00};
        wanted_tag=wanted_word[16:3];
        wanted_data_word=burst_word(data_cache,wanted_word[2:0]);
        current_pen=wanted_data_word[wanted_nibble +: 4];
        mapped_color=palette_entry(palette_table,current_pen);
        // The 315-5293/5295 does not reserve source pen zero for
        // transparency. MAME first indexes the 16-byte indirect table and
        // only color zero from that table is transparent. Palette entry zero
        // may therefore produce an ordinary visible pixel or the shadow pen.
        if(mapped_color==0) line_value=17'd0;
        else if(mapped_color==1) line_value={1'b1,2'b00,14'h2000};
        else line_value={1'b1,mapped_color[7:6],1'b0,1'b1,
                         4'b0000,mapped_color};

        x_sum={3'd0,x_accum}+zoomx_step;
        y_sum={3'd0,y_accum}+zoomy_step;
        render_w0=burst_word(descriptor_stack_q,0);
        render_w1=burst_word(descriptor_stack_q,1);
        render_w2=burst_word(descriptor_stack_q,2);
        render_w3=burst_word(descriptor_stack_q,3);
        render_w4=burst_word(descriptor_stack_q,4);
        render_w5=burst_word(descriptor_stack_q,5);
        render_zoomx_step=(!render_w0[13] ? render_w1[7:0]
                                               : render_w1[15:8])==0
                          ? 9'h040
                          : {1'b0,(!render_w0[13] ? render_w1[7:0]
                                                   : render_w1[15:8])}+1'b1;
        descriptor_width_sum=20'd32
                             + ({11'd0,render_zoomx_step}
                                << (render_w5[14:12]+3));
        descriptor_right_x=$signed({descriptor_origin_x[12],
                                     descriptor_origin_x})
                           + $signed({1'b0,descriptor_output_width})-14'sd1;
        descriptor_zoomy_step=(render_w1[7:0]==0)
                              ? 9'h040
                              : {1'b0,render_w1[7:0]}+1'b1;
        descriptor_total_rows=11'd8 << render_w4[14:12];
        descriptor_origin_y=$signed({render_w4[11],render_w4[11:0]});
        descriptor_bottom_y=$signed(descriptor_origin_y)
                            + $signed({3'd0,descriptor_total_rows});
        descriptor_target_offset=$signed({4'd0,target_y})
                                 - descriptor_origin_y;

        ydiv_shifted_remainder={ydiv_remainder[17:0],
                                ydiv_dividend[17]};
        ydiv_next_remainder=ydiv_shifted_remainder;
        ydiv_next_quotient={ydiv_quotient[16:0],1'b0};
        if(ydiv_shifted_remainder>={10'd0,ydiv_divisor}) begin
            ydiv_next_remainder=ydiv_shifted_remainder
                                - {10'd0,ydiv_divisor};
            ydiv_next_quotient[0]=1'b1;
        end
        // N = 64*d+31 = q*s+r. Therefore the selected source row starts at
        // d + floor((63-r)/64), with accumulator (63-r) modulo 64.
        ydiv_adjust_value=10'sd63
                          - $signed({1'b0,ydiv_next_remainder[8:0]});

        scan_w1=burst_word(descriptor_stack_q,1);
        scan_w4=burst_word(descriptor_stack_q,4);
        scan_zoomy_step=(scan_w1[7:0]==0)
                        ? 9'h040 : {1'b0,scan_w1[7:0]}+1'b1;
        scan_total_rows=11'd8 << scan_w4[14:12];
        scan_height_sum=20'd32
                        + ({11'd0,scan_zoomy_step} << (scan_w4[14:12]+3));
        scan_height=scan_height_sum[19:6];
        scan_origin_y=$signed({scan_w4[11],scan_w4[11:0]});
        scan_bottom_y=$signed(scan_origin_y)+$signed({1'b0,scan_height});
        scan_vertical_allowed=(target_y<9'd384);
        if(clip_stack_q[80]) begin
            if(clip_stack_q[77])
                scan_vertical_allowed=scan_vertical_allowed &&
                    (($signed({4'd0,target_y})<=
                      $signed({4'd0,clip_stack_q[56:48]})-13'sd1) ||
                     ($signed({4'd0,target_y})>=
                      $signed({4'd0,clip_stack_q[24:16]})+13'sd1));
            else
                scan_vertical_allowed=scan_vertical_allowed &&
                    target_y>=clip_stack_q[56:48] &&
                    target_y<=clip_stack_q[24:16];
        end
        scan_active=scan_vertical_allowed &&
                    $signed({4'd0,target_y})>=scan_origin_y &&
                    $signed({4'd0,target_y})<scan_bottom_y;

        scan1_w1=burst_word(scan_descriptor1,1);
        scan1_w4=burst_word(scan_descriptor1,4);
        scan1_zoomy_step=(scan1_w1[7:0]==0)
                         ? 9'h040 : {1'b0,scan1_w1[7:0]}+1'b1;
        scan1_total_rows=11'd8 << scan1_w4[14:12];
        scan1_height_sum=20'd32
                         + ({11'd0,scan1_zoomy_step} << (scan1_w4[14:12]+3));
        scan1_height=scan1_height_sum[19:6];
        scan1_origin_y=$signed({scan1_w4[11],scan1_w4[11:0]});
        scan1_bottom_y=$signed(scan1_origin_y)+$signed({1'b0,scan1_height});
        scan1_vertical_allowed=(target_y<9'd384);
        if(scan_clip1[80]) begin
            if(scan_clip1[77])
                scan1_vertical_allowed=scan1_vertical_allowed &&
                    (($signed({4'd0,target_y})<=
                      $signed({4'd0,scan_clip1[56:48]})-13'sd1) ||
                     ($signed({4'd0,target_y})>=
                      $signed({4'd0,scan_clip1[24:16]})+13'sd1));
            else
                scan1_vertical_allowed=scan1_vertical_allowed &&
                    target_y>=scan_clip1[56:48] &&
                    target_y<=scan_clip1[24:16];
        end
        scan1_active=scan1_vertical_allowed &&
                     scan_pair_valid &&
                     (scan_pos+1'b1<stack_count) &&
                     $signed({4'd0,target_y})>=scan1_origin_y &&
                     $signed({4'd0,target_y})<scan1_bottom_y;

        // With no clip descriptor MAME clips the already origin-adjusted
        // destination coordinate to the complete 496-pixel visible area.
        // The -8 offset belongs to the sprite X origin, not to this default
        // screen rectangle; explicit clip descriptors apply it below.
        clip_min_x=13'sd0;
        clip_max_x=13'sd495;
        clip_first=13'sd383;
        clip_last=13'sd0;
        vertical_allowed=(target_y<9'd384);
        if(render_clip[80]) begin
            clip_min_x=$signed({4'd0,render_clip[40:32]})-13'sd8;
            clip_max_x=$signed({4'd0,render_clip[8:0]})-13'sd8;
            if(render_clip[77]) begin
                clip_first=$signed({4'd0,render_clip[56:48]})-13'sd1;
                clip_last=$signed({4'd0,render_clip[24:16]})+13'sd1;
                vertical_allowed=vertical_allowed &&
                    (($signed({4'd0,target_y})<=clip_first) ||
                     ($signed({4'd0,target_y})>=clip_last));
            end else begin
                vertical_allowed=vertical_allowed &&
                    (target_y>=render_clip[56:48]) &&
                    (target_y<=render_clip[24:16]);
            end
        end
    end

    // Port B performs the renderer write or the inactive-bank clear. Port A
    // always consumes/clears the currently displayed bank on a pixel edge.
    logic line_b_clear;
    always_comb begin
        line_b_clear=state==S_CLEAR;
        line_b_wren=line_b_clear;
        line_b_sel=line_value[15:14];
        line_b_addr={fill_bank,clear_x};
        line_b_data=26'd0;
        if(state==S_X_EMIT && data_cache_valid && data_cache_tag==wanted_tag &&
           dest_x>=clip_min_x && dest_x<=clip_max_x && dest_x>=0 &&
           dest_x<496 && line_value[16]) begin
            line_b_addr={fill_bank,dest_x[8:0]};
            line_b_data={1'b1,render_pos,line_value[13:0]};
            case(line_value[15:14])
                2'd0: line_b_wren=!line0_render_q[25];
                2'd1: line_b_wren=!line1_render_q[25];
                2'd2: line_b_wren=!line2_render_q[25];
                default: line_b_wren=!line3_render_q[25];
            endcase
        end
    end

    s24_sprite_line_ram line0_ram (
        .clk(clk),.address_a(display_read_addr),.data_a(26'd0),
        .wren_a(ce_pixel),.q_a(line0_display_q),
        .address_b(line_b_addr),.data_b(line_b_data),
        .wren_b(line_b_wren && (line_b_clear || line_b_sel==2'd0)),
        .q_b(line0_render_q));
    s24_sprite_line_ram line1_ram (
        .clk(clk),.address_a(display_read_addr),.data_a(26'd0),
        .wren_a(ce_pixel),.q_a(line1_display_q),
        .address_b(line_b_addr),.data_b(line_b_data),
        .wren_b(line_b_wren && (line_b_clear || line_b_sel==2'd1)),
        .q_b(line1_render_q));
    s24_sprite_line_ram line2_ram (
        .clk(clk),.address_a(display_read_addr),.data_a(26'd0),
        .wren_a(ce_pixel),.q_a(line2_display_q),
        .address_b(line_b_addr),.data_b(line_b_data),
        .wren_b(line_b_wren && (line_b_clear || line_b_sel==2'd2)),
        .q_b(line2_render_q));
    s24_sprite_line_ram line3_ram (
        .clk(clk),.address_a(display_read_addr),.data_a(26'd0),
        .wren_a(ce_pixel),.q_a(line3_display_q),
        .address_b(line_b_addr),.data_b(line_b_data),
        .wren_b(line_b_wren && (line_b_clear || line_b_sel==2'd3)),
        .q_b(line3_render_q));

    always_comb begin
        descriptor_write_enable=state==S_LIST_WAIT && mem_ack &&
            mem_w0[15:14]==2'b00 && !(list_index==0 && mem_w0==0);
        descriptor_write_high=stack_write_slot[0];
        descriptor_write_addr=stack_write_slot[9:1];
        descriptor_write_data=mem_data;
        clip_write_data={current_clip_valid,current_clip_flags,current_clip_top,
                         current_clip_left,current_clip_bottom,current_clip_right};
    end

    always_ff @(posedge clk) begin
        sprite_stack_q <= sprite_stack[stack_render_slot];
        if(reset) begin
            state<=S_IDLE;display_bank<=0;fill_bank<=1;line_valid<=0;
            clear_x<=0;target_y<=0;
            list_index<=0;list_seen<=0;list_cache_valid<=0;
            frame_epoch<=0;cache_epoch<=0;
            current_clip_valid<=0;
            current_clip_flags<=0;current_clip_top<=0;current_clip_left<=0;
            current_clip_bottom<=0;current_clip_right<=0;stack_count<=0;
            stack_head<=0;
            render_pos<=0;render_clip<=0;descriptor<=0;
            palette_table<=0;data_cache<=0;data_cache_tag<=0;
            data_cache_valid<=0;palette_cache_valid<=0;
            descriptor_origin_x<=0;descriptor_output_width<=0;
            mem_req<=0;mem_addr<=0;
            pixel0<=0;pixel1<=0;pixel2<=0;pixel3<=0;
            rank0<=0;rank1<=0;rank2<=0;rank3<=0;
            zoomx_step<=0;zoomy_step<=0;x_accum<=0;
            y_accum<=0;emit_count<=0;source_row<=0;source_column<=0;
            ydiv_dividend<=0;ydiv_quotient<=0;ydiv_remainder<=0;
            ydiv_divisor<=0;ydiv_total_rows<=0;ydiv_count<=0;
            scan_pos<=0;active_count<=0;
            scan_second_index<=0;scan_second_last<=0;
            dest_y<=0;dest_x<=0;flipx<=0;flipy<=0;size_x_tiles<=1;
            size_y_tiles<=1;
        end else begin
            // Line 0 is prepared from the vcount-422 boundary. Toggle an
            // epoch even if the renderer is still busy there; its first
            // available subsequent line will then refresh the frame list.
            if(ce_pixel && hcount==10'd655 && vcount==10'd383)
                frame_epoch<=~frame_epoch;
            if(ce_pixel) begin
                // Display consumption erases the old scanline through port A,
                // so port B can immediately render the opposite bank without
                // spending 496 clocks on a separate clear pass.
                if(hcount==10'd655) begin
                    display_bank<=~display_bank;
                    if(line_valid[~display_bank]) begin
                        if(line0_display_q[25]) begin
                            rank0<=line0_display_q[24:14];
                            pixel0<=line0_display_q[13:0];
                        end else begin rank0<=0;pixel0<=0;end
                        if(line1_display_q[25]) begin
                            rank1<=line1_display_q[24:14];
                            pixel1<=line1_display_q[13:0];
                        end else begin rank1<=0;pixel1<=0;end
                        if(line2_display_q[25]) begin
                            rank2<=line2_display_q[24:14];
                            pixel2<=line2_display_q[13:0];
                        end else begin rank2<=0;pixel2<=0;end
                        if(line3_display_q[25]) begin
                            rank3<=line3_display_q[24:14];
                            pixel3<=line3_display_q[13:0];
                        end else begin rank3<=0;pixel3<=0;end
                    end else begin
                        pixel0<=0;pixel1<=0;pixel2<=0;pixel3<=0;
                        rank0<=0;rank1<=0;rank2<=0;rank3<=0;
                    end
                    if(state==S_IDLE) begin
                        if(vcount==10'd383) begin
                            // Start the next frame's linked-list walk at
                            // vblank entry so live descriptor fields are
                            // rebuilt before rendering.
                            list_index<=0;list_seen<=0;stack_count<=0;
                            stack_head<=0;current_clip_valid<=0;
                            list_cache_valid<=0;state<=S_LIST_REQ;
                        end else if(vcount>=10'd422 || vcount<10'd382) begin
                            fill_bank<=display_bank;
                            line_valid[display_bank]<=0;
                            target_y <= (vcount>=10'd422)
                                        ? vcount[8:0]-9'd422
                                        : vcount[8:0]+9'd2;
                            scan_pos<=0;active_count<=0;
                            data_cache_valid<=0;palette_cache_valid<=0;
                            if(list_cache_valid && stack_count!=0)
                                state<=S_SCAN_PREFETCH;
                            else begin
                                line_valid[display_bank]<=1;
                                state<=S_IDLE;
                            end
                        end
                    end
                end else if(hcount<10'd495 && line_valid[display_bank]) begin
                    if(line0_display_q[25]) begin
                        rank0<=line0_display_q[24:14];
                        pixel0<=line0_display_q[13:0];
                    end else begin rank0<=0;pixel0<=0;end
                    if(line1_display_q[25]) begin
                        rank1<=line1_display_q[24:14];
                        pixel1<=line1_display_q[13:0];
                    end else begin rank1<=0;pixel1<=0;end
                    if(line2_display_q[25]) begin
                        rank2<=line2_display_q[24:14];
                        pixel2<=line2_display_q[13:0];
                    end else begin rank2<=0;pixel2<=0;end
                    if(line3_display_q[25]) begin
                        rank3<=line3_display_q[24:14];
                        pixel3<=line3_display_q[13:0];
                    end else begin rank3<=0;pixel3<=0;end
                end else begin
                    pixel0<=0;pixel1<=0;pixel2<=0;pixel3<=0;
                    rank0<=0;rank1<=0;rank2<=0;rank3<=0;
                end
            end

            case(state)
                S_IDLE: ;
                S_CLEAR: begin
                    if(clear_x==9'd495) begin
                        // The 315-5293/5295 buffers the linked sprite list for
                        // a frame. Rewalking long chains of skip descriptors
                        // on every scanline can miss the line deadline (Hot
                        // Rod has 192 skips before only 27 visible sprites).
                        // Cache pointers and clip state once at native line 0;
                        // live descriptors and pixel data are still fetched
                        // for every rendered scanline.
                        if(!list_cache_valid || cache_epoch!=frame_epoch) begin
                            list_index<=0;list_seen<=0;stack_count<=0;
                            stack_head<=0;current_clip_valid<=0;
                            state<=S_LIST_REQ;
                        end else if(stack_count==0) begin
                            line_valid[fill_bank]<=1;state<=S_IDLE;
                        end else begin
                            render_pos<=stack_count-1'b1;
                            state<=S_RENDER_PREFETCH;
                        end
                    end else clear_x<=clear_x+1'b1;
                end
                S_LIST_REQ: begin
                    // MAME bounds linked-list traversal to all 0x2000 possible
                    // descriptors. A corrupt/cyclic list must not wedge the
                    // scanline renderer indefinitely.
                    if(list_seen==14'd8192) begin
                        list_cache_valid<=1;
                        cache_epoch<=frame_epoch;
                        state<=S_IDLE;
                    end else begin
                        mem_addr<=sprite_burst({1'b0,list_index,3'b0});mem_req<=1;
                        state<=S_LIST_WAIT;
                    end
                end
                S_LIST_WAIT: if(mem_ack) begin
                    mem_req<=0;descriptor<=mem_data;list_seen<=list_seen+1'b1;
                    if((list_index==0 && mem_w0==0) ||
                       mem_w0[15:14]==2'b11) begin
                        list_cache_valid<=1;
                        cache_epoch<=frame_epoch;
                        state<=S_IDLE;
                    end else begin
                        list_index<=mem_w0[12:0];
                        case(mem_w0[15:14])
                            2'b01: begin
                                current_clip_valid<=1;
                                current_clip_flags<=mem_w1;
                                current_clip_top<=mem_w2;
                                current_clip_left<=mem_w3;
                                current_clip_bottom<=mem_w4;
                                current_clip_right<=mem_w5;
                                state<=S_LIST_REQ;
                            end
                            2'b10: state<=S_LIST_REQ;
                            default: begin
                                if(stack_count<STACK_COUNT_LIMIT)
                                    stack_count<=stack_count+1'b1;
                                else
                                    stack_head<=stack_head+1'b1;
                                if(mem_w0[12:0]==0) begin
                                    list_cache_valid<=1;
                                    cache_epoch<=frame_epoch;
                                    state<=S_IDLE;
                                end else state<=S_LIST_REQ;
                            end
                        endcase
                    end
                end
                S_SCAN_PREFETCH: state<=S_SCAN;
                S_SCAN: begin
                    if(scan_active && scan1_active) begin
                        sprite_stack[active_count[STACK_BITS-1:0]]
                            <=stack_scan_slot;
                        active_count<=active_count+1'b1;
                        // sprite_stack has one write port.  Only pairs where
                        // both descriptors are active need this second cycle;
                        // sparse long lists still approach two descriptors
                        // filtered per clock.
                        scan_second_index<=stack_scan_slot+1'b1;
                        scan_second_last<=(scan_next_pos>=stack_count);
                        state<=S_SCAN_SECOND;
                    end else begin
                        if(scan_active || scan1_active) begin
                            sprite_stack[active_count[STACK_BITS-1:0]]
                                <=scan_active ? stack_scan_slot
                                              : stack_scan_slot+1'b1;
                            active_count<=active_count+1'b1;
                        end
                        if(scan_next_pos>=stack_count) begin
                            if(scan_active || scan1_active) begin
                                render_pos<=active_count;
                                state<=S_RENDER_PREFETCH;
                            end else if(active_count!=0) begin
                                render_pos<=active_count-1'b1;
                                state<=S_RENDER_PREFETCH;
                            end else begin
                                line_valid[fill_bank]<=1;state<=S_IDLE;
                            end
                        end else begin
                            scan_pos<=scan_next_pos;
                        end
                    end
                end
                S_SCAN_SECOND: begin
                    sprite_stack[active_count[STACK_BITS-1:0]]
                        <=scan_second_index;
                    active_count<=active_count+1'b1;
                    if(scan_second_last) begin
                        render_pos<=active_count;
                        state<=S_RENDER_PREFETCH;
                    end else begin
                        scan_pos<=scan_next_pos;
                        state<=S_SCAN;
                    end
                end
                S_RENDER_PREFETCH: state<=S_RENDER_REQ;
                S_RENDER_REQ: state<=S_RENDER_WAIT;
                S_RENDER_WAIT: begin
                    descriptor<=descriptor_stack_q;
                    render_clip<=clip_stack_q;
                    flipx<=render_w5[15];
                    flipy<=render_w4[15];
                    size_x_tiles<=8'd1<<render_w5[14:12];
                    size_y_tiles<=8'd1<<render_w4[14:12];
                    if(!render_w0[13]) begin
                        zoomx_step<=(render_w1[7:0]==0)?9'h040:
                                   {1'b0,render_w1[7:0]}+1'b1;
                        zoomy_step<=(render_w1[7:0]==0)?9'h040:
                                   {1'b0,render_w1[7:0]}+1'b1;
                    end else begin
                        zoomx_step<=(render_w1[15:8]==0)?9'h040:
                                   {1'b0,render_w1[15:8]}+1'b1;
                        zoomy_step<=(render_w1[7:0]==0)?9'h040:
                                   {1'b0,render_w1[7:0]}+1'b1;
                    end
                    descriptor_origin_x<=$signed({render_w5[11],
                                                   render_w5[11:0]})-13'sd8;
                    descriptor_output_width<=descriptor_width_sum[18:6];
                    state<=S_RENDER_SETUP;
                end
                S_RENDER_SETUP: begin
                    // MAME tests each emitted X against the clip rectangle.
                    // Rejecting a descriptor whose complete scaled span
                    // cannot intersect it is exactly equivalent and avoids
                    // needless palette/data traffic for long lists.
                    if(descriptor_origin_x>$signed(clip_max_x) ||
                       descriptor_right_x<$signed(clip_min_x)) begin
                        state<=S_NEXT_SPRITE;
                    // 1:1 is by far the common sprite case (Hot Rod's title
                    // has 27/27 descriptors at step 0x40). Map the scanline
                    // directly instead of walking from the sprite top for
                    // every output line. This removes the remaining line-
                    // buffer overruns without a divider, multiplier, RAM or
                    // DSP. Other zoom factors retain the exact accumulator.
                    end else if(descriptor_zoomy_step==9'h040) begin
                        if(!vertical_allowed ||
                           $signed({4'd0,target_y})<descriptor_origin_y ||
                           $signed({4'd0,target_y})>=descriptor_bottom_y) begin
                            dest_y<=descriptor_origin_y;
                            source_row<=0;y_accum<=6'h20;
                            state<=S_NEXT_SPRITE;
                        end else begin
                            dest_y<=$signed({4'd0,target_y});
                            source_row<=$signed({4'd0,target_y})
                                        - descriptor_origin_y;
                            y_accum<=6'h20;state<=S_YMAP;
                        end
                    end else begin
                        if(!vertical_allowed ||
                           $signed({4'd0,target_y})<descriptor_origin_y) begin
                            dest_y<=descriptor_origin_y;
                            source_row<=0;y_accum<=6'h20;
                            state<=S_NEXT_SPRITE;
                        end else begin
                            // Exact bounded division for arbitrary zoom:
                            // r=floor((64*(target-origin)+31)/step).
                            // An 18-cycle restoring divider is much smaller
                            // than a combinational divider and replaces an
                            // unbounded source-row walk. The final remainder
                            // reconstructs both row origin and accumulator,
                            // so no multiplier or DSP is needed.
                            ydiv_dividend<=({6'd0,descriptor_target_offset}
                                           << 6) + 18'd31;
                            ydiv_quotient<=0;ydiv_remainder<=0;
                            ydiv_divisor<=descriptor_zoomy_step;
                            ydiv_total_rows<=descriptor_total_rows;
                            ydiv_count<=5'd18;state<=S_YDIV;
                        end
                    end
                end
                S_YDIV: begin
                    ydiv_dividend<={ydiv_dividend[16:0],1'b0};
                    ydiv_remainder<=ydiv_next_remainder;
                    ydiv_quotient<=ydiv_next_quotient;
                    if(ydiv_count==1) begin
                        ydiv_count<=0;
                        if(ydiv_next_quotient>=ydiv_total_rows) begin
                            state<=S_NEXT_SPRITE;
                        end else begin
                            source_row<=ydiv_next_quotient[10:0];
                            dest_y<=$signed({4'd0,target_y})
                                    + (ydiv_adjust_value >>> 6);
                            y_accum<=ydiv_adjust_value[5:0];
                            state<=S_YMAP;
                        end
                    end else ydiv_count<=ydiv_count-1'b1;
                end
                S_YMAP: begin
                    if(!vertical_allowed || dest_y>$signed({4'd0,target_y}) ||
                       source_row>=total_rows) state<=S_NEXT_SPRITE;
                    else if(($signed({4'd0,target_y})>=dest_y) &&
                            ($signed({4'd0,target_y})<dest_y+$signed({10'd0,y_sum[8:6]}))) begin
                        if(palette_cache_hit) begin
                            palette_table<=palette_cache_data[palette_cache_index];
                            source_column<=0;x_accum<=6'h20;
                            dest_x<=$signed({d5[11],d5[11:0]})-13'sd8;
                            state<=S_X_SOURCE;
                        end else begin
                            mem_addr<=sprite_burst({palette_base,3'b0});mem_req<=1;
                            state<=S_PALETTE_WAIT;
                        end
                    end else begin
                        dest_y<=dest_y+{10'd0,y_sum[8:6]};
                        y_accum<=y_sum[5:0];source_row<=source_row+1'b1;
                    end
                end
                S_PALETTE_WAIT: if(mem_ack) begin
                    mem_req<=0;palette_table<=mem_data;source_column<=0;
                    palette_cache_data[palette_cache_index]<=mem_data;
                    palette_cache_tags[palette_cache_index]<=palette_base;
                    palette_cache_valid[palette_cache_index]<=1;
                    x_accum<=6'h20;
                    dest_x<=$signed({d5[11],d5[11:0]})-13'sd8;
                    state<=S_X_SOURCE;
                end
                S_X_SOURCE: begin
                    if(source_column>=total_columns) state<=S_NEXT_SPRITE;
                    else if(x_sum[8:6]==0) begin
                        x_accum<=x_sum[5:0];source_column<=source_column+1'b1;
                    end else if(!data_cache_valid || data_cache_tag!=wanted_tag) begin
                        mem_addr<=sprite_burst({wanted_tag,3'b000});mem_req<=1;
                        state<=S_DATA_WAIT;
                    end else begin
                        emit_count<=x_sum[8:6];x_accum<=x_sum[5:0];
                        state<=S_X_EMIT;
                    end
                end
                S_DATA_WAIT: if(mem_ack) begin
                    mem_req<=0;data_cache<=mem_data;data_cache_tag<=wanted_tag;
                    data_cache_valid<=1;state<=S_X_SOURCE;
                end
                S_X_EMIT: begin
                    // Once a 1:1 row is resident, emit consecutive pixels
                    // every clock. The render RAM read port is already one
                    // destination pixel ahead in this state. A burst-boundary
                    // cache miss pauses without advancing and resumes safely.
                    if(!data_cache_valid || data_cache_tag!=wanted_tag) begin
                        mem_addr<=sprite_burst({wanted_tag,3'b000});
                        mem_req<=1;state<=S_DATA_WAIT;
                    end else begin
                        dest_x<=dest_x+1'b1;
                        if(emit_count==1) begin
                            source_column<=source_column+1'b1;
                            if(source_column+1'b1>=total_columns) begin
                                emit_count<=0;state<=S_NEXT_SPRITE;
                            end else if(zoomx_step==9'h040) begin
                                emit_count<=1;state<=S_X_EMIT;
                            end else begin
                                emit_count<=0;state<=S_X_SOURCE;
                            end
                        end else emit_count<=emit_count-1'b1;
                    end
                end
                S_NEXT_SPRITE: begin
                    if(render_pos==0) begin line_valid[fill_bank]<=1;state<=S_IDLE;end
                    else begin render_pos<=render_pos-1'b1;state<=S_RENDER_PREFETCH;end
                end
                default: state<=S_IDLE;
            endcase
        end
    end
endmodule
