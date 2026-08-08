`timescale 1ns/1ps

// Media-independent sprite timing probe using a real MAME-captured SSpirits
// sprite RAM image. It checks the worst active line without running either
// CPU, so renderer regressions are isolated from the game boot path.
module tb_sprite_mame_line;
    import s24_pkg::*;
    logic clk=0,reset=1,ce_pixel=0;
    logic [9:0] hcount=0,vcount=0;
    logic [13:0] pixel0,pixel1,pixel2,pixel3;
    logic [10:0] rank0,rank1,rank2,rank3;
    logic mem_req,mem_ack;
    logic [26:4] mem_addr;
    logic [127:0] mem_data;
    logic [15:0] sprite_ram [0:131071];
    integer i,cycles,valid_words,fast_emit4_cycles;
    integer state_cycles [0:31];

    always #5 clk=~clk;
    assign mem_ack=mem_req;
    always @(posedge clk) if(!reset && dut.state<32)
        state_cycles[dut.state]=state_cycles[dut.state]+1;
    always @(posedge clk) if(!reset && dut.state==dut.S_X_EMIT4)
        fast_emit4_cycles=fast_emit4_cycles+1;

    function automatic [127:0] sprite_burst(input logic [26:4] address);
        integer base;
        begin
            base=(address-SDR_SPRITE_BASE[26:4])*8;
            sprite_burst={sprite_ram[base+7],sprite_ram[base+6],
                          sprite_ram[base+5],sprite_ram[base+4],
                          sprite_ram[base+3],sprite_ram[base+2],
                          sprite_ram[base+1],sprite_ram[base]};
        end
    endfunction
    always_comb mem_data=sprite_burst(mem_addr);

    s24_sprite dut(
        .clk(clk),.reset(reset),.ce_pixel(ce_pixel),.hcount(hcount),
        .vcount(vcount),.pixel0(pixel0),.pixel1(pixel1),.pixel2(pixel2),
        .pixel3(pixel3),.rank0(rank0),.rank1(rank1),.rank2(rank2),
        .rank3(rank3),.mem_req(mem_req),.mem_addr(mem_addr),
        .mem_data(mem_data),.mem_ack(mem_ack));

    task automatic raster_edge(input [9:0] line);
        begin
            @(negedge clk); hcount=10'd655; vcount=line; ce_pixel=1;
            @(posedge clk); #1; ce_pixel=0;
        end
    endtask

    initial begin
        for(i=0;i<32;i=i+1) state_cycles[i]=0;
        fast_emit4_cycles=0;
        $readmemh("verif/modelsim_sprite/mame_sprite_1200.hex",sprite_ram);
        repeat(3) @(posedge clk);
        reset=0;
        raster_edge(10'd383); // cache the linked list
        cycles=0;
        while(!dut.list_cache_valid && cycles<30000) begin
            @(posedge clk); cycles=cycles+1;
        end
        if(!dut.list_cache_valid)
            $fatal(1,"MAME sprite list did not cache cycles=%0d state=%0d",
                   cycles,dut.state);
        if(dut.stack_count<11'd1000)
            $fatal(1,"MAME sprite list count too small %0d",dut.stack_count);

        // The live scheduler walks from line 0. For this media-independent
        // worst-line probe, redirect the just-completed cache before the next
        // clock starts that walk so the measured line is MAME's line 230.
        dut.render_next_target=9'd230;
        dut.line_valid=0;
        raster_edge(10'd652); // target_y = 652 - 422 = 230, MAME max-active line
        cycles=0;
        while(dut.state!=dut.S_IDLE && cycles<10000) begin
            @(posedge clk); cycles=cycles+1;
        end
        valid_words=0;
        for(i=0;i<124;i=i+1) begin
            if(dut.gen_line_lane[0].line0_ram.mem[dut.fill_bank*128+i][25] ||
               dut.gen_line_lane[0].line1_ram.mem[dut.fill_bank*128+i][25] ||
               dut.gen_line_lane[0].line2_ram.mem[dut.fill_bank*128+i][25] ||
               dut.gen_line_lane[0].line3_ram.mem[dut.fill_bank*128+i][25] ||
               dut.gen_line_lane[1].line0_ram.mem[dut.fill_bank*128+i][25] ||
               dut.gen_line_lane[1].line1_ram.mem[dut.fill_bank*128+i][25] ||
               dut.gen_line_lane[1].line2_ram.mem[dut.fill_bank*128+i][25] ||
               dut.gen_line_lane[1].line3_ram.mem[dut.fill_bank*128+i][25] ||
               dut.gen_line_lane[2].line0_ram.mem[dut.fill_bank*128+i][25] ||
               dut.gen_line_lane[2].line1_ram.mem[dut.fill_bank*128+i][25] ||
               dut.gen_line_lane[2].line2_ram.mem[dut.fill_bank*128+i][25] ||
               dut.gen_line_lane[2].line3_ram.mem[dut.fill_bank*128+i][25] ||
               dut.gen_line_lane[3].line0_ram.mem[dut.fill_bank*128+i][25] ||
               dut.gen_line_lane[3].line1_ram.mem[dut.fill_bank*128+i][25] ||
               dut.gen_line_lane[3].line2_ram.mem[dut.fill_bank*128+i][25] ||
               dut.gen_line_lane[3].line3_ram.mem[dut.fill_bank*128+i][25])
                valid_words=valid_words+1;
        end
        $display("MAME sprite queue line active=%0d stack=%0d render_cycles=%0d valid_pixels=%0d fast_emit4=%0d state=%0d single_line_budget_overrun=%0d",
                 dut.active_count,dut.stack_count,cycles,valid_words,
                  fast_emit4_cycles,dut.state,cycles>1965);
        for(i=0;i<32;i=i+1)
            if(state_cycles[i]) $display("state_cycles[%0d]=%0d",i,state_cycles[i]);
        if(dut.state!=dut.S_IDLE || valid_words==0)
            $fatal(1,"MAME active sprite line failed state=%0d valid=%0d cycles=%0d",
                   dut.state,valid_words,cycles);
        if(fast_emit4_cycles==0)
            $fatal(1,"MAME 1:1 sprite line did not use four-lane fast path");
        $display("PASS MAME SSpirits sprite queue completion");
        $finish;
    end
endmodule
