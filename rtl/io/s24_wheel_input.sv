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
// current stick deflection and, outside a deadzone, emits a signed delta.
// Stick position controls spinner speed through a quadratic response curve:
// small deflections stay at one or two counts per frame for fine control,
// while the rate rises progressively toward a sixteen-count cap at full
// deflection. Holding the stick turns continuously; centering it stops
// without returning the wheel counter to any absolute position.
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
    input  logic [1:0]  analogue_profile,
    input  logic        digital_left,
    input  logic        digital_right,
    input  logic [8:0]  spinner_in,    // real hps_io spinner_N passthrough
    output logic [8:0]  spinner_out
);
    // Hot Rod and Rough Racer share this curve. Remove a small deadzone,
    // square the remaining magnitude, then scale it with shifts. The +1
    // floor keeps the first usable deflection responsive without the old
    // linear curve's abrupt jump in steering rate. The unsigned magnitude
    // handles -128 correctly as 8'h80.
    localparam logic [7:0] DEADZONE = 8'd8;
    // A digital direction has no analogue magnitude, so use half of the
    // stick curve's full-scale rate. This is quick enough for sustained
    // cornering while leaving one-frame D-pad taps useful for correction.
    localparam logic signed [7:0] DIGITAL_STEP = 8'sd8;

    logic [7:0] stick_abs;
    logic [7:0] effective;
    logic [13:0] curve_square;
    logic [14:0] curve_scaled;
    logic [5:0] speed_mag;
    logic [18:0] rough_product;
    logic [10:0] rough_rate;
    logic [11:0] rough_sum;
    logic [7:0] rough_accum;
    logic [2:0] rough_step;
    logic signed [7:0] stick_step;
    logic signed [7:0] steering_step;
    assign rough_product = curve_square * 6'd23;
    assign rough_sum = {4'd0,rough_accum} + {1'b0,rough_rate};
    always_comb begin
        stick_abs = stick_x[7] ? (~stick_x + 8'd1) : stick_x;
        effective = (stick_abs > DEADZONE) ? stick_abs - DEADZONE : 8'd0;
        curve_square = effective * effective;
        curve_scaled = {11'd0,curve_square[13:10]} +
                       {13'd0,curve_square[13:12]} +
                       15'd1;
        if (effective == 8'd0) speed_mag = 6'd0;
        // Hot Rod's former 16-count ceiling is reduced by approximately
        // ten percent. Integer wheel deltas make 14 counts the closest
        // conservative value; the rest of its established curve is kept.
        else if (curve_scaled > 15'd14) speed_mag = 6'd14;
        else speed_mag = curve_scaled[5:0];

        // Rough Racer uses a five-count full-scale quadratic curve. Keep the
        // rate in Q8 fixed point so small movements can remain below one
        // count per frame instead of being rounded up and made twitchy.
        if (effective >= 8'd119) rough_rate = 11'd1280;
        else rough_rate = rough_product[18:8];

        stick_step = 8'sd0;
        if (speed_mag != 6'd0) begin
            if (stick_x[7]) stick_step = -$signed({2'b00,speed_mag});
            else            stick_step =  $signed({2'b00,speed_mag});
        end

        // D-pad steering overrides the absolute stick while exactly one
        // direction is held. Opposing digital directions cancel cleanly.
        steering_step = stick_step;
        if (digital_left != digital_right)
            steering_step = digital_left ? -DIGITAL_STEP : DIGITAL_STEP;
        else if (digital_left && digital_right)
            steering_step = 8'sd0;
    end

    logic stick_toggle;
    always_ff @(posedge clk) begin
        if (reset) begin
            stick_toggle <= 1'b0;
            rough_accum <= 8'd0;
            rough_step <= 3'd0;
        end else if (tick) begin
            if (analogue_profile == ANALOGUE_ROUGHRAC &&
                digital_left == digital_right) begin
                rough_accum <= rough_sum[7:0];
                if (rough_sum[10:8] != 3'd0) begin
                    rough_step <= rough_sum[10:8];
                    stick_toggle <= ~stick_toggle;
                end
            end else begin
                rough_accum <= 8'd0;
                if (steering_step != 8'sd0)
                    stick_toggle <= ~stick_toggle;
            end
        end
    end

    // Edge-merge: remember each source's last-seen toggle bit and forward
    // whichever one changes. Both sources are rare, low-rate events (a
    // human turning a wheel or nudging a stick), so simultaneous edges on
    // the same clk_sys cycle are not a real-world case worth resolving
    // beyond "the synthetic source wins that cycle" (assigned second,
    // below).
    logic hw_toggle_d, stick_toggle_d;
    always_ff @(posedge clk) begin
        if (reset) begin
            hw_toggle_d<=spinner_in[8]; stick_toggle_d<=1'b0;
            spinner_out<=9'd0;
        end else begin
            hw_toggle_d<=spinner_in[8];
            stick_toggle_d<=stick_toggle;
            if (spinner_in[8]!=hw_toggle_d) begin
                spinner_out<={~spinner_out[8],spinner_in[7:0]};
            end
            if (stick_toggle!=stick_toggle_d) begin
                spinner_out<={~spinner_out[8],
                    analogue_profile == ANALOGUE_ROUGHRAC &&
                    digital_left == digital_right
                        ? (stick_x[7]
                           ? -$signed({5'd0,rough_step})
                           :  $signed({5'd0,rough_step}))
                        : steering_step[7:0]};
            end
        end
    end
endmodule
