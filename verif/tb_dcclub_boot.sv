`timescale 1ns/1ps

import s24_pkg::*;

// Real-ROM integration milestone for an unprotected ROM-board game.  Media
// files are generated locally by tools/gen_sim_media.py and never committed.
module tb_dcclub_boot;
    localparam BOOT_WORDS = 131072;
    logic [15:0] boot_mem [0:BOOT_WORDS-1];
    logic [15:0] work_a   [0:131071];
    logic [15:0] work_b   [0:131071];
    logic [15:0] char_ram [0:65535];
    logic [15:0] sprite_ram [0:131071];

    logic clk=0,reset=1,pause=0;
    board_desc_t board;
    logic ce_pixel,hblank,vblank,hsync,vsync;
    logic [7:0] red,green,blue;
    logic [15:0] audio_l,audio_r;
    logic p0_req,p0_ack,p2_req,p2_ack;
    logic p3_req,p3_ack,p4_req,p4_ack,wr_req,wr_ack;
    logic [26:1] p0_addr,p3_addr,p4_addr,wr_addr;
    logic [26:4] p2_addr;
    logic [15:0] p0_data,p3_data,p4_data,wr_data;
    logic [127:0] p2_data;
    logic [1:0] wr_be;
    integer instructions=0,boot_reads=0,rom_reads=0,cpu_b_reads=0;
    integer memory_writes=0,palette_writes=0;
    logic [23:1] last_instr_address;
    logic [15:0] last_instr_opcode;
    logic entered_work_ram=0;

    always #5 clk=~clk;

    function automatic [15:0] resident_word(input logic [26:1] a);
        if(a < 26'h0020000) resident_word=boot_mem[a[17:1]];
        else if(a>=26'h0800000 && a<26'h0820000)
            resident_word=work_a[a[17:1]];
        else if(a>=26'h0820000 && a<26'h0840000)
            resident_word=work_b[a[17:1]];
        else if(a>=26'h0880000 && a<26'h0890000)
            resident_word=char_ram[a[16:1]];
        else if(a>=26'h2000000 && a<26'h2020000)
            resident_word=sprite_ram[a[17:1]];
        else resident_word=16'hffff;
    endfunction

    always_comb begin
        p2_data='0; p4_data='0;
    end

    integer rom_fd,seek_result,read_result;
    logic [15:0] rom_file_word;
    always_ff @(posedge clk) begin
        if(!p0_req) p0_ack<=0;
        else if(!p0_ack) begin
            if(p0_addr>=26'h0080000 && p0_addr<26'h0180000) begin
                seek_result=$fseek(rom_fd,(p0_addr-26'h0080000)*2,0);
                read_result=$fread(rom_file_word,rom_fd);
                p0_data<=rom_file_word;
            end else p0_data<=resident_word(p0_addr);
            p0_ack<=1;
        end
        p2_ack<=p2_req;
        if(!p3_req) p3_ack<=0;
        else if(!p3_ack) begin p3_data<=resident_word(p3_addr);p3_ack<=1;end
        p4_ack<=p4_req;
        wr_ack<=wr_req;

        if(dut.cpu_a.instr_start) begin
            if(!entered_work_ram && instructions>100000
                    && dut.cpu_a.instr_address>=23'h040000
                    && dut.cpu_a.instr_address<23'h080000) begin
                entered_work_ram<=1;
                $display("DCCLUB entered work RAM from %h:%h to %h:%h A0=%h A1=%h A2=%h A3=%h A4=%h A5=%h A6=%h A7=%h",
                    {last_instr_address,1'b0},last_instr_opcode,
                    {dut.cpu_a.instr_address,1'b0},dut.cpu_a.instr_opcode,
                    {dut.cpu_a.excUnit.regs68H[8],dut.cpu_a.excUnit.regs68L[8]},
                    {dut.cpu_a.excUnit.regs68H[9],dut.cpu_a.excUnit.regs68L[9]},
                    {dut.cpu_a.excUnit.regs68H[10],dut.cpu_a.excUnit.regs68L[10]},
                    {dut.cpu_a.excUnit.regs68H[11],dut.cpu_a.excUnit.regs68L[11]},
                    {dut.cpu_a.excUnit.regs68H[12],dut.cpu_a.excUnit.regs68L[12]},
                    {dut.cpu_a.excUnit.regs68H[13],dut.cpu_a.excUnit.regs68L[13]},
                    {dut.cpu_a.excUnit.regs68H[14],dut.cpu_a.excUnit.regs68L[14]},
                    {dut.cpu_a.excUnit.regs68H[15],dut.cpu_a.excUnit.regs68L[15]});
                $display("DCCLUB workA[24:31]=%h %h %h %h %h %h %h %h",
                    work_a[24],work_a[25],work_a[26],work_a[27],
                    work_a[28],work_a[29],work_a[30],work_a[31]);
            end
            instructions<=instructions+1;
            last_instr_address<=dut.cpu_a.instr_address;
            last_instr_opcode<=dut.cpu_a.instr_opcode;
        end
        if(p0_req && !p0_ack) begin
            if(p0_addr<26'h0020000) boot_reads<=boot_reads+1;
            if(p0_addr>=26'h0080000 && p0_addr<26'h0180000)
                rom_reads<=rom_reads+1;
        end
        if(p3_req && !p3_ack) cpu_b_reads<=cpu_b_reads+1;
        if(wr_req && !wr_ack) begin
            memory_writes<=memory_writes+1;
            if(wr_addr>=26'h0800000 && wr_addr<26'h0820000)
                work_a[wr_addr[17:1]]<=merge16(work_a[wr_addr[17:1]],wr_data,wr_be);
            else if(wr_addr>=26'h0820000 && wr_addr<26'h0840000)
                work_b[wr_addr[17:1]]<=merge16(work_b[wr_addr[17:1]],wr_data,wr_be);
            else if(wr_addr>=26'h0880000 && wr_addr<26'h0890000)
                char_ram[wr_addr[16:1]]<=merge16(char_ram[wr_addr[16:1]],wr_data,wr_be);
            else if(wr_addr>=26'h2000000 && wr_addr<26'h2020000)
                sprite_ram[wr_addr[17:1]]<=merge16(sprite_ram[wr_addr[17:1]],wr_data,wr_be);
        end
        if(dut.palette_wr) palette_writes<=palette_writes+1;
    end

    s24_core dut(
        .clk(clk),.reset(reset),.pause(pause),.flicker_blend(1'b0),.board(board),
        .key_wr(1'b0),.key_word_addr('0),.key_wdata('0),
        .input_ports(64'hffff_ffff_ffff_ffff),
        .spinner0('0),.spinner1('0),.spinner2('0),.spinner3('0),
        .paddle0(8'h80),.paddle1(8'h80),.paddle2(8'h80),.paddle3(8'h80),
        .ce_pixel(ce_pixel),.hblank(hblank),.vblank(vblank),
        .hsync(hsync),.vsync(vsync),.red(red),.green(green),.blue(blue),
        .audio_l(audio_l),.audio_r(audio_r),
        .p0_req(p0_req),.p0_addr(p0_addr),.p0_data(p0_data),.p0_ack(p0_ack),
        .p2_req(p2_req),.p2_addr(p2_addr),.p2_data(p2_data),.p2_ack(p2_ack),
        .p3_req(p3_req),.p3_addr(p3_addr),.p3_data(p3_data),.p3_ack(p3_ack),
        .p4_req(p4_req),.p4_addr(p4_addr),.p4_data(p4_data),.p4_ack(p4_ack),
        .wr_req(wr_req),.wr_addr(wr_addr),.wr_data(wr_data),
        .wr_be(wr_be),.wr_ack(wr_ack));

    integer i,max_clocks,require_cpu_b;
    initial begin
        board='0;
        board.has_romboard=1;
        board.golf_io=1;
        board.magic_table=MAGIC_DCCLUB;
        p0_ack=0;p2_ack=0;p3_ack=0;p4_ack=0;wr_ack=0;
        for(i=0;i<131072;i++) begin work_a[i]=0;work_b[i]=0;sprite_ram[i]=0;end
        for(i=0;i<65536;i++) char_ram[i]=0;
        $readmemh("verif/media/dcclub/boot.mem",boot_mem);
        rom_fd=$fopen("verif/media/dcclub/romboard.bin","rb");
        if(!rom_fd) $fatal(1,"cannot open dcclub romboard.bin");
        repeat(16) @(posedge clk);
        reset=0;

        max_clocks=200000000;
        require_cpu_b=0;
        void'($value$plusargs("MAX_CLOCKS=%d",max_clocks));
        void'($value$plusargs("REQUIRE_CPU_B=%d",require_cpu_b));

        // The default gate is the first banked game-ROM read after the BIOS
        // memory/device tests.  Extended runs can additionally require CPU B
        // release without changing or rebuilding the model.
        i=0;
        while((require_cpu_b ? cpu_b_reads==0 : rom_reads==0)
                && i<max_clocks) begin @(posedge clk); i=i+1; end
        $display("DCCLUB milestone clocks=%0d insn=%0d boot=%0d rom=%0d writes=%0d palette=%0d cpuB=%0d cnt=%h ir=%h:%h bus=%h state=%0d raster=%0d,%0d",
                 i,instructions,boot_reads,rom_reads,memory_writes,
                 palette_writes,cpu_b_reads,dut.io_cnt,
                 {last_instr_address,1'b0},last_instr_opcode,
                 dut.bus_addr,dut.xs,dut.hcount,dut.vcount);
        if(instructions<100) $fatal(1,"dcclub CPU A did not execute");
        if(memory_writes==0) $fatal(1,"dcclub made no memory writes");
        if(rom_reads==0) $fatal(1,"dcclub did not reach banked game ROM");
        if(require_cpu_b && cpu_b_reads==0)
            $fatal(1,"dcclub did not release CPU B");
        if(require_cpu_b)
            $display("PASS tb_dcclub_boot real ROM reached CPU-B release");
        else
            $display("PASS tb_dcclub_boot BIOS reached banked game ROM");
        $fclose(rom_fd);
        $finish;
    end
endmodule
