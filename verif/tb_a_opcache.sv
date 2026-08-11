`timescale 1ns/1ps

module tb_a_opcache;
    import s24_pkg::*;

    logic clk=0,reset=1;
    logic [23:1] address='0,fill_address='0;
    logic fetch_window=0,lookup_q_valid,hit,fill=0,snoop=0;
    logic [15:0] hit_data,fill_data='0;
    logic [26:0] snoop_phys='0;

    always #5 clk=~clk;

    s24_a_opcache dut(.*);

    task automatic lookup(
        input logic [23:0] byte_address,
        input logic expected_hit,
        input logic [15:0] expected_data
    );
        begin
            address=byte_address[23:1];
            fetch_window=1;
            repeat(2) @(posedge clk);
            #1;
            if(!lookup_q_valid || hit!==expected_hit)
                $fatal(1,"lookup %h hit=%b expected=%b valid=%b",
                       byte_address,hit,expected_hit,lookup_q_valid);
            if(expected_hit && hit_data!==expected_data)
                $fatal(1,"lookup %h data=%h expected=%h",
                       byte_address,hit_data,expected_data);
        end
    endtask

    task automatic cache_fill(
        input logic [23:0] byte_address,
        input logic [15:0] data
    );
        begin
            address=byte_address[23:1];
            fill_address=byte_address[23:1];
            fill_data=data;
            fill=1;
            @(posedge clk);
            #1 fill=0;
            repeat(2) @(posedge clk);
        end
    endtask

    initial begin
        repeat(3) @(posedge clk);
        reset=0;
        // Wait for the fail-closed valid sweep to retire.
        repeat(2050) @(posedge clk);

        lookup(24'h001234,0,16'h0000);
        cache_fill(24'h001234,16'h4e71);
        lookup(24'h001234,1,16'h4e71);

        // Data-space reads never hit even when the word is resident.
        fetch_window=0;
        repeat(2) @(posedge clk);
        #1;
        if(hit) $fatal(1,"data-space lookup hit the opcode cache");

        // A physical Work-A write invalidates the corresponding logical
        // 0x080000-0x0fffff cache entry.
        cache_fill(24'h081234,16'h1234);
        lookup(24'h081234,1,16'h1234);
        snoop_phys=SDR_WORKA_BASE+27'h0001234;
        snoop=1;
        @(posedge clk);
        #1 snoop=0;
        lookup(24'h081234,0,16'h0000);

        // Work-B has no CPU-A logical alias and must not evict the same index.
        cache_fill(24'h081234,16'habcd);
        snoop_phys=SDR_WORKB_BASE+27'h0001234;
        snoop=1;
        @(posedge clk);
        #1 snoop=0;
        lookup(24'h081234,1,16'habcd);

        // Same-index boot-ROM aliases must be distinguished by their tag.
        cache_fill(24'h011234,16'h55aa);
        lookup(24'h001234,0,16'h0000);
        lookup(24'h011234,1,16'h55aa);

        $display("PASS CPU-A opcode cache hit, bypass, tag and snoop invariants");
        $finish;
    end
endmodule
