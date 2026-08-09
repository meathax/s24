`timescale 1ns/1ps

// Real-artwork pixel-perfect probe for sprite 1051 ("finger detail over the
// spray can", real captured descriptor: x=245 y=111 sx=8 sy=8 64x64 1:1, no
// flip, tilebase=0x194c, palbase=0x0844 -- MAME 0.288, crkdown, frame 1500,
// captured live via MAME MCP). tb_sprite_crkdown_seam.sv and
// tb_sprite_crkdown_pattern.sv both proved the renderer pixel-perfect using
// synthetic ALWAYS-OPAQUE tile data; neither can expose a bug that only
// triggers on genuine transparency (real artwork is ~46% transparent pen 0
// inside this box, since the thumb silhouette does not fill the whole
// rectangle). This bench renders with the REAL captured tile+palette words
// (verif/modelsim_sprite/crkdown_1051_tile.hex/_palette.hex) and diffs every
// pixel against an independently precomputed expected-colour grid
// (crkdown_1051_expected_color.hex, generated straight from MAME's own
// segas24_sprite_device::draw addressing formula in a standalone Python
// script, not from this RTL), so any addressing/transparency-handling
// divergence shows up directly.
module tb_sprite_crkdown_real;
    import s24_pkg::*;
    logic clk=0,reset=1,ce_pixel=0;
    logic [9:0] hcount=0,vcount=0;
    logic [13:0] pixel0,pixel1,pixel2,pixel3;
    logic [10:0] rank0,rank1,rank2,rank3;
    logic mem_req,mem_ack;
    logic [26:4] mem_addr;
    logic [127:0] mem_data;
    localparam logic [26:4] BASE=SDR_SPRITE_BASE[26:4];

    logic [15:0] tile_mem [0:1023];
    logic [15:0] pal_mem [0:7];
    logic [7:0] expected_color [0:4095]; // row-major, 64 wide x 64 tall

    initial begin
        $readmemh("verif/modelsim_sprite/crkdown_1051_tile.hex", tile_mem);
        $readmemh("verif/modelsim_sprite/crkdown_1051_palette.hex", pal_mem);
        $readmemh("verif/modelsim_sprite/crkdown_1051_expected_color.hex", expected_color);
    end

    always #5 clk=~clk;
    assign mem_ack=mem_req;

    integer dbgn;
    always @(posedge clk) if(!reset && dut.target_y==9'd113 && dbgn<200) begin
        if(dut.state==dut.S_X_EMIT4) begin
            dbgn=dbgn+1;
            $display("DBG113 sc=%0d dest_x=%0d wren=%b fill_bank=%0d fill_gen=%0d bank_gen[fb]=%0d bank_y[fb]=%0d lc0=%h lc1=%h lc2=%h lc3=%h",
                     dut.source_column,dut.dest_x,dut.line_b_wren,
                     dut.fill_bank,dut.fill_generation,
                     dut.bank_generation[dut.fill_bank],dut.bank_line_y[dut.fill_bank],
                     dut.lane_line_value[0],dut.lane_line_value[1],
                     dut.lane_line_value[2],dut.lane_line_value[3]);
        end
    end
    always @(posedge clk) if(!reset && dut.line_valid[2] && !line_valid_prev[2] &&
                             dut.bank_line_y[2]==9'd113 && dbgn<300) begin
        dbgn=dbgn+1;
        $display("BANK2COMPLETE gen=%0d y=%0d",dut.bank_generation[2],dut.bank_line_y[2]);
    end

    integer w;
    always_comb begin
        mem_data=128'd0;
        case(mem_addr-BASE)
            23'd0: begin
                mem_data[0*16 +:16]=16'h2000;
                mem_data[1*16 +:16]=16'h3f3f;   // zoomx=zoomy=0x40 (1:1)
                mem_data[2*16 +:16]=16'h194c;   // real tile-data base
                mem_data[3*16 +:16]=16'h0844;   // real indirect palette base
                mem_data[4*16 +:16]=16'h306f;   // y=111, sy=8, no flip
                mem_data[5*16 +:16]=16'h30fd;   // x=245, sx=8, no flip
                mem_data[6*16 +:16]=16'hffff;
                mem_data[7*16 +:16]=16'hffff;
            end
            // Real palette burst: word address = palette_base*8 = 0x844*8 =
            // 0x4220 -> BASE-relative tag = 0x4220>>3 = 0x844.
            23'h0844: for(w=0;w<8;w=w+1) mem_data[w*16 +:16]=pal_mem[w];
            default: begin
                // Real tile burst: word address = tile_base*16 (tile_base
                // already in words: d2[12:0]<<4) + tile_ordinal offsets.
                // tile_base word = 0x194c<<4 = 0x194c0 = 103616. tag range
                // = 103616>>3 .. (103616+1023)>>3.
                if((mem_addr-BASE) >= (103616>>3) && (mem_addr-BASE) <= ((103616+1023)>>3))
                    for(w=0;w<8;w=w+1)
                        mem_data[w*16 +:16] = tile_mem[(mem_addr-BASE-(103616>>3))*8+w];
                else mem_data=128'd0;
            end
        endcase
    end

    s24_sprite dut(
        .clk(clk),.reset(reset),.ce_pixel(ce_pixel),.hcount(hcount),.vcount(vcount),
        .pixel0(pixel0),.pixel1(pixel1),.pixel2(pixel2),.pixel3(pixel3),
        .rank0(rank0),.rank1(rank1),.rank2(rank2),.rank3(rank3),
        .mem_req(mem_req),.mem_addr(mem_addr),
        .mem_data(mem_data),.mem_ack(mem_ack));

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
    logic [15:0] word_gen;
    logic [13:0] word_low14;
    integer fails_by_x [0:495];
    integer fails_by_y [0:383];
    integer lines_checked;
    integer ln,dx,dy;
    logic [7:0] exp_color;
    logic [7:0] got_color;
    logic exp_transparent;

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
                                exp_color=expected_color[(dut.bank_line_y[b]-SPR_Y0)*64+(px-SPR_X0)];
                                exp_transparent=(exp_color==0);
                                case(lane)
                                    0: begin
                                        word_valid=dut.gen_line_lane[0].line0_ram.mem[b*128+addr][25];
                                        word_gen=dut.gen_line_lane[0].line0_ram.mem[b*128+addr][41:26];
                                        word_low14=dut.gen_line_lane[0].line0_ram.mem[b*128+addr][13:0];
                                    end
                                    1: begin
                                        word_valid=dut.gen_line_lane[1].line0_ram.mem[b*128+addr][25];
                                        word_gen=dut.gen_line_lane[1].line0_ram.mem[b*128+addr][41:26];
                                        word_low14=dut.gen_line_lane[1].line0_ram.mem[b*128+addr][13:0];
                                    end
                                    2: begin
                                        word_valid=dut.gen_line_lane[2].line0_ram.mem[b*128+addr][25];
                                        word_gen=dut.gen_line_lane[2].line0_ram.mem[b*128+addr][41:26];
                                        word_low14=dut.gen_line_lane[2].line0_ram.mem[b*128+addr][13:0];
                                    end
                                    default: begin
                                        word_valid=dut.gen_line_lane[3].line0_ram.mem[b*128+addr][25];
                                        word_gen=dut.gen_line_lane[3].line0_ram.mem[b*128+addr][41:26];
                                        word_low14=dut.gen_line_lane[3].line0_ram.mem[b*128+addr][13:0];
                                    end
                                endcase
                                got_color = (word_valid && word_gen==dut.bank_generation[b])
                                            ? word_low14[7:0] : 8'd0;
                                $fwrite(dumpfile,"%02h\n",got_color);
                                checked=checked+1;
                                if(exp_transparent) begin
                                    // A transparent source pixel must NOT
                                    // claim the word this generation.
                                    if(word_valid && word_gen==dut.bank_generation[b]) begin
                                        errors=errors+1;
                                        fails_by_x[px]=fails_by_x[px]+1;
                                        fails_by_y[dut.bank_line_y[b]]=fails_by_y[dut.bank_line_y[b]]+1;
                                        if(errors<=80)
                                            $display("UNEXPECTED_OPAQUE x=%0d y=%0d bank=%0d got_color=%0d (expected transparent)",
                                                     px,dut.bank_line_y[b],b,got_color);
                                    end
                                end else begin
                                    if(!(word_valid && word_gen==dut.bank_generation[b])) begin
                                        errors=errors+1;
                                        fails_by_x[px]=fails_by_x[px]+1;
                                        fails_by_y[dut.bank_line_y[b]]=fails_by_y[dut.bank_line_y[b]]+1;
                                        if(errors<=80)
                                            $display("MISSING x=%0d y=%0d bank=%0d valid=%0d gen=%0d expect_gen=%0d exp_color=%0d",
                                                     px,dut.bank_line_y[b],b,word_valid,word_gen,
                                                     dut.bank_generation[b],exp_color);
                                    end else if(got_color!==exp_color) begin
                                        errors=errors+1;
                                        fails_by_x[px]=fails_by_x[px]+1;
                                        fails_by_y[dut.bank_line_y[b]]=fails_by_y[dut.bank_line_y[b]]+1;
                                        if(errors<=80)
                                            $display("MISCOLOR x=%0d y=%0d bank=%0d got_color=%0d exp_color=%0d",
                                                     px,dut.bank_line_y[b],b,got_color,exp_color);
                                    end
                                end
                            end
                        end
                    end
                end
            end
            line_valid_prev<=dut.line_valid;
        end
    end

    integer dumpfile;
    initial begin
        errors=0;checked=0;lines_checked=0;
        dumpfile=$fopen("verif/modelsim_sprite/crkdown_1051_actual_color.hex","w");
        for(dx=0;dx<496;dx=dx+1) fails_by_x[dx]=0;
        for(dy=0;dy<384;dy=dy+1) fails_by_y[dy]=0;
        repeat(3) @(posedge clk);
        reset=0;
        line_boundary(10'd383);
        repeat(4000) @(posedge clk);
        if(!dut.list_cache_valid)
            $fatal(1,"list collection failed seen=%0d index=%0d state=%0d",
                   dut.list_seen,dut.list_index,dut.state);
        $display("real-artwork probe: stack_count=%0d",dut.stack_count);

        for(ln=0; ln<=383; ln=ln+1) begin
            line_boundary(ln[9:0]);
            repeat(2500) @(posedge clk);
        end
        $fclose(dumpfile);
        $display("real-artwork probe: lines_checked=%0d checked=%0d errors=%0d",
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
