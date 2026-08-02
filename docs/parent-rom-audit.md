# Parent-ROM RTL/MAME audit

This is the live evidence ledger for the eight locally available MAME parent
sets. Clones are intentionally excluded. A historical target-7 result is a
runtime milestone only; a parent is complete here only after a current-build,
fresh-state native-frame RTL/MAME comparison reaches attract and deterministic
Coin 1/Start 1 input reaches unmistakable live gameplay on both sides.

| Order | Parent | MAME attract milestone | Source/profile audit | Current visual proof |
| ---: | --- | --- | --- | --- |
| 1 | `gground` | frame 1261, CPU-B `0085b0`–`0085b2` | aligned; corrected `FF FD` DIP; deterministic coin/start/action profile | **complete:** attract is pixel-exact; visible Verilator frame 1920 proves live gameplay closely matched to MAME |
| 2 | `crkdown` | frame 961, CPU-B `008e94` | aligned; shared physical-window/category separation repaired the old radar defect | **complete:** attract is pixel-exact; visible Verilator frame 2260 proves live gameplay closely matched to MAME |
| 3 | `bnzabros` | frame 781, CPU-B `0081ca`–`0100c4` | 4 MiB zero tail, independent FRC IRQ, generic input and magic-latch contracts aligned | **complete attract:** native leaderboard pixel-exact; deterministic MAME gameplay reference captured; RTL gameplay proof pending |
| 4 | `hotrod` | frame 1321, CPU-B `006a5e`–`006a7c` | media, 2f00 FDC, neutral analog daughterboard and `FF FF` aligned | **complete attract:** native title pixel-exact; deterministic gameplay proof pending |
| 5 | `sspirits` | frame 1201, CPU-B `0086b4` | corrected `FF FD`; raw native rotation boundary defined | pending; historical run used wrong DIP |
| 6 | `dcclub` | frame 781, CPU-B `00aeae`–`00af08` | TAS RMW bus re-arm and 4 MiB zero tail repaired; `FF FB` aligned | pending |
| 7 | `sgmast` | frame 841, CPU-B `0092ba`–`0092d0` | corrected `FF FD`; neutral golf encoder aligned | pending; MAME parent key is marked `BAD_DUMP` |
| 8 | `qgh` | frame 781, CPU-B `0100c4` | 4 MiB ROM population, magic and `FF FD` aligned; PC threshold is valid only with sustained pixel/change gate | pending current build; historical pass used wrong DIP and loose PC bound |

The finite visual workflow is `tools/run_parent_lockstep.py`. It records the
pinned behavioral-file hashes and checkout HEAD, isolated CFG/NVRAM/state,
media hashes, effective DIPs, neutral inputs, native 496x384 frames, normalized
device events, pixel diffs, completion state, and window exit codes.
The executable oracle remains pinned MAME 0.288; source preflight and ongoing
device audits use the source snapshot at `D:/Arcade/AI/mame289`. Its current
System 24 driver, video and FD1094 files hash-identically to the pinned
behavioral files, so the newer checkout supplies provenance without silently
changing the executable comparison contract.

The initial GGround evidence sessions are
`verif/lockstep/gground-20260801-211253` (5/5 exact frames, all exit codes zero)
and `verif/lockstep/gground-20260801-214118` (662 compared frames before the
bounded timeout, both windows closed).  The latter identifies an emulation-
phase difference rather than a corrupt raster: RTL renders the expected
System-24 loading logo while MAME is still in the BIOS RAM test at PC `0x490`.
That phase observation is supplemented by the completed current-build proof:
`PASS tb_gground_boot gground game milestone 7`, a complete 496x384 native
capture, and automatic closure of both safe-wrapper and SDL processes. After
the profile's counter-clockwise presentation rotation, the RTL frame and fresh
isolated MAME frames 1330/1331 have `0/190464` different pixels, RGB MAE `0.0`,
and identical raw-RGB SHA-256
`e8a83711923541ee0e85122770e14a7fa2c09c2b6ff883f8059a202b1da39280`.
The preserved pair is `verif/frames/current-parent-audit/gground-final-rotated.png`
and `verif/frames/current-parent-audit/gground-mame-frame1330.png`.

Gain Ground also has actual-play proof rather than an attract demo. Its global
gameplay profile pulses coin at native frame 1335 and Start 1 plus P1 Button 1
at 1420, captures at 1920, and exits at 1921. The Verilator harness verified
its HWND was still live and visible at capture (`visible=1`), wrote a complete
native frame, and exited with code zero. The rotated RTL frame shows Round 1
gameplay with the same time 117, enemy count 6, map, player and enemies as the
MAME 0.289 reference band. Against frame 1918 the raw animated-terrain diff is
158997/190464 pixels (RGB MAE 26.3946), while a radius-2 Gaussian structural
comparison is 2.2318/255 RGB MAE. The remaining visible mismatch is confined
principally to the lower-left player-state text (`STAY 0`/`SCORE` versus
`STAY 3`), so this is recorded as close rather than exact. The preserved proof
is `verif/frames/current-parent-audit/gground-gameplay-late-rotated.png`; its
SHA-256 is
`d20aff64ebccba258c270dd6cbd62808707f89855ead57be90c2a4d60af56b8c`.

