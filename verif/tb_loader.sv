`timescale 1ns/1ps

module tb_loader;
    import s24_pkg::*;

    logic clk=0,reset=1,mem_ready=1;
    logic ioctl_download=0,ioctl_wr=0,wr_ack=0;
    logic [7:0] ioctl_index=0;
    logic [26:0] ioctl_addr=0;
    logic [15:0] ioctl_dout=0;
    logic ioctl_wait,rom_loaded,wr_req,key_wr;
    logic [26:1] wr_addr;
    logic [15:0] wr_data,key_wdata;
    logic [1:0] wr_be;
    logic [11:0] key_word_addr;
    board_desc_t descriptor;

    always #5 clk=~clk;

    s24_rom_loader dut(
        .clk(clk),.reset(reset),.mem_ready(mem_ready),
        .ioctl_download(ioctl_download),.ioctl_index(ioctl_index),
        .ioctl_wr(ioctl_wr),.ioctl_addr(ioctl_addr),.ioctl_dout(ioctl_dout),
        .ioctl_wait(ioctl_wait),.descriptor(descriptor),.rom_loaded(rom_loaded),
        .wr_req(wr_req),.wr_addr(wr_addr),.wr_data(wr_data),.wr_be(wr_be),
        .wr_ack(wr_ack),.key_wr(key_wr),.key_word_addr(key_word_addr),
        .key_wdata(key_wdata));

    task automatic begin_write(input [7:0] idx,input [26:0] addr,input [15:0] data);
        begin
            ioctl_download=1;ioctl_index=idx;ioctl_addr=addr;
            ioctl_dout=data;ioctl_wr=1;
            @(posedge clk); #1; ioctl_wr=0;
        end
    endtask

    task automatic finish_sdram_write;
        begin
            wr_ack=1;@(posedge clk);#1;wr_ack=0;
        end
    endtask

    task automatic check_profile(
        input [7:0] flags,
        input [3:0] magic,
        input [15:0] track_bytes,
        input [7:0] input_profile,
        input [127:0] profile_name
    );
        begin
            begin_write(0,0,{4'h0,magic,flags});
            begin_write(0,2,track_bytes);
            begin_write(0,4,{8'h00,input_profile});
            begin_write(0,6,16'h0000);
            assert({
                descriptor.mahjong,
                descriptor.hotrod_io,
                descriptor.golf_io,
                descriptor.has_adc,
                descriptor.has_upd4701,
                descriptor.has_fd1094,
                descriptor.has_romboard,
                descriptor.has_floppy
            }==flags) else $fatal(1,"%s flags",profile_name);
            assert(descriptor.magic_table==magic && descriptor.reserved1==0)
                else $fatal(1,"%s magic/reserved",profile_name);
            assert({descriptor.track_bytes_hi,descriptor.track_bytes_lo}
                   ==track_bytes)
                else $fatal(1,"%s track bytes",profile_name);
            assert(descriptor.input_profile==input_profile)
                else $fatal(1,"%s input profile",profile_name);
            assert(!rom_loaded) else $fatal(1,"%s early boot commit",profile_name);
        end
    endtask

    initial begin
        repeat(3) @(posedge clk);
        reset=0;

        // Standard MRA output bytes 12,34 arrive as host word 3412. Executable
        // ROM is converted to the big-endian fx68k word 1234.
        begin_write(1,0,16'h3412);
        assert(wr_req && wr_addr==word_address(SDR_BOOT_BASE)) else $fatal(1,"boot request");
        assert(wr_data==16'h1234 && wr_be==2'b11) else $fatal(1,"boot endian %h",wr_data);
        finish_sdram_write();

        begin_write(2,2,16'h7856);
        assert(wr_req && wr_addr==word_address(SDR_ROMBOARD_BASE+2)) else $fatal(1,"romboard request");
        assert(wr_data==16'h5678) else $fatal(1,"romboard endian %h",wr_data);
        finish_sdram_write();

        // A disk image is a byte array and must not be word-swapped.
        begin_write(3,4,16'hbc9a);
        assert(wr_req && wr_addr==word_address(SDR_FLOPPY_BASE+4)) else $fatal(1,"floppy request");
        assert(wr_data==16'hbc9a) else $fatal(1,"floppy endian %h",wr_data);
        finish_sdram_write();

        // FD1094 keys are also byte arrays; the key RAM owns byte selection.
        begin_write(4,6,16'hf0de);
        assert(key_wr && key_word_addr==12'd3 && key_wdata==16'hf0de) else $fatal(1,"key path");

        // Exercise every descriptor used by the 17-set local s24.rbf
        // matrix. Repeated clone profiles are intentional: this list is the
        // hardware-facing contract for every locally supported set.
        check_profile(8'h59,MAGIC_NONE,16'h2f00,INPUT_GENERIC,"hotrod");
        check_profile(8'h59,MAGIC_NONE,16'h2f00,INPUT_GENERIC,"hotroda");
        check_profile(8'h59,MAGIC_NONE,16'h2f00,INPUT_GENERIC,"hotrodj");
        check_profile(8'h59,MAGIC_NONE,16'h2f00,INPUT_GENERIC,"hotrodja");
        check_profile(8'h01,MAGIC_NONE,16'h2d00,INPUT_GENERIC,"sspirits");
        check_profile(8'h05,MAGIC_NONE,16'h2d00,INPUT_GGROUND,"gground");
        check_profile(8'h05,MAGIC_NONE,16'h2d00,INPUT_GGROUND,"ggroundj");
        check_profile(8'h05,MAGIC_NONE,16'h2d00,INPUT_GENERIC,"crkdown");
        check_profile(8'h05,MAGIC_NONE,16'h2d00,INPUT_GENERIC,"crkdownu");
        check_profile(8'h05,MAGIC_NONE,16'h2d00,INPUT_GENERIC,"crkdownj");
        check_profile(8'h25,MAGIC_NONE,16'h2d00,INPUT_GENERIC,"sgmast");
        check_profile(8'h25,MAGIC_NONE,16'h2d00,INPUT_GENERIC,"sgmastc");
        check_profile(8'h2d,MAGIC_NONE,16'h2d00,INPUT_GENERIC,"sgmastj");
        check_profile(8'h03,MAGIC_BNZABROS,16'h2d00,INPUT_GENERIC,"bnzabros");
        check_profile(8'h03,MAGIC_BNZABROS,16'h2d00,INPUT_GENERIC,"bnzabrosj");
        check_profile(8'h22,MAGIC_DCCLUB,16'h0000,INPUT_GENERIC,"dcclub");
        check_profile(8'h2a,MAGIC_DCCLUB,16'h0000,INPUT_GENERIC,"dcclubj");

        ioctl_download=0;
        @(posedge clk);#1;
        assert(rom_loaded) else $fatal(1,"missing boot commit");
        $display("PASS loader endian, raw media, key, 17 local profiles, boot commit");
        $finish;
    end
endmodule
