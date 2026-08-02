# Engineering references

Sources are ordered by authority for this implementation.

1. Local MAME source supplied for the project:
   `D:/Arcade/AI/MAMESOURCE/mame/src/mame/sega/segas24.cpp`,
   `segaic24.cpp`, `315_5296.cpp`, and `fd1094.cpp`. The executable reference
   is pinned to MAME 0.288 commit
   `affe701f9210d003d2cc5eff311f94053afa679b` (2026-07-21). Reference-file
   SHA-256 values at that revision are:

   - `segas24.cpp`: `EF5C780EDB731233530729E31E832F6ADF4575EA931D6ADD023DAF39D5756DB6`
   - `segaic24.cpp`: `D37DEC05ACE5470719336704E7706E4800DA73854A0783E169F3BED534B48EE7`
   - `315_5296.cpp`: `FCB77693B9E19B7BE057EAB98910275CD5E1B0502CE56EB9A46D435D7692FF92`
   - `fd1094.cpp`: `41B023A16437E9676517F8D56EF1D4C67DCFE8544B37C36B9D1022E23CEC022F`

   The working source checkout currently has a later repository `HEAD`
   (`f34f02505e32c1993c6a782b6814232cbfc74e36`, MAME 0.289 metadata), but all
   four behavioural reference files above are byte-identical to the pinned
   `affe701f` revision. The executable probes use the separately pinned MAME
   0.288 binary; the file hashes are the authoritative guard against an
   accidental source drift. `python tools/check_mame_pin.py` rechecks the
   executable version, all four hashes, and reports the current source
   checkout HEAD without treating later repository metadata as behavioral
   drift.
2. MAME upstream: https://github.com/mamedev/mame
3. Working local System 32 MiSTer core supplied as the platform reference:
   `D:/Arcade/AI/s32` (MiSTer wrapper, SDRAM conventions, build structure).
4. fx68k synthesizable 68000: https://github.com/ijor/fx68k
   The vendored rtl/cpu/fx68k copy retains the synthesizable CPU and the
   local changes needed for packed Verilator save-state structs, instruction
   acceptance tagging, and System 24 bus timing.
5. JT51 synthesizable YM2151: https://github.com/jotego/jt51
   The local copy is based on JT51 master snapshot
   985a573dcfc1ff135553a39f7eae21d18ba57cbe. Its channel register path now
   uses the upstream jt51_reg_ch organization. The local integration keeps
   the System 24 bus/timing adaptations and applies the upstream wider
   accumulator saturation, qualified timer-overflow flag, and envelope-rate
   behavior, with focused channel, tone, and timer regressions under verif/.
6. Jotego core collection and its licensed reusable modules:
   https://github.com/jotego/jtcores
   The current master snapshot used for source comparison is
   2540976bcc930a0dbc099a92baefdebac2810b52.
7. Jotego JTS16 FD1094 RTL:
   https://github.com/jotego/jtcores/tree/master/cores/s16/hdl
   The three FD1094 files are preserved under verif/upstream/jtcores_s16.
   They are a decryption/control oracle, not a drop-in System 24 wrapper:
   the production path retains System 24 key-window, instruction-boundary,
   and MAME state-command semantics. verif/tb_fd1094_upstream_compare.sv
   compares the upstream equations against the production combinational
   decoder over fixed and deterministic pseudo-random vectors.
8. Jotego JTS18 315-5242 behavioral reference:
   https://github.com/jotego/jtcores/blob/master/cores/s18/hdl/jts18_colmix.v
   This is used for palette/shadow/highlight/output-stage review only; the
   source is preserved under verif/upstream/jtcores_s18 and the System 24
   mixer and register map remain MAME-derived.
9. Furrtek 315-5242 die-trace RTL and physical research:
   https://github.com/furrtek/SiliconRE/tree/master/Sega/315-5242
10. System 24 board summary and photographs:
    https://www.system16.com/hardware.php?id=708
11. Furrtek 315-5292 decap supplied for this project:
    D:/Downloads/sega_315-5292_furrtek_mz.jpg (SHA-256
    5A7C1B0C22965429BA06C9085EF41D5D785BA6EE5BCA3FDFD7A2DF0C8CF29DA96).
12. SiliconPr0n archive entry for Furrtek's Sega 315-5292 image:
    https://siliconpr0n.org/archive/doku.php?id=furrtek:sega:315-5292
13. Furrtek SiliconRE gate-array cell lists and completed trace examples:
    https://github.com/furrtek/SiliconRE
14. Original Sega System 24 schematic index:
    https://techdocs.exodusemulator.com/Arcade/SegaSystem24/index.html
15. Preserved Charles MacDonald 315-5292 notes, measured raster timing, and
    partial pin information:
    https://w.atwiki.jp/arcadegames/pages/33.html

No public FPGA implementation explicitly identified as the complete System 24
315-5292, 315-5293, 315-5294, 315-5295, or 315-5296 chipset was found during
the source survey. The System 24 graphics path therefore remains built from
MAME, schematics, die research, measurements, and differential simulation;
JTS18's 315-5242 behavior is not treated as a drop-in System 24 video core.
