# Implementation status

This core is not yet a deployable or MAME-exact release. The table below is
the working contract used to prevent a successful FPGA build from being
mistaken for successful emulation.

| Area | Current state |
| --- | --- |
| MiSTer shell / 128 MB SDRAM | Integrated; full-core memory-port simulation passes; 16-bit MRA switch payloads preserve both DIP bytes; hardware synthesis pending |
| Dual 68000 buses | Integrated with fx68k and shared arbitration; synthetic reset-vector/instruction trace passes; Gain Ground's MAME 0.70 CPU-B release interval is descriptor-gated; real-game boot trace pending |
| FD1094 data transform | MAME-derived decrypt path and mask ROM are integrated; CPU reset/IRQ state handling, instruction-address tracking, and prefetch-safe execution-qualified CMPI/RTE transitions are source-integrated; broader protected-set comparison pending |
| 315-5292 tiles | Four-layer double-buffer renderer; MAME address mirrors, 128 KB character store, measured sync windows, special-pair priority routing, and palette-aware pen-zero backdrop are source-integrated |
| 315-5293/5295 sprites | MAME-audited linked list, inclusive/reverse-Y clipping, flips, widened large-sprite addressing, zoom, all-pen indirect colors, shadow pen, newest-entry overflow retention, and one candidate per priority group are source-integrated |
| 315-5294 mixer / palette | Register priorities, opaque tile backdrop, shadow composition, cross-group sprite fallback, and exact 315-5242 shadow/highlight rounding are source-integrated |
| YM2151 / DAC | JT51 and unsigned R-2R DAC paths integrated with MAME's equal 0.50/0.50 routing and saturating mixing; audio comparison pending |
| 315-5296 I/O | Digital ports and counters integrated; generic, Hot Rod, and golf maps follow MAME; CNT1 pulses CPU B reset when releasing HALT |
| 834-6510 analog board | uPD4701 and MSM6253 models pass deterministic regression with descriptor-gated `0xC00000` mirrors; hardware control testing pending |
| IRQ/timer controller | HSync/8 MHz timer modes, per-CPU masks, and MAME raster levels implemented; sprite/VBlank assertions use the registered 423->0 and 383->384 boundaries |
| Floppy controller | Flat-image transfers, MAME track geometry, deterministic FBNeo-compatible 2 MiB zero padding, low-byte write qualification, no-media open bus, 20-frame index cadence, and full `B00000-B7FFFF` mirroring implemented; focused command/media sequencing regression passes |
| ROM sets / MRAs | All 18 local ZIPs CRC-validated against MAME 0.288; one MRA per set targets `s24.rbf` |

The source-level bus audit has also corrected 68000 low-byte alignment for the
315-5296 and the shared ROM-bank/FRC/magic registers at `BC/CC0001-7`. These
changes, together with the analog-board integration, pass deterministic
ModelSim regression and full-core compilation.

The 315-5292 decap review produced a source-only accuracy pass: tile RAM no
longer absorbs writes to the four mirrored side-register windows, character
RAM now mirrors its 128 KB physical population, raster sync uses the measured
48-clock/four-line windows, and tile validity is carried independently of raw
palette/pen data. New mixer and raster regression cases are present in
`verif/`, but have not been executed under the current no-build/no-simulation
restriction.

A second chip pass corrected interactions that cannot be modeled by
a single topmost sprite value. The 315-5293/5295 path now retains the frontmost
candidate in each of four priority groups; the 315-5294 rejects tile-blocked
candidates and then restores reverse-list order among the survivors. This
matches MAME's priority-bitmap behavior when a blocked front sprite reveals an
earlier sprite. The same pass fixed raster IRQ phase, the FDC mirror window,
315-5242 highlight rounding, CPU B's CNT1 release/reset sequence, corrupt
sprite-list bounding, and signed audio saturation. The corresponding focused
regressions pass.

The FD1094 state path now observes fx68k's IR-to-IRD instruction boundary.
RTE and `CMPI.L #imm,D0` therefore change state only when the opcode is
accepted for execution, not when a speculative program prefetch happens to
contain the same word. fx68k carries the exact prefetched word address into
that boundary, and the protection block retains a four-word address-tagged
history so an immediate operand fetched before execution is not lost. CPU B's
CNT1 reset pulse also resets live FD1094 state to state zero while retaining
the downloaded battery-RAM key contents, as the real integrated CPU does.

Gain Ground's two sets now reproduce MAME's game-specific CNT1 release
behavior: CPU B receives complete phi1/phi2 pairs at seven-tenths rate for
exactly two emulated seconds, then returns to 10 MHz. This is confined to the
Gain Ground input profile and targets the timer/bus-contention check that
otherwise forces free play; every other set retains the normal CPU clock.

The sprite collector retains up to 1024 normal entries and renders into one
line period. Overflow now retains the newest/frontmost entries rather than the
oldest entries. This covers substantially more entries than expected game lists,
but a pathological list or extremely enlarged sprite can overrun a line and
is not yet cycle-proven against hardware. Sprite-versus-tile arbitration still
needs pixel differential confirmation, especially shadow candidates and equal
mixer priorities, after testing is permitted.

