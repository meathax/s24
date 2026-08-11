`timescale 1ns/1ps

// Focused regression for the frame-rate tilemap blink that Bonanza Bros uses
// for translucency. CPU B rewrites the tile scroll/control registers once per
// frame and alternates bit 15 -- the layer disable -- of tile_ram[0x5004], so
// physical tilemap 0 is switched off and on at 28.75 Hz. A CRT integrates the
// two fields into one half-intensity image; a fixed-pixel display shows the
// alternation directly.
//
// The bench drives a real 656x424 raster into s24_tile and checks:
//   blend_en=0  layer_blink stays clear and layer 0 disappears on the frames
//               its disable bit is set (the unmodified, PCB-exact behaviour)
//   blend_en=1  layer_blink[0] asserts only after two consecutive toggling
//               frame boundaries, layer 0 then renders on every frame, and
//               s24_mixer's mixed_pixel_alt reproduces the "layer absent"
//               pixel so the two can be averaged downstream
//   settle      layer_blink clears on the first frame boundary at which the
//               disable bit does not change, so an ordinary one-off
//               enable/disable never engages the blend
module tb_flicker_blend;
    logic clk = 0;
    always #10.416 clk = ~clk;          // ~48 MHz, as in the core

    logic reset = 1;
    logic ce_pixel = 0;
    // Drive the raster from the core's own timing module rather than a
    // hand-rolled counter: hcount must advance ON ce_pixel, not a cycle
    // ahead of it, or the line-RAM display port is sampled a lane early and
    // the bench invents readout bugs that the core does not have.
    logic [9:0] hcount, vcount;
    logic hblank, vblank, hsync, vsync, hsync_tick;
    s24_video_timing timing(
        .clk(clk),.reset(reset),.ce_pixel(ce_pixel),
        .sync_mode(1'b0),
        .hcount(hcount),.vcount(vcount),
        .hblank(hblank),.vblank(vblank),.hsync(hsync),.vsync(vsync),
        .hsync_tick(hsync_tick));

    logic cpu_wr = 0;
    logic [14:0] cpu_addr = 0;
    logic [15:0] cpu_din = 0;
    logic [1:0] cpu_be = 2'b11;
    logic char_wr = 0;
    logic [15:0] char_addr = 0;
    logic [15:0] char_din = 0;
    logic [1:0] char_be = 2'b11;
    logic blend_en = 0;

    logic [15:0] cpu_dout;
    logic [11:0] p0,p1,p2,p3;
    logic c0,c1,c2,c3;
    logic valid0,valid1,valid2,valid3;
    logic [3:0] blink;

    s24_tile tile(
        .clk(clk),.reset(reset),.ce_pixel(ce_pixel),
        .hcount(hcount),.vcount(vcount),
        .cpu_wr(cpu_wr),.cpu_addr(cpu_addr),.cpu_din(cpu_din),.cpu_be(cpu_be),
        .char_wr(char_wr),.char_addr(char_addr),.char_din(char_din),
        .char_be(char_be),
        .blend_en(blend_en),.layer_blink(blink),
        .cpu_dout(cpu_dout),
        .layer0_pixel(p0),.layer1_pixel(p1),.layer2_pixel(p2),.layer3_pixel(p3),
        .layer0_cat(c0),.layer1_cat(c1),.layer2_cat(c2),.layer3_cat(c3),
        .layer0_valid(valid0),.layer1_valid(valid1),
        .layer2_valid(valid2),.layer3_valid(valid3));

    logic [13:0] mixed, mixed_alt;
    logic mixer_blank;
    s24_mixer mixer(
        .clk(clk),.reset(reset),.cpu_wr(1'b0),.cpu_addr(4'd0),
        .cpu_din(16'd0),.cpu_be(2'b11),.cpu_dout(),
        .tile0_pixel(p0),.tile1_pixel(p1),.tile2_pixel(p2),.tile3_pixel(p3),
        .tile0_cat(c0),.tile1_cat(c1),.tile2_cat(c2),.tile3_cat(c3),
        .tile0_valid(valid0),.tile1_valid(valid1),
        .tile2_valid(valid2),.tile3_valid(valid3),
        .sprite0_pixel(14'd0),.sprite1_pixel(14'd0),
        .sprite2_pixel(14'd0),.sprite3_pixel(14'd0),
        .sprite0_rank(11'd0),.sprite1_rank(11'd0),
        .sprite2_rank(11'd0),.sprite3_rank(11'd0),
        .tile_blink(blink),
        .mixed_pixel(mixed),.mixed_pixel_alt(mixed_alt),
        .display_blank(mixer_blank));

    // One ce_pixel in every three clocks, matching the core's 48 MHz / 16 MHz
    // pixel cadence and the per-line render budget that depends on it.
    logic [1:0] phase = 0;
    integer frame_count = 0;
    logic [9:0] vcount_d;
    always_ff @(posedge clk) begin
        phase <= (phase == 2'd2) ? 2'd0 : phase + 2'd1;
        ce_pixel <= (phase == 2'd1);
        vcount_d <= vcount;
        if (vcount == 10'd384 && vcount_d == 10'd383)
            frame_count <= frame_count + 1;
    end

    // Sample one fixed visible pixel per frame.
    logic sample_valid0;
    logic [3:0] sample_blink;
    logic [13:0] sample_mixed, sample_alt;
    always_ff @(posedge clk) begin
        if (ce_pixel && vcount == 10'd200 && hcount == 10'd200) begin
            sample_valid0 <= valid0;
            sample_blink  <= blink;
            sample_mixed  <= mixed;
            sample_alt    <= mixed_alt;
        end
    end

    task automatic write_tile_word(input logic [14:0] a, input logic [15:0] d);
        begin
            @(negedge clk);
            cpu_addr = a; cpu_din = d; cpu_wr = 1;
            @(negedge clk);
            cpu_wr = 0;
        end
    endtask

    task automatic write_char_word(input logic [15:0] a, input logic [15:0] d);
        begin
            @(negedge clk);
            char_addr = a; char_din = d; char_wr = 1;
            @(negedge clk);
            char_wr = 0;
        end
    endtask

    // Advance exactly one frame, leaving the per-frame sample registers
    // holding that frame's values (they are captured at line 200).
    task automatic wait_past_sample();
        begin
            do @(posedge clk); while (vcount != 10'd300);
            do @(posedge clk); while (vcount == 10'd300);
        end
    endtask

    integer i;
    integer errors = 0;
    logic prev_valid0;

    task automatic check_that(input logic condition, input string message);
        begin
            if (!condition) begin
                errors = errors + 1;
                $display("FAIL: %s (frame=%0d blink=%b valid0=%b mixed=%h alt=%h)",
                         message, frame_count, sample_blink, sample_valid0,
                         sample_mixed, sample_alt);
            end
        end
    endtask

    // Drive tilemap 0's disable bit once per frame during vblank, exactly as
    // CPU B does on hardware: a single write per frame, alternating bit 15.
    // Armed only after the initial block's setup writes, so the two never
    // contend for the CPU write port.
    logic toggling = 0;
    logic driver_armed = 0;
    logic disable_level = 0;
    initial begin
        forever begin
            do @(posedge clk);
            while (!(driver_armed && ce_pixel &&
                     vcount == 10'd400 && hcount == 10'd4));
            if (toggling) disable_level = ~disable_level;
            write_tile_word(15'h5004, disable_level ? 16'h8000 : 16'h0000);
        end
    end

    initial begin
        repeat (20) @(posedge clk);
        reset = 0;
        repeat (20) @(posedge clk);

        // Character 0 is solid pen 0xF so layer 0 produces a non-zero pixel.
        for (i = 0; i < 16; i = i + 1) write_char_word(i[15:0], 16'hffff);
        // Tilemap 2 is selected by the all-zero window mask exactly as
        // tilemap 0 is; disable it permanently so layer 0 is the only
        // contributor and mixed_pixel_alt is unambiguous. This bit never
        // changes, so it must never be mistaken for a blink.
        write_tile_word(15'h5006, 16'h8000);
        driver_armed = 1;

        // ---- blend disabled: the raw PCB alternation -------------------
        blend_en = 0;
        toggling = 1;
        for (i = 0; i < 6; i = i + 1) wait_past_sample();
        prev_valid0 = sample_valid0;
        for (i = 0; i < 6; i = i + 1) begin
            wait_past_sample();
            check_that(sample_blink == 4'b0000,
                   "blend disabled must never report a blinking layer");
            check_that(sample_valid0 != prev_valid0,
                   "blend disabled must alternate layer 0 every frame");
            prev_valid0 = sample_valid0;
        end

        // ---- blend enabled: layer rendered every frame -----------------
        blend_en = 1;
        // Two toggling frame boundaries are needed before the blend engages.
        for (i = 0; i < 4; i = i + 1) wait_past_sample();
        for (i = 0; i < 6; i = i + 1) begin
            wait_past_sample();
            check_that(sample_blink[0] === 1'b1,
                   "blend enabled must flag tilemap 0 as blinking");
            check_that(sample_blink[2] === 1'b0,
                   "a permanently disabled tilemap must not be flagged");
            check_that(sample_valid0 === 1'b1,
                   "a blinking layer must render on every frame");
            check_that(sample_mixed == 14'h000f,
                   "mixed_pixel must carry the blinking layer");
            check_that(sample_alt == 14'h0000,
                   "mixed_pixel_alt must reproduce the layer-absent field");
        end

        // ---- toggling stops: blend must disengage ----------------------
        toggling = 0;
        for (i = 0; i < 3; i = i + 1) wait_past_sample();
        for (i = 0; i < 3; i = i + 1) begin
            wait_past_sample();
            check_that(sample_blink == 4'b0000,
                   "blink must clear once the disable bit stops toggling");
        end

        if (errors == 0) $display("PASS tb_flicker_blend");
        else $display("FAIL tb_flicker_blend errors=%0d", errors);
        $finish;
    end

    initial begin
        // ~28 real frames at 57.5 Hz (~17.4 ms each) are exercised above;
        // give a comfortable margin over the ~490 ms that takes.
        #900000000;
        $display("FAIL tb_flicker_blend timeout");
        $finish;
    end
endmodule
