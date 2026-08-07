// Converts an absolute analog-stick X deflection into the same relative
// toggle+magnitude "spinner" event format hps_io's spinner_N ports use
// (s24_upd4701 already consumes that format for the real 315-5292-board
// wheel channels -- see rtl/io/s24_analog.sv). Real Hot Rod/Rough Racer
// cabinets read their steering wheels through a uPD4701 quadrature
// decoder, i.e. a RELATIVE control (MAME models it as IPT_DIAL, not
// IPT_PADDLE), so a stick's ABSOLUTE position has to be turned into a
// stream of incremental turns, not written straight into the counter.
//
// One `tick` (driven once per video frame by the caller) samples the
// current stick deflection and, outside a deadzone, emits one delta
// step scaled by `sensitivity`. Holding the stick over during many
// consecutive ticks turns the wheel continuously, matching how a
// digital joystick would spin a real dial in the absence of a physical
// wheel peripheral.
//
// merge_in/merge_out let a real MiSTer spinner peripheral (hps_io's
// literal spinner_N ports) keep working side by side with this
// synthetic source: whichever one toggles forwards its own delta:
// unrelated to the raster/audio timing surfaces documented elsewhere in
// this core, so a single clk_sys-domain edge-merge is sufficient.
module s24_wheel_input (
    input  logic        clk,
    input  logic        reset,
    input  logic         tick,
    input  logic signed [7:0] stick_x,
    input  logic [1:0]  sensitivity,   // 0=Low,1=Normal(default),2=High
    input  logic [8:0]  spinner_in,    // real hps_io spinner_N passthrough
    output logic [8:0]  spinner_out
);
    // Ramp-restart deadzone: values inside +-DEADZONE produce no motion;
    // values outside it are shifted toward zero by DEADZONE first so the
    // output ramps smoothly from 0 right past the deadzone edge instead of
    // jumping.
    localparam signed [7:0] DEADZONE = 8'sd16;

    logic signed [7:0] clamped, stick_mag;
    always_comb begin
        if (stick_x > DEADZONE)       clamped = stick_x - DEADZONE;
        else if (stick_x < -DEADZONE) clamped = stick_x + DEADZONE;
        else                          clamped = 8'sd0;
        case (sensitivity)
            2'd0:    stick_mag = clamped >>> 3; // Low
            2'd2:    stick_mag = clamped >>> 1; // High
            default: stick_mag = clamped >>> 2; // Normal
        endcase
    end

    logic stick_toggle;
    always_ff @(posedge clk) begin
        if (reset) stick_toggle <= 1'b0;
        else if (tick && stick_mag != 8'sd0) stick_toggle <= ~stick_toggle;
    end

    // Edge-merge: remember each source's last-seen toggle bit and forward
    // whichever one changes. Both sources are rare, low-rate events (a
    // human turning a wheel or nudging a stick), so simultaneous edges on
    // the same clk_sys cycle are not a real-world case worth resolving
    // beyond "the synthetic source wins that cycle" (assigned second,
    // below).
    logic hw_toggle_d, stick_toggle_d;
    logic [7:0] hw_mag_held, stick_mag_held;
    always_ff @(posedge clk) begin
        if (reset) begin
            hw_toggle_d<=1'b0; stick_toggle_d<=1'b0;
            spinner_out<=9'd0;
            hw_mag_held<=8'd0; stick_mag_held<=8'd0;
        end else begin
            hw_toggle_d<=spinner_in[8];
            stick_toggle_d<=stick_toggle;
            if (spinner_in[8]!=hw_toggle_d) begin
                spinner_out<={~spinner_out[8],spinner_in[7:0]};
            end
            if (stick_toggle!=stick_toggle_d) begin
                spinner_out<={~spinner_out[8],stick_mag[7:0]};
            end
        end
    end
endmodule
