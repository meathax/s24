`timescale 1ns/1ps
import s24_pkg::*;
module tb_inputs;
    logic [31:0] joy0=0,joy1=0,joy2=0,joy3=0;
    logic [7:0] dsw=8'ha5,coinage=8'h5a,paddle=0;
    logic test_mode=0,golf_io=0,hotrod_io=0,golf_angle=0;
    logic [7:0] input_profile=INPUT_GENERIC;
    logic [2:0] mahjong_line=0;
    logic [63:0] mahjong_matrix=64'hffff_ffff_ffff_ffff;
    logic [63:0] ports;
    s24_inputs dut(.*);

    initial begin
        #1;
        if(ports[7:0]!==8'hff)$fatal(1,"generic idle P1 mismatch");
        joy0[6]=1;#1;
        if(ports[7:0]!==8'hfe)$fatal(1,"generic B3 mapping mismatch");
        joy0=0;joy0[5]=1;#1;
        if(ports[7:0]!==8'hfb)$fatal(1,"generic B2 mapping mismatch");
        joy0=0;joy0[12]=1;joy1[12]=1;#1;
        if(ports[7:0]!==8'hf7 || ports[15:8]!==8'hf7)
            $fatal(1,"per-player service switch mapping mismatch");
        joy0=0;test_mode=1;#1;
        if(ports[39:32]!==8'hfb)$fatal(1,"test switch mapping mismatch");

        test_mode=0;golf_io=1;paddle=8'h20;#1;
        if(ports[7:0]!==8'hcf || ports[23:16]!==8'hff)
            $fatal(1,"golf rising swing encoding mismatch");
        paddle=8'h90;#1;
        if(ports[23:16]!==8'hfe)$fatal(1,"golf falling swing encoding mismatch");
        golf_angle=1;#1;
        if(ports[2]!==1'b1 || ports[0]!==1'b1)
            $fatal(1,"golf analog-angle button mask mismatch");

        golf_io=0;golf_angle=0;hotrod_io=1;joy2[11]=1;#1;
        if(ports[7:0]!==8'hfb)$fatal(1,"Hot Rod coin chute mapping mismatch");

        hotrod_io=0;input_profile=INPUT_GGROUND;#1;
        if(ports[23:16]!==8'hfe)$fatal(1,"Gain Ground Coin 3 mapping mismatch");

        input_profile=INPUT_QUIZ4;joy2=0;joy3=0;
        joy2[10]=1;joy2[4]=1;joy3[3]=1;#1;
        if(ports[7:0]!==8'hf6 || ports[23:16]!==8'hfd)
            $fatal(1,"four-player quiz packing mismatch %02h/%02h",
                   ports[7:0],ports[23:16]);

        input_profile=INPUT_QROUKA;joy0=0;joy1=0;joy2=0;joy3=0;
        dsw[3]=1;joy0[11]=1;joy2[11]=1;#1;
        if(ports[39:32]!==8'hfe)
            $fatal(1,"Qrouka common coin wiring mismatch %02h",ports[39:32]);
        dsw[3]=0;#1;
        if(ports[39:32]!==8'h7d)
            $fatal(1,"Qrouka separate coin wiring mismatch %02h",ports[39:32]);

        input_profile=INPUT_MAHJONG;mahjong_line=3;
        mahjong_matrix[31:24]=8'he7;#1;
        if(ports[7:0]!==8'hf7 || ports[15:8]!==8'hff ||
           ports[23:16]!==8'he7)
            $fatal(1,"Mahjong matrix mapping mismatch %02h/%02h",
                   ports[7:0],ports[23:16]);

        $display("PASS generic/service, golf, Hot Rod, Gain Ground, quiz and mahjong input mapping");
        $finish;
    end
endmodule
