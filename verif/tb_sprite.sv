`timescale 1ns/1ps

module tb_sprite;
    import s24_pkg::*;
    logic clk=0,reset=1,ce_pixel=0;
    logic [9:0] hcount=0,vcount=0;
    logic [13:0] pixel0,pixel1,pixel2,pixel3;
    logic [10:0] rank0,rank1,rank2,rank3;
    logic mem_req,mem_ack;
    logic [26:4] mem_addr;
    logic [127:0] mem_data;
    integer list_collect_cycles=0;
    integer first_list_collect_cycles;
    integer stress_clocks;
    integer settle_clocks;
    logic first_frame_epoch;
    localparam logic [26:4] BASE=SDR_SPRITE_BASE[26:4];

    always #5 clk=~clk;
    assign mem_ack=mem_req;

    always @(posedge clk)
        if(!reset && dut.state==dut.S_LIST_REQ)
            list_collect_cycles<=list_collect_cycles+1;

    always_comb begin
        mem_data=128'd0;
        case(mem_addr-BASE)
            // Entry zero: normal sprite, next entry 1, near-1:1 zoom through
            // the bounded arbitrary-zoom divider, tile 0x10,
            // indirect palette table 2, top=2, left=8 (visible X zero).
            0: begin
                mem_data[0*16 +:16]=16'h0001;
                mem_data[1*16 +:16]=16'h003e;
                mem_data[2*16 +:16]=16'h0010;
                mem_data[3*16 +:16]=16'h0002;
                mem_data[4*16 +:16]=16'h0002;
                mem_data[5*16 +:16]=16'h0008;
            end
            1: mem_data[0 +:16]=16'hc000; // end entry
            2: begin
                mem_data[0*16 +:16]=16'h2600; // pen 0 -> visible color 0x26
                mem_data[1*16 +:16]=16'h4500; // pen 2 -> group 1, color 0x45
                // Pen 1 remains indirect color zero and is transparent.
            end
            32: mem_data[0*16 +:16]=16'h2010; // pens 2,0,1,0...
            default: mem_data=0;
        endcase
    end

    s24_sprite dut(
        .clk(clk),.reset(reset),.ce_pixel(ce_pixel),.hcount(hcount),.vcount(vcount),
        .pixel0(pixel0),.pixel1(pixel1),.pixel2(pixel2),.pixel3(pixel3),
        .rank0(rank0),.rank1(rank1),.rank2(rank2),.rank3(rank3),
        .mem_req(mem_req),.mem_addr(mem_addr),
        .mem_data(mem_data),.mem_ack(mem_ack),
        .cache_invalidate(1'b0),.cache_invalidate_tag(14'd0));

    task automatic line_boundary(input [9:0] line);
        begin
            // The hardware holds hcount at 655 for several master clocks
            // before ce_pixel advances the raster.  Give the synchronous
            // display port one clock to prefetch pixel zero from the bank
            // that will become visible at the boundary.
            @(negedge clk);
            vcount=line;hcount=10'd655;ce_pixel=0;
            @(posedge clk);
            @(negedge clk);
            ce_pixel=1;
            @(posedge clk);#1;ce_pixel=0;hcount=0;
        end
    endtask

    task automatic advance_pixel(input [9:0] count);
        begin
            hcount=count;ce_pixel=0;
            // As above, allow the registered display read to fetch count+1
            // before the pixel-enable edge consumes it.
            @(posedge clk);
            @(negedge clk);
            ce_pixel=1;
            @(posedge clk);#1;ce_pixel=0;
        end
    endtask

    initial begin
        repeat(3) @(posedge clk);
        reset=0;
        line_boundary(10'd383); // collect the next frame's list in vblank
        repeat(40) @(posedge clk);
        assert(dut.list_cache_valid)
            else $fatal(1,"sprite vblank list collection failed state=%0d valid=%0d seen=%0d index=%0d req=%0d ack=%0d epoch=%0d/%0d",
                        dut.state,dut.list_cache_valid,dut.list_seen,dut.list_index,
                        mem_req,mem_ack,dut.cache_refresh_pending,dut.frame_epoch);
        line_boundary(0); // advances the queued producer toward active line 2
        repeat(1200) @(posedge clk);
        assert(dut.state==dut.S_IDLE) else $fatal(1,"sprite renderer overrun state %0d",dut.state);
        line_boundary(0); // display the completed line-Y-tagged bank
        $display("sprite queue probe valid=%b display=%0d fill=%0d target=%0d next=%0d bank_y=%0d/%0d/%0d/%0d gen=%0d/%0d/%0d/%0d",
                 dut.line_valid,dut.display_bank,dut.fill_bank,dut.target_y,
                 dut.render_next_target,dut.bank_line_y[0],dut.bank_line_y[1],
                 dut.bank_line_y[2],dut.bank_line_y[3],dut.bank_generation[0],
                 dut.bank_generation[1],dut.bank_generation[2],dut.bank_generation[3]);
        assert(pixel1==14'h1045 && rank1==0 &&
               pixel0==0 && pixel2==0 && pixel3==0)
            else $fatal(1,"sprite group candidates %h/%h/%h/%h rank=%0d",
                        pixel0,pixel1,pixel2,pixel3,rank1);
        advance_pixel(0);
        assert(pixel0==14'h1026 && pixel1==0 && pixel2==0 && pixel3==0)
            else $fatal(1,"indirect pen-zero pixel %h/%h/%h/%h",
                        pixel0,pixel1,pixel2,pixel3);
        advance_pixel(1);
        assert(pixel0==0 && pixel1==0 && pixel2==0 && pixel3==0)
            else $fatal(1,"indirect color-zero transparency %h/%h/%h/%h",
                        pixel0,pixel1,pixel2,pixel3);

        // The pointer/clip list is collected once and reused on the next
        // scanline. Palette and pixel bursts remain live.
        first_list_collect_cycles=list_collect_cycles;
        repeat(700) @(posedge clk);
        assert(dut.state==dut.S_IDLE)
            else $fatal(1,"cached-list scanline overrun state %0d",dut.state);
        assert(list_collect_cycles==first_list_collect_cycles)
            else $fatal(1,"sprite list was rescanned within one frame");

        // Crossing the native frame boundary rebuilds the cache from live
        // descriptor fields and stamps the new epoch.
        first_frame_epoch=dut.frame_epoch;
        line_boundary(10'd383);
        // Wait for the renderer to settle rather than a fixed 40 clocks. The
        // frame boundary re-collects the list AND renders the next line, and
        // with tile_base/palette_base carried correctly that is real fetch
        // work (S_DATA_WAIT), not an immediate fall-through. The budget is
        // still bounded by one scanline, so a genuine overrun still fails.
        settle_clocks=0;
        while(dut.state!=dut.S_IDLE && settle_clocks<656*3) begin
            @(posedge clk);settle_clocks++;
        end
        assert(dut.state==dut.S_IDLE)
            else $fatal(1,"next-frame list refresh overrun state %0d clocks=%0d",
                        dut.state,settle_clocks);
        // cache_epoch was replaced by cache_refresh_pending/frame_epoch:
        // the frame boundary toggles frame_epoch and raises the refresh
        // request, and the rebuild clears it. "cache is current for this
        // frame" is therefore now !cache_refresh_pending.
        assert(list_collect_cycles>first_list_collect_cycles &&
               dut.frame_epoch!=first_frame_epoch &&
               !dut.cache_refresh_pending)
            else $fatal(1,"sprite descriptor cache did not refresh at frame epoch");

        // SSpirits reaches 3547 normal descriptors behind the 8192-entry
        // linked-list traversal bound. Exercise the retained-cache path with 48 active
        // one-tile sprites and prove one scanline still meets 656*3 clocks.
        // These poke the stack RAM's storage directly, which holds the PACKED
        // 81-bit descriptor, not the raw 128-bit record. Packed layout is
        // [0]=w0[13], [16:1]=w1, [32:17]=w4, [48:33]=w5, [64:49]=w2,
        // [80:65]=w3 -- keep in step with s24_sprite_pair_ram::pack_word.
        for(int s=0;s<1024;s++) begin
            automatic logic [80:0] packed_desc = 81'd0;
            packed_desc[16:1]  = 16'h003f;                        // w1 zoom
            packed_desc[32:17] = (s<48)?16'h0002:16'h01f4;        // w4 Y/size_y
            packed_desc[48:33] = 16'(8+(s%48)*8);                 // w5 X/size_x
            packed_desc[64:49] = 16'h0010;                        // w2 tile base
            packed_desc[80:65] = 16'h0002;                        // w3 palette base
            if(s[0]) begin
                dut.descriptor_stack_ram.mem_hi[s>>1]=packed_desc;
                dut.clip_stack_ram.mem_hi[s>>1]=38'd0;
            end else begin
                dut.descriptor_stack_ram.mem_lo[s>>1]=packed_desc;
                dut.clip_stack_ram.mem_lo[s>>1]=38'd0;
            end
        end
        dut.stack_head=0;dut.stack_count=13'd1024;
        dut.list_cache_valid=1;dut.cache_refresh_pending=0;
        dut.render_next_target=0;dut.line_valid=0;
        line_boundary(0);
        stress_clocks=0;
        while(dut.state!=dut.S_IDLE && stress_clocks<656*3) begin
            @(posedge clk);stress_clocks++;
        end
        assert(dut.state==dut.S_IDLE)
            else $fatal(1,"1024-descriptor scanline missed budget clocks=%0d state=%0d render_pos=%0d source_column=%0d emit_count=%0d total_columns=%0d",
                        stress_clocks,dut.state,dut.render_pos,dut.source_column,
                        dut.emit_count,dut.total_columns);

        // Source-level contracts for the Crack Down paths. These are kept in
        // the regression even when this bench is not being executed.
        force dut.render_clip={1'b1,16'h0000,16'd10,16'd8,
                               16'd20,16'd503};
        force dut.target_y=9'd15;#1;
        assert(dut.vertical_allowed && dut.clip_min_x==0 && dut.clip_max_x==495)
            else $fatal(1,"normal clip rectangle mismatch");
        force dut.render_clip={1'b1,16'h2000,16'd10,16'd8,
                               16'd20,16'd503};#1;
        assert(!dut.vertical_allowed)
            else $fatal(1,"reverse-Y clip did not remove interior");
        force dut.target_y=9'd9;#1;
        assert(dut.vertical_allowed)
            else $fatal(1,"reverse-Y clip removed exterior");
        release dut.render_clip;
        release dut.target_y;

        // With no descriptor MAME clips the destination after its -8 sprite
        // origin to the full 0..495 visible width. The origin must not be
        // subtracted a second time from the default screen rectangle.
        force dut.render_clip=81'd0;#1;
        assert(dut.clip_min_x==0 && dut.clip_max_x==495)
            else $fatal(1,"default sprite clip mismatch %0d..%0d",
                        dut.clip_min_x,dut.clip_max_x);
        release dut.render_clip;

        force dut.size_x_tiles=8'd128;
        force dut.size_y_tiles=8'd128;
        force dut.source_row=11'd264;    // tile row 33
        force dut.source_column=11'd40;  // tile column 5
        force dut.flipx=1'b0;
        force dut.flipy=1'b0;#1;
        assert(dut.tile_ordinal==14'd4229)
            else $fatal(1,"wide sprite tile ordinal truncated: %0d",
                        dut.tile_ordinal);
        force dut.flipx=1'b1;
        force dut.flipy=1'b1;#1;
        assert(dut.tile_x==8'd122 && dut.tile_y==8'd94)
            else $fatal(1,"large flipped sprite coordinates %0d,%0d",
                        dut.tile_x,dut.tile_y);
        release dut.size_x_tiles;
        release dut.size_y_tiles;
        release dut.source_row;
        release dut.source_column;
        release dut.flipx;
        release dut.flipy;
        $display("PASS sprite list, reverse buffer, zoom, palette and 4bpp fetch stress_clocks=%0d",
                 stress_clocks);
        $finish;
    end
endmodule
