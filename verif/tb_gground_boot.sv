`timescale 1ns/1ps

import s24_pkg::*;

// Real-ROM integration milestones shared by every local System 24 set.
// Media is generated locally by tools/gen_sim_media.py; runtime plusargs select
// the board population and game-specific inputs without recompiling the model.
module tb_gground_boot;
    localparam BOOT_WORDS = 131072;
    localparam ROMBOARD_WORDS = 2097152;
    // FBNeo allocates and zeroes a 2 MiB buffer before loading the raw
    // 80-cylinder image. The BIOS can seek one side past the nominal image,
    // so generated MRA and simulation media use the same deterministic tail.
    localparam FLOPPY_BYTES = 2097152;
    localparam logic [26:1] FLOPPY_WORD_BASE = word_address(SDR_FLOPPY_BASE);

    logic [15:0] boot_mem [0:BOOT_WORDS-1];
    logic [15:0] romboard_mem [0:ROMBOARD_WORDS-1];
    logic [15:0] key_mem  [0:4095];
    logic [15:0] work_a   [0:131071];
    logic [15:0] work_b   [0:131071];
    logic [15:0] char_ram [0:65535];
    logic [15:0] sprite_ram [0:131071];
    // Writes are sparse during boot, but retain a full validity bitmap so a
    // later read always observes the exact byte written by the FDC.  The base
    // image remains immutable on disk between regression runs.
    logic [7:0] floppy_overlay_data [0:FLOPPY_BYTES-1];
    logic       floppy_overlay_valid[0:FLOPPY_BYTES-1];

    logic clk=0,reset=1,pause=0;
    board_desc_t board;
    logic key_wr=0;
    logic [11:0] key_word_addr='0;
    logic [15:0] key_wdata='0;
    logic ce_pixel,hblank,vblank,hsync,vsync;
    logic [7:0] red,green,blue;
    logic [15:0] audio_l,audio_r;
    logic [7:0] dsw_value,coinage_value;
    logic [63:0] simulated_inputs;
    logic p0_req,p0_ack,p1_req,p1_ack,p2_req,p2_ack;
    logic p3_req,p3_ack,p4_req,p4_ack,p5_req,p5_ack,wr_req,wr_ack;
    logic [26:1] p0_addr,p3_addr,p4_addr,wr_addr;
    logic [26:3] p1_addr,p5_addr;
    logic [26:4] p2_addr;
    logic [15:0] p0_data,p3_data,p4_data,wr_data;
    logic [63:0] p1_data,p5_data;
    logic [127:0] p2_data;
    logic [1:0] wr_be;

    integer cpu_a_instructions=0,cpu_b_instructions=0;
    integer boot_reads=0,romboard_reads=0,cpu_b_reads=0,floppy_reads=0;
    integer memory_writes=0,floppy_writes=0,palette_writes=0;
    integer tile_writes=0,mixer_writes=0,char_writes=0,sprite_writes=0;
    integer tile_requests=0,sprite_requests=0;
    integer decrypt_starts=0,decrypt_done=0,cnt_releases=0;
    integer visible_pixels=0,video_frames=0;
    integer tile_pixels=0,sprite_pixels=0,mixed_pixels=0,blanked_pixels=0;
    integer unknown_video_pixels=0;
    integer fdc_media_requests=0,fdc_media_acks=0;
    integer p4_requests=0,p4_acks=0,fdc_read_bytes=0;
    integer fdc_track_bytes=0,fdc_complete_tracks=0;
    logic [31:0] fdc_checksum=32'h811c9dc5;
    logic [31:0] fdc_track_checksum=32'h811c9dc5;
    logic [31:0] fdc_last_track_checksum=0;
    logic fdc_media_req_d=0,p4_req_d=0;
    logic p4_outstanding=0,fdc_media_read_serviced=0;
    logic [26:0] p4_byte_addr_latched=0;
    integer frame_fd=0,frame_pixels=0;
    integer frame_requested=0;
    logic frame_capture_active=0,frame_capture_done=0;
    string frame_file;
    logic cnt1_d=0;
    logic vsync_d=0;
    logic [23:1] last_a_address,last_b_address;
    logic [15:0] last_a_opcode,last_b_opcode;

    always #5 clk=~clk;

    function automatic [31:0] checksum_byte(
        input logic [31:0] checksum,
        input logic [7:0] value
    );
        checksum_byte=(checksum^value)*32'h01000193;
    endfunction

    function automatic [15:0] resident_word(input logic [26:1] a);
        if(a < 26'h0020000) resident_word=boot_mem[a[17:1]];
        else if(a>=word_address(SDR_ROMBOARD_BASE) &&
                a<word_address(SDR_ROMBOARD_BASE)+ROMBOARD_WORDS)
            resident_word=romboard_mem[a-word_address(SDR_ROMBOARD_BASE)];
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

    function automatic [63:0] tile_burst(input logic [26:3] a);
        integer word_index;
        begin
            word_index=(a-SDR_CHAR_BASE[26:3])*4;
            if(word_index<0 || word_index+3>=65536) tile_burst='0;
            else tile_burst={char_ram[word_index+3],char_ram[word_index+2],
                             char_ram[word_index+1],char_ram[word_index]};
        end
    endfunction

    function automatic [127:0] sprite_burst(input logic [26:4] a);
        integer word_index;
        begin
            word_index=(a-SDR_SPRITE_BASE[26:4])*8;
            if(word_index<0 || word_index+7>=131072) sprite_burst='0;
            else sprite_burst={sprite_ram[word_index+7],sprite_ram[word_index+6],
                sprite_ram[word_index+5],sprite_ram[word_index+4],
                sprite_ram[word_index+3],sprite_ram[word_index+2],
                sprite_ram[word_index+1],sprite_ram[word_index]};
        end
    endfunction

    always_comb begin
        p1_data=tile_burst(p1_addr);
        p2_data=sprite_burst(p2_addr);
        p5_data='0;
    end

    integer floppy_fd,seek_result,read_lo,read_hi,floppy_file_bytes;
    integer floppy_track_reads=0;
    integer floppy_byte_offset,floppy_write_offset;
    logic [7:0] floppy_lo,floppy_hi;
    logic [7:0] fdc_delivered_byte;
    always @(posedge clk) begin
        fdc_media_req_d<=dut.fdc_media_req;
        p4_req_d<=p4_req;
        if(!dut.fdc_media_req)
            fdc_media_read_serviced<=0;
        if(dut.fdc_media_req && !fdc_media_req_d &&
                !dut.fdc_media_wr)
            fdc_media_requests<=fdc_media_requests+1;
        if(dut.fdc_media_ack && !dut.fdc_media_wr)
            fdc_media_acks<=fdc_media_acks+1;

        if(p4_req && !p4_req_d) begin
            if(p4_outstanding)
                $fatal(1,"%s overlapping p4 floppy requests",game_name);
            if(!dut.fdc_media_req || dut.fdc_media_wr)
                $fatal(1,"%s p4 read without active FDC media read",game_name);
            if(fdc_media_read_serviced)
                $fatal(1,"%s duplicate p4 read for one held FDC request addr=%h",
                       game_name,dut.fdc_media_addr);
            p4_requests<=p4_requests+1;
            p4_outstanding<=1;
            fdc_media_read_serviced<=1;
            p4_byte_addr_latched<=dut.fdc_media_addr;
        end
        if(p4_outstanding && p4_req &&
                p4_addr!=word_address(SDR_FLOPPY_BASE+p4_byte_addr_latched))
            $fatal(1,"%s p4 address changed while outstanding: %h -> %h",
                   game_name,p4_byte_addr_latched,p4_addr);
        if(p4_ack && p4_req) begin
            if(!p4_outstanding)
                $fatal(1,"%s p4 acknowledged without an outstanding read",
                       game_name);
            if(dut.fdc_read_odd!=p4_byte_addr_latched[0])
                $fatal(1,"%s p4 byte lane changed while outstanding addr=%h",
                       game_name,p4_byte_addr_latched);
            fdc_delivered_byte=dut.fdc_read_odd ? p4_data[15:8] :
                                                     p4_data[7:0];
            p4_acks<=p4_acks+1;
            fdc_read_bytes<=fdc_read_bytes+1;
            fdc_checksum<=checksum_byte(fdc_checksum,fdc_delivered_byte);
            if(fdc_track_bytes==track_bytes-1) begin
                fdc_last_track_checksum<=checksum_byte(
                    fdc_track_checksum,fdc_delivered_byte);
                fdc_complete_tracks<=fdc_complete_tracks+1;
                fdc_track_bytes<=0;
                fdc_track_checksum<=32'h811c9dc5;
                $display("%s FDC transfer=%0d bytes=%0d checksum=%08h side/track=%0d/%0d",
                    game_name,fdc_complete_tracks+1,track_bytes,
                    checksum_byte(fdc_track_checksum,fdc_delivered_byte),
                    dut.fdc.side,dut.fdc.physical_track);
            end else begin
                fdc_track_bytes<=fdc_track_bytes+1;
                fdc_track_checksum<=checksum_byte(
                    fdc_track_checksum,fdc_delivered_byte);
            end
            p4_outstanding<=0;
        end

        if(!p0_req) p0_ack<=0;
        else if(!p0_ack) begin p0_data<=resident_word(p0_addr);p0_ack<=1;end
        if(!p3_req) p3_ack<=0;
        else if(!p3_ack) begin p3_data<=resident_word(p3_addr);p3_ack<=1;end

        p1_ack<=p1_req;
        p2_ack<=p2_req;
        p5_ack<=p5_req;
        if(reset) begin
            p4_ack<=0;
            p4_data<=0;
        end else if(!p4_req) p4_ack<=0;
        else if(!p4_ack) begin
            floppy_byte_offset=(p4_addr-FLOPPY_WORD_BASE)*2;
            if(dut.fdc.position==0) begin
                floppy_track_reads<=floppy_track_reads+1;
                $display("%s FDC side/track=%0d/%0d image=%0d D0=%h D1=%h D2=%h D4=%h D6=%h D7=%h A0=%h A1=%h",
                    game_name,dut.fdc.side,dut.fdc.physical_track,
                    floppy_file_bytes,
                    {dut.cpu_a.excUnit.regs68H[0],dut.cpu_a.excUnit.regs68L[0]},
                    {dut.cpu_a.excUnit.regs68H[1],dut.cpu_a.excUnit.regs68L[1]},
                    {dut.cpu_a.excUnit.regs68H[2],dut.cpu_a.excUnit.regs68L[2]},
                    {dut.cpu_a.excUnit.regs68H[4],dut.cpu_a.excUnit.regs68L[4]},
                    {dut.cpu_a.excUnit.regs68H[6],dut.cpu_a.excUnit.regs68L[6]},
                    {dut.cpu_a.excUnit.regs68H[7],dut.cpu_a.excUnit.regs68L[7]},
                    {dut.cpu_a.excUnit.regs68H[8],dut.cpu_a.excUnit.regs68L[8]},
                    {dut.cpu_a.excUnit.regs68H[9],dut.cpu_a.excUnit.regs68L[9]});
            end
            if(floppy_byte_offset<0 || floppy_byte_offset+1>=floppy_file_bytes)
                $fatal(1,"%s floppy byte read outside image: byte=%h word=%h size=%h side/track=%0d/%0d position=%h span=%h D0=%h D1=%h D2=%h D4=%h D6=%h D7=%h A0=%h A1=%h PC=%h:%h",
                    game_name,floppy_byte_offset,p4_addr,floppy_file_bytes,
                    dut.fdc.side,dut.fdc.physical_track,dut.fdc.position,
                    dut.fdc.span,
                    {dut.cpu_a.excUnit.regs68H[0],dut.cpu_a.excUnit.regs68L[0]},
                    {dut.cpu_a.excUnit.regs68H[1],dut.cpu_a.excUnit.regs68L[1]},
                    {dut.cpu_a.excUnit.regs68H[2],dut.cpu_a.excUnit.regs68L[2]},
                    {dut.cpu_a.excUnit.regs68H[4],dut.cpu_a.excUnit.regs68L[4]},
                    {dut.cpu_a.excUnit.regs68H[6],dut.cpu_a.excUnit.regs68L[6]},
                    {dut.cpu_a.excUnit.regs68H[7],dut.cpu_a.excUnit.regs68L[7]},
                    {dut.cpu_a.excUnit.regs68H[8],dut.cpu_a.excUnit.regs68L[8]},
                    {dut.cpu_a.excUnit.regs68H[9],dut.cpu_a.excUnit.regs68L[9]},
                    {last_a_address,1'b0},last_a_opcode);
            seek_result=$fseek(floppy_fd,floppy_byte_offset,0);
            read_lo=$fread(floppy_lo,floppy_fd);
            read_hi=$fread(floppy_hi,floppy_fd);
            if(read_lo!=1 || read_hi!=1)
                $fatal(1,"%s short floppy image read at byte %h",game_name,
                       floppy_byte_offset);
            if(floppy_overlay_valid[floppy_byte_offset])
                floppy_lo=floppy_overlay_data[floppy_byte_offset];
            if(floppy_overlay_valid[floppy_byte_offset+1])
                floppy_hi=floppy_overlay_data[floppy_byte_offset+1];
            p4_data<={floppy_hi,floppy_lo};
            p4_ack<=1;
            floppy_reads<=floppy_reads+1;
        end
        wr_ack<=wr_req;

        if(dut.cpu_a.instr_start) begin
            cpu_a_instructions<=cpu_a_instructions+1;
            last_a_address<=dut.cpu_a.instr_address;
            last_a_opcode<=dut.cpu_a.instr_opcode;
        end
        if(dut.b_instr_start && dut.io_cnt[1] && !dut.sub_reset) begin
            cpu_b_instructions<=cpu_b_instructions+1;
            last_b_address<=dut.b_instr_address;
            last_b_opcode<=dut.b_instr_opcode;
        end
        if(p0_req && !p0_ack && p0_addr<26'h0020000)
            boot_reads<=boot_reads+1;
        if(p0_req && !p0_ack && p0_addr>=word_address(SDR_ROMBOARD_BASE) &&
                p0_addr<word_address(SDR_ROMBOARD_BASE)+ROMBOARD_WORDS)
            romboard_reads<=romboard_reads+1;
        if(p3_req && !p3_ack) begin
            cpu_b_reads<=cpu_b_reads+1;
            if(p3_addr>=word_address(SDR_ROMBOARD_BASE) &&
                    p3_addr<word_address(SDR_ROMBOARD_BASE)+ROMBOARD_WORDS)
                romboard_reads<=romboard_reads+1;
        end
        if(dut.fd_start) decrypt_starts<=decrypt_starts+1;
        if(dut.fd_done) decrypt_done<=decrypt_done+1;
        cnt1_d<=dut.io_cnt[1];
        if(dut.io_cnt[1] && !cnt1_d) begin
            cnt_releases<=cnt_releases+1;
            // Attract evidence must be produced by the loaded game, not by
            // the BIOS diagnostics shown before the protected CPU releases.
            visible_pixels<=0;
            video_frames<=0;
            tile_pixels<=0;
            sprite_pixels<=0;
            mixed_pixels<=0;
            blanked_pixels<=0;
            frame_pixels<=0;
            frame_capture_active<=0;
            frame_capture_done<=0;
        end

        if(wr_req && !wr_ack) begin
            memory_writes<=memory_writes+1;
            if(wr_addr>=FLOPPY_WORD_BASE &&
                    wr_addr<FLOPPY_WORD_BASE+(FLOPPY_BYTES/2)) begin
                floppy_writes<=floppy_writes+1;
                floppy_write_offset=(wr_addr-FLOPPY_WORD_BASE)*2;
                if(wr_be[0]) begin
                    floppy_overlay_data[floppy_write_offset]<=wr_data[7:0];
                    floppy_overlay_valid[floppy_write_offset]<=1;
                end
                if(wr_be[1]) begin
                    floppy_overlay_data[floppy_write_offset+1]<=wr_data[15:8];
                    floppy_overlay_valid[floppy_write_offset+1]<=1;
                end
            end else if(wr_addr>=26'h0800000 && wr_addr<26'h0820000)
                work_a[wr_addr[17:1]]<=merge16(work_a[wr_addr[17:1]],wr_data,wr_be);
            else if(wr_addr>=26'h0820000 && wr_addr<26'h0840000)
                work_b[wr_addr[17:1]]<=merge16(work_b[wr_addr[17:1]],wr_data,wr_be);
            else if(wr_addr>=26'h0880000 && wr_addr<26'h0890000) begin
                char_writes<=char_writes+1;
                char_ram[wr_addr[16:1]]<=merge16(char_ram[wr_addr[16:1]],wr_data,wr_be);
            end else if(wr_addr>=26'h2000000 && wr_addr<26'h2020000) begin
                sprite_writes<=sprite_writes+1;
                sprite_ram[wr_addr[17:1]]<=merge16(sprite_ram[wr_addr[17:1]],wr_data,wr_be);
            end
        end
        if(dut.palette_wr) palette_writes<=palette_writes+1;
        if(dut.tile_wr) begin
            if(tile_writes==0)
                $display("%s first TILE cpu=%0d addr=%h data=%h be=%b",
                    game_name,dut.bus_cpu,dut.bus_addr,dut.bus_dout,dut.bus_be);
            tile_writes<=tile_writes+1;
        end
        if(dut.mixer_wr) begin
            mixer_writes<=mixer_writes+1;
            $display("%s MIXER write cpu=%0d addr=%h reg=%0d data=%h be=%b A=%h:%h B=%h:%h",
                game_name,dut.bus_cpu,dut.bus_addr,dut.bus_addr[4:1],
                dut.bus_dout,dut.bus_be,{last_a_address,1'b0},last_a_opcode,
                {last_b_address,1'b0},last_b_opcode);
        end
        if(p1_req && !p1_ack) tile_requests<=tile_requests+1;
        if(p2_req && !p2_ack) sprite_requests<=sprite_requests+1;
        if(dut.io_cnt[1] && cnt1_d && ce_pixel && !hblank && !vblank &&
                (red!=0 || green!=0 || blue!=0))
            visible_pixels<=visible_pixels+1;
        if(dut.io_cnt[1] && cnt1_d && ce_pixel && !hblank && !vblank) begin
            if(dut.tv0 || dut.tv1 || dut.tv2 || dut.tv3)
                tile_pixels<=tile_pixels+1;
            if(dut.sp0!=0 || dut.sp1!=0 || dut.sp2!=0 || dut.sp3!=0)
                sprite_pixels<=sprite_pixels+1;
            if(dut.mixed[12:0]!=0) mixed_pixels<=mixed_pixels+1;
            if(dut.display_blank) blanked_pixels<=blanked_pixels+1;
            if($isunknown({dut.display_blank,dut.tv0,dut.tv1,dut.tv2,dut.tv3,
                           dut.sp0,dut.sp1,dut.sp2,dut.sp3,dut.mixed}))
                unknown_video_pixels<=unknown_video_pixels+1;
        end
        vsync_d<=vsync;
        if(dut.io_cnt[1] && cnt1_d && vsync && !vsync_d)
            video_frames<=video_frames+1;
        // Begin immediately before the requested post-release frame. The
        // following active frame is written in raw RGB order, producing a
        // complete P6 PPM before target 3 can pass its frame boundary.
        if(frame_requested && !frame_capture_active && !frame_capture_done &&
                dut.io_cnt[1] && cnt1_d && vsync && !vsync_d &&
                (frame_target<=1 || video_frames>=frame_target-2))
            frame_capture_active<=1;
        if(frame_capture_active && ce_pixel && !hblank && !vblank) begin
            $fwrite(frame_fd,"%c%c%c",red,green,blue);
            if(frame_pixels==496*384-1) begin
                frame_capture_active<=0;
                frame_capture_done<=1;
                frame_pixels<=frame_pixels+1;
                $fclose(frame_fd);
                frame_fd=0;
            end else frame_pixels<=frame_pixels+1;
        end
    end

    s24_inputs simulated_input_mapper(
        .joy0('0),.joy1('0),.joy2('0),.joy3('0),
        .dsw(dsw_value),.coinage(coinage_value),.paddle(8'h80),
        .test_mode(1'b0),.golf_io(board.golf_io),
        .hotrod_io(board.hotrod_io),
        .golf_angle(board.golf_io&&board.has_upd4701),
        .gground_io(board.input_profile==INPUT_GGROUND),
        .ports(simulated_inputs));

    s24_core dut(
        .clk(clk),.reset(reset),.pause(pause),.board(board),
        .key_wr(key_wr),.key_word_addr(key_word_addr),.key_wdata(key_wdata),
        .input_ports(simulated_inputs),
        .spinner0('0),.spinner1('0),.spinner2('0),.spinner3('0),
        .paddle0(8'h80),.paddle1(8'h80),.paddle2(8'h80),.paddle3(8'h80),
        .ce_pixel(ce_pixel),.hblank(hblank),.vblank(vblank),
        .hsync(hsync),.vsync(vsync),.red(red),.green(green),.blue(blue),
        .audio_l(audio_l),.audio_r(audio_r),
        .p0_req(p0_req),.p0_addr(p0_addr),.p0_data(p0_data),.p0_ack(p0_ack),
        .p1_req(p1_req),.p1_addr(p1_addr),.p1_data(p1_data),.p1_ack(p1_ack),
        .p2_req(p2_req),.p2_addr(p2_addr),.p2_data(p2_data),.p2_ack(p2_ack),
        .p3_req(p3_req),.p3_addr(p3_addr),.p3_data(p3_data),.p3_ack(p3_ack),
        .p4_req(p4_req),.p4_addr(p4_addr),.p4_data(p4_data),.p4_ack(p4_ack),
        .p5_req(p5_req),.p5_addr(p5_addr),.p5_data(p5_data),.p5_ack(p5_ack),
        .wr_req(wr_req),.wr_addr(wr_addr),.wr_data(wr_data),
        .wr_be(wr_be),.wr_ack(wr_ack));

    // TARGET 0: first game-media access; 1: CNT1 release and CPU-B read;
    // 2: CPU-B instruction (plus decrypt for FD1094); 3: sustained visible
    // game video after CPU-B release; 4: first write to any video memory.
    integer i,max_clocks,target,frame_target;
    integer progress_clocks,next_progress;
    integer board_flags,track_bytes,input_profile,magic_table;
    integer dsw_arg,coinage_arg;
    string game_name,boot_file,romboard_file,key_file,floppy_file;
    logic reached_target;
    always_comb begin
        case(target)
            0: reached_target=(floppy_reads!=0 || romboard_reads!=0);
            1: reached_target=(cpu_b_reads!=0 && cnt_releases!=0);
            2: reached_target=(cpu_b_instructions!=0 &&
                               (!board.has_fd1094 || decrypt_done!=0));
            4: reached_target=(tile_writes!=0 || mixer_writes!=0 ||
                               palette_writes!=0 || char_writes!=0 ||
                               sprite_writes!=0);
            default: reached_target=(cpu_b_instructions!=0 &&
                                     (!board.has_fd1094 || decrypt_done!=0) &&
                                     video_frames>=frame_target &&
                                     visible_pixels>=10000);
        endcase
    end

    initial begin
        game_name="gground";
        boot_file="verif/media/gground/boot.mem";
        romboard_file="verif/media/gground/romboard.mem";
        key_file="verif/media/gground/key.mem";
        floppy_file="verif/media/gground/floppy.bin";
        frame_file="";
        board_flags=5; // floppy + FD1094
        track_bytes=16'h2d00;
        input_profile=INPUT_GGROUND;
        magic_table=MAGIC_NONE;
        coinage_arg=8'hff;
        dsw_arg=8'hff;
        void'($value$plusargs("GAME=%s",game_name));
        void'($value$plusargs("BOOT=%s",boot_file));
        void'($value$plusargs("ROMBOARD=%s",romboard_file));
        void'($value$plusargs("KEY=%s",key_file));
        void'($value$plusargs("FLOPPY=%s",floppy_file));
        void'($value$plusargs("FLAGS=%h",board_flags));
        void'($value$plusargs("TRACK=%h",track_bytes));
        void'($value$plusargs("INPUT=%d",input_profile));
        void'($value$plusargs("MAGIC=%h",magic_table));
        void'($value$plusargs("COINAGE=%h",coinage_arg));
        void'($value$plusargs("DSW=%h",dsw_arg));
        frame_requested=$value$plusargs("FRAME_OUT=%s",frame_file);

        board='0;
        board.has_floppy=board_flags[0];
        board.has_romboard=board_flags[1];
        board.has_fd1094=board_flags[2];
        board.has_upd4701=board_flags[3];
        board.has_adc=board_flags[4];
        board.golf_io=board_flags[5];
        board.hotrod_io=board_flags[6];
        board.track_bytes_lo=track_bytes[7:0];
        board.track_bytes_hi=track_bytes[15:8];
        board.input_profile=input_profile[7:0];
        board.magic_table=magic_table[3:0];
        coinage_value=coinage_arg[7:0];
        dsw_value=dsw_arg[7:0];
        p0_ack=0;p1_ack=0;p2_ack=0;p3_ack=0;p4_ack=0;p5_ack=0;wr_ack=0;
        for(i=0;i<131072;i++) begin work_a[i]=0;work_b[i]=0;sprite_ram[i]=0;end
        for(i=0;i<65536;i++) char_ram[i]=0;
        for(i=0;i<ROMBOARD_WORDS;i++) romboard_mem[i]=16'hffff;
        for(i=0;i<FLOPPY_BYTES;i++) floppy_overlay_valid[i]=0;
        $readmemh(boot_file,boot_mem);
        if(board.has_romboard) $readmemh(romboard_file,romboard_mem);
        if(board.has_fd1094) $readmemh(key_file,key_mem);
        floppy_fd=0;
        floppy_file_bytes=0;
        if(board.has_floppy) begin
            floppy_fd=$fopen(floppy_file,"rb");
            if(!floppy_fd) $fatal(1,"cannot open game floppy image %s",floppy_file);
            if($fseek(floppy_fd,0,2)!=0)
                $fatal(1,"cannot seek game floppy image %s",floppy_file);
            floppy_file_bytes=$ftell(floppy_fd);
            if(floppy_file_bytes<=0 || $fseek(floppy_fd,0,0)!=0)
                $fatal(1,"invalid game floppy image %s",floppy_file);
        end
        if(frame_requested) begin
            frame_fd=$fopen(frame_file,"wb");
            if(!frame_fd) $fatal(1,"cannot create frame capture %s",frame_file);
            $fwrite(frame_fd,"P6\n496 384\n255\n");
        end

        // The real loader writes all 8 KB of key RAM while both CPUs are held
        // in reset. Preserve that ordering in the integration bench.
        if(board.has_fd1094) begin
            for(i=0;i<4096;i++) begin
                @(negedge clk);
                key_word_addr=i[11:0];
                key_wdata=key_mem[i];
                key_wr=1;
            end
            @(negedge clk);key_wr=0;
        end
        repeat(16) @(posedge clk);
        reset=0;

        max_clocks=300000000;
        target=0;
        frame_target=10;
        progress_clocks=25000000;
        void'($value$plusargs("MAX_CLOCKS=%d",max_clocks));
        void'($value$plusargs("TARGET=%d",target));
        void'($value$plusargs("FRAME_TARGET=%d",frame_target));
        void'($value$plusargs("PROGRESS_CLOCKS=%d",progress_clocks));
        if(frame_target<1)
            $fatal(1,"FRAME_TARGET must be at least 1");
        if(progress_clocks<0)
            $fatal(1,"PROGRESS_CLOCKS cannot be negative");
        i=0;
        next_progress=progress_clocks;
        while(!reached_target && i<max_clocks) begin
            @(posedge clk);
            i=i+1;
            if(progress_clocks!=0 && i>=next_progress) begin
                $display("%s progress clocks=%0d/%0d target=%0d Ainsn=%0d Binsn=%0d media=%0d/%0d p4=%0d/%0d bytes=%0d tracks=%0d checksum=%08h release=%0d frames=%0d raster=%0d,%0d",
                    game_name,i,max_clocks,target,cpu_a_instructions,
                    cpu_b_instructions,fdc_media_acks,fdc_media_requests,
                    p4_acks,p4_requests,fdc_read_bytes,fdc_complete_tracks,
                    fdc_checksum,cnt_releases,video_frames,dut.hcount,dut.vcount);
                next_progress=next_progress+progress_clocks;
            end
        end

        $display("%s milestone target=%0d clocks=%0d Ainsn=%0d Binsn=%0d boot=%0d rom=%0d floppy=%0d media=%0d/%0d p4=%0d/%0d fdcbytes=%0d tracks=%0d checksum=%08h lasttrack=%08h writes=%0d fwwrites=%0d palette=%0d tilewr=%0d mixerwr=%0d charwr=%0d spritewr=%0d tilereq=%0d spritereq=%0d cpuB=%0d release=%0d dec=%0d/%0d visible=%0d tilepx=%0d spritepx=%0d mixedpx=%0d blankpx=%0d unknownpx=%0d frames=%0d/%0d A=%h:%h B=%h:%h fdstate=%h slow=%0d raster=%0d,%0d",
            game_name,target,i,cpu_a_instructions,cpu_b_instructions,boot_reads,
            romboard_reads,floppy_reads,fdc_media_acks,fdc_media_requests,
            p4_acks,p4_requests,fdc_read_bytes,fdc_complete_tracks,
            fdc_checksum,fdc_last_track_checksum,
            memory_writes,floppy_writes,palette_writes,
            tile_writes,mixer_writes,char_writes,sprite_writes,
            tile_requests,sprite_requests,
            cpu_b_reads,cnt_releases,decrypt_done,decrypt_starts,
            visible_pixels,tile_pixels,sprite_pixels,mixed_pixels,
            blanked_pixels,unknown_video_pixels,video_frames,frame_target,
            {last_a_address,1'b0},last_a_opcode,
            {last_b_address,1'b0},last_b_opcode,dut.fd_state,
            dut.gground_slow_count,dut.hcount,dut.vcount);
        $display("%s mixer regs: %h %h %h %h %h %h %h %h %h %h %h %h %h %h %h %h",
            game_name,dut.mixer.regs[0],dut.mixer.regs[1],dut.mixer.regs[2],
            dut.mixer.regs[3],dut.mixer.regs[4],dut.mixer.regs[5],
            dut.mixer.regs[6],dut.mixer.regs[7],dut.mixer.regs[8],
            dut.mixer.regs[9],dut.mixer.regs[10],dut.mixer.regs[11],
            dut.mixer.regs[12],dut.mixer.regs[13],dut.mixer.regs[14],
            dut.mixer.regs[15]);
        $display("%s tile controls: h=%h/%h/%h/%h v=%h/%h/%h/%h",
            game_name,dut.tile.tile_ram[15'h5000],dut.tile.tile_ram[15'h5001],
            dut.tile.tile_ram[15'h5002],dut.tile.tile_ram[15'h5003],
            dut.tile.tile_ram[15'h5004],dut.tile.tile_ram[15'h5005],
            dut.tile.tile_ram[15'h5006],dut.tile.tile_ram[15'h5007]);
        // ROM-board BIOSes can touch game media very early (QGH currently
        // reaches target 0 after 82 instructions), while deeper milestones
        // should demonstrate sustained execution.
        if(cpu_a_instructions < ((target==0) ? 20 : 100))
            $fatal(1,"%s CPU A did not execute enough for target %0d",
                   game_name,target);
        if(memory_writes==0) $fatal(1,"%s made no memory writes",game_name);
        if(!reached_target) $fatal(1,"%s target %0d not reached",game_name,target);
        if(target==3 && frame_requested && !frame_capture_done)
            $fatal(1,"%s target 3 passed without complete frame capture",game_name);
        $display("PASS tb_gground_boot %s game milestone %0d",game_name,target);
        if(floppy_fd) $fclose(floppy_fd);
        if(frame_fd) $fclose(frame_fd);
        $finish;
    end
endmodule
