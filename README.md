# Sega System 24 for MiSTer

An FPGA recreation of Sega System 24 targeting the MiSTer DE10-Nano with one
128 MB SDRAM module. The eventual release bitstream is `s24.rbf`; one bitstream
is intended to support every System 24 set represented by the project MRAs.

This is an accuracy-first work in progress. MAME's current `segas24.cpp`,
`segaic24.cpp`, `315_5296.cpp`, and `fd1094.cpp` are the behavioral contracts.
The core does not distribute commercial ROM, floppy, or FD1094 key data.

## Hardware profile

- Two 68000-compatible processors at 10 MHz; the second may be an FD1094.
- Sega 315-5292 RAM character/tile generator.
- Sega 315-5293/315-5295 linked-list, tile-based sprite system.
- Sega 315-5294 priority mixer and 315-5242 palette/DAC behavior.
- Sega 315-5296 I/O, YM2151 at 4 MHz, and an 8-bit mono DAC.
- Floppy controller, ROM-board banking, free-running counter, IRQ timer,
  optional uPD4701 counters, MSM6253 ADCs, and per-game magic latch.
- Native 496x384 active raster, 656x424 total, 16 MHz pixel clock.

## Current state

The repository contains the MiSTer platform foundation, 128 MB SDRAM
controller, dual-fx68k integration, JT51, MAME-derived device RTL, and
verification scaffolding. All sixteen deterministic chip/module regressions
pass. A full-core synthetic boot test also loads both fx68k control stores and
proves CPU-A reset-vector fetch, instruction execution, shared memory traffic,
and video line progress. A real DCCLUB boot now completes the BIOS RAM/device
tests far enough to enter banked ROM-board checksumming with valid byte enables
and single-ack transactions. Attract mode and MAME frame/audio comparison remain
incomplete, so no RBF is considered deployable. See `docs/status.md` for the
exact implementation boundary.

The real protected Gain Ground path also passes its first floppy milestone:
after loading the complete 8 KB FD1094 key, CPU A completes the common BIOS
diagnostic path and issues a valid disk read at 210,451,455 simulated clocks.
CPU B remains correctly held until CNT1 release at that checkpoint.

The latest chip audit also corrects raster IRQ phase, full floppy-controller
mirroring, CPU B reset-on-CNT1-release, exact palette highlight rounding, and
sprite priority fallback across all four indirect-color groups. The focused
controller and video regressions for these changes pass.
FD1094 state changes are now qualified at fx68k instruction acceptance, key
RAM survives CPU reset, the palette highlight calculation is explicitly wide
enough to avoid HDL overflow, and YM/DAC mixing uses MAME's equal route gains.
The FD1094 path also tags accepted instructions with their fetch address and
retains prefetched immediate words. Gain Ground alone applies MAME's temporary
70% CPU-B clock scale for two seconds after CNT1 releases the protected CPU.
The sprite path has additionally been audited against MAME's full draw loop:
raw pen zero now goes through the indirect palette, large-sprite tile arithmetic
is explicitly wide, and bounded list overflow keeps the frontmost entries.

The ignored `roms/` folder currently contains 18 user-supplied sets. Run
`python tools/gen_mra.py` to validate those archives and regenerate one MRA per
set. `python tools/gen_sim_media.py --all` prepares ignored real-ROM media for
the complete simulation matrix. ROM, floppy, and key payloads are never tracked
by this repository.

MiSTer's 16-bit HPS download path now captures both bytes of each MRA switch
payload at address zero, preserving the per-game `FF ED` and `FF FB` defaults
instead of silently leaving the second DIP bank at `FF`. A focused wide/byte
download regression covers this hardware-facing path.

`tools/run_game_matrix.py` reuses one safe compiled model and runs all 18 sets
sequentially. Before a run it rejects missing media and stale board descriptors.
Its target levels cover first floppy/ROM-board access, CNT1/CPU-B release,
CPU-B instruction execution (including FD1094 decryption where populated), and
sustained post-release visible video. `--dry-run` validates every media contract
and prints the complete matrix without touching Verilator or its machine lock.
For target 3, `--frame-dir verif/frames` writes one complete 496x384 RGB PPM per
passing set so rendered output can be inspected and compared with MAME.
`tools/run_protected_matrix.py` remains as the narrower eight-set FD1094 helper.

Floppy downloads are padded with zeroes to a deterministic 2 MiB buffer in
both generated MRAs and simulation media. This matches FBNeo's System 24
allocation and covers the BIOS's one-side-past-image seek on Gain Ground
without depending on stale SDRAM contents.

## Build policy

Quartus Prime Lite 17.0.2 is the reference toolchain. The QSF deliberately
uses Fast Fit and the account-wide six-worker limit. Compilation databases are
kept for Smart Recompile. A generated programming file must not be deployed
until all timing reports have been inspected.

## Licensing

The aggregate project is GPL-3.0. Vendored fx68k and JT51 files retain their
upstream notices. MAME-derived behavioral descriptions are documented as
BSD-3-Clause references; original MAME source is not copied into this tree.
