`timescale 1ns/1ps

// Regression for the sprite line-bank stripe failure.
//
// The raster must never display or reclaim a bank while the producer owns it,
// and a fill which crosses the visible-frame boundary must not resurrect a
// previous-frame line after that boundary retires the queue.
module tb_sprite_bank_ownership;
    import s24_pkg::*;

    logic clk=0,reset=1,ce_pixel=0;
    logic [9:0] hcount=0,vcount=0;
    logic [13:0] pixel0,pixel1,pixel2,pixel3;
    logic [10:0] rank0,rank1,rank2,rank3;
    logic mem_req;
    logic [26:4] mem_addr;

    always #5 clk=~clk;

    s24_sprite dut(
        .clk(clk),.reset(reset),.ce_pixel(ce_pixel),
        .hcount(hcount),.vcount(vcount),
        .pixel0(pixel0),.pixel1(pixel1),.pixel2(pixel2),.pixel3(pixel3),
        .rank0(rank0),.rank1(rank1),.rank2(rank2),.rank3(rank3),
        .mem_req(mem_req),.mem_addr(mem_addr),
        .mem_data(128'd0),.mem_ack(1'b0),
        .cache_invalidate(1'b0),.cache_invalidate_tag(14'd0));

    initial begin
        repeat(4) @(posedge clk);
        reset=0;
        repeat(2) @(posedge clk);

        // The per-bank scrub must cover every packed X word strictly before
        // that bank's generation tag can wrap and make stale data look live.
        assert((1 << $bits(dut.fill_generation)) >
               (1 << $bits(dut.bank_scrub[0])))
            else $fatal(1,"sprite generation tag does not outlive scrub");
        assert($bits(dut.line0_display_q[0])==34)
            else $fatal(1,"sprite line word no longer hits four-M10K packing");

        // The combinational selectors must skip both the raster bank and a
        // different bank currently owned by the producer.
        @(negedge clk);
        dut.display_bank=0;
        dut.line_valid='0;
        dut.bank_filling=8'b0000_0010;
        #1;
        assert(dut.fill_candidate_valid && dut.fill_candidate==2)
            else $fatal(1,"fill selector reused display/filling bank: %0d",
                        dut.fill_candidate);
        dut.bank_line_y[1]=9'd1;
        dut.line_valid[1]=1;
        #1;
        assert(!dut.next_display_ready)
            else $fatal(1,"display selector exposed a filling bank");
        dut.line_valid='0;
        dut.bank_filling='0;

        // Hold a fill in flight across the exact boundary that toggles the
        // frame epoch and invalidates every queued line.
        dut.state=dut.S_DATA_WAIT;
        dut.fill_bank=1;
        dut.display_bank=0;
        dut.bank_filling=8'b0000_0010;
        dut.fill_epoch=dut.frame_epoch;
        hcount=10'd655;
        vcount=10'd383;
        ce_pixel=1;
        @(posedge clk); #1;
        ce_pixel=0;
        assert(dut.bank_filling==8'b0000_0010 && dut.line_valid==0)
            else $fatal(1,"frame boundary reclaimed/published in-flight bank");
        assert(dut.fill_epoch!=dut.frame_epoch)
            else $fatal(1,"frame epoch did not advance across in-flight fill");

        // Completing that old fill must release ownership but leave the bank
        // invalid; otherwise a stale line can seed another blank stripe.
        @(negedge clk);
        dut.state=dut.S_NEXT_SPRITE;
        dut.render_pos=0;
        @(posedge clk); #1;
        assert(!dut.bank_filling[1] && !dut.line_valid[1])
            else $fatal(1,"previous-frame fill was resurrected as valid");

        // The cached-empty shortcut claims and completes in one clock. Its
        // decision must not use fill_epoch, which still belongs to the prior
        // claim until the nonblocking assignment at this edge retires.
        @(negedge clk);
        dut.state=dut.S_IDLE;
        dut.render_next_target=9'd10;
        dut.list_cache_valid=1;
        dut.cache_refresh_pending=0;
        dut.active_list_valid=1;
        dut.line_boundary[10]=0;
        dut.active_count=0;
        dut.display_bank=0;
        dut.line_valid='0;
        dut.bank_filling='0;
        dut.fill_epoch=~dut.frame_epoch;
        #1;
        assert(dut.fill_candidate_valid)
            else $fatal(1,"no free bank for cached-empty epoch test");
        @(posedge clk); #1;
        assert(dut.state==dut.S_IDLE && dut.bank_filling=='0 &&
               dut.line_valid[1])
            else $fatal(1,"cached-empty current-frame line was dropped");

        // A normal same-frame completion still publishes its line.
        @(negedge clk);
        dut.state=dut.S_NEXT_SPRITE;
        dut.render_pos=0;
        dut.fill_bank=2;
        dut.display_bank=0;
        dut.bank_filling=8'b0000_0100;
        dut.line_valid[2]=0;
        dut.fill_epoch=dut.frame_epoch;
        @(posedge clk); #1;
        assert(!dut.bank_filling[2] && dut.line_valid[2])
            else $fatal(1,"same-frame fill did not become display-ready");

        $display("PASS sprite bank ownership, frame-epoch retirement, and normal completion");
        $finish;
    end
endmodule
