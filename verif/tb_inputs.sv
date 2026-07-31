`timescale 1ns/1ps
module tb_inputs;
    logic [31:0] joy0=0,joy1=0,joy2=0,joy3=0;
    logic [7:0] dsw=8'ha5,coinage=8'h5a,paddle=0;
    logic test_mode=0,golf_io=0,hotrod_io=0,golf_angle=0,gground_io=0;
    logic [63:0] ports;
    s24_inputs dut(.*);

    initial begin
        #1;
        if(ports[7:0]!==8'hff)$fatal(1,"generic idle P1 mismatch");
        joy0[6]=1;#1;
        if(ports[7:0]!==8'hfe)$fatal(1,"generic B3 mapping mismatch");
        joy0=0;joy0[5]=1;#1;
        if(ports[7:0]!==8'hfb)$fatal(1,"generic B2 mapping mismatch");
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

        hotrod_io=0;gground_io=1;#1;
        if(ports[23:16]!==8'hfe)$fatal(1,"Gain Ground Coin 3 mapping mismatch");

        $display("PASS generic, golf and Hot Rod input source mapping");
        $finish;
    end
endmodule
