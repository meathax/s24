`timescale 1ns/1ps

// Isolated single-sprite pixel-perfect probe for Crack Down's spray-paint
// cutscene "finger detail" sprite (real list index 1051, captured by
// verif/mame/crkdown_sprite_dump.lua at frame 1500: raw words
// 041c 003f 1000 0800 306f 30fd ffff ffff -- x=245 y=111 sx=8 sy=8 (64x64px)
// 1:1, no flip). Word 2/3 (tile-data base, indirect palette base) are
// redirected to one fixed fully-opaque tile block and one fixed palette, so
// EVERY one of the 64x64 destination pixels must be opaque colour 0x30 with
// no other sprite present to contend for priority. Unlike
// tb_sprite_crkdown_list.sv (which only checks that the renderer *reached*
// the descriptor for a given scanline), this bench inspects the render line
// RAM directly the instant each line's fill completes (line_valid rising
// edge), so a partial per-column dropout inside a single unzoomed sprite's
// own S_X_EMIT4 fast path is directly observable without any dependency on
// the display-side bank-swap/vblank timing.
module tb_sprite_crkdown_seam;
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
                // Single descriptor, next=0 (terminates list immediately).
                // Word0 must be non-zero as a *whole word* or the RTL (and
                // MAME) special-case "index 0 reads all-zero" as an EMPTY
                // list rather than a legitimate one-entry list that loops
                // back to index 0. Use separate x/y zoom mode (Z=1, bit13)
                // so word0 is non-zero while both zoom bytes still decode to
                // 0x3f+1=0x40 (1:1) via word1.
                mem_data[0*16 +:16]=16'h2000;
                mem_data[1*16 +:16]=16'h3f3f;   // zoomx=zoomy=0x40 (1:1)
                mem_data[2*16 +:16]=16'h1000;   // tile-data base (redirected)
                mem_data[3*16 +:16]=16'h0800;   // indirect palette base
                mem_data[4*16 +:16]=16'h306f;   // y=111, sy=8, no flip
                mem_data[5*16 +:16]=16'h30fd;   // x=245, sx=8, no flip
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'h0800: mem_data={8{16'h3030}};    // every pen -> visible colour 0x30
            default: if(mem_addr-BASE >= 23'h1000+23'h1000)
                         mem_data={8{16'h1111}}; // opaque pen 1 tile data
                     else mem_data=128'd0;
        endcase
    end

    always @(posedge clk) if(!reset && dut.state==dut.S_LIST_WAIT && dut.mem_ack)
        $display("LISTWAIT list_index=%0d mem_w0=%h stack_count=%0d->  seen=%0d",
                 dut.list_index,dut.mem_w0,dut.stack_count,dut.list_seen);

    s24_sprite dut(
        .clk(clk),.reset(reset),.ce_pixel(ce_pixel),.hcount(hcount),.vcount(vcount),
        .pixel0(pixel0),.pixel1(pixel1),.pixel2(pixel2),.pixel3(pixel3),
        .rank0(rank0),.rank1(rank1),.rank2(rank2),.rank3(rank3),
        .mem_req(mem_req),.mem_addr(mem_addr),
        .mem_data(mem_data),.mem_ack(mem_ack));

    // Sprite bounding box (inclusive), matching MAME's x-=8 origin adjust
    // and the descriptor's raw y/size fields.
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
    logic [15:0] gen_at_complete [0:7];
    logic word_valid;
    logic [15:0] word_gen;
    logic expect_opaque;
    integer fails_by_x [0:495];
    integer fails_by_y [0:383];
    integer lines_checked;
    integer ln,dx,dy;

    // Snoop every line completion: when line_valid[b] rises, bank_line_y[b]
    // and bank_generation[b] already hold the Y/generation that fill just
    // produced (both are set at fill-start and held through completion).
    always @(posedge clk) begin
        if(reset) line_valid_prev<='0;
        else begin
            for(b=0;b<8;b=b+1) begin
                if(dut.line_valid[b] && !line_valid_prev[b] &&
                   dut.bank_line_y[b]>=SPR_Y0[8:0] && dut.bank_line_y[b]<=SPR_Y1[8:0]) begin
                    lines_checked=lines_checked+1;
                    for(addr=0;addr<124;addr=addr+1) begin
                        for(lane=0;lane<4;lane=lane+1) begin
                            px=addr*4+lane;
                            expect_opaque=(px>=SPR_X0 && px<=SPR_X1);
                            // Category 0 word (palette 0x30 -> mapped_color[7:6]=00).
                            case(lane)
                                0: begin
                                    word_valid=dut.gen_line_lane[0].line0_ram.mem[b*128+addr][25];
                                    word_gen=dut.gen_line_lane[0].line0_ram.mem[b*128+addr][41:26];
                                end
                                1: begin
                                    word_valid=dut.gen_line_lane[1].line0_ram.mem[b*128+addr][25];
                                    word_gen=dut.gen_line_lane[1].line0_ram.mem[b*128+addr][41:26];
                                end
                                2: begin
                                    word_valid=dut.gen_line_lane[2].line0_ram.mem[b*128+addr][25];
                                    word_gen=dut.gen_line_lane[2].line0_ram.mem[b*128+addr][41:26];
                                end
                                default: begin
                                    word_valid=dut.gen_line_lane[3].line0_ram.mem[b*128+addr][25];
                                    word_gen=dut.gen_line_lane[3].line0_ram.mem[b*128+addr][41:26];
                                end
                            endcase
                            checked=checked+1;
                            if(expect_opaque &&
                               !(word_valid && word_gen==dut.bank_generation[b])) begin
                                errors=errors+1;
                                fails_by_x[px]=fails_by_x[px]+1;
                                fails_by_y[dut.bank_line_y[b]]=fails_by_y[dut.bank_line_y[b]]+1;
                                if(errors<=60)
                                    $display("MISSING x=%0d y=%0d bank=%0d valid=%0d gen=%0d expect_gen=%0d",
                                             px,dut.bank_line_y[b],b,word_valid,word_gen,
                                             dut.bank_generation[b]);
                            end else if(!expect_opaque && word_valid &&
                                        word_gen==dut.bank_generation[b]) begin
                                errors=errors+1;
                                if(errors<=60)
                                    $display("UNEXPECTED x=%0d y=%0d bank=%0d",
                                             px,dut.bank_line_y[b],b);
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
        $display("seam probe: single-sprite list collected stack_count=%0d",dut.stack_count);

        for(ln=0; ln<=383; ln=ln+1) begin
            line_boundary(ln[9:0]);
            repeat(2500) @(posedge clk);
        end
        $display("seam probe: lines_checked=%0d checked=%0d errors=%0d",
                 lines_checked,checked,errors);
        for(dx=0;dx<496;dx=dx+1)
            if(fails_by_x[dx]!=0) $display("fails_by_x[%0d]=%0d",dx,fails_by_x[dx]);
        for(dy=0;dy<384;dy=dy+1)
            if(fails_by_y[dy]!=0) $display("fails_by_y[%0d]=%0d",dy,fails_by_y[dy]);
        if(errors!=0 || lines_checked!=(SPR_Y1-SPR_Y0+1))
            $display("TB_RESULT=FAIL errors=%0d lines_checked=%0d expected_lines=%0d",
                     errors,lines_checked,SPR_Y1-SPR_Y0+1);
        else
            $display("TB_RESULT=PASS");
        $finish;
    end
endmodule
