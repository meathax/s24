`timescale 1ns/1ps

// Position-unique tile-data probe for sprite 1051 ("finger detail over the
// spray can", real captured descriptor: x=245 y=111 sx=8 sy=8 64x64 1:1, no
// flip). tb_sprite_crkdown_seam.sv and tb_sprite_crkdown_seam_full.sv both
// use UNIFORM opaque tile data (every nibble = pen 1), which proves the
// renderer does not DROP any pixel -- but a wrong-tile-word/wrong-nibble
// addressing bug that fetches a DIFFERENT nibble of the SAME uniform ROM
// content is invisible to that test, because every possible nibble reads
// back identically. This bench instead synthesizes tile-data ROM content
// that encodes the absolute sprite-RAM word address into its own bytes
// (word = {addr[11:0],addr[3:0]} | 0x1111, so every nibble is guaranteed
// non-zero/opaque but position-unique), then independently recomputes, for
// every (x,y) pixel, the address the hardware SHOULD have fetched and the
// pen it SHOULD read, and diffs that against the actual rendered colour
// bits (not just the valid flag). Any tile/word/nibble misaddressing shows
// up as a colour mismatch even where the pixel is still "opaque".
module tb_sprite_crkdown_pattern;
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

    function automatic logic [15:0] rom_word(input logic [16:0] waddr);
        rom_word = ({waddr[11:0],waddr[3:0]}) | 16'h1111;
    endfunction

    integer w;
    logic [16:0] tag17,waddr;
    always_comb begin
        mem_data=128'd0;
        tag17 = {3'd0,mem_addr-BASE};
        case(mem_addr-BASE)
            23'd0: begin
                // Single descriptor, next=0 (Z=1 keeps word0 non-zero so it
                // is not mistaken for an empty list at index 0).
                mem_data[0*16 +:16]=16'h2000;
                mem_data[1*16 +:16]=16'h3f3f;   // zoomx=zoomy=0x40 (1:1)
                mem_data[2*16 +:16]=16'h1000;   // tile-data base (redirected)
                mem_data[3*16 +:16]=16'h0800;   // indirect palette base
                mem_data[4*16 +:16]=16'h306f;   // y=111, sy=8, no flip
                mem_data[5*16 +:16]=16'h30fd;   // x=245, sx=8, no flip
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            23'h0800: begin
                // Position-unique tile data alone cannot expose a wrong-
                // nibble/wrong-word addressing bug if every pen still maps
                // to the SAME final colour. Give each of the 16 pens its
                // own colour (0x10+pen, pen even -> high byte of word j=
                // pen/2, pen odd -> low byte) so a misfetched pen is visible
                // as a genuine colour mismatch downstream. Colour[7:6] must
                // stay 00 (category 0, matching the checker's line0_ram
                // reads) -- 0x10+pen for pen 0..15 stays within 0x10..0x1F,
                // whose top two bits are always 00.
                for(w=0;w<8;w=w+1)
                    mem_data[w*16 +:16] = {8'h10+w[7:0]*2, 8'h11+w[7:0]*2};
            end
            default: begin
                if(mem_addr-BASE >= 23'h1000+23'h1000)
                    for(w=0;w<8;w=w+1) begin
                        waddr = tag17*8 + w[16:0];
                        mem_data[w*16 +:16]=rom_word(waddr[16:0]);
                    end
                else mem_data=128'd0;
            end
        endcase
    end

    integer dbg_count;
    logic [4:0] state_prev;
    always @(posedge clk) if(!reset) begin
        if(dut.state==dut.S_PALETTE_WAIT && dut.mem_ack && dbg_count<20) begin
            dbg_count=dbg_count+1;
            $display("PALWAIT mem_addr=%0d mem_data=%h",dut.mem_addr,dut.mem_data);
        end
        if(dut.state==dut.S_X_EMIT4 && dut.target_y==9'd111 && dbg_count<60) begin
            dbg_count=dbg_count+1;
            $display("EMIT4 fill_bank=%0d fill_gen=%0d wren=%b addr0=%0d cat0=%0d data0=%h",
                     dut.fill_bank,dut.fill_generation,dut.line_b_wren,
                     dut.line_b_addr[0],dut.line_b_category[0],dut.line_b_data[0]);
        end
    end

    s24_sprite dut(
        .clk(clk),.reset(reset),.ce_pixel(ce_pixel),.hcount(hcount),.vcount(vcount),
        .pixel0(pixel0),.pixel1(pixel1),.pixel2(pixel2),.pixel3(pixel3),
        .rank0(rank0),.rank1(rank1),.rank2(rank2),.rank3(rank3),
        .mem_req(mem_req),.mem_addr(mem_addr),
        .mem_data(mem_data),.mem_ack(mem_ack),
        .cache_invalidate(1'b0),.cache_invalidate_tag(14'd0));

    localparam int SPR_X0=245, SPR_X1=308, SPR_Y0=111, SPR_Y1=174;
    localparam logic [16:0] TILE_BASE = 17'h10000; // d2=0x1000 -> d2[12:0]<<4
    localparam int SIZE_TILES = 8; // sx=sy=8

    // Independent re-derivation of the expected pen for a given pixel,
    // following the same specification as MAME's segas24_sprite_device::draw
    // (addoffset/newoffset/zx1 math) -- written fresh here, not copied from
    // rtl/video/s24_sprite.sv, so this checker cannot inherit an RTL bug.
    function automatic logic [3:0] expected_pen(input int px, input int py);
        int col, row;
        logic [7:0] tile_x, tile_y;
        logic [2:0] within_x, within_y;
        logic [13:0] tile_ordinal;
        logic [16:0] word_addr;
        logic [15:0] word_val;
        logic [1:0] nibble_sel;
        begin
            col = px - SPR_X0;
            row = py - SPR_Y0;
            tile_x = col[7:3]; within_x = col[2:0];
            tile_y = row[7:3]; within_y = row[2:0];
            tile_ordinal = tile_y*SIZE_TILES + tile_x;
            word_addr = (TILE_BASE + {3'd0,tile_ordinal,4'b0} +
                        {13'd0,within_y,1'b0} + {16'd0,within_x[2]}) & 17'h1ffff;
            word_val = rom_word(word_addr);
            nibble_sel = within_x[1:0];
            case(nibble_sel)
                2'd0: expected_pen = word_val[15:12];
                2'd1: expected_pen = word_val[11:8];
                2'd2: expected_pen = word_val[7:4];
                default: expected_pen = word_val[3:0];
            endcase
        end
    endfunction

    // Expected palette_entry(pen): palette word j holds pen 2j in its high
    // byte (0x40+2j) and pen 2j+1 in its low byte (0x41+2j), so every one of
    // the 16 pens maps to its OWN distinct colour 0x40+pen. A misfetched
    // pen (wrong tile word/nibble) therefore shows up as a genuine colour
    // mismatch, not just "still opaque".
    function automatic logic [7:0] expected_color(input logic [3:0] pen);
        expected_color = 8'h10 + {4'd0,pen};
    endfunction
    // line_value packing for mapped_color>1: low 14 bits stored =
    // {1'b0,1'b1,4'b0000,color[7:0]} -- matches rtl's line_value[13:0].
    function automatic logic [13:0] expected_low14(input logic [3:0] pen);
        expected_low14 = {1'b0,1'b1,4'b0000,expected_color(pen)};
    endfunction

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
    logic [13:0] word_low14;
    logic [3:0] exp_pen;
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
                            if(px>=SPR_X0 && px<=SPR_X1) begin
                                case(lane)
                                    0: begin
                                        word_valid=dut.gen_line_lane[0].line0_ram.mem[b*128+addr][25];
                                        word_gen=dut.gen_line_lane[0].line0_ram.mem[b*128+addr][33:26];
                                        word_low14=dut.gen_line_lane[0].line0_ram.mem[b*128+addr][13:0];
                                    end
                                    1: begin
                                        word_valid=dut.gen_line_lane[1].line0_ram.mem[b*128+addr][25];
                                        word_gen=dut.gen_line_lane[1].line0_ram.mem[b*128+addr][33:26];
                                        word_low14=dut.gen_line_lane[1].line0_ram.mem[b*128+addr][13:0];
                                    end
                                    2: begin
                                        word_valid=dut.gen_line_lane[2].line0_ram.mem[b*128+addr][25];
                                        word_gen=dut.gen_line_lane[2].line0_ram.mem[b*128+addr][33:26];
                                        word_low14=dut.gen_line_lane[2].line0_ram.mem[b*128+addr][13:0];
                                    end
                                    default: begin
                                        word_valid=dut.gen_line_lane[3].line0_ram.mem[b*128+addr][25];
                                        word_gen=dut.gen_line_lane[3].line0_ram.mem[b*128+addr][33:26];
                                        word_low14=dut.gen_line_lane[3].line0_ram.mem[b*128+addr][13:0];
                                    end
                                endcase
                                exp_pen = expected_pen(px, dut.bank_line_y[b]);
                                checked=checked+1;
                                if(!(word_valid && word_gen==dut.bank_generation[b])) begin
                                    errors=errors+1;
                                    fails_by_x[px]=fails_by_x[px]+1;
                                    fails_by_y[dut.bank_line_y[b]]=fails_by_y[dut.bank_line_y[b]]+1;
                                    if(errors<=80)
                                        $display("MISSING x=%0d y=%0d bank=%0d valid=%0d gen=%0d expect_gen=%0d exp_pen=%0d",
                                                 px,dut.bank_line_y[b],b,word_valid,word_gen,
                                                 dut.bank_generation[b],exp_pen);
                                end else if(word_low14!==expected_low14(exp_pen)) begin
                                    errors=errors+1;
                                    fails_by_x[px]=fails_by_x[px]+1;
                                    fails_by_y[dut.bank_line_y[b]]=fails_by_y[dut.bank_line_y[b]]+1;
                                    if(errors<=80)
                                        $display("MISCOLOR x=%0d y=%0d bank=%0d got_low14=%h expect_low14=%h exp_pen=%0d",
                                                 px,dut.bank_line_y[b],b,word_low14,
                                                 expected_low14(exp_pen),exp_pen);
                                end
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
        $display("pattern probe: stack_count=%0d",dut.stack_count);

        for(ln=0; ln<=383; ln=ln+1) begin
            line_boundary(ln[9:0]);
            repeat(1968) @(posedge clk);
        end
        $display("pattern probe: lines_checked=%0d checked=%0d errors=%0d",
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
