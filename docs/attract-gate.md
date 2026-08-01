# Attract-mode verification contract

This document records the first universal-profile attract gate. It is a
verification contract, not a claim that every set has passed.

## Pinned reference

- MAME executable: 0.288 (`mame0288`)
- Source commit: `affe701f9210d003d2cc5eff311f94053afa679b`
- Driver: `src/mame/sega/segas24.cpp`
- QGH set: `qgh`, no coin, start, service, or joystick input
- Reference probe: `verif/mame/attract_probe.lua`

The probe samples observable screen pixels, a coarse whole-screen pixel grid,
shared work RAM, CPU PCs, video memory writes, and YM/DAC register writes at
60-frame intervals. It does not modify emulated state. It also snapshots the
first sampled game-owned screen as `game_screen_<frame>` in the MAME snapshot
directory. The first sampled game-owned screen with at least 1000 non-black
grid samples was observed at:

| Sets | First sampled frame | Secondary PC range |
| --- | ---: | ---: |
| `qgh`, `bnzabros`, `bnzabrosj` | 781 | `0x0081ca`–`0x0100c4` |
| `dcclub`, `dcclubj` | 781/1321 | `0x00aeae`–`0x00af08` |
| `crkdown`, `crkdownu`, `crkdownj` | 961 | `0x008e94` |
| `hotrod`, `hotroda`, `hotrodj`, `hotrodja` | 1261/1321 | `0x006a5e`–`0x006a7c` |
| `gground`, `ggroundj` | 1261 | `0x0085b0`–`0x0085b2` |
| `sgmast`, `sgmastc`, `sgmastj` | 841/1141 | `0x0092ba`–`0x0092d0` |
| `sspirits` | 1201 | `0x0086b4` |

The 60-second MAME reference sweep produced an adaptive first-game-screen
snapshot for all 18 sets; no set remained below the grid threshold. These
snapshots are retained under the ignored `verif/mame/matrix60adaptive` tree
for later native-frame comparison.

The universal gate therefore defaults to a secondary-CPU PC lower bound of
`0x004000`, below the observed minimum but above the pre-release BIOS baseline.
QGH's first sampled title/attract image is the expected static `GAME OVER /
CREDIT 0` screen at frame 781 (`13.578544 s`) with PC `0x0100c4`.

## Verilator target 7

`verif/tb_gground_boot.sv` target 7 requires all of the following:

- CPU-B has executed the loaded program and the post-release game path is
  active;
- the last accepted CPU-B instruction is in the loaded RAM code window at or
  above the configured lower bound (default `0x004000`);
- each qualifying raster frame contains at least 1000 non-black active pixels;
- no sampled active video signal is unknown;
- 120 qualifying frames occur consecutively with no scripted input;
- the frame content changes at least once during the qualifying run;
- when `FRAME_OUT` is requested, a complete non-black native `496x384` PPM is
  captured before the milestone passes.

The threshold is intentionally stronger than the existing target-3 visible
video gate, which can stop during a BIOS/game transition. It is still a
milestone gate rather than pixel-perfect MAME equivalence; frame and audio
differential tests remain separate obligations.

## Reproduction

Build the descriptor-driven model once:

```text
powershell -NoProfile -ExecutionPolicy Bypass -File tools/build_game_model.ps1
```

Run the first candidate after `verilator-safe status` reports a free
simulation slot:

```text
python tools/run_game_matrix.py --exe verif/obj_gground/Vtb_gground_boot.exe --media verif/media --sets qgh --target 7 --max-clocks 6000000000 --progress-clocks 1000000000 --attract-b-pc-min 0x4000 --frame-dir verif/frames/qgh-attract
```

The unchanged baseline only passed target 3 at clock `56,662,177`, with 63
frames, 15,630 cumulative non-black pixels, 25,008 mixed pixels, zero unknown
pixels, and last CPU-B PC `0x000f58`. That is recorded as visible video, not
attract mode. QGH passes target 7 at clock `154,290,721`, with 121 of 120
required qualifying frames, 14 rendered-content changes, zero unknown active
samples, CPU-B code-window execution, and a complete native capture.
`gground` now also passes target 7 at clock `1,201,502,881`, with 121 of 120
qualifying frames, 103 rendered-content changes, zero unknown active samples,
CPU-B code-window execution, and a complete native capture. `ggroundj` then
passed at clock `893,597,473` with 121 of 120 qualifying frames, one content
change, zero unknown active samples, CPU-B code-window execution, and a
complete native capture. The authoritative logs are `verif/captures/qgh-target7.log`,
`verif/captures/gground-target7.log`, and
`verif/captures/ggroundj-target7.log`, each with result `exit_code=0`; the
next candidate is `crkdownj` after the completed `crkdownu` gate.
