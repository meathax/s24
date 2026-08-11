`timescale 1ns/1ps

module tb_mixer;
    logic clk=0,reset=1,cpu_wr=0;
    logic [3:0] cpu_addr=0;
    logic [15:0] cpu_din=0,cpu_dout;
    logic [1:0] cpu_be=2'b11;
    logic [11:0] t0=0,t1=0,t2=0,t3=0;
    logic c0=0,c1=0,c2=0,c3=0;
    logic v0=0,v1=0,v2=0,v3=0;
    logic [13:0] sp0=0,sp1=0,sp2=0,sp3=0,mixed,mixed_alt;
    logic [10:0] sr0=0,sr1=0,sr2=0,sr3=0;
    logic blank,screen_flip;
    always #5 clk=~clk;

    s24_mixer dut(
        .clk(clk),.reset(reset),.cpu_wr(cpu_wr),.cpu_addr(cpu_addr),
        .cpu_din(cpu_din),.cpu_be(cpu_be),.cpu_dout(cpu_dout),
        .tile0_pixel(t0),.tile1_pixel(t1),.tile2_pixel(t2),.tile3_pixel(t3),
        .tile0_cat(c0),.tile1_cat(c1),.tile2_cat(c2),.tile3_cat(c3),
        .tile0_valid(v0),.tile1_valid(v1),.tile2_valid(v2),.tile3_valid(v3),
        .sprite0_pixel(sp0),.sprite1_pixel(sp1),.sprite2_pixel(sp2),.sprite3_pixel(sp3),
        .sprite0_rank(sr0),.sprite1_rank(sr1),.sprite2_rank(sr2),.sprite3_rank(sr3),
        .tile_blink(4'b0000),
        .mixed_pixel(mixed),.mixed_pixel_alt(mixed_alt),
        .display_blank(blank),.screen_flip(screen_flip));

    task automatic write_reg(input [3:0] a,input [15:0] d);
        begin cpu_addr=a;cpu_din=d;cpu_wr=1;@(posedge clk);#1;cpu_wr=0;end
    endtask

    initial begin
        repeat(2) @(posedge clk);reset=0;
        write_reg(0,16'h0003); // tile 0/category 0 priority
        write_reg(11,16'h0003); // indirect-color group 0 priority
        t0=12'h123;v0=1;sp0=14'h2000;#1;
        assert(mixed==14'h2123) else $fatal(1,"shadow composition %h",mixed);
        sp0=14'h1045;#1;
        assert(mixed==14'h1045) else $fatal(1,"normal sprite %h",mixed);
        write_reg(11,16'h0002);#1;
        assert(mixed==14'h0123) else $fatal(1,"tile priority %h",mixed);

        // Pen zero remains transparent in the normal pass, but the opaque
        // prepass must retain color zero from the selected tile palette.
        t0=12'hab0;sp0=0;#1;
        assert(mixed==14'h0ab0) else $fatal(1,"palette backdrop %h",mixed);

        // The lowest-priority category-zero layer supplies the backdrop.
        // Equal priorities follow MAME's reverse opaque draw order, leaving
        // the higher-numbered physical layer underneath.
        t3=12'hcd0;v3=1;#1;
        assert(mixed==14'h0cd0) else $fatal(1,"lower-priority backdrop %h",mixed);
        write_reg(6,16'h0003);#1;
        assert(mixed==14'h0cd0) else $fatal(1,"equal-priority backdrop %h",mixed);
        write_reg(6,16'h0004);#1;
        assert(mixed==14'h0ab0) else $fatal(1,"higher-priority backdrop %h",mixed);

        // TILEMAP_DRAW_OPAQUE bypasses both pen transparency and the category
        // comparison. Category-one tiles therefore still supply the physical
        // layer's color-zero backdrop through its category-zero mixer pass.
        t3=0;v3=0;
        t0=12'hab0;c0=1;v0=1;#1;
        assert(mixed==14'h0ab0) else $fatal(1,"category-one backdrop %h",mixed);
        c0=0;#1;
        assert(mixed==14'h0ab0) else $fatal(1,"category-zero backdrop restore %h",mixed);

        // A front group-0 sprite is blocked by the tile. MAME then permits an
        // earlier group-1 sprite whose mixer priority clears the same tile.
        t3=0;v3=0;t0=12'h123;
        sp0=14'h1010;sr0=11'd10;sp1=14'h1020;sr1=11'd5;
        write_reg(11,16'h0002);write_reg(10,16'h0004);#1;
        assert(mixed==14'h1020) else $fatal(1,"blocked-front fallback %h",mixed);
        // Once group 0 also clears the tile, its larger list rank wins.
        write_reg(11,16'h0004);#1;
        assert(mixed==14'h1010) else $fatal(1,"front sprite ordering %h",mixed);

        // Mixer register 13 bit 0 blanks the native pixel path; bit 1 is the
        // separate board screen-flip control.  Verify the two controls do not
        // alias each other.
        write_reg(13,16'h0002);#1;
        assert(screen_flip) else $fatal(1,"screen flip register");
        assert(!blank) else $fatal(1,"screen flip changed blanking");
        write_reg(13,16'h0001);#1;
        assert(!screen_flip) else $fatal(1,"blank register changed screen flip");
        assert(blank) else $fatal(1,"display blank register");
        write_reg(13,16'h0000);#1;

        // Equal reverse-list ranks preserve the original sequential/MAME
        // group order, including across the two branches of the rank tree.
        sr0=11'd7;sr1=11'd7;sr2=11'd7;sr3=11'd7;
        sp0=14'h1010;sp1=14'h1020;sp2=14'h1030;sp3=14'h1040;
        write_reg(10,16'h0004);write_reg(9,16'h0004);write_reg(8,16'h0004);#1;
        assert(mixed==14'h1010) else $fatal(1,"equal-rank sprite ordering %h",mixed);

        $display("PASS mixer priority, equal-rank order, backdrop, and sprite shadow composition");
        $finish;
    end
endmodule
