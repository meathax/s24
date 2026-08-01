`timescale 1ns/1ps

// Clock-enable contract distilled from the mature jts16 fractional-CEN
// approach: derived clocks remain one-cycle enables in a single clock domain,
// the two 68000 phases never overlap, and pausing freezes only CPU time.
module tb_clock_enables;
    logic clk = 1'b0;
    logic reset = 1'b1;
    logic pause = 1'b0;
    logic phi1, phi2, ce_16m, ce_8m, ce_4m;

    integer phi1_count = 0;
    integer phi2_count = 0;
    integer ce16_count = 0;
    integer ce8_count = 0;
    integer ce4_count = 0;
    integer phi1_before_pause;
    integer phi2_before_pause;
    integer ce16_before_pause;

    always #5 clk = ~clk;

    s24_clock_enables dut(.*);

    always @(posedge clk) begin
        #1;
        if (!reset) begin
            if (phi1 && phi2)
                $fatal(1, "phi1 and phi2 overlapped");
            if (phi1) phi1_count = phi1_count + 1;
            if (phi2) phi2_count = phi2_count + 1;
            if (ce_16m) ce16_count = ce16_count + 1;
            if (ce_8m) ce8_count = ce8_count + 1;
            if (ce_4m) ce4_count = ce4_count + 1;
        end
    end

    initial begin
        repeat (3) @(posedge clk);
        @(negedge clk);
        reset = 1'b0;

        // At 48 MHz, 48,000 source clocks are exactly 1 ms. The integer
        // dividers and the 20 MHz phase-event NCO therefore have exact counts.
        repeat (48000) @(posedge clk);
        #2;
        if (ce16_count != 16000 || ce8_count != 8000 || ce4_count != 4000)
            $fatal(1, "derived CE counts %0d/%0d/%0d",
                   ce16_count, ce8_count, ce4_count);
        if (phi1_count != 10000 || phi2_count != 10000)
            $fatal(1, "68000 phase counts %0d/%0d", phi1_count, phi2_count);

        // Keep the independently derived video enable running while the CPU
        // is gated, then resume the same architectural phase cadence.
        @(negedge clk);
        pause = 1'b1;
        phi1_before_pause = phi1_count;
        phi2_before_pause = phi2_count;
        ce16_before_pause = ce16_count;
        repeat (96) @(posedge clk);
        #2;
        if (phi1_count != phi1_before_pause || phi2_count != phi2_before_pause)
            $fatal(1, "CPU phase advanced while paused");
        if (ce16_count != ce16_before_pause + 32)
            $fatal(1, "video CE stopped while paused");

        @(negedge clk);
        pause = 1'b0;
        repeat (48) @(posedge clk);
        #2;
        if (phi1_count != phi1_before_pause + 10 ||
            phi2_count != phi2_before_pause + 10)
            $fatal(1, "CPU phase cadence did not resume cleanly");

        $display("PASS clock enables: exact rates, non-overlap, and CPU-only pause");
        $finish;
    end
endmodule
