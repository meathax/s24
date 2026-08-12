`timescale 1ns/1ps

module tb_palette_scheduler;
    logic clk=0,reset=1,ce_pixel=0;
    logic [13:0] mixed=0,mixed_alt=0;
    logic blend=0,display_blank=0;
    logic [15:0] video_word,video_word_alt,cpu_rdata;
    logic shadow_bank,shadow_bank_alt,blend_q,display_blank_q;
    logic cpu_req=0,cpu_write=0;
    logic [12:0] cpu_addr=0;
    logic [15:0] cpu_wdata=0;
    logic [1:0] cpu_be=0;
    logic cpu_done;
    integer wait_clocks;

    always #5 clk=~clk;

    s24_palette_ram dut(.*);

    task automatic cpu_access(
        input logic write,
        input logic [12:0] addr,
        input logic [15:0] data,
        input logic [1:0] be,
        input logic [15:0] expected_old
    );
        begin
            @(negedge clk);
            cpu_req=1;cpu_write=write;cpu_addr=addr;cpu_wdata=data;cpu_be=be;
            wait_clocks=0;
            while(!cpu_done) begin
                @(posedge clk);#1;wait_clocks=wait_clocks+1;
                if(wait_clocks>4) $fatal(1,"CPU palette access exceeded bound");
            end
            if(cpu_rdata!==expected_old)
                $fatal(1,"CPU palette old/read data=%h expected=%h",cpu_rdata,expected_old);
            @(negedge clk);cpu_req=0;cpu_write=0;cpu_be=0;
            @(posedge clk);#1;
        end
    endtask

    initial begin
        dut.mem[13'h0123]=16'h1357;
        dut.mem[13'h0456]=16'h2468;
        repeat(3) @(posedge clk);
        reset=0;

        // A ce16 edge consumes both physical ports and captures all metadata
        // in the same one-cycle video lookup phase.
        @(negedge clk);
        mixed={1'b1,13'h0123};mixed_alt={1'b0,13'h0456};
        blend=1;display_blank=1;ce_pixel=1;
        @(posedge clk);#1;
        if(video_word!==16'h1357 || video_word_alt!==16'h2468 ||
           !shadow_bank || shadow_bank_alt || !blend_q || !display_blank_q)
            $fatal(1,"video pair/metadata phase mismatch");
        ce_pixel=0;

        // Outputs hold throughout a three-clock ce16 gap.
        repeat(3) begin
            mixed=14'h0000;mixed_alt=14'h0000;blend=0;display_blank=0;
            @(posedge clk);#1;
            if(video_word!==16'h1357 || video_word_alt!==16'h2468 ||
               !blend_q || !display_blank_q)
                $fatal(1,"video outputs changed outside ce16");
        end

        cpu_access(1'b0,13'h0123,16'h0000,2'b00,16'h1357);
        cpu_access(1'b1,13'h0123,16'hab00,2'b10,16'h1357);
        cpu_access(1'b0,13'h0123,16'h0000,2'b00,16'hab57);
        cpu_access(1'b1,13'h0123,16'h00cd,2'b01,16'hab57);
        cpu_access(1'b0,13'h0123,16'h0000,2'b00,16'habcd);

        // A CPU write presented on a pixel edge must wait; video sees the
        // old word, then the write completes in the following gap.
        @(negedge clk);
        mixed={1'b0,13'h0123};mixed_alt={1'b0,13'h0456};
        cpu_req=1;cpu_write=1;cpu_addr=13'h0123;
        cpu_wdata=16'hdead;cpu_be=2'b11;ce_pixel=1;
        @(posedge clk);#1;
        if(cpu_done || video_word!==16'habcd)
            $fatal(1,"CPU collided with or displaced video edge");
        ce_pixel=0;
        @(posedge clk);#1;
        if(!cpu_done || cpu_rdata!==16'habcd)
            $fatal(1,"deferred write/OLD_DATA mismatch");
        @(negedge clk);cpu_req=0;cpu_write=0;cpu_be=0;ce_pixel=1;
        @(posedge clk);#1;
        if(video_word!==16'hdead)
            $fatal(1,"post-write video lookup=%h expected=dead",video_word);

        // Four-clock ce16 spacing is also legal; CPU completion stays bounded.
        ce_pixel=0;
        repeat(4) @(posedge clk);
        cpu_access(1'b0,13'h0123,16'h0000,2'b00,16'hdead);

        $display("PASS palette one-copy scheduler video pair, metadata, lanes and collision priority");
        $finish;
    end
endmodule
