# Per-game MAME contract

All six supported local sets use the same RTL image and an eight-byte descriptor. This
table records the game-specific hardware paths that must remain enabled; it is
a source contract, not a claim that unrun hardware has been verified.

Floppy MRAs append zeroes to a 2 MiB buffer. This matches FBNeo's allocation
and makes the BIOS's observed track-80 read deterministic instead of exposing
whatever data happened to remain beyond the raw 80-cylinder image in SDRAM.

| Sets | Game-specific path |
| --- | --- |
| `hotrod` | 0x2f00-byte floppy tracks, two uPD4701 counters, two MSM6253 ADC addresses, four steering/pedal inputs, Hot Rod coin/service port map |
| `sspirits` | 0x2d00-byte floppy tracks, generic digital I/O, vertical counter-clockwise presentation |
| `gground` | 0x2d00-byte floppy tracks, FD1094 key, third-player port map, two-second 0.70 CPU-B CNT1 release interval, vertical counter-clockwise presentation |
| `crkdown` | 0x2d00-byte floppy tracks, FD1094 key, MAME-audited normal/reverse-Y sprite clipping, widened large-sprite tile addressing |
| `roughrac` | 0x2d00-byte floppy tracks, FD1094 key, uPD4701 analog control |
| `bnzabros` | 0x2d00-byte writable floppy, banked ROM board, Bonanza Bros magic-latch permutation, 20-frame floppy index cadence |

Common behavior shared by every row includes dual 10 MHz 68000 buses, the
315-5292 tile/character path, linked-list sprites and clipping, mixer priority,
315-5242 palette shadow/highlight arithmetic, YM2151, DAC, timer/IRQ controller,
315-5296 I/O, work RAM mirrors, and open-bus behavior for absent devices.

MAME itself marks Crack Down as graphically imperfect ("clipping probs / solid
layer probs? (radar display)" per segas24.cpp). The core follows the current
MAME algorithms in that area; resolving it beyond MAME requires board captures
or further decap tracing.

One board-side heuristic is *not* part of MAME's algorithm and is deliberately
restricted to a single set: s24_tile's flicker-blend logic renders a tilemap
layer through frames where its disable bit is set, approximating CRT-field
integration for a layer that intentionally toggles that bit every frame for
translucency (Bonanza Bros' projector beam and stage intro card). Applying
that heuristic to every set regressed Crack Down -- its radar/window layers
also toggle a disable bit every frame, but for ordinary per-frame layer
reuse, not translucency, so the heuristic rendered whatever stale tile/scroll
content that physical tilemap currently held instead of leaving it blank,
which reads as one viewport's content bleeding into another (observed
directly: a corrupted horizontal band inside the radar viewport that comes
and goes with the same two-consecutive-toggle cadence the heuristic requires
to engage). The descriptor's `video_profile` bit 0 (`board.video_profile[0]`
/ `blend_capable` in s24_core.sv) now gates the heuristic per board; only
`bnzabros`' MRA sets it, so every other set -- including `crkdown` -- keeps
the raw "disabled means blank" behavior regardless of the Flicker Blend menu
toggle, matching MAME and the measured PCB alternation described in
s24_tile.sv.

All common focused RTL regressions and boot test pass. Per-game hardware
attract mode and frame/audio comparison remain the acceptance gate.