Bonanza Bros likewise completed with an explicit detached runtime result
`exit_code=0`, no remaining simulator processes, and a complete native ROT0
leaderboard capture. It has `0/190464` different pixels and RGB MAE `0.0`
against fresh isolated MAME frames 860–869; both raw-RGB SHA-256 values are
`6e9ee712585d6a12ea49bf8f0caccf70c00e90277b17bd2b04adc9adfc468694`.

Crack Down completed with `PASS tb_gground_boot crkdown game milestone 7`,
an explicit detached `exit_code=0`, and automatic closure of its SDL window.
The complete native attract leaderboard has `0/190464` different pixels and
RGB MAE `0.0` against fresh isolated MAME frames 1040/1041 and 1074 onward;
both raw-RGB SHA-256 values are
`daacf8566f36fa7e2d14f4d1ed8df2d7070780402c9431dd322e7b39f82e5ca6`.
The preserved pair is `verif/frames/current-parent-audit/crkdown.png` and
`verif/frames/current-parent-audit/crkdown-mame-best.png`.

The isolated MAME gameplay sweep has now fixed Crack Down's global input
contract: coin at frame 1050, Start 1 at 1380, and first unambiguous live play
by frame 2240. The bounded RTL proof captures frame 2260 after saving a
restartable checkpoint at frame 1000; its reference is preserved as
`verif/frames/current-parent-audit/crkdown-gameplay-mame.png`. RTL gameplay is
now complete through the visible Verilator frame-2260 capture and diff below.

The physical-window correction necessarily changed Verilator's model
fingerprint, so the older frame-2220 checkpoint is preserved but is not loaded
by the corrected executable. A fresh atomic chain checkpoint has advanced to
native frame 2260 in `crkdown-fixed-chain.vltsv` (9,765,917 bytes, valid
`vltsaved` trailer). Subsequent visible runs advance that state in short slices;
the compatibility guard is not bypassed. The SDL host also presents once per
completed native frame without host VSync while retaining chunk-rate event and
input polling, avoiding redundant host waits without changing simulated time.
The deterministic four-frame Coin 1 pulse at native frames 1050-1053 and Start
1 pulse at frames 1380-1383 are now both inside the saved state. The frame-2260
gameplay capture and final checkpoint are complete.
The native framebuffer checksum changed on consecutive frames 1419 and 1420
immediately after the Start pulse, proving the input left the prior static
title phase. Frame 1420 is the exact all-black checksum `b3b9fdc5`, matching
the preserved MAME frame-1420 transition; this is phase evidence, not yet the
required gameplay proof.
The visible Verilator frame-1450 capture then shows the same post-Start map
scene as MAME frame 1450: both contain 91 RGB colors, non-black occupancy is
186,545 versus 186,929 pixels, 84.91% of native pixels are exact, and RGB MAE
is 6.23. The residual is moving-character animation phase. This supporting
comparison is recorded in `POST_START_COMPARISON.json`; the live-play
frame-2260 gate remained the final acceptance point.
The focused input regression also directly proves the MAME289 generic SERVICE
contract: Coin 1 is active-low bit 0, Start 1 is active-low bit 4, and both
asserted produce `0xee`. This source-unit result is supporting diagnostics;
visible Verilator gameplay is the acceptance proof.
The preserved pre-fix gameplay pair gives the tile repair a regional acceptance
gate: the radar interior contains only 1,100 non-black pixels in RTL versus
29,165 in MAME, while the lower playfield has 119,144 versus 119,395 and the
same 91-color cardinality. The machine-readable baseline is
`verif/lockstep/crkdown-gameplay-current/PRE_FIX_BASELINE.json`; its MAME image
is pixel-identical to deterministic source frame 2254, with raw-RGB SHA-256
`d42fa663256ace727d2e7f501032cc84337185c739e27143a73d0daa7baad027`.

The required visible Verilator gameplay capture now completes at native frame
2260 with a live HWND, automatic checkpoint and clean exit. Against the closest
fresh MAME frame (2254), 126,127/190,464 native pixels are exact (66.22%), raw
RGB MAE is 21.04, and radius-2 Gaussian RGB MAE is 4.39. Both sides visibly
show the same split-screen playfield, actors, map and HUD. Most importantly,
the repaired radar interior contains 29,210 non-black pixels versus MAME's
29,165, replacing the pre-fix RTL count of only 1,100; playfield occupancy is
119,144 versus 119,395 and both retain 91 colors. The residual is animated
palette/character phase, so Crack Down is accepted as a close gameplay match.
The preserved pair is `crkdown-gameplay-fixed.png` and
`crkdown-gameplay-mame-best-fixed.png`; complete metrics are in
`FINAL_GAMEPLAY_COMPARISON.json`.

