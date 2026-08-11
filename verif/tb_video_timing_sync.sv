`timescale 1ns/1ps

// Focused regression for the documented 315-5292 synchronization-mode
// failure.  Mode 1 retains the 656-pixel horizontal raster, runs for 512
// scanlines, and leaves the normal vertical-sync window unblanked before the
// late blanking boundary.  It is an invalid diagnostic mode, not a supported
// display format.
module tb_video_timing_sync;
    logic clk=0, reset=1, ce_pixel=1, sync_mode=1;
    logic [9:0] hcount, vcount;
    logic hblank, vblank, hsync, vsync, hsync_tick;
    integer pixels=0;
    integer lines=0;
    integer visible_lines=0;
    integer line_active_pixels=0;
    integer sync_enabled_pixels=0;

    always #5 clk=~clk;

    s24_video_timing dut(
        .clk(clk), .reset(reset), .ce_pixel(ce_pixel), .sync_mode(sync_mode),
        .hcount(hcount), .vcount(vcount),
        .hblank(hblank), .vblank(vblank), .hsync(hsync), .vsync(vsync),
        .hsync_tick(hsync_tick));

    always @(posedge clk) begin
        if (!reset) begin
            assert(hblank == (hcount >= 10'd496)) else $fatal(1,"hblank phase");
            assert(vblank == (vcount >= 10'd400)) else $fatal(1,"mode-1 vblank phase at %0d",vcount);
            assert(hsync == !((hcount >= 10'd539) && (hcount < 10'd587)))
                else $fatal(1,"horizontal sync phase at %0d",hcount);
            assert(vsync == !((vcount >= 10'd395) && (vcount < 10'd399)))
                else $fatal(1,"vertical sync phase at %0d",vcount);
            if (vcount >= 10'd395 && vcount < 10'd399 && !vblank)
                sync_enabled_pixels++;
            if (!hblank && !vblank)
                line_active_pixels++;
            pixels++;

            if (hcount == 10'd655) begin
                lines++;
                if (vcount < 10'd400) begin
                    assert(line_active_pixels == 496)
                        else $fatal(1,"mode-1 visible line %0d has %0d active pixels",
                                    vcount, line_active_pixels);
                    visible_lines++;
                end else begin
                    assert(line_active_pixels == 0)
                        else $fatal(1,"mode-1 blank line %0d emitted active pixels",
                                    vcount);
                end
                line_active_pixels=0;
            end

            if (lines == 512) begin
                assert(pixels == 656*512) else $fatal(1,"mode-1 raster size %0d",pixels);
                assert(visible_lines == 400)
                    else $fatal(1,"mode-1 visible line count %0d",visible_lines);
                assert(sync_enabled_pixels == 4*656)
                    else $fatal(1,"mode-1 sync overlap pixels %0d",sync_enabled_pixels);
                assert(vcount == 10'd511) else $fatal(1,"mode-1 terminal line %0d",vcount);
                $display("PASS 315-5292 mode-1 656x512 raster, late blanking, and sync overlap");
                $finish;
            end
        end
    end

    initial begin
        repeat(2) @(posedge clk);
        @(negedge clk);
        reset=0;
    end
endmodule
