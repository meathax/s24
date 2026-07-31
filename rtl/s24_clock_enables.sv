// Clock enables for a 48 MHz clk_sys. The phase pair gives fx68k a 10 MHz
// emulated bus clock; video and I/O use the exact divide-by-three 16 MHz CE.
module s24_clock_enables (
    input  logic clk,
    input  logic reset,
    input  logic pause,
    output logic phi1,
    output logic phi2,
    output logic ce_16m,
    output logic ce_8m,
    output logic ce_4m
);
    logic [1:0] div3;
    logic [2:0] div6;
    logic [3:0] div12;
    logic [31:0] phase20;
    logic phase_sel;

    always_ff @(posedge clk) begin
        if (reset) begin
            div3 <= 0;
            div6 <= 0;
            div12 <= 0;
            phase20 <= 0;
            phase_sel <= 0;
            phi1 <= 0;
            phi2 <= 0;
            ce_16m <= 0;
            ce_8m <= 0;
            ce_4m <= 0;
        end else begin
            ce_16m <= (div3 == 2);
            ce_8m  <= (div6 == 5);
            ce_4m  <= (div12 == 11);
            div3  <= (div3  == 2)  ? 0 : div3  + 1'd1;
            div6  <= (div6  == 5)  ? 0 : div6  + 1'd1;
            div12 <= (div12 == 11) ? 0 : div12 + 1'd1;

            // 20/48 phase-event NCO. Alternating events are phi1 and phi2,
            // hence each architectural phase repeats at 10 MHz.
            phi1 <= 1'b0;
            phi2 <= 1'b0;
            if (!pause) begin
                if (phase20 + 32'd1789569707 < phase20) begin
                    if (phase_sel) phi2 <= 1'b1;
                    else           phi1 <= 1'b1;
                    phase_sel <= ~phase_sel;
                end
                phase20 <= phase20 + 32'd1789569707;
            end
        end
    end
endmodule

