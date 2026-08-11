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
    logic signed [15:0] dac_left,dac_right;
    longint unsigned energy_l=0,energy_r=0;
    longint unsigned dac_energy_l=0,dac_energy_r=0;
    integer sample_count=0;
    integer peak_l=0,peak_r=0;
    integer dac_peak_l=0,dac_peak_r=0;
    integer quantized_samples=0;

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

    s24_ym3012_sample_hold dac(
        .clk(clk),.reset(rst),.sample(sample),
        .linear_left(xleft),.linear_right(xright),
        .audio_left(dac_left),.audio_right(dac_right));

    function automatic integer abs16(input logic signed [15:0] value);
        abs16 = value < 0 ? -$signed(value) : $signed(value);
    endfunction

    always_ff @(posedge clk) if(!rst && sample) begin
        sample_count<=sample_count+1;
        energy_l<=energy_l+abs16(xleft);
        energy_r<=energy_r+abs16(xright);
        dac_energy_l<=dac_energy_l+abs16(dac_left);
        dac_energy_r<=dac_energy_r+abs16(dac_right);
        if(abs16(xleft)>peak_l) peak_l<=abs16(xleft);
        if(abs16(xright)>peak_r) peak_r<=abs16(xright);
        if(abs16(dac_left)>dac_peak_l) dac_peak_l<=abs16(dac_left);
        if(abs16(dac_right)>dac_peak_r) dac_peak_r<=abs16(dac_right);
    end

    // JT51 exposes both its full-resolution accumulator and the quantized
    // mantissa/exponent output that the external YM3012 reconstructs.  Check
    // the production digital boundary against that independent low-resolution
    // reference at each settled sample, rather than only comparing aggregate
    // tone energy.
    always @(posedge sample) begin
        if(!rst) begin
            // JT51's sample marker rises after the clock edge that presents
            // the new accumulator value.  The production sample/hold takes
            // that marker on the following core clock, so check after that
            // boundary rather than racing the nonblocking update.
            @(posedge clk);
            #1;
            if(dac_left !== left || dac_right !== right)
                $fatal(1,"YM3012 reconstruction mismatch sample=%0d dac=%0d/%0d jt51=%0d/%0d x=%0d/%0d",
                       quantized_samples,dac_left,dac_right,left,right,xleft,xright);
            quantized_samples = quantized_samples + 1;
        end
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
        if(quantized_samples<1000)
            $fatal(1,"too few settled YM3012 samples: %0d",quantized_samples);
        if(energy_l==0 || energy_r==0 || peak_l<8 || peak_r<8 ||
           dac_energy_l==0 || dac_energy_r==0 || dac_peak_l<8 || dac_peak_r<8)
            $fatal(1,"silent JT51/YM3012 tone samples=%0d exact=%0d/%0d peak=%0d/%0d dac=%0d/%0d peak=%0d/%0d",
                   sample_count,energy_l,energy_r,peak_l,peak_r,
                   dac_energy_l,dac_energy_r,dac_peak_l,dac_peak_r);
        $display("PASS real JT51/YM3012 tone samples=%0d exact=%0d/%0d peak=%0d/%0d dac=%0d/%0d peak=%0d/%0d",
                 sample_count,energy_l,energy_r,peak_l,peak_r,
                 dac_energy_l,dac_energy_r,dac_peak_l,dac_peak_r);
        $finish;
    end
endmodule
