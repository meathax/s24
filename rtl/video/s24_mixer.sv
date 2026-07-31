// 315-5294 register file plus a single-pixel priority comparator. The register
// priority fields and blanking bit match MAME. Sprite/tile tie behavior is
// kept explicit so differential pixel tests can lock it down.
module s24_mixer (
    input  logic        clk,
    input  logic        reset,
    input  logic        cpu_wr,
    input  logic [3:0]  cpu_addr,
    input  logic [15:0] cpu_din,
    input  logic [1:0]  cpu_be,
    output logic [15:0] cpu_dout,

    input  logic [11:0] tile0_pixel,
    input  logic [11:0] tile1_pixel,
    input  logic [11:0] tile2_pixel,
    input  logic [11:0] tile3_pixel,
    input  logic        tile0_cat,
    input  logic        tile1_cat,
    input  logic        tile2_cat,
    input  logic        tile3_cat,
    input  logic        tile0_valid,
    input  logic        tile1_valid,
    input  logic        tile2_valid,
    input  logic        tile3_valid,
    input  logic [13:0] sprite0_pixel,
    input  logic [13:0] sprite1_pixel,
    input  logic [13:0] sprite2_pixel,
    input  logic [13:0] sprite3_pixel,
    input  logic [10:0] sprite0_rank,
    input  logic [10:0] sprite1_rank,
    input  logic [10:0] sprite2_rank,
    input  logic [10:0] sprite3_rank,
    output logic [13:0] mixed_pixel,
    output logic        display_blank
);
    import s24_pkg::*;
    logic [15:0] regs [0:15];
    integer i;

    assign cpu_dout = regs[cpu_addr];
    assign display_blank = regs[13][0];

    logic [3:0] best_pri;
    logic [3:0] pri;
    logic [2:0] backdrop_pri;
    logic backdrop_found;
    logic pixel_found;
    logic sprite_found;
    logic [10:0] best_sprite_rank;
    logic [1:0] sprite_choice;
    logic [13:0] chosen_sprite_pixel;
    always_comb begin
        mixed_pixel = 14'h0000;
        backdrop_pri = 0;
        backdrop_found = 0;

        // MAME first draws every category-zero tile pass opaquely in reverse
        // priority order. The final fallback is therefore the lowest-priority
        // selected physical layer; equal priorities leave the higher-numbered
        // layer underneath. Raw tile pixels retain palette color zero here.
        if (tile0_valid) begin
            backdrop_pri = regs[0][2:0];
            mixed_pixel = {2'b00,tile0_pixel};
            backdrop_found = 1;
        end
        if (tile1_valid && (!backdrop_found || regs[2][2:0] <= backdrop_pri)) begin
            backdrop_pri = regs[2][2:0];
            mixed_pixel = {2'b00,tile1_pixel};
            backdrop_found = 1;
        end
        if (tile2_valid && (!backdrop_found || regs[4][2:0] <= backdrop_pri)) begin
            backdrop_pri = regs[4][2:0];
            mixed_pixel = {2'b00,tile2_pixel};
            backdrop_found = 1;
        end
        if (tile3_valid && (!backdrop_found || regs[6][2:0] <= backdrop_pri)) begin
            backdrop_pri = regs[6][2:0];
            mixed_pixel = {2'b00,tile3_pixel};
            backdrop_found = 1;
        end

        best_pri = 0;
        pri = 0;
        pixel_found = 0;

        // MAME's equal-priority default order leaves lower tile pass numbers
        // above higher ones, hence the reverse evaluation order here.
        if (tile3_valid && tile3_pixel[3:0] != 0) begin
            best_pri = {1'b0,regs[{1'b0,2'd3,tile3_cat}][2:0]};
            mixed_pixel = {2'b00,tile3_pixel};
            pixel_found = 1;
        end
        if (tile2_valid && tile2_pixel[3:0] != 0) begin
            pri = {1'b0,regs[{1'b0,2'd2,tile2_cat}][2:0]};
            if (!pixel_found || pri >= best_pri) begin
                best_pri=pri; mixed_pixel={2'b00,tile2_pixel}; pixel_found=1;
            end
        end
        if (tile1_valid && tile1_pixel[3:0] != 0) begin
            pri = {1'b0,regs[{1'b0,2'd1,tile1_cat}][2:0]};
            if (!pixel_found || pri >= best_pri) begin
                best_pri=pri; mixed_pixel={2'b00,tile1_pixel}; pixel_found=1;
            end
        end
        if (tile0_valid && tile0_pixel[3:0] != 0) begin
            pri = {1'b0,regs[{1'b0,2'd0,tile0_cat}][2:0]};
            if (!pixel_found || pri >= best_pri) begin
                best_pri=pri; mixed_pixel={2'b00,tile0_pixel}; pixel_found=1;
            end
        end
        // Each group supplies its frontmost candidate. Reject candidates that
        // the selected tile pass blocks, then choose the largest reverse-list
        // rank. This preserves MAME's ability to show an earlier sprite when a
        // later sprite from another group is hidden behind a tile.
        sprite_found = 0;
        best_sprite_rank = 0;
        sprite_choice = 0;
        chosen_sprite_pixel = 0;
        // segaic24.cpp uses spri[3-group]: indirect color bits 7:6 map to
        // mixer registers 11,10,9,8 for groups 0,1,2,3 respectively.
        pri = {1'b0,regs[11][2:0]};
        if (sprite0_pixel != 0 && (!pixel_found || pri >= best_pri)) begin
            sprite_found=1;sprite_choice=0;best_sprite_rank=sprite0_rank;
        end
        pri = {1'b0,regs[10][2:0]};
        if (sprite1_pixel != 0 && (!pixel_found || pri >= best_pri) &&
            (!sprite_found || sprite1_rank > best_sprite_rank)) begin
            sprite_found=1;sprite_choice=1;best_sprite_rank=sprite1_rank;
        end
        pri = {1'b0,regs[9][2:0]};
        if (sprite2_pixel != 0 && (!pixel_found || pri >= best_pri) &&
            (!sprite_found || sprite2_rank > best_sprite_rank)) begin
            sprite_found=1;sprite_choice=2;best_sprite_rank=sprite2_rank;
        end
        pri = {1'b0,regs[8][2:0]};
        if (sprite3_pixel != 0 && (!pixel_found || pri >= best_pri) &&
            (!sprite_found || sprite3_rank > best_sprite_rank)) begin
            sprite_found=1;sprite_choice=3;best_sprite_rank=sprite3_rank;
        end
        if (sprite_found) begin
            case(sprite_choice)
                2'd0: chosen_sprite_pixel = sprite0_pixel;
                2'd1: chosen_sprite_pixel = sprite1_pixel;
                2'd2: chosen_sprite_pixel = sprite2_pixel;
                default: chosen_sprite_pixel = sprite3_pixel;
            endcase
            // Indirect color 1 is the sprite shadow pen. MAME ORs the
            // shadow-bank bit into the already selected tile/background color.
            if (chosen_sprite_pixel == 14'h2000) mixed_pixel[13] = 1'b1;
            else mixed_pixel = chosen_sprite_pixel;
            pixel_found = 1;
        end
        if (display_blank) mixed_pixel = 0;
    end

    always_ff @(posedge clk) begin
        if (reset) begin
            for (i=0;i<16;i=i+1) regs[i] <= 0;
        end else if (cpu_wr) begin
            regs[cpu_addr] <= merge16(regs[cpu_addr],cpu_din,cpu_be);
        end
    end
endmodule
