`timescale 1ns/1ps

module tb_sprite;
    import s24_pkg::*;
    logic clk=0,reset=1,ce_pixel=0;
    logic [9:0] hcount=0,vcount=0;
    logic [13:0] pixel0,pixel1,pixel2,pixel3;
    logic [10:0] rank0,rank1,rank2,rank3;
    logic mem_req,mem_ack;
    logic [26:4] mem_addr;
    logic [127:0] mem_data;
    localparam logic [26:4] BASE=SDR_SPRITE_BASE[26:4];

    always #5 clk=~clk;
    assign mem_ack=mem_req;

    always_comb begin
        mem_data=128'd0;
        case(mem_addr-BASE)
            // Entry zero: normal sprite, next entry 1, 1:1 zoom, tile 0x10,
            // indirect palette table 2, top=2, left=8 (visible X zero).
            0: begin
                mem_data[0*16 +:16]=16'h0001;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h0010;
                mem_data[3*16 +:16]=16'h0002;
                mem_data[4*16 +:16]=16'h0002;
                mem_data[5*16 +:16]=16'h0008;
            end
            1: mem_data[0 +:16]=16'hc000; // end entry
            2: begin
                mem_data[0*16 +:16]=16'h2600; // pen 0 -> visible color 0x26
                mem_data[1*16 +:16]=16'h4500; // pen 2 -> group 1, color 0x45
                // Pen 1 remains indirect color zero and is transparent.
            end
            32: mem_data[0*16 +:16]=16'h2010; // pens 2,0,1,0...
            default: mem_data=0;
        endcase
    end

    s24_sprite dut(
        .clk(clk),.reset(reset),.ce_pixel(ce_pixel),.hcount(hcount),.vcount(vcount),
        .pixel0(pixel0),.pixel1(pixel1),.pixel2(pixel2),.pixel3(pixel3),
        .rank0(rank0),.rank1(rank1),.rank2(rank2),.rank3(rank3),
        .mem_req(mem_req),.mem_addr(mem_addr),
        .mem_data(mem_data),.mem_ack(mem_ack));

    task automatic line_boundary(input [9:0] line);
        begin
            vcount=line;hcount=10'd655;ce_pixel=1;
            @(posedge clk);#1;ce_pixel=0;hcount=0;
        end
    endtask

    initial begin
        repeat(3) @(posedge clk);
        reset=0;
        line_boundary(0); // renders active line 2 into bank zero
        repeat(1200) @(posedge clk);
        assert(dut.state==dut.S_IDLE) else $fatal(1,"sprite renderer overrun state %0d",dut.state);
        line_boundary(1); // display the completed bank
        assert(pixel1==14'h1045 && rank1==0 &&
               pixel0==0 && pixel2==0 && pixel3==0)
            else $fatal(1,"sprite group candidates %h/%h/%h/%h rank=%0d",
                        pixel0,pixel1,pixel2,pixel3,rank1);
        ce_pixel=1;hcount=0;@(posedge clk);#1;
        assert(pixel0==14'h1026 && pixel1==0 && pixel2==0 && pixel3==0)
            else $fatal(1,"indirect pen-zero pixel %h/%h/%h/%h",
                        pixel0,pixel1,pixel2,pixel3);
        hcount=1;@(posedge clk);#1;
        assert(pixel0==0 && pixel1==0 && pixel2==0 && pixel3==0)
            else $fatal(1,"indirect color-zero transparency %h/%h/%h/%h",
                        pixel0,pixel1,pixel2,pixel3);

        // Source-level contracts for the Crack Down paths. These are kept in
        // the regression even when this bench is not being executed.
        force dut.render_clip={1'b1,16'h0000,16'd10,16'd8,
                               16'd20,16'd503};
        force dut.target_y=9'd15;#1;
        assert(dut.vertical_allowed && dut.clip_min_x==0 && dut.clip_max_x==495)
            else $fatal(1,"normal clip rectangle mismatch");
        force dut.render_clip={1'b1,16'h2000,16'd10,16'd8,
                               16'd20,16'd503};#1;
        assert(!dut.vertical_allowed)
            else $fatal(1,"reverse-Y clip did not remove interior");
        force dut.target_y=9'd9;#1;
        assert(dut.vertical_allowed)
            else $fatal(1,"reverse-Y clip removed exterior");
        release dut.render_clip;
        release dut.target_y;

        force dut.size_x_tiles=8'd128;
        force dut.size_y_tiles=8'd128;
        force dut.source_row=11'd264;    // tile row 33
        force dut.source_column=11'd40;  // tile column 5
        force dut.flipx=1'b0;
        force dut.flipy=1'b0;#1;
        assert(dut.tile_ordinal==14'd4229)
            else $fatal(1,"wide sprite tile ordinal truncated: %0d",
                        dut.tile_ordinal);
        force dut.flipx=1'b1;
        force dut.flipy=1'b1;#1;
        assert(dut.tile_x==8'd122 && dut.tile_y==8'd94)
            else $fatal(1,"large flipped sprite coordinates %0d,%0d",
                        dut.tile_x,dut.tile_y);
        release dut.size_x_tiles;
        release dut.size_y_tiles;
        release dut.source_row;
        release dut.source_column;
        release dut.flipx;
        release dut.flipy;
        $display("PASS sprite list, reverse buffer, zoom, palette and 4bpp fetch");
        $finish;
    end
endmodule