The focused 315-5293/5295 audit removed an incorrect raw-pen-zero transparency
rule: MAME indexes every raw pen through the indirect palette, and only an
indirect result of zero is transparent. It also widened the tile-row multiply
used by sprites up to 128x128 tiles and added normal/reverse Crack Down clipping
contracts. See `docs/sprite-audit.md` for the exact source comparison.

The sixteen focused regressions (`analog`, CPU bus, `inputs`, `315-5296 I/O`,
MRA switches, FDC, IRQ, loader, magic latch, mixer, palette, sprite, tile, video timing,
FD1094, and 128 MB SDRAM)
pass. The
full-core smoke test completes 498 boot-memory reads, 248 CPU-A instruction
starts, and six scanlines from a deterministic synthetic 68000 image. No
Quartus timing result or RBF is accepted until synthesis succeeds, the
Fast Fit timing reports are inspected, and at least one unprotected and one
FD1094 game reach deterministic boot milestones matching MAME.

The real-ROM DCCLUB integration bench now reaches the BIOS banked-ROM checksum
loop after valid RAM, tile, character, palette, and sprite transactions. At
200,000,000 clocks it records 137,358 ROM-board reads, 659,029 writes, and
12,800 palette writes without a CPU or bus assertion. CPU-B release follows
additional ROM checks and remains a hardware/extended-simulation milestone.

The real-ROM Gain Ground integration bench loads all 8 KB of FD1094 key data
and reaches the first floppy-media request at 210,451,455 clocks. The milestone
records 5,248,303 CPU-A instructions, 8,009,666 BIOS reads, 662,837 memory
writes, and 10,240 palette writes without premature CPU-B release or a floppy
write. Full-track transfer, CNT1 release, and protected CPU-B execution remain
the next extended milestones.

The real-ROM bench is now descriptor-driven for all 18 local sets. It supports
floppy-only, ROM-board-only, combined floppy/ROM-board, and optional FD1094,
uPD4701, ADC, golf, Hot Rod, input-profile, and magic-latch populations without
recompiling the model. It retains accepted floppy writes in an exact byte
overlay, feeds real character and sprite RAM bursts to the renderers, and
measures completed frames plus non-black active pixels after CNT1 release. An
optional target-3 capture writes a complete 496x384 RGB frame for direct visual
and MAME comparison. The matrix also routes each game's actual MRA coinage/DIP
defaults through the same generic, golf, Hot Rod, or Gain Ground input mapper
used by hardware. Its
final target therefore requires CPU-B execution, FD1094 decryption where fitted,
and sustained visible game video rather than inferring attract mode from CPU
progress alone.

All 18 generated media contracts have passed source-only validation, including
their packed descriptor bytes and required boot, ROM-board, floppy, and key
files. The generalized bench also passes ModelSim compilation with zero errors.
No extended all-game simulation, Quartus compilation, fit, or RBF generation was
performed for this milestone.

## MAME video-bus differential milestone

The real-ROM bench now has a target-4 milestone for the first tile, character,
sprite, palette, or mixer write. A MAME Lua pass-through trace records the same
five windows on both 68000 program spaces without modifying bus data.

For QGH, MAME's first writes are tile `20c002=0000` at 0.1625734 s, sprite
`604000=4001` at 0.1687204 s, mixer `40401a=0101` with low-byte mask at
0.1966872 s, palette `402000=0000` at 0.1968364 s, and character
`280000=0000` at 0.2390594 s. At 14.917112 s it has issued 38,908 tile,
108,944 character, 6,976 palette, 258 mixer, and 32,869 sprite writes. DCCLUB
and Gain Ground share the disk BIOS clear sequence: their first tile, palette,
and sprite writes occur at 1.4156424 s, 1.9023114 s, and 1.9258192 s.

The corresponding QGH RTL run reaches its first video write at 8,482,266
48-MHz master clocks with both CPUs executing and no unknown active pixels.
Its observed tuple is CPU 1, address `20c002`, data `0000`, byte enable `11`,
an exact address/data/lane match to MAME's sub-CPU full-word tile write.
This comparison found and fixed two video-path defects:

* MAME clears 315-5292 tile/control RAM at device start, while the RTL local
  RAM previously powered up unknown. Deterministic M10K initialization now
  matches MAME, reducing the five-million-clock QGH run from 213,052 unknown
  active pixels to zero and character-line requests from 1,666,010 to 2,302.
* Sprite RAM is `600000-63ffff` mirrored by `180000`; A18 remains decoded.
  The old RTL incorrectly treated the full `600000-7fffff` range as sprite
  RAM. The decode now uses mask `e40000`, leaving the intervening ranges open.

The updated Verilator model generates and compiles through `verilator-safe`.
Game execution through both approved safe simulation entry points currently
stalls in the Windows `LpcReply` state before consuming a meaningful CPU time,
and the launcher then loses its reservation. MAME and ModelSim comparisons
therefore provide the executable evidence for this milestone; no launcher
bypass was used.
