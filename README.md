# Sega System 24 for MiSTer

An FPGA recreation of Sega System 24 targeting the MiSTer DE10-Nano with one
128 MB SDRAM module. This core does not distribute commercial ROM, floppy, or
FD1094 key data.

The core includes the GPLv3 core-side implementation from
[MiSTer CRT Adjust](https://github.com/rmonic79/MiSTer-CRT-Adjust), providing
OSD-controlled horizontal size/position and vertical shift without modifying
the vendored MiSTer framework.

## Hardware profile

- Two 68000-compatible processors at 10 MHz; the second may be an FD1094.
- Sega 315-5292 RAM character/tile generator.
- Sega 315-5293/315-5295 linked-list, tile-based sprite system.
- Sega 315-5294 priority mixer and 315-5242 palette/DAC behavior.
- Sega 315-5296 I/O, YM2151 at 4 MHz, and an 8-bit mono DAC.
- Floppy controller, ROM-board banking, free-running counter, IRQ timer,
  optional uPD4701 counters, MSM6253 ADCs, and per-game magic latch.
- Native 496x384 active raster, 656x424 total, 16 MHz pixel clock.

CPU-B (the FD1094-encrypted side on protected sets) caches decrypted opcode
fetches in a small physically-snooped, FD1094-state-tagged BRAM
(`rtl/cpu/s24_b_opcache.sv`). The CPU-SDRAM clock-domain-crossing bridge in
`rtl/mem/s24_sdram_cdc.sv` runs at a related-clock synchronizer depth, since
`clk_sys` and `clk_ram` are the same PLL VCO at an exact phase-locked 2:1
ratio rather than independent clocks. Several games also support a
flicker-blend option: titles that obtain translucency by toggling a tilemap's
disable bit every frame (a CRT integrates it; a fixed-pixel display shows a
28.75 Hz flicker) can instead render every frame and let the mixer resolve
the "layer absent" pixel, selectable from the OSD.

## Build policy

Quartus Prime Lite 17.0.2 is the reference toolchain. The QSF deliberately
uses Fast Fit and the account-wide eight-worker limit. Compilation databases are
kept for Smart Recompile. A generated programming file must not be deployed
until all timing reports have been inspected.

## Credits

- **Jorge Cwik** -- `fx68k`, the 68000-compatible CPU core.
- **Jose Tejada Gomez (jotego)** -- `JT51`, the YM2151 core.
- **Till Harbaum** and **Alexey Melnikov (Sorgelig)**, and the wider MiSTer
  project -- the MiSTer platform framework this core targets (`hps_io`,
  `sys_top`, `ascal`, the SDRAM/HPS bridge, and the rest of `sys/`).
- The **MAME project** -- `segas24.cpp`, `segaic24.cpp`, `315_5296.cpp`, and
  `fd1094.cpp` are this core's behavioral reference; no MAME source is copied
  into this tree, only independently reimplemented from observed and
  documented behavior.
- Sega System 24 hardware documentation and prior community research into the
  FD1094 encryption scheme.
- Development on this core, including its RTL, has been substantially
  AI-assisted using Claude Code (Anthropic), under human direction and
  review.

## Licensing

The aggregate project is GPL-3.0. Vendored fx68k and JT51 files retain their
upstream notices. MAME-derived behavioral descriptions are documented as
BSD-3-Clause references; original MAME source is not copied into this tree.
