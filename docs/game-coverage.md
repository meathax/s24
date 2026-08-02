# Universal `s24.rbf` game profile

The core has one synthesis profile. Every supported game selects its board
population at load time through the same eight-byte descriptor at MRA download
index 0; no game-specific Quartus revision or RBF is required.

## Active verification scope

As of 2026-08-02, the local inventory contains only the seven MAME parent sets
`hotrod`, `sspirits`, `gground`, `crkdown`, `roughrac`, `bnzabros`, and
`dcclub`. Clone sets are not part of this profile or its verification matrix.

| Set | Media | Runtime hardware selected |
| --- | --- | --- |
| `hotrod` | floppy | uPD4701, ADC, Hot Rod I/O |
| `sspirits` | floppy | standard I/O |
| `gground` | floppy + key | FD1094, Gain Ground input/CPU timing |
| `crkdown` | floppy + key | FD1094 |
| `roughrac` | floppy + key | FD1094, uPD4701 |
| `bnzabros` | floppy + ROM board | magic selector 7 |
| `dcclub` | ROM board | golf I/O, magic selector 2 |

The descriptor fields are feature flags, magic selector, floppy track size,
and input profile, followed by three reserved zero bytes. `tools/gen_mra.py`
owns the canonical encoding. MRA generation, simulation-media generation, the
all-game runner, and the RTL loader regression all consume or check that same
contract.

Verification status is authoritative only when the target-7 log contains the
set's `PASS tb_gground_boot ... milestone 7` line and its result file reports
`exit_code=0`. The release parents with recorded gates are `gground`,
`crkdown`, `bnzabros`, and `hotrod`; historical clone passes remain
valid evidence but do not contribute to active parent-set coverage. The other
parent sets are run sequentially; no set is considered passed from a
standalone or stale PPM.

Run:

```text
python tools/check_universal_profile.py
python tools/run_game_matrix.py --exe ignored.exe --dry-run
python tools/report_attract_coverage.py
```

The first command verifies the complete 7-set inventory, common RBF name,
descriptor bytes, media indexes, DIP defaults, required RTL in `files.qip`,
and the account build-policy settings. The second validates all prepared media
contracts without starting a simulation.
`tools/report_attract_coverage.py` reads all local target-7 result/log pairs as a
supported-inventory health report. Its `--strict` mode remains a stronger
optional full-inventory check.

The most recent completed Fast Fit used 14,200 ALMs (34%), 20,591 registers,
1,582,668 RAM bits (28%), 221 RAM blocks (40%), 28 DSP blocks (25%), and three
PLLs. These numbers include every optional game device in the one bitstream.
They are a capacity result, not a deployment approval; a newly fitted image is
accepted only after its timing report has been inspected.
