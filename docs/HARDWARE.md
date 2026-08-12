# Hardware truth model

> Populate from evidence. Do not turn unknowns into implementation assumptions.

## Identity

| Field | Value | Confidence | Source |
|---|---|---:|---|
| Game / set | Hot Rod, Scramble Spirits, Gain Ground, Crack Down, Rough Racer, Bonanza Bros parents in `tools/gen_mra.py` | KNOWN | Curated local media/MRA inventory |
| PCB name/revision | 837-6571 main board (171-5553), 837-6443 FDD board (171-5554), 834-6510 Hot Rod I/O board (171-5590) | KNOWN for schematic population; per-title board assignment remains unknown | Sega drawings dated 1988-05-10, E001 |
| Region/clone differences | Parent sets only | KNOWN | `tools/gen_mra.py` `GAMES` |
| MAME short name/driver | `segas24.cpp`; six names above | KNOWN | Pinned MAME source and project media manifests |

Confidence values: `KNOWN`, `INFERRED`, `HYPOTHESIS`.

## Evidence inventory

| ID | Evidence | Revision/location | Supports | Limitations |
|---|---|---|---|---|
| E001 | Original Sega System 24 schematic set | SHA-256 `EB92DAC481046B819884485F7308C1A92BF1D2508CDEBA7563D4DD6C7561A40B`; source URL in `PROVENANCE.md` | Main/FDD/Hot Rod I/O populations, clocks, connector nets, audio component values, independent DRAM-bank controls | 315-5292/5293/5295 internals, MB89311/MB4107 internals, ROM-board EPLD equations and per-title PCB revision are not exposed |

## Clock tree

| Source | Frequency | Derivation | Consumers | Enable/phase | Confidence/source |
|---|---:|---|---|---|---|
| Main crystal | 32 MHz | External divide-by-two chain also exposes 16 MHz and 8 MHz | Sega custom logic and board timing | Physical clocks | KNOWN, E001 main sheet 7/12 |
| FDD crystal | 8 MHz | Direct MB4107 data-separator reference | MB4107 and FDD path | Physical clock | KNOWN, E001 FDD sheet 1/2 |
| YM clock | 4 MHz | Main-board sound clock | YM2151/YM3012 | IKAOPM channel samples measured at 62.5 kHz | KNOWN, E001 and focused cadence regression |

Document actual clocks separately from synchronous clock enables. Record reset release relation and any asynchronous boundaries.

## Processing devices

| Device | Type/revision | Clock | Bus | Reset | Interrupts | Confidence/source |
|---|---|---:|---|---|---|---|
| MAIN |  |  |  |  |  |  |

## Memory and address map

| Owner | Address range | Width | Device | Read/write behavior | Wait/arbitration | Confidence/source |
|---|---|---:|---|---|---|---|
|  |  |  |  |  |  |  |

Record mirroring, banking, byte lanes, endian behavior, open-bus behavior, read side effects and read-during-write semantics.

## Interrupts, DMA and timers

| Source | Target/level | Trigger | Latch/ack/clear | Timing domain | Confidence/source |
|---|---|---|---|---|---|
|  |  |  |  |  |  |

For DMA record source, destination, width, trigger, ordering, busy/ack, bus stealing and completion behavior.

## Video

| Property | Value | Confidence/source |
|---|---|---|
| Master/pixel clock |  |  |
| Total/active dimensions |  |  |
| H/V blank and sync |  |  |
| Tilemap layers |  |  |
| Sprites/buffering |  |  |
| Palette format |  |  |
| Priority/mixer |  |  |
| Special effects |  |  |

Describe where registers latch: immediate, pixel, line, vblank, frame or DMA boundary.

## Audio

| Path/device | Clock/rate | Registers/bus | IRQ/timer | ROM/banking | Confidence/source |
|---|---:|---|---|---|---|
| YM2151 IC68 / YM3012 IC78 | 4 MHz / 62.5 kHz per channel | TTA/TTD bus | YM IRQ to board interrupt path | None | KNOWN, E001 main sheet 11/12 and measured IKA cadence |
| TL084 IC79 output stage | 15.392 kHz pole from 47 kOhm feedback in parallel with 220 pF | Analog output | None | None | KNOWN, E001; stereo-preserving digital pole in `rtl/audio/s24_audio_lpf.sv` |

## Inputs, outputs and persistent state

Document controls, analog/trackball/wheel semantics, DIP switches, coin/service, lamps, watchdog, EEPROM/NVRAM and power-on defaults.

## Board/game variants

| Feature | Variant A | Variant B | RTL strategy | Verification |
|---|---|---|---|---|
|  |  |  |  |  |

## Unknowns and experiments

| ID | Unknown | Why it matters | Smallest experiment | Status |
|---|---|---|---|---|
| U001 | 315-5293/5295 refresh and cross-CPU arbitration equations | Required to replace the remaining Gain Ground timing workaround without guessing | Logic-analyzer capture or internal ASIC truth/timing documentation | OPEN |
| U002 | MB89311/MB4107 command microtiming, MFM/gaps/CRC and index phase on System 24 media | Required for a physical rather than logical flat-track FDC | Controller documentation with command timing plus raw flux/logic capture | OPEN |
| U003 | Mono speaker summer versus MiSTer stereo-output transfer | Determines whether the schematic 4.7x port-H DAC gain and higher-order DAC filter belong in both exported channels | Cabinet line/speaker measurement and formal nodal model | OPEN |

## Implementation mapping

| Hardware function | RTL module/path | Donor/source | Verification status |
|---|---|---|---|
| YM2151/YM3012-equivalent synthesis | `rtl/audio/s24_opm.sv` | IKAOPM D001 | Focused tone/write/cadence regressions |
| TL084 output pole | `rtl/audio/s24_audio_lpf.sv` | Reimplemented from E001 values | Focused channel hold, settling, bounds and reset regression |
| MB89311 logical read-track prefetch | `rtl/fdc/s24_fdc.sv` | Pinned MAME behavior plus Fujitsu databook | Focused FDC regression; physical format timing remains U002 |
