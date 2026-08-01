`timescale 1ns/1ps

module tb_magic_latch;
    import s24_pkg::*;

    logic clk=0,reset=1,wr=0;
    logic [7:0] din=0,dout;
    magic_sel_t selector=MAGIC_NONE;

    always #5 clk=~clk;
    s24_magic_latch dut(.*);

    task automatic write_byte(input logic [7:0] value);
        begin
            din=value;wr=1;@(posedge clk);#1;wr=0;@(posedge clk);#1;
        end
    endtask

    task automatic reset_latch;
        begin
            reset=1;@(posedge clk);#1;reset=0;@(posedge clk);#1;
            if(dout!=0) $fatal(1,"magic latch reset mismatch");
        end
    endtask

    initial begin
        repeat(2) @(posedge clk);reset=0;@(posedge clk);#1;

        // With no daughterboard table MAME ignores non-FF writes.
        selector=MAGIC_NONE;
        write_byte(8'h55);
        if(dout!=0) $fatal(1,"unpopulated magic latch changed");

        // First write stores the byte because feedback is initially zero.
        // The second values are independent hard-coded results from MAME's
        // per-game bit permutations for old latch value 0x81.
        selector=MAGIC_BNZABROS;
        write_byte(8'h81);write_byte(8'h3c);
        if(dout!=8'h78) $fatal(1,"Bonanza permutation %02h",dout);

        reset_latch();selector=MAGIC_MAHMAJN;
        write_byte(8'h81);write_byte(8'h3c);
        if(dout!=8'h1d) $fatal(1,"Mahjong permutation %02h",dout);

        reset_latch();selector=MAGIC_MAHMAJN2;
        write_byte(8'h81);write_byte(8'h3c);
        if(dout!=8'hfc) $fatal(1,"Mahjong 2 permutation %02h",dout);

        reset_latch();selector=MAGIC_QGH;
        write_byte(8'h81);write_byte(8'h3c);
        if(dout!=8'h36) $fatal(1,"QGH permutation %02h",dout);

        reset_latch();selector=MAGIC_QROUKA;
        write_byte(8'h81);write_byte(8'h3c);
        if(dout!=8'h3a) $fatal(1,"Qrouka permutation %02h",dout);

        reset_latch();selector=MAGIC_QUIZMEKU;
        write_byte(8'h81);write_byte(8'h3c);
        if(dout!=8'h1d) $fatal(1,"Quizmeku permutation %02h",dout);

        reset_latch();selector=MAGIC_DCCLUB;
        write_byte(8'h81);write_byte(8'h3c);
        if(dout!=8'h2e) $fatal(1,"DCCLUB permutation %02h",dout);

        // 0xff is the hardware reset command regardless of current state.
        write_byte(8'hff);
        if(dout!=0) $fatal(1,"magic command reset mismatch");

        $display("PASS tb_magic_latch all MAME game tables and reset semantics");
        $finish;
    end
endmodule
