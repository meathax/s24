# Universal `s24.rbf` game profile

The core has one synthesis profile. Every supported game selects its board
population at load time through the same eight-byte descriptor at MRA download
index 0; no game-specific Quartus revision or RBF is required.

## Active verification scope

As of 2026-08-01, active bring-up, debugging, attract-gate coverage, and
progress reporting ignore clone sets. The tracked representative MAME parent
sets are `hotrod`, `sspirits`, `gground`, `crkdown`, `sgmast`, `bnzabros`,
`dcclub`, and `qgh`. Clone profiles remain supported by the universal core and
remain in source-only profile, descriptor, MRA, loader, and media-contract
validation, but they are not scheduled for individual long Verilator runs or
counted in the active completion denominator unless a clone-specific problem
is discovered.

The excluded clones are `hotroda`, `hotrodj`, `hotrodja`, `ggroundj`,
`crkdownu`, `crkdownj`, `sgmastc`, `sgmastj`, `bnzabrosj`, and `dcclubj`.

| Set | Media | Runtime hardware selected |
| --- | --- | --- |
| `hotrod` | floppy | uPD4701, ADC, Hot Rod I/O |
| `hotroda` | floppy | uPD4701, ADC, Hot Rod I/O |
| `hotrodj` | floppy | uPD4701, ADC, Hot Rod I/O |
| `hotrodja` | floppy | uPD4701, ADC, Hot Rod I/O |
| `sspirits` | floppy | standard I/O |
| `gground` | floppy + key | FD1094, Gain Ground input/CPU timing |
| `ggroundj` | floppy + key | FD1094, Gain Ground input/CPU timing |
| `crkdown` | floppy + key | FD1094 |
| `crkdownu` | floppy + key | FD1094 |
| `crkdownj` | floppy + key | FD1094 |
| `sgmast` | floppy + key | FD1094, golf I/O |
| `sgmastc` | floppy + key | FD1094, golf I/O |
| `sgmastj` | floppy + key | FD1094, uPD4701, golf I/O |
| `bnzabros` | floppy + ROM board | magic selector 7 |
| `bnzabrosj` | floppy + ROM board | magic selector 7 |
| `dcclub` | ROM board | golf I/O, magic selector 2 |
| `dcclubj` | ROM board | uPD4701, golf I/O, magic selector 2 |
| `qgh` | ROM board | magic selector 1 |

The descriptor fields are feature flags, magic selector, floppy track size,
and input profile, followed by three reserved zero bytes. `tools/gen_mra.py`
owns the canonical encoding. MRA generation, simulation-media generation, the
all-game runner, and the RTL loader regression all consume or check that same
contract.

Verification status is authoritative only when the target-7 log contains the
set's `PASS tb_gground_boot ... milestone 7` line and its result file reports
`exit_code=0`. Four of the eight tracked parent sets have recorded this gate:
`qgh`, `sspirits`, `gground`, and `crkdown`. Historical clone passes remain
valid evidence but do not contribute to active parent-set coverage. The other
parent sets are run sequentially; no set is considered passed from a
standalone or stale PPM.

Run:

```text
python tools/check_universal_profile.py
python tools/run_game_matrix.py --exe ignored.exe --dry-run
python tools/report_attract_coverage.py
```

The first command verifies the complete 18-set inventory, common RBF name,
descriptor bytes, media indexes, DIP defaults, required RTL in `files.qip`,
and the account build-policy settings. The second validates all prepared media
contracts without starting a simulation.
`tools/report_attract_coverage.py` still reads all 18 target-7 result/log pairs
as a supported-inventory health report. Its `--strict` mode remains a stronger
optional full-inventory check; it is not the active progress denominator while
clone sets are excluded by the policy above.

The most recent completed Fast Fit used 14,200 ALMs (34%), 20,591 registers,
1,582,668 RAM bits (28%), 221 RAM blocks (40%), 28 DSP blocks (25%), and three
PLLs. These numbers include every optional game device in the one bitstream.
They are a capacity result, not a deployment approval; a newly fitted image is
accepted only after its timing report has been inspected.
