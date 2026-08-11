# Implementation status

This core is not yet a deployable or MAME-exact release. The table below is
the working contract used to prevent a successful FPGA build from being
mistaken for successful emulation.

Active game progress tracks the six retained MAME parent sets: `hotrod`,
`sspirits`, `gground`, `crkdown`, `roughrac`, and `bnzabros`.
Clone sets are not part of the profile, MRA inventory, loader checks, or
verification matrix. See `docs/game-coverage.md` for the exact scope.

| Area | Current state |
| --- | --- |
| MiSTer shell / 128 MB SDRAM | Integrated; full-core memory-port simulation passes; 16-bit MRA switch payloads preserve both DIP bytes; hardware synthesis pending |
| Dual 68000 buses | Integrated with fx68k and shared arbitration; synthetic reset-vector/instruction trace passes; Gain Ground full-track and CNT1/CPU-B execution gates pass; MAME release timing and sustained post-release video remain |
| FD1094 data transform | MAME-derived decrypt path and mask ROM are integrated; CPU reset/IRQ state handling, instruction-address tracking, and prefetch-safe execution-qualified CMPI/RTE transitions are source-integrated; broader protected-set comparison pending |
| 315-5292 tiles | Four-layer double-buffer renderer; MAME address mirrors, 128 KB character store, measured sync windows, special-pair priority routing, and palette-aware pen-zero backdrop are source-integrated |
| 315-5293/5295 sprites | MAME-audited linked list, inclusive/reverse-Y clipping, flips, widened large-sprite addressing, zoom, all-pen indirect colors, shadow pen, newest-entry overflow retention, and one candidate per priority group are source-integrated |
| 315-5294 mixer / palette | Register priorities, opaque tile backdrop, shadow composition, cross-group sprite fallback, and exact 315-5242 shadow/highlight rounding are source-integrated |
| YM2151 / DAC | JT51 and unsigned R-2R DAC paths integrated with MAME's equal 0.50/0.50 routing and saturating mixing; audio comparison pending |
| 315-5296 I/O | Digital ports and counters integrated; generic, Hot Rod, and golf maps follow MAME; CNT1 pulses CPU B reset when releasing HALT |
| 834-6510 analog board | uPD4701 and MSM6253 models pass deterministic regression with descriptor-gated `0xC00000` mirrors; hardware control testing pending |
| IRQ/timer controller | HSync/8 MHz timer modes, per-CPU masks, and MAME raster levels implemented; sprite/VBlank assertions use the registered 423->0 and 383->384 boundaries |
| Floppy controller | Flat-image transfers, MAME track geometry, deterministic FBNeo-compatible 2 MiB zero padding, low-byte write qualification, no-media open bus, 20-frame index cadence, and full `B00000-B7FFFF` mirroring implemented; focused command/media sequencing regression passes |
| ROM sets / MRAs | All 6 supported local ZIPs CRC-validated against MAME 0.288; one MRA per set targets `s24.rbf` |

The source-level bus audit has also corrected 68000 low-byte alignment for the
315-5296 and the shared ROM-bank/FRC/magic registers at `BC/CC0001-7`. These
changes, together with the analog-board integration, pass deterministic
ModelSim regression and full-core compilation.

The 315-5292 decap review produced a source and focused-simulation accuracy
pass: tile RAM no longer absorbs writes to the four mirrored side-register
windows, character RAM mirrors its 128 KB physical population through a local
video port, raster sync uses the measured 48-clock/four-line windows, and tile
validity is carried independently of raw palette/pen data. Palette, mixer,
tile, character-port, full-core smoke, and dual-bus regressions execute under
the safe Verilator flow; extended all-game differential coverage remains
separate work.

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

Both CPU fetch paths now avoid artificial MiSTer SDRAM latency without changing
the PCB's 10 MHz CPU cadence. CPU A has a snooped 4 KiB plaintext program cache;
CPU B's FD1094-state-tagged cache is organized as 1,024 four-word lines (8 KiB),
with independent word validity and physical Work-A/Work-B invalidation. In the
fixed 500,000-clock Gain Ground boot benchmark, CPU-A boot-memory reads fall
from 17,411 to 94 (99.46%) while the retired-instruction count, last PC/opcode,
writes, and raster position remain identical. Scramble Spirits shows the same
result (17,555 to 94 reads with identical architectural milestones). Focused
cache tests cover data-read bypass, tags, all four line words, FD1094 state,
the former 4 KiB conflict pair, and write snooping. A post-change Quartus map
and hardware stall-counter capture remain required before release acceptance.

