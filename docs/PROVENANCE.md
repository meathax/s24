# Source and donor provenance

The machine record is `PROVENANCE.json`.

## Sources

| ID | Name | URL/local path | Revision/hash | Licence | Role |
|---|---|---|---|---|---|
| D001 | IKAOPM | https://github.com/ika-musume/IKAOPM | `08a5b40ed14418319287df450f7d4a523ddeed5e` | BSD-2-Clause | Production YM2151 RTL |

## Hardware compatibility matrix

| Function/chip | Target evidence | Donor implementation | Classification | Required work/test |
|---|---|---|---|---|
| YM2151 register/audio/timer core | System 24 schematics and MAME `segas24.cpp` identify a 4 MHz YM2151 with YM3012 | IKAOPM die-derived YM2151 | STRUCTURALLY_SHARED_REVERIFY | Bus, timer/IRQ, tone, synthesis and hardware audio tests |

Classifications:

- `IDENTICAL_PROVEN`
- `STRUCTURALLY_SHARED_REVERIFY`
- `TARGET_ONLY`
- `DONOR_ONLY_REMOVE`
- `UNKNOWN_EXPERIMENT_REQUIRED`

## Imported files

| Donor ID | Upstream path | Local path | Upstream revision | Local changes | Attribution |
|---|---|---|---|---|---|
| D001 | `src/IKAOPM.v` | `rtl/audio/ikaopm/IKAOPM.v` | `08a5b40ed14418319287df450f7d4a523ddeed5e` | None | Upstream README and BSD-2-Clause license retained |
| D001 | `src/IKAOPM.qip` | `rtl/audio/ikaopm/IKAOPM.qip` | `08a5b40ed14418319287df450f7d4a523ddeed5e` | None | Upstream README and BSD-2-Clause license retained |
| D001 | `src/IKAOPM_modules/*.v` | `rtl/audio/ikaopm/IKAOPM_modules/*.v` | `08a5b40ed14418319287df450f7d4a523ddeed5e` | None | Upstream README and BSD-2-Clause license retained |

## Licence obligations

IKAOPM's BSD-2-Clause copyright notice, conditions and disclaimer are retained
in `rtl/audio/ikaopm/LICENSE`. Its source and binary redistribution conditions
are compatible with this repository's GPLv3 aggregate distribution.

## Rejected donors

| Candidate | Reason rejected | Evidence |
|---|---|---|
|  |  |  |
