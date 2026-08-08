`timescale 1ns/1ps

// The 315-5292 character port is four byte-addressed 16-bit words wide for
// each aligned 64-bit fetch.  This regression checks the CPU byte enables,
// adjacent-word order, and the highest populated physical address.
module tb_char_video_ram;
    logic clk = 0;
    always #5 clk = ~clk;

    logic wr_en = 0;
    logic [15:0] wr_addr = 0;
    logic [15:0] wr_data = 0;
    logic [1:0] wr_be = 0;
    logic [13:0] rd_addr = 0;
    logic [63:0] rd_data;

    s24_char_video_ram dut(
        .clk(clk), .wr_en(wr_en), .wr_addr(wr_addr), .wr_data(wr_data),
        .wr_be(wr_be), .rd_addr(rd_addr), .rd_data(rd_data));

    task automatic write_word(
        input logic [15:0] address,
        input logic [15:0] data,
        input logic [1:0] byte_enable
    );
        begin
            @(negedge clk);
            wr_addr = address;
            wr_data = data;
            wr_be = byte_enable;
            wr_en = 1'b1;
            @(negedge clk);
            wr_en = 1'b0;
            wr_be = 2'b00;
        end
    endtask

    task automatic check_pair(
        input logic [13:0] address,
        input logic [63:0] expected
    );
        begin
            @(negedge clk);
            rd_addr = address;
            @(posedge clk);
            #1;
            if (rd_data !== expected)
                $fatal(1, "character pair address=%h data=%h expected=%h",
                       address, rd_data, expected);
        end
    endtask

    initial begin
        // Exercise both CPU byte lanes without disturbing the other byte.
        write_word(16'h0000, 16'h1234, 2'b11);
        write_word(16'h0001, 16'h5678, 2'b11);
        write_word(16'h0002, 16'h9abc, 2'b11);
        write_word(16'h0003, 16'hdef0, 2'b11);
        write_word(16'h0000, 16'hab00, 2'b10);
        write_word(16'h0001, 16'h00cd, 2'b01);
        check_pair(14'h0000, 64'hdef0_9abc_56cd_ab34);

        // Word address ffff must remain distinct and readable through the
        // final four-word aligned fetch, rather than aliasing word zero.
        write_word(16'hfffc, 16'h1357, 2'b11);
        write_word(16'hfffd, 16'h2468, 2'b11);
        write_word(16'hfffe, 16'h369c, 2'b11);
        write_word(16'hffff, 16'h48ad, 2'b11);
        check_pair(14'h3fff, 64'h48ad_369c_2468_1357);

        $display("PASS 315-5292 character RAM byte lanes and high address");
        $finish;
    end
endmodule
