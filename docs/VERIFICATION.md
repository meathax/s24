# Verification plan

## Success definition

A scenario passes only when:

- reference and RTL identities are pinned;
- both sides are independently deterministic;
- every compared domain has a proven observability contract;
- strict normalized event streams match for the declared interval;
- configured output artifacts match under documented transforms;
- no earlier unresolved divergence is skipped;
- regressions pass;
- any required implementation/hardware gates pass.

## Scenarios

| Scenario | Start anchor | Stop anchor | Input file | Strict domains | Artifacts | Release gate |
|---|---|---|---|---|---|---|
| boot | reset_assert | first_fetch | scenarios/boot.input.jsonl |  |  | NO |
| attract | reset_assert | attract_checkpoint |  |  |  | NO |
| gameplay | named checkpoint | named checkpoint |  |  |  | NO |

## Milestone regressions

| ID | Subsystem | Failure protected against | Command/task | Status |
|---|---|---|---|---|
| R001 | reset/clock |  |  | NOT CONFIGURED |
| R002 | FDC | Read-track DRQ before data is available, invalid-read advance and stretched-ack reuse | `tools/build_fdc_test.ps1` | PASS 2026-08-12 |
| R003 | Dual CPU bus | Missing four-cycle CPU-B wait on CPU-A-owned A00000 space and incorrect STOP bypass | `tools/build_core_dual_bus_test.ps1` | PASS 2026-08-12 |
| R004 | Audio | Wrong IKA sample cadence or unbounded/non-held schematic RC state | `tools/build_ikaopm_tone_test.ps1`; `tools/build_audio_lpf_test.ps1` | PASS 2026-08-12 |

## Reset and initialization matrix

Test relevant combinations of:

- cold/power-on reset;
- warm/core reset;
- ROM download then reset;
- multiple seeds/initial values;
- short/long reset duration;
- independently phased clocks where appropriate.

A passing two-state simulation does not close reset/X-state risk by itself.

## Output artifacts

### Video

Define active crop, orientation, pixel format, frame/line range, border policy and hash method. Compare earliest differing frame, then line/region/pixel.

### Audio

Define sample rate, width, signedness, channel mapping, warm-up/latency alignment and comparison method. Prefer command/device-event checks before waveform correlation.

### State

Define exact memory/register regions, width/endian transform and capture phase.

## Quartus gates

| Gate | Requirement | Status |
|---|---|---|
| Analysis & Synthesis | configured and clean enough for policy | NOT RUN |
| Resource budget | within project limits | NOT RUN |
| Unconstrained paths | none unless justified | NOT RUN |
| Setup slack | meets configured threshold | NOT RUN |
| Hold slack | meets configured threshold | NOT RUN |
| Fresh RBF | full compile output verified | NOT RUN |

## Hardware gates

| Test | Build/revision | Procedure/input | Expected evidence | Status |
|---|---|---|---|---|
| cold boot |  |  |  | NOT RUN |

## Release scenarios

List scenarios explicitly in `.mister/project.json`. Absence of a configured release scenario is a block, not an implicit pass.
