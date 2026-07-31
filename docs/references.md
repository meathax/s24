# Engineering references

Sources are ordered by authority for this implementation.

1. Local MAME source supplied for the project:
   `D:/Arcade/AI/MAMESOURCE/mame/src/mame/sega/segas24.cpp`,
   `segaic24.cpp`, `315_5296.cpp`, and `fd1094.cpp`.
2. MAME upstream: https://github.com/mamedev/mame
3. Working local System 32 MiSTer core supplied as the platform reference:
   `D:/Arcade/AI/s32` (MiSTer wrapper, SDRAM conventions, build structure).
4. fx68k synthesizable 68000: https://github.com/jtfpga/fx68k
5. JT51 synthesizable YM2151: https://github.com/jotego/jt51
6. Jotego core collection and its licensed reusable modules:
   https://github.com/jotego/jtcores
7. Furrtek 315-5242 die-trace RTL:
   https://github.com/furrtek/SiliconRE/tree/master/Sega/315-5242
8. System 24 board summary and photographs:
   https://www.system16.com/hardware.php?id=708
9. Furrtek 315-5292 decap supplied for this project:
   `D:/Downloads/sega_315-5292_furrtek_mz.jpg` (SHA-256
   `5A7C1B0C22965429B06C9085EF41D5D785BA6EE5BCA3FDFD7A2DF0C8CF29DA96`).
10. SiliconPr0n archive entry for Furrtek's Sega 315-5292 image:
    https://siliconpr0n.org/archive/doku.php?id=furrtek:sega:315-5292
11. Furrtek SiliconRE gate-array cell lists and completed trace examples:
    https://github.com/furrtek/SiliconRE
12. Original Sega System 24 schematic index:
    https://techdocs.exodusemulator.com/Arcade/SegaSystem24/index.html
13. Preserved Charles MacDonald 315-5292 notes, measured raster timing, and
    partial pin information:
    https://w.atwiki.jp/arcadegames/pages/33.html

No public FPGA implementation of the complete System 24 video chipset or a
synthesizable FD1094 was found during the initial source survey. Those blocks
are implemented and tested against MAME rather than copied from another core.
