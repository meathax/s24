# Sega System 24 for MiSTer

Sega System 24 is an FPGA recreation of the Sega System 24 arcade board for
the MiSTer DE10-Nano. It targets the Cyclone V MiSTer board with one 128 MB
SDRAM module and uses a single universal `Arcade-SegaSystem24.rbf` image for
all supported board profiles.

The core does not distribute commercial ROMs, floppy images, or FD1094 key
data. You must provide your own legally obtained dumps.

| Core title | Sega System 24 for MiSTer |
| --- | --- |
| Hardware board | Sega System 24 arcade PCB and its supported floppy, ROM-board, protection, and analog daughterboard populations |
| MiSTer target | MiSTer DE10-Nano / Cyclone V with one 128 MB SDRAM module |

The active verification scope is the six MAME parent sets listed below. The
implementation is still being validated against original hardware; see
[`docs/status.md`](docs/status.md) for the current engineering status.

## Features in the OSD

| OSD item | Options / function |
| --- | --- |
| Aspect ratio | Original, Full Screen, ARC1, ARC2 |
| Pause | On-screen pause toggle |
| Pause when OSD is open | Automatically pause while the MiSTer menu is open |
| Service Mode | Enter the game's service/test mode |
| DIP Switches | Per-game physical SW1/SW2 switches, including coinage and gameplay settings |
| Rotation | Normal, rotate 90° counter-clockwise, rotate 90° clockwise |
| Scaling | Normal, vertical integer, horizontal-and-vertical integer |
| Scandoubler Fx | None, CRT 25%, CRT 50%, CRT 75% |
| Projector Flicker Fix | Bonanza Bros-only option that blends the verified projector translucency effect |
| Analog Steering Speed | Wheel titles only: 100% (default), 25%, 50%, 75%, 125%, 150%, or 175% |
| Steering Response | Wheel titles only: Normal (default), Fine, or Fast stick response |
| CRT Adjust | Enable, horizontal size, horizontal position, and vertical shift |
| Reset | Reset the emulated board |

The core preserves the native System 24 medium-resolution raster and applies
MiSTer's gamma table without retiming it. Hot Rod and Rough Racer use
game-specific base steering curves, rates, and centre deadzones; physical
spinner devices bypass the stick curve unchanged. Hot Rod's digital accelerator is
logical Button 1 (default **A**) and can be remapped through MiSTer.
Steering speed and response affect only the synthetic analog-stick wheel;
D-pad steering and native spinner devices retain their fixed hardware mapping.

## PCB Accuracy

The table below is limited to core hardware areas corroborated by public
schematics, PCB photographs and board summaries, measured raster notes, or
silicon/die research.

| PCB area | Evidence-backed core hardware |
| --- | --- |
| Board population and connectivity | System 24 motherboard, CPU/video/sound sections, floppy-board connection, and 834-6510 analog I/O board connection |
| CPU population | Dual 68000-class CPU arrangement and board-level memory/bus connectivity |
| Clocking and raster | Board clock domains associated with the 20 MHz and 32 MHz sources, measured 16 MHz video timing, 496x384 active area, and 656x424 total raster |
| 315-5292 tile hardware | Sega 315-5292 RAM character/tile generator with external tile-name and character storage; the decap confirms the custom chip's physical identity and pin-scale/layout role |
| 315-5293/315-5295 sprite hardware | Sega's paired custom sprite devices and their dedicated video-memory section as shown in the System 24 board documentation and schematics |
| 315-5294 and 315-5242 video/color hardware | Sega 315-5294 priority/display device and 315-5242 palette/color-mix device in the System 24 video chain; 315-5242 behavior is also informed by die-level research |
| 315-5296 I/O hardware | Sega 315-5296 I/O device, cabinet control connections, and board counter/control signals |
| Sound hardware | YM2151 sound generator and the board's 8-bit mono DAC/audio output path |
| Analog control hardware | 834-6510 daughterboard population with uPD4701 quadrature control counters and MSM6253 ADC devices |
| Floppy hardware | System 24 floppy drive/controller board interface and its motherboard connectivity |

