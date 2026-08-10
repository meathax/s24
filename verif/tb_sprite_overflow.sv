`timescale 1ns/1ps

// MAME retains all 0x2000 linked-list descriptors and renders the list in
// reverse.  The bounded FPGA cache must therefore retain the newest/frontmost
// STACK_DEPTH descriptors when a pathological list exceeds its storage budget.
//
// STACK_DEPTH is 4096: `stack_write_slot` appends while stack_count <
// STACK_COUNT_LIMIT, then overwrites at `stack_head` and advances it, so the
// retained window is always the newest 4096 entries in list order. Feeding
// exactly 4097 normal descriptors leaves head=1, drops logical entry 0, and
// wraps the newest entry into physical slot 0 -- the odd-head case the paired
// descriptor RAM has to scan correctly.
//
// Descriptors are no longer held in a flat `sprite_stack` index array; they
// live packed inside `descriptor_stack_ram` (81-bit payload, word 2 at bits
// 64:49) and are copied into `active_cache_ram` (119-bit payload, word 2 at
// bits 102:87) by the per-line vertical filter. Word 2 carries a unique
// payload here so every check can name the descriptor it found.
module tb_sprite_overflow;
    import s24_pkg::*;

    logic clk=0,reset=1,ce_pixel=0;
    logic [9:0] hcount=0,vcount=0;
    logic [13:0] pixel0,pixel1,pixel2,pixel3;
    logic [10:0] rank0,rank1,rank2,rank3;
    logic mem_req,mem_ack;
    logic [26:4] mem_addr;
    logic [127:0] mem_data;
    logic [22:0] descriptor_index;
    localparam logic [26:4] BASE=SDR_SPRITE_BASE[26:4];
    localparam int LAST=4096;          // 4097 entries -> overflow by exactly 1
    localparam int TEST_LINE=2;

    integer wait_cycles;

    always #5 clk=~clk;
    assign mem_ack=mem_req;
    assign descriptor_index=mem_addr-BASE;

    always_comb begin
        mem_data=128'd0;
        if(descriptor_index<=23'(LAST)) begin
            mem_data[0 +:16]=(descriptor_index==23'(LAST))
                              ? 16'd0 : descriptor_index[15:0]+16'd1;
            // A unique payload proves which descriptor occupies each slot.
            mem_data[2*16 +:16]=descriptor_index[15:0];
            mem_data[1*16 +:16]=16'h003f;   // zoom 0x3f -> 1:1 step 0x40
            // Only logical descriptors 1, 2 and LAST intersect the test line.
            mem_data[4*16 +:16]=
                (descriptor_index==23'd1 || descriptor_index==23'd2 ||
                 descriptor_index==23'(LAST)) ? 16'(TEST_LINE) : 16'd500;
            mem_data[5*16 +:16]=16'h0800; // safely offscreen
        end
    end

    s24_sprite dut(
        .clk(clk),.reset(reset),.ce_pixel(ce_pixel),
        .hcount(hcount),.vcount(vcount),
        .pixel0(pixel0),.pixel1(pixel1),.pixel2(pixel2),.pixel3(pixel3),
        .rank0(rank0),.rank1(rank1),.rank2(rank2),.rank3(rank3),
        .mem_req(mem_req),.mem_addr(mem_addr),
        .mem_data(mem_data),.mem_ack(mem_ack),
        .cache_invalidate(1'b0),.cache_invalidate_tag(14'd0));

    // s24_video_timing advances hcount inside `if (ce_pixel)`, so at the edge
    // the sprite module samples it the count still names the OLD pixel. Hold
    // hcount/vcount at the pre-increment value across the enabled edge to
    // reproduce that phase exactly.
    task automatic raster_edge(input [9:0] line,input [9:0] column);
        begin
            @(negedge clk); hcount=column; vcount=line; ce_pixel=1;
            @(posedge clk); #1; ce_pixel=0;
        end
    endtask

    // ---- render-order capture ---------------------------------------------
    // The renderer consumes one descriptor at S_RENDER_WAIT (the newest active
    // entry) and one at every S_NEXT_SPRITE with render_pos!=0, walking the
    // active list backwards exactly like MAME's `for(countspr--; ...)`. Every
    // descriptor here is rejected on X before it draws, which is precisely the
    // path that must still consume each entry once and only once.
    logic [15:0] render_order [0:3];
    logic [15:0] active_slot [0:2];
    integer render_count=0;
    logic captured=0;
    logic consumed;

    always_comb consumed = (dut.state==dut.S_RENDER_WAIT) ||
                           (dut.state==dut.S_NEXT_SPRITE && dut.render_pos!=0);

    always @(posedge clk)
        if(!reset && !captured && dut.target_y==9'(TEST_LINE)) begin
            if(consumed) begin
                if(render_count<4)
                    render_order[render_count]<=dut.active_render_descriptor[47:32];
                render_count<=render_count+1;
            end
            if(dut.state==dut.S_RENDER_WAIT) begin
                active_slot[0]<=dut.active_cache_ram.mem[0][102:87];
                active_slot[1]<=dut.active_cache_ram.mem[1][102:87];
                active_slot[2]<=dut.active_cache_ram.mem[2][102:87];
            end
            if(dut.state==dut.S_NEXT_SPRITE && dut.render_pos==0) captured<=1;
        end

    initial begin
        repeat(3) @(posedge clk);
        reset=0;
        raster_edge(10'd383,10'd655);   // frame boundary: arm the list refresh

        // 4097 entries at two clocks each, plus scan/render slack.
        wait_cycles=0;
        while(!(dut.state==dut.S_IDLE && dut.list_cache_valid) &&
              wait_cycles<40000) begin
            @(posedge clk); wait_cycles=wait_cycles+1;
        end
        assert(dut.state==dut.S_IDLE && dut.list_cache_valid)
            else $fatal(1,"%0d-entry sprite list did not finish (state=%0d after %0d clocks)",
                        LAST+1,dut.state,wait_cycles);
        assert(dut.stack_count==13'd4096)
            else $fatal(1,"bounded sprite count %0d, expected 4096",dut.stack_count);
        assert(dut.stack_head==12'd1)
            else $fatal(1,"overflow kept oldest descriptors: head=%0d, expected 1",
                        dut.stack_head);
        // The newest descriptor wrapped into the low half of physical pair
        // word zero. Word 2 sits at bits 64:49 of the 81-bit packed payload.
        assert(dut.descriptor_stack_ram.mem_lo[0][64:49]==16'(LAST))
            else $fatal(1,"physical slot 0 holds descriptor %0d, expected newest %0d",
                        dut.descriptor_stack_ram.mem_lo[0][64:49],LAST);

        // Head 1 means the oldest retained entry is physical slot 1, so the
        // logical scan peels one upper-half entry, resumes paired scanning at
        // slot 2, wraps at slot 4095, and finally consumes slot 0 by itself.
        // The renderer self-schedules lines from 0, so the test line is
        // reached without pumping the raster.
        wait_cycles=0;
        while(!captured && wait_cycles<200000) begin
            @(posedge clk); wait_cycles=wait_cycles+1;
        end
        assert(captured && render_count==3)
            else $fatal(1,"odd-head scan/render did not finish count=%0d state=%0d",
                        render_count,dut.state);

        // Vertical filter output, in list order.
        assert(active_slot[0]==16'd1 && active_slot[1]==16'd2 &&
               active_slot[2]==16'(LAST))
            else $fatal(1,"odd-head logical scan order %0d,%0d,%0d expected 1,2,%0d",
                        active_slot[0],active_slot[1],active_slot[2],LAST);

        // MAME's reverse walk: newest first, and no entry duplicated or lost
        // even though all three are rejected off-screen before drawing.
        assert(render_order[0]==16'(LAST) && render_order[1]==16'd2 &&
               render_order[2]==16'd1)
            else $fatal(1,"odd-head reverse render order %0d,%0d,%0d expected %0d,2,1",
                        render_order[0],render_order[1],render_order[2],LAST);

        $display("PASS sprite overflow retains newest/frontmost 4096, odd-head order, and consumes every rejected descriptor once");
        $finish;
    end
endmodule
