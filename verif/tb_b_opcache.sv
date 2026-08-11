`timescale 1ns/1ps

module tb_b_opcache;
    import s24_pkg::*;

    logic clk=0,reset=1;
    logic [23:1] address='0,fill_address='0;
    logic fetch_window=0,lookup_q_valid,hit,fill=0,snoop=0;
    logic [7:0] state_now=0,fill_state=0;
    logic [15:0] hit_data,fill_data='0;
    logic [26:0] snoop_phys='0;

    always #5 clk=~clk;
    s24_b_opcache dut(.*);

    task automatic lookup(
        input logic [23:0] byte_address,
        input logic [7:0] state_value,
        input logic expected_hit,
        input logic [15:0] expected_data
    );
        begin
            address=byte_address[23:1];
            state_now=state_value;
            fetch_window=1;
            repeat(2) @(posedge clk);
            #1;
            if(!lookup_q_valid || hit!==expected_hit)
                $fatal(1,"lookup %h state=%h hit=%b expected=%b valid=%b",
                       byte_address,state_value,hit,expected_hit,lookup_q_valid);
            if(expected_hit && hit_data!==expected_data)
                $fatal(1,"lookup %h data=%h expected=%h",
                       byte_address,hit_data,expected_data);
        end
    endtask

    task automatic cache_fill(
        input logic [23:0] byte_address,
        input logic [7:0] state_value,
        input logic [15:0] data
    );
        begin
            address=byte_address[23:1];
            state_now=state_value;
            fill_address=byte_address[23:1];
            fill_state=state_value;
            fill_data=data;
            repeat(2) @(posedge clk);
            fill=1;
            @(posedge clk);
            #1 fill=0;
            repeat(2) @(posedge clk);
        end
    endtask

    initial begin
        repeat(3) @(posedge clk);
        reset=0;
        repeat(1026) @(posedge clk);

        // All four independently-filled words remain resident in one line.
        cache_fill(24'h001230,8'h12,16'h1111);
        cache_fill(24'h001232,8'h12,16'h2222);
        cache_fill(24'h001234,8'h12,16'h3333);
        cache_fill(24'h001236,8'h12,16'h4444);
        lookup(24'h001230,8'h12,1,16'h1111);
        lookup(24'h001232,8'h12,1,16'h2222);
        lookup(24'h001234,8'h12,1,16'h3333);
        lookup(24'h001236,8'h12,1,16'h4444);

        // Addresses 4 KiB apart collided in the former cache. Bit 12 is now
        // part of the set index, so both halves of the 8 KiB working set stay
        // resident simultaneously.
        cache_fill(24'h002230,8'h12,16'h8888);
        lookup(24'h001230,8'h12,1,16'h1111);
        lookup(24'h002230,8'h12,1,16'h8888);

        // State and upper address remain part of the line identity.
        lookup(24'h001230,8'h13,0,16'h0000);
        cache_fill(24'h003230,8'h12,16'haaaa);
        lookup(24'h001230,8'h12,0,16'h0000);
        lookup(24'h003230,8'h12,1,16'haaaa);

        // Physical Work-B and Work-A writes invalidate their aliased line.
        cache_fill(24'h001230,8'h12,16'h5555);
        snoop_phys=SDR_WORKB_BASE+27'h0001234;
        snoop=1;
        @(posedge clk);
        #1 snoop=0;
        lookup(24'h001230,8'h12,0,16'h0000);

        cache_fill(24'h081230,8'h12,16'h6666);
        snoop_phys=SDR_WORKA_BASE+27'h0001234;
        snoop=1;
        @(posedge clk);
        #1 snoop=0;
        lookup(24'h081230,8'h12,0,16'h0000);

        fetch_window=0;
        cache_fill(24'h001230,8'h12,16'h7777);
        fetch_window=0;
        repeat(2) @(posedge clk);
        #1;
        if(hit) $fatal(1,"data-space lookup hit CPU-B opcode cache");

        $display("PASS CPU-B 8 KiB opcode cache line, state, tag and snoop invariants");
        $finish;
    end
endmodule
