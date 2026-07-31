// Sega 315-5293/315-5295 linked-list sprite system. This is a streaming
// translation of MAME segaic24.cpp: entries are collected in list order and
// rendered backwards into an inactive scanline buffer. Sprite descriptors,
// indirect palette tables, and 4-bpp tile data all share the 256 KiB sprite
// RAM and are fetched through aligned 128-bit bursts.
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
    (* ramstyle="M10K, no_rw_check" *) logic [25:0] line0 [0:1023];
    (* ramstyle="M10K, no_rw_check" *) logic [25:0] line1 [0:1023];
    (* ramstyle="M10K, no_rw_check" *) logic [25:0] line2 [0:1023];
    (* ramstyle="M10K, no_rw_check" *) logic [25:0] line3 [0:1023];
    (* ramstyle="M10K, no_rw_check" *) logic [12:0] sprite_stack [0:STACK_DEPTH-1];
    // {valid, flags, top, left, bottom, right}; raw clip coordinates are kept
    // because the -8 X origin and reverse-Y rule are applied while rendering.
    (* ramstyle="M10K, no_rw_check" *) logic [80:0] clip_stack [0:STACK_DEPTH-1];

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
        S_IDLE,S_CLEAR,S_LIST_REQ,S_LIST_WAIT,S_RENDER_REQ,S_RENDER_WAIT,
        S_YMAP,S_PALETTE_WAIT,S_X_SOURCE,S_DATA_WAIT,S_X_EMIT,S_NEXT_SPRITE
    } state_t;
    state_t state;

    logic display_bank,fill_bank;
    logic [1:0] line_valid;
    logic [8:0] clear_x,target_y;
    logic [12:0] list_index;
    logic [13:0] list_seen;
    logic [15:0] current_clip_flags,current_clip_top,current_clip_left;
    logic [15:0] current_clip_bottom,current_clip_right;
    logic current_clip_valid;
    logic [STACK_BITS:0] stack_count,render_pos;
    logic [STACK_BITS-1:0] stack_head;
    logic [STACK_BITS-1:0] stack_write_slot,stack_render_slot;
    logic [80:0] render_clip;
    logic [127:0] descriptor,palette_table,data_cache;
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

    // STACK_DEPTH is a power of two; assignment truncation performs wrap.
    assign stack_write_slot=stack_head+stack_count[STACK_BITS-1:0];
    assign stack_render_slot=stack_head+render_pos[STACK_BITS-1:0];

    always_comb begin
        mem_w0=burst_word(mem_data,0);mem_w1=burst_word(mem_data,1);
        mem_w2=burst_word(mem_data,2);mem_w3=burst_word(mem_data,3);
        mem_w4=burst_word(mem_data,4);mem_w5=burst_word(mem_data,5);
        d2=burst_word(descriptor,2);d3=burst_word(descriptor,3);
        d5=burst_word(descriptor,5);
        palette_base=d3[13:0];
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

        clip_min_x=-13'sd8;
        clip_max_x=13'sd487;
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

    always_ff @(posedge clk) begin
        if(reset) begin
            state<=S_IDLE;display_bank<=0;fill_bank<=1;line_valid<=0;
            clear_x<=0;target_y<=0;
            list_index<=0;list_seen<=0;current_clip_valid<=0;
            current_clip_flags<=0;current_clip_top<=0;current_clip_left<=0;
            current_clip_bottom<=0;current_clip_right<=0;stack_count<=0;
            stack_head<=0;
            render_pos<=0;render_clip<=0;descriptor<=0;
            palette_table<=0;data_cache<=0;data_cache_tag<=0;
            data_cache_valid<=0;mem_req<=0;mem_addr<=0;
            pixel0<=0;pixel1<=0;pixel2<=0;pixel3<=0;
            rank0<=0;rank1<=0;rank2<=0;rank3<=0;
            zoomx_step<=0;zoomy_step<=0;x_accum<=0;
            y_accum<=0;emit_count<=0;source_row<=0;source_column<=0;
            dest_y<=0;dest_x<=0;flipx<=0;flipy<=0;size_x_tiles<=1;
            size_y_tiles<=1;
        end else begin
            if(ce_pixel) begin
                if(hcount==10'd655) begin
                    display_bank<=~display_bank;
                    if(line_valid[~display_bank]) begin
                        if(line0[{~display_bank,9'd0}][25]) begin
                            rank0<=line0[{~display_bank,9'd0}][24:14];
                            pixel0<=line0[{~display_bank,9'd0}][13:0];
                        end else begin rank0<=0;pixel0<=0;end
                        if(line1[{~display_bank,9'd0}][25]) begin
                            rank1<=line1[{~display_bank,9'd0}][24:14];
                            pixel1<=line1[{~display_bank,9'd0}][13:0];
                        end else begin rank1<=0;pixel1<=0;end
                        if(line2[{~display_bank,9'd0}][25]) begin
                            rank2<=line2[{~display_bank,9'd0}][24:14];
                            pixel2<=line2[{~display_bank,9'd0}][13:0];
                        end else begin rank2<=0;pixel2<=0;end
                        if(line3[{~display_bank,9'd0}][25]) begin
                            rank3<=line3[{~display_bank,9'd0}][24:14];
                            pixel3<=line3[{~display_bank,9'd0}][13:0];
                        end else begin rank3<=0;pixel3<=0;end
                    end else begin
                        pixel0<=0;pixel1<=0;pixel2<=0;pixel3<=0;
                        rank0<=0;rank1<=0;rank2<=0;rank3<=0;
                    end
                    if(state==S_IDLE) begin
                        fill_bank<=display_bank;
                        line_valid[display_bank]<=0;
                        target_y <= (vcount>=10'd422) ? vcount[8:0]-9'd422
                                                     : vcount[8:0]+9'd2;
                        clear_x<=0;state<=S_CLEAR;
                    end
                end else if(hcount<10'd495 && line_valid[display_bank]) begin
                    if(line0[{display_bank,hcount[8:0]+1'b1}][25]) begin
                        rank0<=line0[{display_bank,hcount[8:0]+1'b1}][24:14];
                        pixel0<=line0[{display_bank,hcount[8:0]+1'b1}][13:0];
                    end else begin rank0<=0;pixel0<=0;end
                    if(line1[{display_bank,hcount[8:0]+1'b1}][25]) begin
                        rank1<=line1[{display_bank,hcount[8:0]+1'b1}][24:14];
                        pixel1<=line1[{display_bank,hcount[8:0]+1'b1}][13:0];
                    end else begin rank1<=0;pixel1<=0;end
                    if(line2[{display_bank,hcount[8:0]+1'b1}][25]) begin
                        rank2<=line2[{display_bank,hcount[8:0]+1'b1}][24:14];
                        pixel2<=line2[{display_bank,hcount[8:0]+1'b1}][13:0];
                    end else begin rank2<=0;pixel2<=0;end
                    if(line3[{display_bank,hcount[8:0]+1'b1}][25]) begin
                        rank3<=line3[{display_bank,hcount[8:0]+1'b1}][24:14];
                        pixel3<=line3[{display_bank,hcount[8:0]+1'b1}][13:0];
                    end else begin rank3<=0;pixel3<=0;end
                end else begin
                    pixel0<=0;pixel1<=0;pixel2<=0;pixel3<=0;
                    rank0<=0;rank1<=0;rank2<=0;rank3<=0;
                end
            end

            case(state)
                S_IDLE: ;
                S_CLEAR: begin
                    line0[{fill_bank,clear_x}]<=26'd0;
                    line1[{fill_bank,clear_x}]<=26'd0;
                    line2[{fill_bank,clear_x}]<=26'd0;
                    line3[{fill_bank,clear_x}]<=26'd0;
                    if(clear_x==9'd495) begin
                        list_index<=0;list_seen<=0;stack_count<=0;stack_head<=0;
                        current_clip_valid<=0;
                        state<=S_LIST_REQ;
                    end else clear_x<=clear_x+1'b1;
                end
                S_LIST_REQ: begin
                    // MAME bounds linked-list traversal to all 0x2000 possible
                    // descriptors. A corrupt/cyclic list must not wedge the
                    // scanline renderer indefinitely.
                    if(list_seen==14'd8192) begin
                        if(stack_count==0) begin line_valid[fill_bank]<=1;state<=S_IDLE;end
                        else begin render_pos<=stack_count-1'b1;state<=S_RENDER_REQ;end
                    end else begin
                        mem_addr<=sprite_burst({1'b0,list_index,3'b0});mem_req<=1;
                        state<=S_LIST_WAIT;
                    end
                end
                S_LIST_WAIT: if(mem_ack) begin
                    mem_req<=0;descriptor<=mem_data;list_seen<=list_seen+1'b1;
                    if((list_index==0 && mem_w0==0) ||
                       mem_w0[15:14]==2'b11) begin
                        if(stack_count==0) begin line_valid[fill_bank]<=1;state<=S_IDLE;end
                        else begin render_pos<=stack_count-1'b1;state<=S_RENDER_REQ;end
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
                                if(stack_count<11'd1024) begin
                                    sprite_stack[stack_write_slot]<=list_index;
                                    clip_stack[stack_write_slot]<=
                                        {current_clip_valid,current_clip_flags,current_clip_top,
                                         current_clip_left,current_clip_bottom,current_clip_right};
                                    stack_count<=stack_count+1'b1;
                                end else begin
                                    // Preserve the newest/frontmost 1024
                                    // normal entries if a pathological list
                                    // exceeds the on-chip collector depth.
                                    sprite_stack[stack_head]<=list_index;
                                    clip_stack[stack_head]<=
                                        {current_clip_valid,current_clip_flags,current_clip_top,
                                         current_clip_left,current_clip_bottom,current_clip_right};
                                    stack_head<=stack_head+1'b1;
                                end
                                if(mem_w0[12:0]==0) begin
                                    if(stack_count==0) begin
                                        render_pos<=0;state<=S_RENDER_REQ;
                                    end else begin
                                        // The terminating normal entry was
                                        // just queued at stack_count. If the
                                        // bounded hardware stack is already
                                        // full, start at its last valid slot.
                                        render_pos <= (stack_count>=STACK_COUNT_LIMIT)
                                                      ? STACK_LAST
                                                      : stack_count;
                                        state<=S_RENDER_REQ;
                                    end
                                end else state<=S_LIST_REQ;
                            end
                        endcase
                    end
                end
                S_RENDER_REQ: begin
                    render_clip<=clip_stack[stack_render_slot];
                    mem_addr<=sprite_burst(
                        {1'b0,sprite_stack[stack_render_slot],3'b0});
                    mem_req<=1;state<=S_RENDER_WAIT;
                end
                S_RENDER_WAIT: if(mem_ack) begin
                    mem_req<=0;descriptor<=mem_data;
                    flipx<=mem_w5[15];
                    flipy<=mem_w4[15];
                    size_x_tiles<=8'd1<<mem_w5[14:12];
                    size_y_tiles<=8'd1<<mem_w4[14:12];
                    if(!mem_w0[13]) begin
                        zoomx_step<=(mem_w1[7:0]==0)?9'h040:
                                   {1'b0,mem_w1[7:0]}+1'b1;
                        zoomy_step<=(mem_w1[7:0]==0)?9'h040:
                                   {1'b0,mem_w1[7:0]}+1'b1;
                    end else begin
                        zoomx_step<=(mem_w1[15:8]==0)?9'h040:
                                   {1'b0,mem_w1[15:8]}+1'b1;
                        zoomy_step<=(mem_w1[7:0]==0)?9'h040:
                                   {1'b0,mem_w1[7:0]}+1'b1;
                    end
                    dest_y<=$signed({mem_w4[11],mem_w4[11:0]});
                    source_row<=0;y_accum<=6'h20;state<=S_YMAP;
                end
                S_YMAP: begin
                    if(!vertical_allowed || dest_y>$signed({4'd0,target_y}) ||
                       source_row>=total_rows) state<=S_NEXT_SPRITE;
                    else if(($signed({4'd0,target_y})>=dest_y) &&
                            ($signed({4'd0,target_y})<dest_y+$signed({10'd0,y_sum[8:6]}))) begin
                        mem_addr<=sprite_burst({palette_base,3'b0});mem_req<=1;
                        state<=S_PALETTE_WAIT;
                    end else begin
                        dest_y<=dest_y+{10'd0,y_sum[8:6]};
                        y_accum<=y_sum[5:0];source_row<=source_row+1'b1;
                    end
                end
                S_PALETTE_WAIT: if(mem_ack) begin
                    mem_req<=0;palette_table<=mem_data;source_column<=0;
                    x_accum<=6'h20;
                    dest_x<=$signed({d5[11],d5[11:0]})-13'sd8;
                    data_cache_valid<=0;state<=S_X_SOURCE;
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
                    if(dest_x>=clip_min_x && dest_x<=clip_max_x &&
                       dest_x>=0 && dest_x<496 && line_value[16]) begin
                        case(line_value[15:14])
                            2'd0: if(!line0[{fill_bank,dest_x[8:0]}][25])
                                line0[{fill_bank,dest_x[8:0]}]
                                    <= {1'b1,render_pos,line_value[13:0]};
                            2'd1: if(!line1[{fill_bank,dest_x[8:0]}][25])
                                line1[{fill_bank,dest_x[8:0]}]
                                    <= {1'b1,render_pos,line_value[13:0]};
                            2'd2: if(!line2[{fill_bank,dest_x[8:0]}][25])
                                line2[{fill_bank,dest_x[8:0]}]
                                    <= {1'b1,render_pos,line_value[13:0]};
                            default: if(!line3[{fill_bank,dest_x[8:0]}][25])
                                line3[{fill_bank,dest_x[8:0]}]
                                    <= {1'b1,render_pos,line_value[13:0]};
                        endcase
                    end
                    dest_x<=dest_x+1'b1;
                    if(emit_count==1) begin
                        emit_count<=0;source_column<=source_column+1'b1;
                        state<=S_X_SOURCE;
                    end else emit_count<=emit_count-1'b1;
                end
                S_NEXT_SPRITE: begin
                    if(render_pos==0) begin line_valid[fill_bank]<=1;state<=S_IDLE;end
                    else begin render_pos<=render_pos-1'b1;state<=S_RENDER_REQ;end
                end
                default: state<=S_IDLE;
            endcase
        end
    end
endmodule
