import s24_pkg::*;

module tb_romboard_mapper;
    logic [21:0] offset;

    task automatic check(
        input logic [1:0] profile,
        input logic [3:0] bank,
        input logic [17:0] window_address,
        input logic [21:0] expected
    );
        offset = romboard_offset(profile, bank, window_address);
        if (offset !== expected)
            $fatal(1, "ROM-board profile=%0d bank=%h window=%h offset=%h expected=%h",
                   profile, bank, window_address, offset, expected);
    endtask

    initial begin
        // 4M: the existing linear media layout, all BK bits decoded.
        check(ROMBOARD_PROFILE_4M, 4'h0, 18'h00000, 22'h000000);
        check(ROMBOARD_PROFILE_4M, 4'h5, 18'h12345, 22'h152345);
        check(ROMBOARD_PROFILE_4M, 4'hf, 18'h3ffff, 22'h3fffff);

        // 2M: BK3 is electrically unused; BK2:BK0 select eight 256 KiB
        // windows over the four 27C020 ROM pairs.
        check(ROMBOARD_PROFILE_2M, 4'h0, 18'h00000, 22'h000000);
        check(ROMBOARD_PROFILE_2M, 4'h8, 18'h00000, 22'h000000);
        check(ROMBOARD_PROFILE_2M, 4'h7, 18'h3ffff, 22'h1fffff);
        check(ROMBOARD_PROFILE_2M, 4'hf, 18'h3ffff, 22'h1fffff);

        // 8M: the two populated ROM-pair groups occupy the same linear
        // 4 MiB image as the current media generator.
        check(ROMBOARD_PROFILE_8M, 4'h8, 18'h00000, 22'h200000);
        check(ROMBOARD_PROFILE_8M, 4'hf, 18'h3ffff, 22'h3fffff);

        // Unassigned profile values fail safe to the proven 4M layout.
        check(2'd3, 4'ha, 18'h01234, 22'h281234);
        $display("PASS ROM-board 2M/4M/8M jumper bank address mapping");
        $finish;
    end
endmodule
