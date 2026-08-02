`timescale 1ns/1ps

// MAME retains all 0x2000 linked-list descriptors and renders the list in
// reverse.  The bounded FPGA cache must therefore retain the newest/frontmost
// 1024 descriptors when a pathological list exceeds its storage budget.
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
    logic track_render=0;
    integer render_count=0;
    logic [9:0] render_order [0:2];
    localparam logic [26:4] BASE=SDR_SPRITE_BASE[26:4];

    always #5 clk=~clk;
    assign mem_ack=mem_req;
    assign descriptor_index=mem_addr-BASE;

    always_comb begin
        mem_data=128'd0;
        if(descriptor_index<=23'd1024) begin
            mem_data[0 +:16]=(descriptor_index==23'd1024)
                              ? 16'd0 : descriptor_index[15:0]+16'd1;
            // A unique payload proves which descriptor occupies each slot.
            mem_data[2*16 +:16]=descriptor_index[15:0];
            mem_data[1*16 +:16]=16'h003f;
            // Only logical descriptors 1, 2 and 1024 intersect target line 2.
            mem_data[4*16 +:16]=
                (descriptor_index==23'd1 || descriptor_index==23'd2 ||
                 descriptor_index==23'd1024) ? 16'd2 : 16'd500;
            mem_data[5*16 +:16]=16'h0800; // safely offscreen
        end
    end

    always @(posedge clk)
        if(track_render && dut.state==dut.S_RENDER_WAIT && render_count<3) begin
            render_order[render_count]<=dut.sprite_stack_q;
            render_count<=render_count+1;
        end

    s24_sprite dut(
        .clk(clk),.reset(reset),.ce_pixel(ce_pixel),
        .hcount(hcount),.vcount(vcount),
        .pixel0(pixel0),.pixel1(pixel1),.pixel2(pixel2),.pixel3(pixel3),
        .rank0(rank0),.rank1(rank1),.rank2(rank2),.rank3(rank3),
        .mem_req(mem_req),.mem_addr(mem_addr),
        .mem_data(mem_data),.mem_ack(mem_ack));

    initial begin
        repeat(3) @(posedge clk);
        reset=0;
        @(negedge clk);
        vcount=10'd383;hcount=10'd655;ce_pixel=1;
        @(posedge clk);#1;ce_pixel=0;

        repeat(2200) @(posedge clk);
        assert(dut.state==dut.S_IDLE && dut.list_cache_valid)
            else $fatal(1,"1025-entry sprite list did not finish");
        assert(dut.stack_count==11'd1024)
            else $fatal(1,"bounded sprite count %0d",dut.stack_count);
        assert(dut.stack_head==10'd1 &&
               dut.descriptor_stack_ram.mem_lo[0][2*16 +:16]==16'd1024)
            else $fatal(1,
                "overflow kept oldest descriptors: head=%0d slot0=%0d expected newest descriptor 1024",
                dut.stack_head,dut.descriptor_stack_ram.mem_lo[0][2*16 +:16]);

        // Head 1 means the oldest logical entry is slot 1. The newest
        // descriptor wrapped into the low half of physical pair word zero.
        // Logical scanning must resume at physical slot 2, wrap at slot 1023,
        // and finally consume slot 0 by itself.
        track_render=1;
        @(negedge clk);
        vcount=10'd0;hcount=10'd655;ce_pixel=1;
        @(posedge clk);#1;ce_pixel=0;
        repeat(2200) @(posedge clk);
        assert(dut.state==dut.S_IDLE && render_count==3)
            else $fatal(1,"odd-head scan/render did not finish count=%0d state=%0d",
                        render_count,dut.state);
        assert(dut.sprite_stack[0]==10'd1 &&
               dut.sprite_stack[1]==10'd2 &&
               dut.sprite_stack[2]==10'd0)
            else $fatal(1,"odd-head logical scan order %0d,%0d,%0d",
                        dut.sprite_stack[0],dut.sprite_stack[1],
                        dut.sprite_stack[2]);
        assert(render_order[0]==10'd0 && render_order[1]==10'd2 &&
               render_order[2]==10'd1)
            else $fatal(1,"odd-head reverse render order %0d,%0d,%0d",
                        render_order[0],render_order[1],render_order[2]);

        $display("PASS sprite overflow retains newest/frontmost 1024 and odd-head order");
        $finish;
    end
endmodule
