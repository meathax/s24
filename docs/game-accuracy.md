# Per-game MAME contract

All seven supported local sets use the same RTL image and an eight-byte descriptor. This
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
| `dcclub` | Banked ROM board, Dynamic Country Club magic latch, golf swing encoder and discrete angle controls |

Common behavior shared by every row includes dual 10 MHz 68000 buses, the
315-5292 tile/character path, linked-list sprites and clipping, mixer priority,
315-5242 palette shadow/highlight arithmetic, YM2151, DAC, timer/IRQ controller,
315-5296 I/O, work RAM mirrors, and open-bus behavior for absent devices.

MAME itself marks Crack Down as graphically imperfect. The core follows the
current MAME algorithms in those areas; resolving behavior beyond MAME requires
board captures or further decap tracing. All common focused RTL regressions and
boot test pass. DCCLUB additionally reaches its real BIOS banked-ROM checksum
stage after memory/device self-test; per-game hardware attract mode and
frame/audio comparison remain the acceptance gate.
