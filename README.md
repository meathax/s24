# Sega System 24 for MiSTer

An FPGA recreation of Sega System 24 targeting the MiSTer DE10-Nano with one
128 MB SDRAM module. The eventual release bitstream is `segas24.rbf`; one bitstream
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
verification scaffolding. All nineteen deterministic chip/module regressions
pass. A full-core synthetic boot test also loads both fx68k control stores and
proves CPU-A reset-vector fetch, instruction execution, shared memory traffic,
and video line progress. `s24.rbf` now builds cleanly through Quartus Prime
17.0.2 Build 602 -- zero errors, zero critical warnings, and closed timing
(no negative slack on any of the 8 corner/model combinations) -- but attract
mode and MAME frame/audio comparison remain incomplete, so build-readiness is
not the same claim as behavioral accuracy. See `docs/status.md` for the exact
implementation boundary.

CPU-B (the FD1094-encrypted side on protected sets) now caches decrypted
opcode fetches in a small physically-snooped, FD1094-state-tagged BRAM
(`rtl/cpu/s24_b_opcache.sv`), and the CPU-SDRAM clock-domain-crossing bridge
runs at its correct related-clock depth (`clk_sys`/`clk_ram` are the same PLL
VCO at an exact phase-locked 2:1 ratio, not independent clocks) instead of an
unnecessary two-stage asynchronous synchronizer. Both were measured on
hardware to matter: CPU-B was stalled on memory for 40-50% of every frame
before these landed. Block-memory-bit usage is tight after this work -- 545 of
553 M10K blocks (99%) -- which is a real constraint on any future feature
that needs BRAM; a resource audit is the next planned pass. Several games also
get a flicker-blend option: titles that obtain translucency by toggling a
tilemap's disable bit every frame (a CRT integrates it; a fixed-pixel display
shows a 28.75 Hz flicker) can instead render every frame and let the mixer
resolve the "layer absent" pixel, at the user's choice from the OSD.

The real protected Gain Ground path now passes a complete contiguous 11,520-byte
floppy track after loading the complete 8 KB FD1094 key. The deterministic MCP
run reaches that gate at 216,533,489 simulated clocks with checksum `bfc224d8`.
The same model also passes the CNT1/CPU-B execution gate at 703,835,797 clocks
(`release=1`, first CPU-B instruction accepted). MAME's first CNT1-high write
is about 688.6 million 48 MHz master clocks, so the remaining work is to tighten
that 15.3-million-clock release skew before claiming cycle-level equivalence.

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

The ignored `roms/` folder contains user-supplied archives; the checked-in
local support inventory currently contains 6 parent sets. Run `python tools/gen_mra.py`
to validate those archives and regenerate one MRA per supported set. Every generated external ROM region declares
`type="merged|nonmerged|split"` and retains its CRC, so the same MRA accepts
full non-merged sets, split parent/clone sets, and merged parent archives with
clone-prefixed members. The validator follows MiSTer's CRC-first archive lookup.
`python tools/gen_sim_media.py --all` prepares ignored real-ROM media for the
complete simulation matrix. ROM, floppy, and key payloads are never tracked by
this repository.

All local MRAs select the same `s24.rbf`. Their compatible eight-byte runtime descriptor
enables only the applicable floppy, ROM-board, FD1094, analog, golf, Hot Rod,
input-map, and magic-latch behavior without changing the synthesized image.
Legacy descriptors leave the final three bytes zero. Version-one descriptors
can name motherboard/RAM, sprite-memory, FDC timing, ROM-board/EPLD,
analogue, video orientation/flip, and CPU/protection profiles; this metadata is
decoded by `s24_rom_loader` and remains profile-driven rather than set-name-driven.
`python tools/check_universal_profile.py` checks that inventory and the shared
hardware contract. See `docs/game-coverage.md` for the complete set matrix and
latest fitted resource use.

MiSTer's 16-bit HPS download path now captures both bytes of each MRA switch
payload at address zero, preserving MAME-aligned per-game `FF FD`, `FF FE`,
and `FF FB` defaults
instead of silently leaving the second DIP bank at `FF`. A focused wide/byte
download regression covers this hardware-facing path.

`tools/run_game_matrix.py` reuses one safe compiled model and runs all supported local sets
sequentially. Before a run it rejects missing media and stale board descriptors.
Its target levels cover first floppy/ROM-board access, CNT1/CPU-B release,
CPU-B instruction execution (including FD1094 decryption where populated),
sustained post-release visible video, the first video-memory write, and one
complete contiguous floppy track. A bounded intermediate target also requires
initial writes across tile, character, sprite, palette, and mixer storage
before attempting the longer visible-frame gate. `--dry-run` validates every media contract
and prints the complete matrix without touching Verilator or its machine lock.
For target 3, `--frame-dir verif/frames` writes one complete 496x384 RGB PPM per
passing set so rendered output can be inspected and compared with MAME.
`tools/run_protected_matrix.py` remains as the narrower eight-set FD1094 helper.

Floppy downloads are padded with zeroes to a deterministic 2 MiB buffer in
both generated MRAs and simulation media. This matches FBNeo's System 24
allocation and covers the BIOS's one-side-past-image seek on Gain Ground
without depending on stale SDRAM contents.

## Live visual simulation

`tools/build_gground_visual.ps1` builds the reusable real-game Verilator model
with an SDL2 496x384 window. `tools/run_game_visual.ps1 -Game <parent>` launches
any validated local profile; `tools/run_gground_visual.ps1` remains the cached
Gain Ground shortcut. Keyboard and game-controller input are live. F5 or
Ctrl+S writes a binary `<game>.vltsv` checkpoint on a native frame boundary,
with an atomic `.token` sidecar, and `-Restore <path>` resumes it after
reopening process-local media handles. `-Target 7 -FrameOut <path>` runs the
same visible window through the semantic no-input attract gate, writes its
complete native proof frame, and closes the window after the gate passes.
The window title and console report frame/checksum changes so a responsive
window cannot be mistaken for changing core video.

`tools/run_parent_lockstep.py <parent> --frames <count>` launches finite visible
RTL and MAME windows, verifies isolated media/DIP provenance, compares native
frames and normalized device transactions, and closes both windows when the
requested adaptive budget completes. Successful long runs retain full metrics
but compact raw screenshots to first/final, worst-diff, and 60-frame milestones
by default; `--retain-stride 0` keeps every generated frame.
MAME 0.288 marks System 24 save states unsupported, so long differential runs
remain fresh-state runs; MAME checkpoint segmentation is not accepted as proof
without an exact uninterrupted-versus-restored replay.

The live model uses MAME's shared 315-5292 character-row order: the two 16-bit
words remain left-to-right and each word emits its most-significant nibble
first. This is a universal tile-path rule used by every game descriptor, not a
Gain Ground-specific display adjustment. SDL uses nearest-neighbour integer
scaling so Windows DPI scaling cannot introduce uneven source-pixel widths.
fx68k's logic-only decode structs are packed bit vectors, allowing Verilator's
full-state serializer to preserve the complete CPU state.

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
- Development on this core, including its RTL, verification harnesses, and
  differential-testing workflow, has been substantially AI-assisted using
  Claude Code (Anthropic), under human direction and review.

## Licensing

The aggregate project is GPL-3.0. Vendored fx68k and JT51 files retain their
upstream notices. MAME-derived behavioral descriptions are documented as
BSD-3-Clause references; original MAME source is not copied into this tree.
