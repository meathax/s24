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
        end
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
               dut.descriptor_stack[0][2*16 +:16]==16'd1024)
            else $fatal(1,
                "overflow kept oldest descriptors: head=%0d slot0=%0d expected newest descriptor 1024",
                dut.stack_head,dut.descriptor_stack[0][2*16 +:16]);

        $display("PASS sprite overflow retains newest/frontmost 1024 descriptors");
        $finish;
    end
endmodule
