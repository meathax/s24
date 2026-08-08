`timescale 1ns/1ps

// Real-JT51 audio regression. This deliberately does not use the silent
// visual-harness stub: it programs one legal YM2151 voice, keys it on and
// requires measurable stereo sample energy.
module tb_jt51_tone;
    logic clk=0,rst=1;
    logic cen=1,cen_p1=0;
    logic cs_n=1,wr_n=1,a0=0;
    logic [7:0] din=0,dout;
    logic ct1,ct2,irq_n,sample;
    logic signed [15:0] left,right,xleft,xright;
    longint unsigned energy_l=0,energy_r=0;
    integer sample_count=0;
    integer peak_l=0,peak_r=0;

    always #5 clk=~clk;
    always_ff @(posedge clk) begin
        if(rst) cen_p1<=0;
        else cen_p1<=~cen_p1;
    end

    jt51 dut(
        .rst(rst),.clk(clk),.cen(cen),.cen_p1(cen_p1),
        .cs_n(cs_n),.wr_n(wr_n),.a0(a0),.din(din),.dout(dout),
        .ct1(ct1),.ct2(ct2),.irq_n(irq_n),.sample(sample),
        .left(left),.right(right),.xleft(xleft),.xright(xright));

    function automatic integer abs16(input logic signed [15:0] value);
        abs16 = value < 0 ? -$signed(value) : $signed(value);
    endfunction

    always_ff @(posedge clk) if(!rst && sample) begin
        sample_count<=sample_count+1;
        energy_l<=energy_l+abs16(xleft);
        energy_r<=energy_r+abs16(xright);
        if(abs16(xleft)>peak_l) peak_l<=abs16(xleft);
        if(abs16(xright)>peak_r) peak_r<=abs16(xright);
    end

    task automatic bus_write(input logic address_phase,
                             input logic [7:0] value);
        begin
            @(negedge clk);
            a0=address_phase;din=value;cs_n=0;wr_n=0;
            @(negedge clk);
            cs_n=1;wr_n=1;
        end
    endtask

    task automatic write_reg(input logic [7:0] address,
                             input logic [7:0] value);
        begin
            bus_write(1'b0,address);
            bus_write(1'b1,value);
            // One full 32-slot operator turn also satisfies YM busy time.
            repeat(40) @(posedge clk);
        end
    endtask

    initial begin
        repeat(8) @(posedge clk);
        rst=0;
        repeat(40) @(posedge clk);

        // Prove an address phase does not cancel an operator CSR request.
        bus_write(1'b0,8'h60);
        bus_write(1'b1,8'h3f);
        bus_write(1'b0,8'h28);
        if(!dut.u_mmr.up_tl)
            $fatal(1,"operator request was erased by an address write");
        bus_write(1'b1,8'h4a);
        repeat(40) @(posedge clk);

        // Channel 0: stereo, algorithm 7, a fixed audible pitch.
        write_reg(8'h20,8'hc7);
        write_reg(8'h28,8'h4a);
        write_reg(8'h30,8'h00);

        // Four operators for channel 0. Multiplier 1, maximum attack,
        // zero total level, no decay and maximum release.
        for(int slot=0;slot<4;slot++) begin
            write_reg(8'h40+(slot<<3),8'h01);
            write_reg(8'h60+(slot<<3),8'h00);
            write_reg(8'h80+(slot<<3),8'h1f);
            write_reg(8'ha0+(slot<<3),8'h00);
            write_reg(8'hc0+(slot<<3),8'h00);
            write_reg(8'he0+(slot<<3),8'h0f);
        end

        write_reg(8'h08,8'h78); // all four operators, channel 0
        repeat(220000) @(posedge clk);

        if(sample_count<1000)
            $fatal(1,"too few JT51 samples: %0d",sample_count);
        if(energy_l==0 || energy_r==0 || peak_l<8 || peak_r<8)
            $fatal(1,"silent JT51 tone samples=%0d energy=%0d/%0d peak=%0d/%0d",
                   sample_count,energy_l,energy_r,peak_l,peak_r);
        $display("PASS real JT51 tone samples=%0d energy=%0d/%0d peak=%0d/%0d",
                 sample_count,energy_l,energy_r,peak_l,peak_r);
        $finish;
    end
endmodule
