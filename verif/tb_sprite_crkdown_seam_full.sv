`timescale 1ns/1ps

// Full-mosaic pixel-perfect probe for Crack Down's spray-paint cutscene.
// Verbatim replay of the real captured attract-scene sprite list (same
// descriptor words as verif/tb_sprite_crkdown_list.sv; word2/word3 are
// redirected to one fixed fully-opaque tile block and one fixed palette so
// every one of the 38 sprites is a solid opaque rectangle). Unlike
// tb_sprite_crkdown_list.sv (which only checks that the renderer *reached*
// the descriptor for a scanline), this bench inspects the render line RAM
// directly the instant each line's fill completes, and checks EVERY pixel
// inside sprite index 1051's own 64x64 bounding box (x=[245,308],
// y=[111,174], the "finger detail over the spray can" -- the descriptor
// whose right edge/bottom row exactly match the seam artifact's L-shaped
// boundary reported on real hardware). Because 1051 renders strictly before
// (on top of) every overlapping neighbour in this list (reverse render
// order; nothing later in the list overlaps its box), its full box must be
// 100% opaque regardless of the other 37 sprites -- so any gap here, with
// all 38 real descriptors and real inter-sprite occlusion/priority/cache
// traffic active, is a genuine RTL defect and not an artifact of isolating
// the sprite (verif/tb_sprite_crkdown_seam.sv already proved 1051 alone is
// pixel-perfect).
module tb_sprite_crkdown_seam_full;
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
            23'd0: begin
                mem_data[0*16 +:16]=16'h0401;
                mem_data[1*16 +:16]=16'h0000;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h017f;
                mem_data[5*16 +:16]=16'h01f7;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1025: begin
                mem_data[0*16 +:16]=16'h4402;
                mem_data[1*16 +:16]=16'h0000;
                mem_data[2*16 +:16]=16'h0000;
                mem_data[3*16 +:16]=16'h0000;
                mem_data[4*16 +:16]=16'h017f;
                mem_data[5*16 +:16]=16'h01ef;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1026: begin
                mem_data[0*16 +:16]=16'h0403;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h4062;
                mem_data[5*16 +:16]=16'h3023;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1027: begin
                mem_data[0*16 +:16]=16'h0404;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h405e;
                mem_data[5*16 +:16]=16'h3063;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1028: begin
                mem_data[0*16 +:16]=16'h0405;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h4056;
                mem_data[5*16 +:16]=16'h30e3;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1029: begin
                mem_data[0*16 +:16]=16'h0406;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h4066;
                mem_data[5*16 +:16]=16'h3fe3;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1030: begin
                mem_data[0*16 +:16]=16'h0407;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h4052;
                mem_data[5*16 +:16]=16'h3123;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1031: begin
                mem_data[0*16 +:16]=16'h0408;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h405a;
                mem_data[5*16 +:16]=16'h30a3;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1032: begin
                mem_data[0*16 +:16]=16'h0409;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h2075;
                mem_data[5*16 +:16]=16'h2077;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1033: begin
                mem_data[0*16 +:16]=16'h040a;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h2075;
                mem_data[5*16 +:16]=16'h2085;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1034: begin
                mem_data[0*16 +:16]=16'h040b;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h2074;
                mem_data[5*16 +:16]=16'h2093;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1035: begin
                mem_data[0*16 +:16]=16'h040c;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h2071;
                mem_data[5*16 +:16]=16'h20bd;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1036: begin
                mem_data[0*16 +:16]=16'h040d;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h2070;
                mem_data[5*16 +:16]=16'h20cb;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1037: begin
                mem_data[0*16 +:16]=16'h040e;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h207e;
                mem_data[5*16 +:16]=16'h2feb;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1038: begin
                mem_data[0*16 +:16]=16'h040f;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h2079;
                mem_data[5*16 +:16]=16'h2031;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1039: begin
                mem_data[0*16 +:16]=16'h0410;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h2079;
                mem_data[5*16 +:16]=16'h203f;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1040: begin
                mem_data[0*16 +:16]=16'h0411;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h2078;
                mem_data[5*16 +:16]=16'h204d;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1041: begin
                mem_data[0*16 +:16]=16'h0412;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h2076;
                mem_data[5*16 +:16]=16'h2069;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1042: begin
                mem_data[0*16 +:16]=16'h0413;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h2072;
                mem_data[5*16 +:16]=16'h20af;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1043: begin
                mem_data[0*16 +:16]=16'h0414;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h207c;
                mem_data[5*16 +:16]=16'h2007;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1044: begin
                mem_data[0*16 +:16]=16'h0415;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h207a;
                mem_data[5*16 +:16]=16'h2023;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1045: begin
                mem_data[0*16 +:16]=16'h0416;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h207b;
                mem_data[5*16 +:16]=16'h2015;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1046: begin
                mem_data[0*16 +:16]=16'h0417;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h207d;
                mem_data[5*16 +:16]=16'h2ff9;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1047: begin
                mem_data[0*16 +:16]=16'h0418;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h206f;
                mem_data[5*16 +:16]=16'h20d9;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1048: begin
                mem_data[0*16 +:16]=16'h0419;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h2073;
                mem_data[5*16 +:16]=16'h20a1;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1049: begin
                mem_data[0*16 +:16]=16'h041a;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h2077;
                mem_data[5*16 +:16]=16'h205b;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1050: begin
                mem_data[0*16 +:16]=16'h441b;
                mem_data[1*16 +:16]=16'h0000;
                mem_data[2*16 +:16]=16'h0000;
                mem_data[3*16 +:16]=16'h0000;
                mem_data[4*16 +:16]=16'h013f;
                mem_data[5*16 +:16]=16'h01ef;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1051: begin
                mem_data[0*16 +:16]=16'h041c;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h306f;
                mem_data[5*16 +:16]=16'h30fd;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1052: begin
                mem_data[0*16 +:16]=16'h441d;
                mem_data[1*16 +:16]=16'h2000;
                mem_data[2*16 +:16]=16'h0000;
                mem_data[3*16 +:16]=16'h0000;
                mem_data[4*16 +:16]=16'h017f;
                mem_data[5*16 +:16]=16'h01ef;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1053: begin
                mem_data[0*16 +:16]=16'h041e;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h1170;
                mem_data[5*16 +:16]=16'h21b8;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1054: begin
                mem_data[0*16 +:16]=16'h041f;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h30c0;
                mem_data[5*16 +:16]=16'h3158;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1055: begin
                mem_data[0*16 +:16]=16'h0420;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h3100;
                mem_data[5*16 +:16]=16'h3158;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1056: begin
                mem_data[0*16 +:16]=16'h0421;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h3140;
                mem_data[5*16 +:16]=16'h3158;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1057: begin
                mem_data[0*16 +:16]=16'h0422;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h3140;
                mem_data[5*16 +:16]=16'h3028;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1058: begin
                mem_data[0*16 +:16]=16'h0423;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h3140;
                mem_data[5*16 +:16]=16'h3068;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1059: begin
                mem_data[0*16 +:16]=16'h0424;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h3100;
                mem_data[5*16 +:16]=16'h3028;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1060: begin
                mem_data[0*16 +:16]=16'h0425;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h3100;
                mem_data[5*16 +:16]=16'h3068;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1061: begin
                mem_data[0*16 +:16]=16'h0426;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h10f0;
                mem_data[5*16 +:16]=16'h3028;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1062: begin
                mem_data[0*16 +:16]=16'h0427;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h10f0;
                mem_data[5*16 +:16]=16'h3068;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1063: begin
                mem_data[0*16 +:16]=16'h0428;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h30b0;
                mem_data[5*16 +:16]=16'h3048;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1064: begin
                mem_data[0*16 +:16]=16'h0429;
                mem_data[1*16 +:16]=16'h003f;
                mem_data[2*16 +:16]=16'h1000;
                mem_data[3*16 +:16]=16'h0800;
                mem_data[4*16 +:16]=16'h0158;
                mem_data[5*16 +:16]=16'h3048;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'd1065: begin
                mem_data[0*16 +:16]=16'hffff;
                mem_data[1*16 +:16]=16'hffff;
                mem_data[2*16 +:16]=16'hffff;
                mem_data[3*16 +:16]=16'hffff;
                mem_data[4*16 +:16]=16'hffff;
                mem_data[5*16 +:16]=16'hffff;
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'h0800: mem_data={8{16'h3030}};   // every pen -> visible colour 0x30
            default: if(mem_addr-BASE >= 23'h1000+23'h1000)
                         mem_data={8{16'h1111}};  // opaque pen 1 tile data
                     else mem_data=128'd0;
        endcase
    end

    s24_sprite dut(
        .clk(clk),.reset(reset),.ce_pixel(ce_pixel),.hcount(hcount),.vcount(vcount),
        .pixel0(pixel0),.pixel1(pixel1),.pixel2(pixel2),.pixel3(pixel3),
        .rank0(rank0),.rank1(rank1),.rank2(rank2),.rank3(rank3),
        .mem_req(mem_req),.mem_addr(mem_addr),
        .mem_data(mem_data),.mem_ack(mem_ack),
        .cache_invalidate(1'b0),.cache_invalidate_tag(14'd0));

    // Sprite 1051's own bounding box (inclusive). Nothing later in the list
    // overlaps this X range, so with reverse-list render order 1051 must own
    // its whole box regardless of the other 37 descriptors.
    localparam int SPR_X0=245, SPR_X1=308, SPR_Y0=111, SPR_Y1=174;

    task automatic line_boundary(input [9:0] line);
        begin
            @(negedge clk);
            vcount=line;hcount=10'd655;ce_pixel=0;
            @(posedge clk);
            @(negedge clk);
            ce_pixel=1;
            @(posedge clk);#1;ce_pixel=0;hcount=0;
        end
    endtask

    logic [7:0] line_valid_prev;
    integer errors,checked,addr,lane,b,px;
    logic word_valid;
    logic [7:0] word_gen;
    logic expect_opaque;
    integer fails_by_x [0:495];
    integer fails_by_y [0:383];
    integer lines_checked;
    integer ln,dx,dy;

    always @(posedge clk) begin
        if(reset) line_valid_prev<='0;
        else begin
            for(b=0;b<8;b=b+1) begin
                if(dut.line_valid[b] && !line_valid_prev[b] &&
                   dut.bank_line_y[b]>=SPR_Y0[8:0] && dut.bank_line_y[b]<=SPR_Y1[8:0]) begin
                    lines_checked=lines_checked+1;
                    for(addr=(SPR_X0/4);addr<=(SPR_X1/4);addr=addr+1) begin
                        for(lane=0;lane<4;lane=lane+1) begin
                            px=addr*4+lane;
                            expect_opaque=(px>=SPR_X0 && px<=SPR_X1);
                            case(lane)
                                0: begin
                                    word_valid=dut.gen_line_lane[0].line0_ram.mem[b*128+addr][25];
                                    word_gen=dut.gen_line_lane[0].line0_ram.mem[b*128+addr][33:26];
                                end
                                1: begin
                                    word_valid=dut.gen_line_lane[1].line0_ram.mem[b*128+addr][25];
                                    word_gen=dut.gen_line_lane[1].line0_ram.mem[b*128+addr][33:26];
                                end
                                2: begin
                                    word_valid=dut.gen_line_lane[2].line0_ram.mem[b*128+addr][25];
                                    word_gen=dut.gen_line_lane[2].line0_ram.mem[b*128+addr][33:26];
                                end
                                default: begin
                                    word_valid=dut.gen_line_lane[3].line0_ram.mem[b*128+addr][25];
                                    word_gen=dut.gen_line_lane[3].line0_ram.mem[b*128+addr][33:26];
                                end
                            endcase
                            checked=checked+1;
                            if(expect_opaque &&
                               !(word_valid && word_gen==dut.bank_generation[b])) begin
                                errors=errors+1;
                                fails_by_x[px]=fails_by_x[px]+1;
                                fails_by_y[dut.bank_line_y[b]]=fails_by_y[dut.bank_line_y[b]]+1;
                                if(errors<=80)
                                    $display("MISSING x=%0d y=%0d bank=%0d valid=%0d gen=%0d expect_gen=%0d",
                                             px,dut.bank_line_y[b],b,word_valid,word_gen,
                                             dut.bank_generation[b]);
                            end
                        end
                    end
                end
            end
            line_valid_prev<=dut.line_valid;
        end
    end

    initial begin
        errors=0;checked=0;lines_checked=0;
        for(dx=0;dx<496;dx=dx+1) fails_by_x[dx]=0;
        for(dy=0;dy<384;dy=dy+1) fails_by_y[dy]=0;
        repeat(3) @(posedge clk);
        reset=0;
        line_boundary(10'd383);
        repeat(4000) @(posedge clk);
        if(!dut.list_cache_valid)
            $fatal(1,"list collection failed seen=%0d index=%0d state=%0d",
                   dut.list_seen,dut.list_index,dut.state);
        $display("mosaic seam probe: stack_count=%0d list_seen=%0d",
                 dut.stack_count,dut.list_seen);

        for(ln=0; ln<=383; ln=ln+1) begin
            line_boundary(ln[9:0]);
            repeat(1968) @(posedge clk);
        end
        $display("mosaic seam probe: lines_checked=%0d checked=%0d errors=%0d",
                 lines_checked,checked,errors);
        for(dx=0;dx<496;dx=dx+1)
            if(fails_by_x[dx]!=0) $display("fails_by_x[%0d]=%0d",dx,fails_by_x[dx]);
        for(dy=0;dy<384;dy=dy+1)
            if(fails_by_y[dy]!=0) $display("fails_by_y[%0d]=%0d",dy,fails_by_y[dy]);
        if(errors!=0 || lines_checked!=(SPR_Y1-SPR_Y0+1))
            $fatal(1,"TB_RESULT=FAIL errors=%0d lines_checked=%0d expected_lines=%0d",
                   errors,lines_checked,SPR_Y1-SPR_Y0+1);
        else
            $display("TB_RESULT=PASS");
        $finish;
    end
endmodule
