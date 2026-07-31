# Architecture and MAME contract

## Fixed clocks and raster

The board has 20 MHz and 32 MHz crystals. Both CPUs run at 20/2 = 10 MHz,
the 315-5296 at 32/2 = 16 MHz, the YM2151 at 4 MHz, and the pixel stream at
16 MHz. The raster is 656 clocks x 424 lines with a 496x384 active region.

## CPU address map

| Range | Function |
| --- | --- |
| 000000-07ffff | CPU A boot ROM; CPU B private work RAM |
| 080000-0fffff | CPU A work RAM |
| 100000-1fffff | mirrored boot ROM |
| 200000-21ffff (mirrored) | 64 KB tile/control RAM |
| 220000/240000/260000/270000 (mirrored) | 315-5292 side registers |
| 280000-3fffff (mirrored) | 128 KB physical character RAM |
| 400000-5fffff | palette and mixer |
| 600000-7fffff | sprite RAM |
| 800000-9fffff | 315-5296 I/O and YM2151 |
| a00000-afffff | IRQ/timer controller |
| b00000-b7ffff | mirrored floppy controller and status/control blocks |
| b80000-bfffff | ROM-board window 0, bank/FRC/magic registers |
| c00000-c7ffff | optional analog daughterboard |
| c80000-cfffff | ROM-board window 1, bank/FRC/magic registers |
| d00000-efffff | expansion selects/open bus in current configurations |
| f00000-f7ffff | CPU B private work RAM mirror |
| f80000-ffffff | CPU A work RAM mirror |

Address mirrors match MAME rather than being collapsed into software-visible
special cases.

## 128 MB SDRAM layout

| Base | Region |
| --- | --- |
| 0000000 | boot ROM (1 MB slot) |
| 0100000 | ROM board (4 MB) |
| 0800000 | floppy image (2 MB slot) |
| 1000000 | CPU A work RAM (256 KB) |
| 1040000 | CPU B work RAM (256 KB) |
| 1100000 | character RAM (128 KB used; 512 KB slot reserved) |
| 4000000 | sprite RAM (256 KB, second SDRAM device) |

The FD1094 key RAM, tile/control RAM, mixer registers, and palette RAM are
on-chip. Character RAM uses 128 KB of its reserved SDRAM slot; CPU address
bits A18:A17 mirror that physical store as in MAME. Character, sprite, and CPU
work stores live in SDRAM. CPU accesses and video bursts share a bounded
arbiter.

CPU B program-space reads below `0x100000` pass through the FD1094; data-space
reads remain raw. Interrupt mode enters on CPU B's interrupt-acknowledge bus
cycle. RTE and `CMPI.L #imm,D0` transitions are qualified at fx68k's IR-to-IRD
instruction boundary, preventing discarded prefetches from changing protection
state. The IR carries its fetch address and the decryptor keeps four recent
address-tagged plaintext words, which preserves `CMPI.L` operands fetched ahead
of execution. CPU B reset returns the live state to zero without erasing key
RAM.

For the Gain Ground descriptor only, a CNT1 low-to-high release starts MAME's
two-second CPU-B timing workaround. Seven out of every ten complete 68000 phase
pairs are passed during that interval, producing 7 MHz without splitting a
phi1/phi2 pair; normal 10 MHz operation resumes automatically.

## Universal descriptor

MRA index 0 contains an 8-byte descriptor. Byte 0 selects floppy/ROM media,
FD1094, uPD4701, MSM6253, golf encoder, Hot Rod controls, and mahjong mux.
Byte 1 selects the magic-latch table. Bytes 2-3 carry the little-endian floppy
track size in bytes. Byte 4 selects a game-specific digital input profile
(currently generic or Gain Ground); bytes 5-7 are reserved and must be zero.

The descriptor is committed after all other indexed ROM regions have loaded,
so one `s24.rbf` can configure every present game without resynthesis.

## Cross-chip priority contract

The tile generator exports raw palette/pen data, category, and physical-layer
validity. The mixer performs MAME's opaque category-zero backdrop pass before
normal transparent priority comparison. The sprite generator retains the
frontmost nontransparent candidate independently for each of the four indirect
palette priority groups, plus its reverse-list rank. The mixer first rejects
sprite candidates blocked by the winning tile priority, then selects the
largest surviving list rank. A blocked front sprite therefore does not hide an
earlier sprite from another group.

Indirect sprite color bits 7:6 are wired in reverse mixer-register order:
groups 0, 1, 2, and 3 use registers 11, 10, 9, and 8 respectively, matching
MAME's `spri[3-group]` mapping.

## Raster interrupt phase

`hsync_tick` is registered on the 655-to-0 horizontal wrap and consumers see
the vertical count of the line that just ended. Consequently, the sprite IRQ
tests old line 423 to assert on new line 0, while VBlank and the floppy index
cadence test old line 383 to act on new line 384.
