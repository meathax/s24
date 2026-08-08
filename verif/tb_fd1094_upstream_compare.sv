`timescale 1ns/1ps

module tb_fd1094_upstream_compare;
    logic clk=0;
    always #5 clk=~clk;

    logic reset=0;
    logic [12:0] prog_addr=0;
    logic fd1094_we=0;
    logic [7:0] prog_data=0;
    logic dec_en=1;
    logic [2:0] fc=3'b000;
    logic asn=1;
    logic [23:1] addr=0;
    logic [15:0] enc=0;
    logic [15:0] upstream_dec;
    logic [7:0] upstream_key_data;
    wire [12:0] upstream_key_addr;
    logic rom_ok=1;
    logic dtackn=1;
    wire upstream_ok_dly;
    logic [7:0] key_mem [0:8191];

    logic [7:0] mainkey=0;
    logic [7:0] global_key1=0,global_key2=0,global_key3=0;
    logic [7:0] state=0;
    logic vector_fetch=0;
    logic [15:0] current_value;
    logic [12:0] current_mask_address;
    logic [2:0] current_mask_bit;

    assign upstream_key_data=key_mem[upstream_key_addr];

    jts16_fd1094_dec #(.SIMFILE("") ) upstream(
        .rst(reset),.clk(clk),
        .key_addr(upstream_key_addr),.key_data(upstream_key_data),
        .prog_addr(prog_addr),.fd1094_we(fd1094_we),.prog_data(prog_data),
        .dec_en(dec_en),.vrq(vector_fetch),.st(state),
        .gkey0(),.op_n(1'b0),.addr(addr),.enc(enc),.dec(upstream_dec),
        .rom_ok(rom_ok),.ok_dly(upstream_ok_dly));

    s24_fd1094_decrypt current(
        .word_address(addr),.encrypted(enc),.mainkey(mainkey),
        .global_key1(global_key1),.global_key2(global_key2),
        .global_key3(global_key3),.state(state),.vector_fetch(vector_fetch),
        .value_unmasked(current_value),.mask_address(current_mask_address),
        .mask_bit(current_mask_bit));

    task automatic write_global(input logic [1:0] index,input logic [7:0] value);
        begin
            @(negedge clk);
            prog_addr={11'b0,index}; prog_data=value; fd1094_we=1;
            @(negedge clk); fd1094_we=0;
        end
    endtask

    task automatic compare_one(
        input logic [23:1] test_addr,
        input logic [15:0] test_enc,
        input logic [7:0] test_state,
        input logic test_vector
    );
        logic [15:0] expected;
        begin
            addr=test_addr; enc=test_enc; state=test_state;
            vector_fetch=test_vector;
            #1;
            mainkey=upstream_key_data;
            #1;
            @(posedge clk); #1;
            expected=upstream.mask_en ? 16'hffff : current_value;
            if(upstream_dec!==expected) begin
                $fatal(1,"mismatch addr=%h enc=%h state=%h vector=%b upstream=%h current=%h mask=%b",
                       test_addr,test_enc,test_state,test_vector,upstream_dec,current_value,upstream.mask_en);
            end
        end
    endtask

    integer i;
    logic [31:0] rng;
    initial begin
        rng=32'h24fd1094;
        for(i=0;i<8192;i=i+1) begin
            rng={rng[30:0],rng[31]^rng[21]^rng[1]^rng[0]};
            key_mem[i]=rng[7:0];
        end

        // Global key bytes are written through the same four-byte interface
        // used by JTCORES, then mirrored into the System 24 decoder inputs.
        write_global(2'd0,8'h19);
        write_global(2'd1,8'hfc);
        write_global(2'd2,8'he4);
        write_global(2'd3,8'he2);
        global_key1=8'hfc; global_key2=8'he4; global_key3=8'he2;

        compare_one(23'h000000,16'h1234,8'h00,1'b1);
        compare_one(23'h000001,16'habcd,8'h00,1'b1);
        compare_one(23'h000002,16'h5a5a,8'h00,1'b1);
        compare_one(23'h000003,16'hcafe,8'h00,1'b1);
        compare_one(23'h000100,16'habcd,8'h00,1'b0);
        compare_one(23'h000100,16'habcd,8'h19,1'b0);
        compare_one(23'h001234,16'h8001,8'h5a,1'b0);
        compare_one(23'h002000,16'h7f00,8'ha7,1'b0);
        compare_one(23'h008000,16'hffff,8'h3c,1'b0);
        compare_one(23'h100000,16'h013a,8'h00,1'b0);
        for(i=0;i<128;i=i+1) begin
            rng={rng[30:0],rng[31]^rng[21]^rng[1]^rng[0]};
            compare_one(rng[23:1],rng[15:0],rng[7:0],rng[0]);
        end
        $display("PASS upstream JTS16 FD1094 equations match System 24 decoder");
        $finish;
    end
endmodule