The sprite frame collector retains up to 4096 normal entries; its separate
active-line cache retains 1024 and renders into one line period. Overflow now
retains the newest/frontmost entries rather than the
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

A secondary audit against archived JTS16 commit `d80e197f` retained only
cross-platform engineering contracts. In particular, 315-5294 display blanking
now travels through the synchronous palette-read stage and gates final RGB;
forcing only palette index zero was insufficient because software can rewrite
that entry. The full-core synthetic smoke regression programs a lit entry zero
and proves blanked RGB remains black. The audit also added an exact-rate,
non-overlap, pause/resume regression for the 48 MHz clock-enable generator and
expanded FD1094 state-command coverage. System 16-specific maps, raster,
priority, sound, and cabinet logic were intentionally not imported.

The twenty-one focused regressions (`analog`, clock enables, CPU bus, CPU-A/CPU-B opcode caches,
`inputs`, `315-5296 I/O`,
MRA switches, FDC, IRQ, loader, magic latch, mixer, palette, sprite, tile, video timing,
FD1094, 128 MB SDRAM, SDRAM CDC, and YM write-boundary)
pass. The
full-core smoke test completes 498 boot-memory reads, 248 CPU-A instruction
starts, and six scanlines from a deterministic synthetic 68000 image. No
Quartus timing result or RBF is accepted until synthesis succeeds, the
Fast Fit timing reports are inspected, and at least one unprotected and one
FD1094 game reach deterministic boot milestones matching MAME.

The real-ROM Gain Ground integration bench loads all 8 KB of FD1094 key data
and reaches the first floppy-media request at 210,451,455 clocks. The earlier
milestone records 5,248,303 CPU-A instructions, 8,009,666 BIOS reads, 662,837
memory writes, and 10,240 palette writes without premature CPU-B release or a
floppy write. The longer MCP run now covers the full-track transfer and the
protected CPU-B release/execution gate; sustained post-release video remains.

The full-track target now accepts only a position-zero command start followed
by one contiguous side/track transfer. It checks every media address and FDC
position, rejects track/side changes within the command, requires exactly one
remaining byte at the final acknowledgement, and waits for DRQ/request cleanup
before passing. The generalized matrix runner exposes this as target 5.

The MAME 0.288 Gain Ground CNT trace (`verif/mame/gground_cnt_trace.lua`)
records the first CNT1-high write as `80001c=0006` at 14.344839700 seconds,
approximately 688,552,306 48-MHz master clocks. Earlier writes at 7 microseconds,
3.407566800 seconds, and 11.442192300 seconds leave CNT1 low. Therefore a
260-million-clock target-1 run is intentionally before the MAME release event;
the protected milestone therefore uses an approximately 720-million-clock bound.

The current Gain Ground MCP run passes target 5 at clock 216,533,489:
CPU-A instructions 5,340,341, one 11,520-byte track, 11,520 media and SDRAM
acknowledgements, checksum `bfc224d8`, and no outstanding FDC request/DRQ.
The same model passes target 1 with a 720-million-clock bound at clock
703,835,797: CPU-A instructions 13,368,355, one accepted CPU-B instruction,
`release=1`, 668,160 media bytes across 58 transfers, and no assertion. This
is a functional protected-CPU gate, but it follows the MAME CNT1 reference by
about 15.3 million clocks; release timing is the next MAME-equivalence target.
The earlier 260-million-clock target-1 run correctly stopped before CNT1 after
four tracks and 51,984 bytes, so that bounded failure was not an RTL regression.

The real-ROM bench is now descriptor-driven for all 6 supported local sets. It supports
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

All generated media contracts have passed source-only validation, including
their packed descriptor bytes and required boot, ROM-board, floppy, and key
files. The generalized bench also passes ModelSim compilation with zero errors.
No extended all-game simulation, Quartus compilation, fit, or RBF generation was
performed for this milestone.

## MAME video-bus differential milestone

The real-ROM bench now has a target-4 milestone for the first tile, character,
sprite, palette, or mixer write. A MAME Lua pass-through trace records the same
five windows on both 68000 program spaces without modifying bus data.

The bounded target-4 rerun reached the first MAME-correlated video write with
both CPUs executing and no unknown active pixels. This comparison found and
fixed two video-path defects:

* MAME clears 315-5292 tile/control RAM at device start, while the RTL local
  RAM previously powered up unknown. Deterministic M10K initialization now
  matches the reference and eliminates unknown active pixels.
* Sprite RAM is `600000-63ffff` mirrored by `180000`; A18 remains decoded.
  The old RTL incorrectly treated the full `600000-7fffff` range as sprite
  RAM. The decode now uses mask `e40000`, leaving the intervening ranges open.

