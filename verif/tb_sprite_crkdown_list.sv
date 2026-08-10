`timescale 1ns/1ps

// Replay of Crack Down's real attract-scene sprite list (MAME 0.288, frame
// 1500, captured by verif/mame/crkdown_sprite_dump.lua).  The descriptor
// words are verbatim except words 2 and 3, which are redirected to one fixed
// opaque tile block and one fixed palette so every sprite is a solid
// rectangle: this bench tests list walking, per-line filtering and clipping,
// not artwork.
//
// Sprite index 1051 (x=245 y=111, 64x64, 1:1) is the descriptor that renders
// the finger detail over the spray can.  On real MiSTer hardware it is absent,
// leaving a rectangular hole in the hand bounded exactly by its right edge
// (x=308) and its last row (y=174).  This bench reports, per scanline, every
// descriptor the renderer actually accepts, so the drop is observable directly
// instead of through the framebuffer.
module tb_sprite_crkdown_list(input logic clk);
    import s24_pkg::*;
    logic reset=1,ce_pixel=0;
    logic [9:0] hcount=0,vcount=0;
    logic [13:0] pixel0,pixel1,pixel2,pixel3;
    logic [10:0] rank0,rank1,rank2,rank3;
    logic mem_req,mem_ack=0;
    logic [26:4] mem_addr;
    logic [127:0] mem_data;
    localparam logic [26:4] BASE=SDR_SPRITE_BASE[26:4];
    // Identify the descriptor under test by its raw position words.
    localparam logic [15:0] TARGET_W4=16'h306f;   // y=111, sy=8
    localparam logic [15:0] TARGET_W5=16'h30fd;   // x=253-8=245, sx=8
    integer target_lines=0, missing_lines=0;
    logic seen_target;        // accepted for drawing on this line
    logic walked_target;      // reached the render walk (was in the active list)
    // Indexed by the renderer's OWN target_y, not by vcount: the producer
    // fills lines on its own schedule, so vcount cannot be used to label them.
    logic drawn_at [0:383];
    logic walked_at [0:383];
    logic filled_at [0:383];
    logic missed_deadline_at [0:383];

    // Model the complete external-SDRAM/CDC round trip instead of granting
    // every burst combinationally.  The old zero-wait model proved list
    // correctness but could never reproduce a line-buffer deadline miss that
    // exists only on the FPGA memory path.  Override at runtime with
    // +MEM_LATENCY=N; zero retains the original focused-test behaviour.
    integer mem_latency=0;
    integer mem_wait=0;
    initial void'($value$plusargs("MEM_LATENCY=%d",mem_latency));
    always_ff @(posedge clk) begin
        mem_ack<=1'b0;
        if(!mem_req) mem_wait<=0;
        else if(mem_latency==0) mem_ack<=1'b1;
        else if(mem_wait==mem_latency-1) begin
            mem_ack<=1'b1;
            mem_wait<=0;
        end else mem_wait<=mem_wait+1;
    end

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

    // Snoop every descriptor the renderer accepts for the line it is filling.
    integer init_line;
    always @(posedge clk) begin
        if(reset) begin
            for(init_line=0;init_line<384;init_line=init_line+1) begin
                filled_at[init_line]<=1'b0;
                walked_at[init_line]<=1'b0;
                drawn_at[init_line]<=1'b0;
                missed_deadline_at[init_line]<=1'b0;
            end
        end else begin
            if(ce_pixel && hcount==10'd655 && vcount<10'd383 &&
               dut.next_display_line<10'd384 && !dut.next_display_ready)
                missed_deadline_at[dut.next_display_line[8:0]]<=1'b1;
            if(dut.target_y<9'd384) begin
                filled_at[dut.target_y]<=1'b1;
                if(dut.descriptor[79:64]==TARGET_W4 &&
                   dut.descriptor[95:80]==TARGET_W5) begin
                    walked_at[dut.target_y]<=1'b1;
                    if(dut.state==dut.S_YMAP || dut.state==dut.S_YDIV)
                        drawn_at[dut.target_y]<=1'b1;
                end
            end
        end
    end

    typedef enum logic [3:0] {
        P_RESET, P_PRIME_SETUP, P_PRIME_PULSE, P_PRIME_CLEAR,
        P_LIST_WAIT, P_LINE_SETUP, P_LINE_PULSE, P_LINE_CLEAR,
        P_LINE_WAIT, P_CHECK
    } phase_t;
    phase_t phase=P_RESET;
    integer phase_count=0;
    integer line_index=0;
    integer ln;

    // Clocked stimulus keeps the test savable under Verilator 5.050. The
    // phase sequence is cycle-equivalent to the former event-control task.
    always @(posedge clk) begin
        case(phase)
            P_RESET: begin
                if(phase_count==2) begin
                    reset<=1'b0;
                    phase_count<=0;
                    phase<=P_PRIME_SETUP;
                end else phase_count<=phase_count+1;
            end
            P_PRIME_SETUP: begin
                vcount<=10'd383;hcount<=10'd655;ce_pixel<=1'b0;
                phase<=P_PRIME_PULSE;
            end
            P_PRIME_PULSE: begin
                ce_pixel<=1'b1;
                phase<=P_PRIME_CLEAR;
            end
            P_PRIME_CLEAR: begin
                ce_pixel<=1'b0;hcount<=10'd0;phase_count<=0;
                phase<=P_LIST_WAIT;
            end
            P_LIST_WAIT: begin
                if(phase_count==3999) begin
                    if(!dut.list_cache_valid)
                        $fatal(1,"list collection failed seen=%0d index=%0d state=%0d",
                               dut.list_seen,dut.list_index,dut.state);
                    $display("crkdown list collected: stack_count=%0d list_seen=%0d",
                             dut.stack_count,dut.list_seen);
                    line_index<=0;phase<=P_LINE_SETUP;
                end else phase_count<=phase_count+1;
            end
            P_LINE_SETUP: begin
                vcount<=line_index[9:0];hcount<=10'd655;ce_pixel<=1'b0;
                phase<=P_LINE_PULSE;
            end
            P_LINE_PULSE: begin
                ce_pixel<=1'b1;
                phase<=P_LINE_CLEAR;
            end
            P_LINE_CLEAR: begin
                ce_pixel<=1'b0;hcount<=10'd0;phase_count<=0;
                phase<=P_LINE_WAIT;
            end
            P_LINE_WAIT: begin
                if(phase_count==1967) begin
                    if(line_index==383)
                        phase<=P_CHECK;
                    else begin
                        line_index<=line_index+1;
                        phase<=P_LINE_SETUP;
                    end
                end else phase_count<=phase_count+1;
            end
            default: begin
                target_lines=0;
                missing_lines=0;
                // Sprite 1051 covers destination rows 111..174 inclusive.
                for(ln=111; ln<=174; ln=ln+1) begin
                    target_lines=target_lines+1;
                    if(!filled_at[ln]) begin
                        missing_lines=missing_lines+1;
                        $display("UNFILLED line=%0d never rendered by the producer",ln);
                    end else if(!drawn_at[ln]) begin
                        missing_lines=missing_lines+1;
                        $display("MISSING line=%0d sprite 1051 not drawn (reached render walk=%0d)",
                                 ln,walked_at[ln]);
                    end else if(missed_deadline_at[ln]) begin
                        missing_lines=missing_lines+1;
                        $display("LATE line=%0d completed after display deadline",ln);
                    end
                end
                $display("crkdown sprite 1051: %0d/%0d expected lines rendered, %0d missing",
                         target_lines-missing_lines,target_lines,missing_lines);
                if(missing_lines!=0)
                    $fatal(1,"TB_RESULT=FAIL missing=%0d",missing_lines);
                else
                    $display("TB_RESULT=PASS");
                $finish;
            end
        endcase
    end
endmodule
