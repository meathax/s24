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
4. fx68k synthesizable 68000: https://github.com/jtfpga/fx68k
5. JT51 synthesizable YM2151: https://github.com/jotego/jt51
6. Jotego core collection and its licensed reusable modules:
   https://github.com/jotego/jtcores
7. Jotego JTS16 System 16 core, pinned to archived commit
   `d80e197f7413628bc02cb953cca8a476804b2358` (2022-10-07):
   https://github.com/jotego/jts16
   This GPL-3.0 source is a secondary implementation cross-check for reusable
   Sega-era engineering patterns such as FD1094 verification, paired 68000
   clock enables, line-buffer discipline, final-stage display blanking, and
   bounded memory handshakes. System 16 maps, timing, video priority, sound,
   and cabinet logic are not System 24 behavioral evidence.
8. Furrtek 315-5242 die-trace RTL:
   https://github.com/furrtek/SiliconRE/tree/master/Sega/315-5242
9. System 24 board summary and photographs:
   https://www.system16.com/hardware.php?id=708
10. Furrtek 315-5292 decap supplied for this project:
   `D:/Downloads/sega_315-5292_furrtek_mz.jpg` (SHA-256
   `5A7C1B0C22965429B06C9085EF41D5D785BA6EE5BCA3FDFD7A2DF0C8CF29DA96`).
11. SiliconPr0n archive entry for Furrtek's Sega 315-5292 image:
    https://siliconpr0n.org/archive/doku.php?id=furrtek:sega:315-5292
12. Furrtek SiliconRE gate-array cell lists and completed trace examples:
    https://github.com/furrtek/SiliconRE
13. Original Sega System 24 schematic index:
    https://techdocs.exodusemulator.com/Arcade/SegaSystem24/index.html
14. Preserved Charles MacDonald 315-5292 notes, measured raster timing, and
    partial pin information:
    https://w.atwiki.jp/arcadegames/pages/33.html

No public FPGA implementation of the complete System 24 video chipset was
found during the source survey. JTS16 does contain a synthesizable FD1094, but
this core's independently structured implementation remains tied to current
MAME behavior and uses JTS16 only as a secondary design and regression review.