The current Verilator model generates and compiles through `verilator-safe`
with one simulation thread, one Verilator-generation job, and four bounded C++
build jobs. Generated objects live in the preserved no-space path
`C:/tmp/s24_obj_gground` because the prior visualizations path is no longer
writable in this managed workspace and GNU Make rejects the repository path;
the finished executable is copied into the ignored `verif/obj_gground`
location. The approved safe simulation launcher
reproduces target 4 at loop count 8,484,315 in 25 seconds with the same first
write and counters as ModelSim. Target 6 also passes at loop count 12,476,974:
tile, sprite, palette, character, and mixer writes are all observed, with zero
unknown active pixels. No launcher bypass was used.

Gain Ground (`gground`) passes target 7
at loop count 1,201,502,881 with 121/120 qualifying frames, 103 rendered-
content changes, zero unknown active samples, CPU-B code-window execution,
and a complete native capture. The authoritative result is
`verif/captures/gground-target7.result` with `exit_code=0`. The next
candidate is `sspirits`. Audio and pixel-perfect MAME differential comparison
remain separate obligations after complete set coverage.

The MAME 0.288 no-input probe now samples a coarse whole-screen grid, avoiding
false negatives from fixed coordinates on rotated or text-only screens. Across
the retained parent profile, the first sampled game-owned screen with at least 1000
non-black grid samples used a secondary-CPU PC of at least `0x006a5e`; the
Target 7 therefore uses an explicit
MAME-derived default lower bound of `0x004000`, 120 consecutive qualifying
frames, 1000 non-black pixels per frame, and at least one rendered-content or
frame-occupancy change. The shared model was rebuilt with this gate on
2026-07-31. `gground` and `crkdown` have passed it; `sspirits` is the active
next candidate.

A fresh pinned MAME 0.288 probe on 2026-08-01 reproduced the Crack Down
reference: it reached its first game-owned screen at frame 961 with
`grid_nonblack=2449`, and the secondary CPU settled at `0x008e94` during the
visible attract interval. This is the reference milestone for the queued
target-7 run; it is not a Verilator pass.
A follow-up fresh-state `crkdown` probe with narrow and broad
`0xa00000`–`0xbfffff` taps reached the same visible high-score attract screen
and CPU-B checkpoint, but captured no CPU-visible FDC command or data access.
That negative observation is retained as an unresolved MAME-probe boundary;
it is not being used to relax the RTL FDC gate or to claim equivalence.
A 30-second pinned MAME probe also confirmed the next queued feature-family
set, `sspirits`, at frame 1201 with `grid_nonblack=2914` and secondary CPU PC
`0x0086b4`; this remains a reference baseline until its Verilator gate runs.
A 30-second MAME sweep measured `hotrod` crossing the grid gate at frame 1321
with `grid_nonblack=2854` and CPU-B in the `0x006a5e`–`0x006a7c` attract loop.
The newly promoted Rough Racer parent has no recorded MAME attract probe yet;
its target-7 reference baseline is the next required evidence item.

## Universal profile integration

The project now treats the 6-set list in `tools/gen_mra.py` as a checked
hardware contract rather than duplicated metadata. One canonical descriptor
encoder is shared by MRA generation, simulation-media generation, and the game
matrix. It rejects inconsistent feature/media combinations, unsupported input
profiles, invalid track sizes, and malformed DIP defaults before a run.

`tools/check_universal_profile.py` verifies that the generated MRA inventory is
exactly those 6 local sets, that every MRA names `s24`, and that descriptor bytes,
media indexes, switch defaults, universal RTL sources, and required Fast Fit
settings agree. It also invokes `tools/check_mame_pin.py`, so the profile gate
requires the pinned MAME executable and behavioral source hashes. The RTL
loader regression explicitly loads all 6 local profiles and passes. The all-game
media dry run passes all 6 local contracts.

The mixer sprite-rank selection is now a balanced comparator tree rather than
a four-deep chain. Its focused regression passes tile blocking and fallback,
shadow composition, backdrop ordering, normal reverse-list ordering, and the
equal-rank lower-group tie rule.

The latest preserved full compile, dated 2026-08-09, completed with 20,098
ALMs (48%), 4,379,132 block-memory bits (77%), 532 of 553 RAM blocks (96%), 37
DSP blocks, and three PLLs. All reported setup, hold, recovery, removal, and
minimum-pulse-width slacks were positive; the worst setup and hold results were
0.157 ns and 0.050 ns. That compile predates the current tile line-ownership
generation tags and sprite deadline shortcut, so it is a historical baseline,
not build evidence for the current source. A fresh fit, report inspection, and
functional regression are required before replacing or distributing
`s24.rbf`.