Hot Rod exposed two shared renderer defects rather than a profile mismatch.
The sprite engine buffers the linked
pointer/clip list once per native frame and directly maps the common 1:1
vertical-zoom row; MAME's title has 27 normal sprites behind 192 skip entries,
which previously made busy scanlines miss their line-buffer deadline. The
final cold visual run passed target 7 with detached `exit_code=0`, closed its
SDL window automatically, and matched fresh isolated MAME frame 1053 at
`0/190464` different pixels and RGB MAE `0.0`. Both raw-RGB SHA-256 values are
`1ec8edde9c895bef4c4957e74fea347ef993b4793485372a138868fb6e1aac5d`.
The preserved pair is `verif/frames/current-parent-audit/hotrod-final.png` and
`verif/frames/current-parent-audit/hotrod-mame-best.png`.
Hot Rod exposes Coin 1 on both its dedicated chute port and the generic SERVICE
port, matching RTL `joy0[11]` driving both. The MAME capture adapters now pulse
every matching Coin 1 field instead of relying on unordered Lua `pairs()` to
choose one; gameplay timing remains deliberately unset until a frame-stamped
reference run proves it.

Crack Down gameplay exposed the corresponding normal-window rule directly:
mask zero selects the even physical tilemap and mask one selects the odd
physical tilemap, while tile-name bit 15 independently selects the mixer
category. This follows MAME 0.289 `draw_common()`/`draw_rect()` and costs no
additional storage or selection logic; the focused tile regression now uses a
category-one tile on the even map to keep the two decisions independent. The
current Verilator 5.050 tile regression checks this separation together with
normal and special-mode vectors, then completes its rendered-pixel test at
category one in 1,058 clocks.

For long single-side attract qualification, the visible launcher accepts
`-Target 7 -FrameOut <path>`.  It keeps the SDL window interactive and exits it
automatically only after the semantic target-7 gate writes a complete native
frame.  Thread-count benchmarking rejected a two-thread model (88 frames in
461 seconds versus about 2.2 seconds/frame for the one-thread model), so the
canonical visual cache remains `--threads 1`.

RTL checkpoints are now written to a temporary binary, checked non-empty, and
atomically renamed; a companion `.token` records the published lockstep frame
without breaking older Verilated streams.  MAME 0.288 reports System 24 save
states as unsupported, so MAME checkpoint segmentation is not accepted as
proof unless a future fresh-process replay matches an uninterrupted branch.

Resource impact of the current repairs is deliberately small: ROM tails are
explicit external SDRAM media and consume no FPGA block RAM; the exact FRC
model adds one 11-bit divider and two CPU pending bits; unused generic ports
remove input combinational logic. The MAME-derived common Work-A correction
removes a CPU-ID write qualifier and adds no storage. No RBF is built by this
audit. The last existing fit report (2026-07-31, not fresh evidence for these
changes) records 14,200/41,910 ALMs (34%), 1,582,668/5,662,720 block-memory
bits (28%), and 221/553 RAM blocks (40%); current source-only repairs therefore
avoid consuming the tighter RAM-block budget.

Parent-global MRA control metadata is now derived from MAME 0.289 rather than
using a blanket four-button label. Generic System 24 parents expose three
actions; Hot Rod exposes its steering/accelerator controls with no digital
action buttons; and the `sgmast`/`dcclub` parents expose Club, Stance, Angle
Left and Angle Right plus the swing control. All local clones resolve the
metadata through their parent and are rejected if they declare a clone-local
override. Regeneration and profile validators pass for all 18 local MRAs. This
is generator metadata only and costs zero ALMs, registers, RAM blocks or DSPs.

Historical source-unit diagnostics cover the full-core smoke and CPU-B Work-A
write path, paired sprite scan/zoom/clipping, tile category/line rendering,
dual-CPU bus/TAS handling, raster/timer/FRC IRQs, the full writable floppy
track, game input profiles, and all magic-latch tables. They are breadcrumbs,
not acceptance evidence. All new focused regressions use Verilator, and visible
Verilator gameplay remains the parent completion gate.

The MAME289 sprite audit found and repaired a pathological-list discrepancy.
MAME retains and reverse-renders up to 8192 normal descriptors; RTL now keeps
the newest/frontmost 1024 in its bounded ring instead of dropping later entries.
The Verilator 5.050 overflow regression proves descriptor 1024 replaces zero,
logical odd-head scan order `[1,2,0]`, and reverse render order `[0,2,1]`. The
existing 1024-entry stress regression remains green at 1,354 clocks. The fix
adds no RAM blocks or DSPs, approximately ten state bits and low-tens ALMs;
expanding to literal MAME-sized storage would cost at least about 1.59 Mbit and
is rejected. Known Scramble Spirits usage is 1002 normal descriptors.

The MAME289 special-tile-mode audit found and repaired one exact shared defect:
mode 1 now negates the full ten-bit vertical-scroll word when choosing the
physical map while preserving nine-bit source-Y wrapping. Modes 1/2/3 and all
normal vectors pass the focused Verilator 5.050 regression; its rendered-pixel
test completes at category 1 in 1,058 clocks. The one-line operand-width
correction adds no registers, RAM, or DSPs. Crack Down's recorded tile controls
(`0000/0000/01f0/0000`) keep control-mode bits 13-14 clear, so the correction
cannot alter its accepted normal-mode raster. Visual revalidation will target
QGH and any other special-mode family.
