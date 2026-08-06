`timescale 1ns/1ps

// Sprite line-buffer staleness bound.
//
// The line buffers are never bulk-cleared: s24_sprite tags each written pixel
// with the fill bank's 16-bit generation and the display side accepts a pixel
// only when its stored tag equals the bank's CURRENT generation. That rejects
// stale pixels for exactly 2^16 fills of a bank -- about 23 seconds at 48
// fills/bank/frame -- and then the counter wraps. Any word not rewritten in
// that whole window matches its own ancient tag again, and because the counter
// keeps advancing one step per fill the match point sweeps through the stored
// history at real-time rate: the buffers replay ~23-second-old sprite pixels
// into every scene, animated purely by the free-running fill counters, so they
// persist through test/service mode and through an OSD pause that stops the
// CPU entirely.
//
// s24_sprite scrubs one rotating word of the bank being filled per fill, which
// bounds any word's unwritten lifetime to 128 fills of its bank. This bench
// pins that bound: with an empty descriptor list nothing renders, so the only
// line-RAM writes are scrubs, and every poisoned word must be zero within 128
// fills of its bank -- far inside the 65536-fill wrap horizon.
module tb_sprite_ghost;
    import s24_pkg::*;
    logic clk=0,reset=1,ce_pixel=0;
    logic [9:0] hcount=0,vcount=0;
    logic [13:0] pixel0,pixel1,pixel2,pixel3;
    logic [10:0] rank0,rank1,rank2,rank3;
    logic mem_req,mem_ack;
    logic [26:4] mem_addr;
    logic [127:0] mem_data;

    localparam int WORDS = 128;
    localparam int SCRUB_BOUND = 128;
    // A poison payload the display side would accept: valid set, and a
    // generation the bank will eventually return to.
    localparam logic [40:0] POISON = {16'hbeef,1'b1,11'd7,14'h1234};

    integer bank0_fills=0;
    integer stale_words;
    integer watchdog=0;

    always #5 clk=~clk;
    assign mem_ack=mem_req;
    // Empty list: word 0 of entry 0 reads zero, which is s24_sprite's
    // list terminator, so stack_count stays 0 and no sprite ever renders.
    assign mem_data=128'd0;

    s24_sprite dut(
        .clk(clk),.reset(reset),.ce_pixel(ce_pixel),.hcount(hcount),.vcount(vcount),
        .pixel0(pixel0),.pixel1(pixel1),.pixel2(pixel2),.pixel3(pixel3),
        .rank0(rank0),.rank1(rank1),.rank2(rank2),.rank3(rank3),
        .mem_req(mem_req),.mem_addr(mem_addr),
        .mem_data(mem_data),.mem_ack(mem_ack));

    // Free-running raster so fills are display-paced exactly as in hardware.
    always_ff @(posedge clk) if(!reset) begin
        ce_pixel<=1'b1;
        if(ce_pixel) begin
            if(hcount==10'd655) begin
                hcount<=0;
                vcount<=(vcount==10'd423)?10'd0:vcount+1'b1;
            end else hcount<=hcount+1'b1;
        end
    end

    // Count fills of bank 0 by its generation advancing. Every fill claim
    // bumps the chosen bank's generation exactly once, and unlike the scrub
    // signal this exists in every revision of the module, so this same bench
    // compiles against the pre-scrub RTL and fails there.
    logic [15:0] bank0_gen_prev;
    always_ff @(posedge clk) begin
        bank0_gen_prev<=dut.bank_generation[0];
        if(!reset && dut.bank_generation[0]!=bank0_gen_prev)
            bank0_fills<=bank0_fills+1;
    end

    // Poison every word of bank 0 across all four lanes and all four
    // priority-category RAMs.
    task automatic poison_bank0();
        for(int w=0;w<WORDS;w++) begin
            dut.gen_line_lane[0].line0_ram.mem[w]=POISON;
            dut.gen_line_lane[1].line0_ram.mem[w]=POISON;
            dut.gen_line_lane[2].line0_ram.mem[w]=POISON;
            dut.gen_line_lane[3].line0_ram.mem[w]=POISON;
            dut.gen_line_lane[0].line1_ram.mem[w]=POISON;
            dut.gen_line_lane[1].line1_ram.mem[w]=POISON;
            dut.gen_line_lane[2].line1_ram.mem[w]=POISON;
            dut.gen_line_lane[3].line1_ram.mem[w]=POISON;
            dut.gen_line_lane[0].line2_ram.mem[w]=POISON;
            dut.gen_line_lane[1].line2_ram.mem[w]=POISON;
            dut.gen_line_lane[2].line2_ram.mem[w]=POISON;
            dut.gen_line_lane[3].line2_ram.mem[w]=POISON;
            dut.gen_line_lane[0].line3_ram.mem[w]=POISON;
            dut.gen_line_lane[1].line3_ram.mem[w]=POISON;
            dut.gen_line_lane[2].line3_ram.mem[w]=POISON;
            dut.gen_line_lane[3].line3_ram.mem[w]=POISON;
        end
    endtask

    function automatic integer count_stale_bank0();
        count_stale_bank0=0;
        for(int w=0;w<WORDS;w++) begin
            if(dut.gen_line_lane[0].line0_ram.mem[w]!=0) count_stale_bank0++;
            if(dut.gen_line_lane[1].line0_ram.mem[w]!=0) count_stale_bank0++;
            if(dut.gen_line_lane[2].line0_ram.mem[w]!=0) count_stale_bank0++;
            if(dut.gen_line_lane[3].line0_ram.mem[w]!=0) count_stale_bank0++;
            if(dut.gen_line_lane[0].line1_ram.mem[w]!=0) count_stale_bank0++;
            if(dut.gen_line_lane[1].line1_ram.mem[w]!=0) count_stale_bank0++;
            if(dut.gen_line_lane[2].line1_ram.mem[w]!=0) count_stale_bank0++;
            if(dut.gen_line_lane[3].line1_ram.mem[w]!=0) count_stale_bank0++;
            if(dut.gen_line_lane[0].line2_ram.mem[w]!=0) count_stale_bank0++;
            if(dut.gen_line_lane[1].line2_ram.mem[w]!=0) count_stale_bank0++;
            if(dut.gen_line_lane[2].line2_ram.mem[w]!=0) count_stale_bank0++;
            if(dut.gen_line_lane[3].line2_ram.mem[w]!=0) count_stale_bank0++;
            if(dut.gen_line_lane[0].line3_ram.mem[w]!=0) count_stale_bank0++;
            if(dut.gen_line_lane[1].line3_ram.mem[w]!=0) count_stale_bank0++;
            if(dut.gen_line_lane[2].line3_ram.mem[w]!=0) count_stale_bank0++;
            if(dut.gen_line_lane[3].line3_ram.mem[w]!=0) count_stale_bank0++;
        end
    endfunction

    initial begin
        repeat(4) @(posedge clk);
        reset=0;
        repeat(20) @(posedge clk);
        poison_bank0();
        assert(count_stale_bank0()==WORDS*16)
            else $fatal(1,"poison did not take: %0d stale words",
                        count_stale_bank0());

        // Run until bank 0 has been filled SCRUB_BOUND times. The watchdog is
        // generous (one fill per scanline is the display-paced rate, so 128
        // fills of one of 8 banks needs roughly 1024 scanlines) but still
        // bounded, so a renderer that stops filling fails rather than hangs.
        while(bank0_fills<SCRUB_BOUND && watchdog<656*1400) begin
            @(posedge clk);watchdog++;
        end
        assert(bank0_fills>=SCRUB_BOUND)
            else $fatal(1,"renderer stopped filling bank 0: %0d fills in %0d clocks",
                        bank0_fills,watchdog);

        stale_words=count_stale_bank0();
        $display("sprite ghost probe fills=%0d clocks=%0d stale=%0d gen0=%0d",
                 bank0_fills,watchdog,stale_words,dut.bank_generation[0]);
        // Nothing renders here, so every surviving nonzero word is a stale
        // tag that a generation wrap would resurrect as a moving ghost.
        assert(stale_words==0)
            else $fatal(1,"%0d line-buffer words survived %0d fills of bank 0 -- a generation wrap will replay them as ghost sprites",
                        stale_words,SCRUB_BOUND);

        $display("PASS sprite line buffers fully scrubbed within %0d fills; no word can survive a generation wrap",
                 SCRUB_BOUND);
        $finish;
    end
endmodule