## Live continuation checkpoint

The shared 315-5292 character renderer now follows MAME's `STEP8(0,4)` layout
exactly: each 16-bit character word emits its high nibble first while the two
words in an eight-pixel row retain their left-to-right order. A synthetic row
containing `0x1234,0x5678` renders pens 1 through 8 and passes the focused
Verilator tile regression. The change is in `s24_tile` and therefore applies to
all retained profiles in the universal core; the already MAME-matched sprite
nibble and flip paths are unchanged.

The native visual model now builds successfully with `--savable`. Packing
fx68k's three logic-only structs makes their complete state serializable without
changing field semantics. A binary 9,749,269-byte checkpoint was written at a
native frame boundary, restored in a fresh process, advanced to a later frame,
and saved again; both processes exited zero. SDL also enforces nearest-neighbour
integer scaling independently of core rendering.

The retained six-parent matrix is the only active progress denominator.
Current target-7 evidence is complete for `gground`, `crkdown`, `bnzabros`, and
`hotrod`; `sspirits` and `roughrac` remain pending fresh visual verification.
Removed runs and artifacts are outside the supported
inventory and are not counted.

The retry harness now preserves each future attempt as a numbered
`*-target7-attempt-NNN.log` while retaining the latest attempt at the stable
`*-target7.log` path used by coverage reporting. This keeps launcher
interruptions and first-divergence evidence available across retries.

## PCB-accuracy roadmap implementation delta — 2026-08-03

The evidence boundary is now versioned in `docs/online-evidence.json`. It
records the pinned MAME 0.288 source hashes, public Exodus schematic index,
board photographs/revision research, decap archives, the user-supplied dossier
hash, provenance, access date, confidence, and every remaining claim that is
not provable without a PCB capture. Claims are intentionally split into
`MAME-conformant` and `online-evidence-backed`; complete PCB cycle accuracy is
not claimed.

Shared writes and device cycles now cross the typed
`board_transaction_t` interface in `rtl/s24_board_arbiter.sv`. The dedicated
arbiter applies deterministic round-robin tie breaking, holds the granted
address/data/lane/function-code transaction unchanged through wait states, and
reports completion to the original 68000 front-end. Independent memory reads
still use the existing SDRAM adapter paths. The new regression
`verif/tb_board_arbiter.sv` passes one million deterministic cycles, and the
full-core dual-bus regression passes parallel reads, shared serialization, byte
lanes, FD1094 sequencing, and A-bus contention.

The eight-byte descriptor remains backward-compatible. Legacy bytes 5–7 decode
as default profiles; version-one descriptors can name motherboard/RAM revision,
sprite-memory population, FDC timing, ROM-board/EPLD, analogue, video
orientation/flip, and CPU/protection profiles. This schema is enforced by the
MRA/profile validators and is never selected by a set-name conditional.

The core now exports a board-domain `audio_event_t` stream for JT51 register
writes, YM IRQ edges, serial/sample-boundary events, and port-H R-2R changes.
The visual RTL producer writes `rtl_audio_events.jsonl`, while the MAME Lua
producer writes comparable YM register-write events. This improves evidence
and event-level diagnosis; it does not yet prove YM3012 analogue or cabinet
amplifier accuracy.

The FRC mode write now resets both the visible divider and IRQ prescaler phase,
and FDC `side` state is again explicit and observable for the existing track
transfer contract. The current FDC remains a logical flat-image model, not a
physical MB89311 rotational/CRC/DRQ model. The current tile implementation is
MAME-derived for normal and documented special window/scroll modes; the
315-5292 side-trigger equations and hardware screen-flip behavior remain
unknown and are not being post-frame approximated.

The latest fit artifact is `output_files/Arcade-SegaSystem24.fit.summary`:
18,744/41,910 ALMs, 4,105,455/5,662,720 block-memory bits, and 498/553 RAM
blocks. The matching STA summary still has negative slow-corner setup slack
(-0.404 ns HDMI PLL and -0.023 ns core PLL generator in the reported corners),
so the release gate remains blocked pending RAM reduction and timing closure.

The clock-domain regression is now runnable through
`tools/build_clock_enables_test.ps1` and `tools/run_clock_enables_test.ps1`.
It passes exact 16/8/4 MHz enable counts, non-overlapping CPU phases, and
CPU-only pause/resume behavior over the one-millisecond deterministic window.
