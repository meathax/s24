`timescale 1ns/1ps

module tb_audio_lpf;
    logic clk=0,reset=1,strobe_l=0,strobe_r=0;
    logic signed [15:0] in_l=0,in_r=0,out_l,out_r;
    integer i;

    always #5 clk=~clk;
    s24_audio_lpf left(
        .clk(clk),.reset(reset),.sample_strobe(strobe_l),
        .sample_in(in_l),.sample_out(out_l));
    s24_audio_lpf right(
        .clk(clk),.reset(reset),.sample_strobe(strobe_r),
        .sample_in(in_r),.sample_out(out_r));

    task automatic pulse_l;
        begin strobe_l=1; @(posedge clk); #1; strobe_l=0; end
    endtask
    task automatic pulse_r;
        begin strobe_r=1; @(posedge clk); #1; strobe_r=0; end
    endtask

    initial begin
        repeat(3) @(posedge clk); reset=0; @(posedge clk); #1;
        in_l=16'sd10000; in_r=-16'sd10000;
        pulse_l();
        if(out_l!=16'sd7871 || out_r!=0)
            $fatal(1,"channel update/hold mismatch L=%0d R=%0d",out_l,out_r);
        pulse_r();
        if(out_l!=16'sd7871 || out_r!=-16'sd7872)
            $fatal(1,"right update/left hold mismatch L=%0d R=%0d",out_l,out_r);

        for(i=0;i<12;i=i+1) begin pulse_l(); pulse_r(); end
        if(out_l<16'sd9998 || out_l>16'sd10000 ||
           out_r>-16'sd9998 || out_r<-16'sd10000)
            $fatal(1,"DC settling mismatch L=%0d R=%0d",out_l,out_r);

        // No sample strobe represents the paused OPM cadence: state holds.
        in_l=-16'sd32768; in_r=16'sd32767;
        repeat(20) @(posedge clk);
        if(out_l<16'sd9998 || out_r>-16'sd9998)
            $fatal(1,"filter changed without channel strobe L=%0d R=%0d",out_l,out_r);

        // Full-scale reversals exercise explicit bounded output saturation.
        repeat(8) begin pulse_l(); pulse_r(); end
        if(out_l<-16'sd32768 || out_l>16'sd32767 ||
           out_r<-16'sd32768 || out_r>16'sd32767)
            $fatal(1,"filter output outside signed 16-bit range");

        reset=1; @(posedge clk); #1;
        if(out_l!=0 || out_r!=0) $fatal(1,"filter reset mismatch");
        $display("PASS s24_audio_lpf cadence-driven channel hold, DC, bounds and reset");
        $finish;
    end
endmodule
