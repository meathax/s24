`timescale 1ns/1ps

module tb_tile;
    logic clk = 0;
    always #10.416 clk = ~clk;

    logic reset = 1;
    logic ce_pixel = 0;
    logic [9:0] hcount = 0;
    logic [9:0] vcount = 0;
    logic cpu_wr = 0;
    logic [14:0] cpu_addr = 0;
    logic [15:0] cpu_din = 0;
    logic [1:0] cpu_be = 2'b11;
    logic [15:0] cpu_dout;
    logic [11:0] p0,p1,p2,p3;
    logic c0,c1,c2,c3;
    logic valid0,valid1,valid2,valid3;
    logic mem_req;
    logic [26:3] mem_addr;
    logic [63:0] mem_data = 64'h11111111_11111111;
    logic mem_ack = 0;
    logic mem_pending = 0;
    integer render_clocks;

    s24_tile dut(
        .clk(clk),.reset(reset),.ce_pixel(ce_pixel),.hcount(hcount),.vcount(vcount),
        .cpu_wr(cpu_wr),.cpu_addr(cpu_addr),.cpu_din(cpu_din),.cpu_be(cpu_be),
        .cpu_dout(cpu_dout),.layer0_pixel(p0),.layer1_pixel(p1),
        .layer2_pixel(p2),.layer3_pixel(p3),.layer0_cat(c0),.layer1_cat(c1),
        .layer2_cat(c2),.layer3_cat(c3),.layer0_valid(valid0),.layer1_valid(valid1),
        .layer2_valid(valid2),.layer3_valid(valid3),.mem_req(mem_req),.mem_addr(mem_addr),
        .mem_data(mem_data),.mem_ack(mem_ack));

    always_ff @(posedge clk) begin
        mem_ack <= 0;
        if (mem_pending) begin
            mem_pending <= 0;
            mem_ack <= 1;
        end else if (mem_req) mem_pending <= 1;
    end

    task automatic write_tile(input logic [14:0] address, input logic [15:0] data);
        begin
            @(negedge clk);
            cpu_addr = address;
            cpu_din = data;
            cpu_wr = 1;
            @(negedge clk);
            cpu_wr = 0;
        end
    endtask

    task automatic line_boundary(input logic [9:0] old_vcount);
        begin
            @(negedge clk);
            hcount = 10'd655;
            vcount = old_vcount;
            ce_pixel = 1;
            @(negedge clk);
            ce_pixel = 0;
            hcount = 0;
        end
    endtask

    initial begin
        repeat (4) @(negedge clk);
        reset = 0;

        // Layer 0: category one, character zero. Other layers disabled.
        for (int x=0; x<64; x++) write_tile(x,16'h8000);
        write_tile(15'h5000,16'h0000);
        write_tile(15'h5004,16'h0000);
        write_tile(15'h5005,16'h8000);
        write_tile(15'h5006,16'h8000);
        write_tile(15'h5007,16'h8000);
        for (int m=0; m<4; m++) write_tile(15'h6004+m,16'h0000);

        // At 423->0, the ahead renderer targets line 1 in the old bank.
        line_boundary(10'd423);
        render_clocks = 0;
        while (dut.render_active && render_clocks < 3936) begin
            @(negedge clk);
            render_clocks++;
        end
        if (dut.render_active) $fatal(1,"tile render missed one-line budget");

        // 0->1 switches to the completed buffer and clocks out pixel zero.
        line_boundary(10'd0);
        #1;
        if (p0 !== 12'h001 || c0 !== 1'b1 || valid0 !== 1'b1)
            $fatal(1,"layer 0 mismatch pixel=%h category=%b valid=%b",p0,c0,valid0);
        if (p1 !== 0 || p2 !== 0 || p3 !== 0 || valid1 || valid2 || valid3)
            $fatal(1,"disabled layers were not transparent");
        $display("PASS tile pixel=%h category=%b clocks=%0d",p0,c0,render_clocks);
        $finish;
    end
endmodule
