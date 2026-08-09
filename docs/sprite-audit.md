# 315-5293/315-5295 source audit

This audit compares `rtl/video/s24_sprite.sv` line by line with MAME's
`segas24_sprite_device::draw()` in `segaic24.cpp`. It is deliberately
source-only; none of the regression benches described below were executed.

## Confirmed contracts

- The list begins at descriptor zero, uses word 0 bits 12:0 as the next link,
  and stops on type 3, a terminating normal link, descriptor-zero word zero,
  or 8192 fetched descriptors.
- Type 1 installs a persistent clip descriptor and type 2 skips an entry.
  Normal and reverse-Y clipping use inclusive 9-bit coordinates. X clip
  coordinates include the board's minus-eight sprite origin.
- Normal zoom uses the low byte for both axes; separate zoom uses the high and
  low bytes. A programmed zero becomes `0x40`, otherwise the step is the
  programmed value plus one. The `0x20` fractional seed and `0x40` carry match
  MAME for both enlargement and skipped source pixels.
- X/Y positions are signed 12-bit values. Size fields select 1, 2, 4, 8, 16,
  32, 64, or 128 tiles. Flip selects source tiles and pixels in reverse order
  without changing destination traversal.
- Sprite data addresses wrap at 0x20000 words. The tile ordinal is now formed
  with explicitly widened operands, preventing HDL expression truncation on
  wide or tall sprites before that hardware/MAME wrap.
- All sixteen raw pens pass through the indirect table. Raw pen zero is not
  intrinsically transparent: indirect color zero is transparent, indirect
  color one is shadow, and values 2-255 are visible colors. This audit removed
  the former raw-pen-zero shortcut.
- Indirect color bits 7:6 select the four sprite priority groups. Reverse-list
  order is retained separately, allowing the mixer to reveal an earlier sprite
  when a front sprite from another group is blocked by a tile.

## Crack Down focus

MAME explicitly identifies Crack Down's pre-title avatars and Sega logo as a
user of reverse-Y clipping. The RTL now has source regression contracts for
the normal inclusive rectangle, reverse-Y interior exclusion, the minus-eight
X origin, large flipped coordinates, and wide tile ordinals. All three Crack
Down descriptors select the same sprite hardware; only floppy and FD1094 key
payloads differ.

MAME marks all three Crack Down sets `MACHINE_IMPERFECT_GRAPHICS` and describes
remaining problems as clipping/solid-layer behavior. The sprite algorithm here
matches MAME's current implementation. The "solid layer" portion may involve
the 315-5292 tile/background path rather than the sprite chip and cannot be
resolved beyond MAME without a board capture, trace, or further decap work.

## Deliberate FPGA bound

MAME can retain 8192 normal descriptors. The frame cache retains the newest
4096 normal entries in a ring, rather than the oldest entries, so a corrupt or
pathological oversized list preserves the frontmost visible ordering. The
separate active-line cache remains 1024 entries. Scramble Spirits is reported
in source comments as reaching 3547 normal descriptors, but the raw capture
that produced that count is not retained in this repository; treat the number
as an unverified test bound, not original-hardware evidence. Raising the frame
cache to 8192 would consume substantial on-chip RAM while still not prove that
8192 enlarged sprites can be rendered inside one scanline.