Evidence: [Sega System 24 schematics](https://techdocs.exodusemulator.com/Arcade/SegaSystem24/),
[System 24 board photographs and summary](https://www.system16.com/hardware.php?id=708),
[315-5292 decap research](https://siliconpr0n.org/archive/doku.php?id=furrtek:sega:315-5292),
[315-5242 silicon research](https://github.com/furrtek/SiliconRE/tree/master/Sega/315-5242),
and [measured 315-5292 raster notes](https://w.atwiki.jp/arcadegames/pages/33.html).

## Supported games

These are the game entries currently packaged in `releases/` and the active
verification matrix. Japan variants are included as MRA entries where present;
the six parent sets remain the release acceptance scope.

| Game | MAME set | Board/profile notes |
| --- | --- | --- |
| Bonanza Bros (US) | `bnzabros` | Writable floppy, banked ROM board, magic latch, Bonanza-only projector profile |
| Crack Down (World) | `crkdown` | Floppy and FD1094 protection |
| Gain Ground (World, 3 Players) | `gground` | Floppy, FD1094 protection, three-player input map, CPU-B timing profile |
| Gain Ground (Japan, 2 Players) | `ggroundj` | Japan MRA variant with FD1094 protection and two-player controls |
| Hot Rod (World, 3 Players, Turbo) | `hotrod` | Floppy, uPD4701 counters, MSM6253 ADCs, four-player steering/pedal input hardware |
| Hot Rod (Japan, 4 Players) | `hotrodj` | Japan MRA variant with Hot Rod analog controls |
| Rough Racer (Japan) | `roughrac` | Floppy, FD1094 protection, uPD4701 steering input |
| Scramble Spirits (World) | `sspirits` | Floppy, generic digital I/O, vertical cabinet presentation |

The source also contains descriptor definitions for additional System 24
profiles—Quiz Rouka Ni Tattenasai, Quiz Mekurumeku Story, Tokoro San no
MahMahjan, Tokoro San no MahMahjan 2, Scramble Spirits (Japan), Quiz Syukudai
wo Wasuremashita, and Dynamic Country Club—but these are not part of the
current validated MRA release inventory. The undumped FD1094 Scramble Spirits
profile is tracked for source completeness only.

## **Hardware emulated**

| Hardware | FPGA implementation |
| --- | --- |
| Main CPUs | Two cycle-accurate FX68K 68000-compatible processors |
| Protected CPU | Optional Sega FD1094-compatible decryption and key interface |
| Tile/character generator | Sega 315-5292 four-layer RAM tile system |
| Sprite system | Sega 315-5293/315-5295 linked-list sprite renderer |
| Priority mixer | Sega 315-5294 priority and display control |
| Palette/DAC stage | Sega 315-5242 palette, shadow/highlight, and DAC behavior |
| I/O controller | Sega 315-5296 digital I/O, counters, timers, and board controls |
| Sound generator | [IKAOPM](https://github.com/ika-musume/IKAOPM), a cycle-accurate die-shot-derived YM2151 implementation, clocked at 4 MHz with timer interrupts |
| Audio output | IKAOPM's YM3012-lossy stereo outputs, 8-bit mono R-2R DAC model, and System 24 audio mixing |
| Analog daughterboard | uPD4701 quadrature counters and MSM6253 ADC models where populated |
| ROM-board EPLD | EPM5032 ROM banking with documented 2M/4M/8M jumper profiles, visible FRC counter, documented modulo modes, MODE-qualified `/INT3`, and MAME-compatible FRC event timing |
| Storage hardware | System 24 floppy controller, floppy index timing, writable overlay, and ROM-board banking |
| MiSTer memory | 128 MB SDRAM layout for boot ROM, ROM board, floppy media, CPU RAM, character RAM, and sprite RAM |

## Credits

- **meathax** — System 24 RTL, MiSTer integration, board descriptors, MRA
  files, verification, and documentation.
- **Jorge Cwik** — [FX68K](https://github.com/ijor/fx68k), the cycle-accurate
  68000-compatible CPU core.
- **Sehyeon Kim (Raki)** — [IKAOPM](https://github.com/ika-musume/IKAOPM),
  the BSD-2-Clause, die-shot-derived YM2151 implementation.
- **Till Harbaum, Alexey Melnikov (Sorgelig), and the MiSTer-devel project** —
  the [MiSTer framework](https://github.com/MiSTer-devel/Template_MiSTer),
  including `hps_io`, `sys_top`, video support, and SDRAM/HPS integration.
- **Umberto Parisi (rmonic79), with Andrea Bogazzi (@asturur)** —
  [MiSTer CRT Adjust](https://github.com/rmonic79/MiSTer-CRT-Adjust), used for
  the core-side CRT geometry controls.
- **The MAME project** — the pinned System 24 behavioral reference, especially
  [`segas24.cpp`](https://github.com/mamedev/mame/blob/master/src/mame/sega/segas24.cpp),
  `segaic24.cpp`, `315_5296.cpp`, and `fd1094.cpp`. MAME source is referenced
  for behavior; it is not copied into this repository.
- **Jotego / JT Cores** — [JTS16 FD1094 research](https://github.com/jotego/jtcores/tree/master/cores/s16/hdl)
  and [JTS18 palette/mixer research](https://github.com/jotego/jtcores/blob/master/cores/s18/hdl/jts18_colmix.v),
  used as comparison and verification references.
- **Furrtek and the SiliconRE contributors** —
  [315-5242 die-trace research](https://github.com/furrtek/SiliconRE/tree/master/Sega/315-5242)
  and 315-5292 decap research; the related [SiliconPr0n archive](https://siliconpr0n.org/archive/doku.php?id=furrtek:sega:315-5292)
  is also consulted.
- **Exodus Emulator documentation contributors** — the [Sega System 24
  schematic archive](https://techdocs.exodusemulator.com/Arcade/SegaSystem24/).
- **System 16 contributors** — the [System 24 board summary and photographs](https://www.system16.com/hardware.php?id=708).
- **Charles MacDonald** — preserved [315-5292 notes and measured raster information](https://w.atwiki.jp/arcadegames/pages/33.html).
- **Charles MacDonald** — [System 24 ROM-board notes](https://w.atwiki.jp/arcadegames/pages/150.html), used for the documented EPM5032 register, counter, bank, and interrupt behavior.
- **Claude Code (Anthropic)** — AI-assisted development under human direction,
  review, and verification.

## License

The original core RTL and documentation are released under the GNU General
Public License version 3.0. See [`LICENSE`](LICENSE).

Vendored components retain their own upstream copyright notices and license
terms: FX68K is GPL-licensed, IKAOPM is BSD-2-Clause, the MiSTer framework is GPL-licensed,
and Intel/Altera-generated programming and simulation files remain subject to
their vendor terms. This repository does not relicense third-party material.

Sega, System 24, and the game titles are trademarks and copyrighted works of
their respective owners. This project is an independent FPGA recreation and
is not affiliated with Sega. Commercial ROMs, floppy images, and FD1094 keys
are not included.

## How to install

### Manual installation

1. Download the latest `Arcade-SegaSystem24` RBF and the MRA files for the
   games you own.
2. Copy the RBF and MRA files to the MiSTer SD card's `/media/fat/_Arcade/`
   folder. The MRA files refer to the undated core name
   `Arcade-SegaSystem24.rbf`; rename a dated RBF to that name if necessary.
3. Add the matching, legally obtained game ROM, floppy, and key data required
   by the MRA files to your normal MiSTer arcade ROM location.
4. Launch a game from the MiSTer Arcade menu.

### MiSTer Downloader

Add this entry to your `downloader.ini` file, then run **Update All** to get
all of my cores automatically:

```ini
[meathax/meatcores]
db_url = https://raw.githubusercontent.com/meathax/meatcores/db/downloader_meathax_meatcores.zip
```

## Build policy

Quartus Prime Lite 17.0.2 is the reference toolchain. The QSF uses Standard
Fit, maximum router timing optimization, seed 6, and the account-wide
eight-worker limit. Compilation databases are kept for Smart Recompile. A
generated programming file must not be deployed until the fit report and all
TimeQuest corners show non-negative setup, hold, recovery, removal, and
minimum-pulse-width slack. Confirm compressed-bitstream generation and keep
one hash-verified RBF release artifact alongside the curated MRAs.
