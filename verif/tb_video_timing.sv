`timescale 1ns/1ps

// Source-level raster contract for the measured 315-5292 timing. This test is
// intentionally small so it can be run later without rebuilding the core.
module tb_video_timing;
    logic clk=0,reset=1,ce_pixel=1;
    logic [9:0] hcount,vcount;
    logic hblank,vblank,hsync,vsync,hsync_tick;
    integer pixels=0;
    integer lines=0;
    integer active_pixels=0;
    integer visible_lines=0;
    integer line_active_pixels=0;
    always #5 clk=~clk;

    s24_video_timing dut(
        .clk(clk),.reset(reset),.ce_pixel(ce_pixel),.hcount(hcount),.vcount(vcount),
        .hblank(hblank),.vblank(vblank),.hsync(hsync),.vsync(vsync),
        .hsync_tick(hsync_tick));

    // Sample pre-update counter values at the active edge. Reset is released
    // on a falling edge below, avoiding a race with the DUT's sequential block.
    always @(posedge clk) begin
        if (!reset) begin
            assert(hblank == (hcount >= 10'd496)) else $fatal(1,"hblank phase");
            assert(vblank == (vcount >= 10'd384)) else $fatal(1,"vblank phase");
            assert(hsync == !((hcount >= 10'd539) && (hcount < 10'd587)))
                else $fatal(1,"hsync phase at %0d",hcount);
            assert(vsync == !((vcount >= 10'd395) && (vcount < 10'd399)))
                else $fatal(1,"vsync phase at %0d",vcount);
            pixels++;
            if (!hblank && !vblank) begin
                active_pixels++;
                line_active_pixels++;
            end
            if (hcount == 10'd655) begin
                lines++;
                if (vcount < 10'd384) begin
                    assert(line_active_pixels == 496)
                        else $fatal(1,"visible line %0d has %0d active pixels",
                                    vcount,line_active_pixels);
                    visible_lines++;
                end else begin
                    assert(line_active_pixels == 0)
                        else $fatal(1,"blank line %0d emitted active pixels",vcount);
                end
                line_active_pixels=0;
            end
            if (lines == 424) begin
                assert(pixels == 656*424) else $fatal(1,"raster size %0d",pixels);
                assert(visible_lines == 384)
                    else $fatal(1,"visible line count %0d",visible_lines);
                assert(active_pixels == 496*384)
                    else $fatal(1,"active pixel count %0d",active_pixels);
                $display("PASS 656x424 raster, 496x384 progressive active area and measured sync windows");
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
