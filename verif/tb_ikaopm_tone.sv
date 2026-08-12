`timescale 1ns/1ps

module tb_ikaopm_tone;
    logic clk=0,reset=1,chip_reset_n=0,ce_4m=0;
    logic write_valid=0,write_a0=0,write_accepted;
    logic [7:0] write_data=0,status;
    logic irq_n;
    logic sample_strobe_l,sample_strobe_r;
    logic signed [15:0] audio_l,audio_r;
    integer div=0,samples=0,accepts=0;
    longint unsigned energy_l=0,energy_r=0;
    integer clocks=0,last_l=-1,last_r=-1,l_interval=0,r_interval=0;

    function automatic integer abs16(input logic signed [15:0] value);
        abs16 = value < 0 ? -$signed(value) : $signed(value);
    endfunction

    always #10 clk=~clk;
    always_ff @(posedge clk) begin
        clocks<=clocks+1;
        ce_4m <= 1'b0;
        if(div==11) begin div<=0; ce_4m<=1'b1; end
        else div<=div+1;
        if(write_accepted) accepts<=accepts+1;
        if(!reset && chip_reset_n && sample_strobe_l) begin
            if(last_l>=0) l_interval<=clocks-last_l;
            last_l<=clocks;
            samples<=samples+1;
            energy_l<=energy_l+abs16(audio_l);
        end
        if(!reset && chip_reset_n && sample_strobe_r) begin
            if(last_r>=0) r_interval<=clocks-last_r;
            last_r<=clocks;
            energy_r<=energy_r+abs16(audio_r);
        end
    end

    s24_opm dut(
        .clk(clk),.reset(reset),.ce_4m(ce_4m),.chip_reset_n(chip_reset_n),
        .write_valid(write_valid),.write_a0(write_a0),.write_data(write_data),
        .write_accepted(write_accepted),.status(status),.irq_n(irq_n),
        .sample_strobe_l(sample_strobe_l),.sample_strobe_r(sample_strobe_r),
        .audio_l(audio_l),.audio_r(audio_r));

    task automatic bus_write(input logic a0,input logic [7:0] data);
        begin
            @(negedge clk); write_a0=a0; write_data=data; write_valid=1;
            while(!write_accepted) @(posedge clk);
            @(negedge clk); write_valid=0;
        end
    endtask

    task automatic write_reg(input logic [7:0] addr,input logic [7:0] data);
        begin
            bus_write(0,addr); bus_write(1,data);
            repeat(40) @(posedge ce_4m);
        end
    endtask

    initial begin
        repeat(12) @(posedge clk); reset=0;
        repeat(12) @(posedge clk); chip_reset_n=1;
        repeat(80) @(posedge ce_4m);

        // Known-audible program from the pinned IKAOPM upstream testbench.
        write_reg(8'h28,8'h42);
        write_reg(8'h40,8'h02); write_reg(8'h50,8'h01);
        write_reg(8'h60,8'h15); write_reg(8'h70,8'h01);
        write_reg(8'h68,8'h7f); write_reg(8'h78,8'h7f);
        write_reg(8'h80,8'h1f); write_reg(8'h90,8'h1e);
        write_reg(8'ha0,8'h05); write_reg(8'hb0,8'h12);
        write_reg(8'hc0,8'h00); write_reg(8'hd0,8'h07);
        write_reg(8'he0,8'h00); write_reg(8'hf0,8'h14);
        write_reg(8'h20,8'hfc);
        write_reg(8'h08,8'h18);
        repeat(160000) @(posedge clk);

        if(accepts!=34) $fatal(1,"expected 34 accepted bus phases, got %0d",accepts);
        if(samples<100) $fatal(1,"too few IKAOPM samples: %0d",samples);
        if(l_interval!=768 || r_interval!=768)
            $fatal(1,"IKAOPM cadence L=%0d R=%0d expected=768 clocks",
                   l_interval,r_interval);
        if(energy_l==0 || energy_r==0)
            $fatal(1,"silent IKAOPM tone samples=%0d energy=%0d/%0d addr=%02h data=%02h rl=%b kon=%b konreg=%02h mrst=%b ika=%0d/%0d",
                   samples,energy_l,energy_r,dut.opm.REG.hireg_addr,
                   dut.opm.REG.hireg_data,dut.opm.rl,dut.opm.kon,
                   dut.opm.REG.kon_temp_reg,dut.opm.mrst_n,dut.ika_l,dut.ika_r);
        $display("PASS IKAOPM tone samples=%0d energy=%0d/%0d",samples,energy_l,energy_r);
        $finish;
    end
endmodule
