#!/usr/bin/env python3
"""Generate and validate MRAs for the System 24 ROM sets in this project.

The manifests below are a compact transcription of MAME 0.288 segas24.cpp.
MAME ROM_LOAD16_BYTE offset 0 is emitted as MiSTer map="01" and offset 1 as
map="10", matching established 68000 MiSTer MRAs. The RTL loader converts
these host lanes to the big-endian fx68k word convention.

Download indexes:
  0 descriptor (8 bytes, always last), 1 boot, 2 ROM board,
  3 raw floppy image, 4 raw FD1094 key, 254 DIP switches (MiSTer-managed).
"""

from __future__ import annotations

import argparse
import pathlib
import re
import zipfile
from dataclasses import dataclass, field
from html import escape


MAME_VERSION = "0288"
RBF = "s24"
FLOPPY_BUFFER_BYTES = 0x200000
FLOPPY_TRACK_SIDES = 160

FLOPPY = 1 << 0
ROMBOARD = 1 << 1
FD1094 = 1 << 2
UPD4701 = 1 << 3
ADC = 1 << 4
GOLF_IO = 1 << 5
HOTROD_IO = 1 << 6

MAGIC_NONE = 0
MAGIC_QGH = 1
MAGIC_DCCLUB = 2
MAGIC_BNZABROS = 7


@dataclass(frozen=True)
class Part:
    name: str
    crc: str


@dataclass(frozen=True)
class Pair:
    even: Part
    odd: Part
    repeat: int = 1


@dataclass(frozen=True)
class Game:
    setname: str
    title: str
    year: int
    boot: Pair
    flags: int
    track_bytes: int = 0
    magic: int = MAGIC_NONE
    parent: str = ""
    rotation: str = "horizontal"
    romboard: tuple[Pair, ...] = field(default_factory=tuple)
    floppy: Part | None = None
    key: Part | None = None
    dsw: str = "FF FF"
    input_profile: int = 0


def p(name: str, crc: str) -> Part:
    return Part(name, crc.lower())


BOOT_DISK = Pair(p("epr-12187.ic2", "e83783f3"), p("epr-12186.ic1", "ce76319d"))
BOOT_HOTROD = Pair(p("epr-11339.ic2", "75130e73"), p("epr-11338.ic1", "7d4a7ff3"))
BOOT_DCCLUB = Pair(p("epr13948.bin", "d6a031c8"), p("epr13947.bin", "7e3cff5e"))
BOOT_QGH = Pair(p("16900b", "20d7b7d1"), p("16899b", "397b3ba9"))

BNZA_ROM = (
    Pair(p("mpr-13188-h.2", "d3802294"), p("mpr-13187-h.1", "e3d8c5f7")),
    Pair(p("mpr-13190.4", "0b4df388"), p("mpr-13189.3", "5ea5a2f3"), repeat=2),
)
DCCLUB_COMMON = Pair(p("mpr-14097-t.4", "4bd74cae"), p("mpr-14096-t.3", "38d96502"))


GAMES = (
    Game("hotrod", "Hot Rod (World, 3 Players, Turbo set 1, Floppy Based)", 1988,
         BOOT_HOTROD, FLOPPY | UPD4701 | ADC | HOTROD_IO, 0x2F00,
         floppy=p("ds3-5000-01d_3p_turbo.img", "842006fd")),
    Game("hotroda", "Hot Rod (World, 3 Players, Turbo set 2, Floppy Based)", 1988,
         BOOT_HOTROD, FLOPPY | UPD4701 | ADC | HOTROD_IO, 0x2F00, parent="hotrod",
         floppy=p("ds3-5000-01d.img", "e25c6b63")),
    Game("hotrodj", "Hot Rod (Japan, 4 Players, Floppy Based, Rev C)", 1988,
         BOOT_HOTROD, FLOPPY | UPD4701 | ADC | HOTROD_IO, 0x2F00, parent="hotrod",
         floppy=p("ds3-5000-01a-rev-c.img", "852f9b5f")),
    Game("hotrodja", "Hot Rod (Japan, 4 Players, Floppy Based, Rev B)", 1988,
         BOOT_HOTROD, FLOPPY | UPD4701 | ADC | HOTROD_IO, 0x2F00, parent="hotrod",
         floppy=p("ds3-5000-01a-rev-b.img", "c18f6dca")),
    Game("sspirits", "Scramble Spirits (World, Floppy Based)", 1988,
         BOOT_DISK, FLOPPY, 0x2D00, rotation="vertical (ccw)",
         floppy=p("ds3-5000-02-.img", "179b98e9")),
    Game("gground", "Gain Ground (World, 3 Players, Floppy Based, FD1094 317-0058-03d Rev A)", 1988,
         BOOT_DISK, FLOPPY | FD1094, 0x2D00, rotation="vertical (ccw)",
         floppy=p("ds3-5000-03d-rev-a.img", "5c5910f2"),
         key=p("317-0058-03d.key", "e1785bbd"), input_profile=1),
    Game("ggroundj", "Gain Ground (Japan, 2 Players, Floppy Based, FD1094 317-0058-03b)", 1988,
         BOOT_DISK, FLOPPY | FD1094, 0x2D00, parent="gground", rotation="vertical (ccw)",
         floppy=p("ds3-5000-03b.img", "7200dac9"), key=p("317-0058-03b.key", "84aecdba"),
         input_profile=1),
    Game("crkdown", "Crack Down (World, Floppy Based, FD1094 317-0058-04c)", 1989,
         BOOT_DISK, FLOPPY | FD1094, 0x2D00,
         floppy=p("ds3-5000-04c.img", "7d97ba5e"), key=p("317-0058-04c.key", "16e978cc")),
    Game("crkdownu", "Crack Down (US, Floppy Based, FD1094 317-0058-04d)", 1989,
         BOOT_DISK, FLOPPY | FD1094, 0x2D00, parent="crkdown",
         floppy=p("ds3-5000-04d.img", "8679032c"), key=p("317-0058-04d.key", "934ac358")),
    Game("crkdownj", "Crack Down (Japan, Floppy Based, FD1094 317-0058-04b Rev A)", 1989,
         BOOT_DISK, FLOPPY | FD1094, 0x2D00, parent="crkdown",
         floppy=p("ds3-5000-04b-rev-a.img", "5daa1a9a"), key=p("317-0058-04b.key", "4a99a202")),
    Game("sgmast", "Super Masters Golf (World?, Floppy Based, FD1094 317-0058-05d?)", 1989,
         BOOT_DISK, FLOPPY | FD1094 | GOLF_IO, 0x2D00, dsw="FF ED",
         floppy=p("ds3-5000-05d.img", "e9a69f93"), key=p("317-0058-05d.key", "c779738d")),
    Game("sgmastc", "Jumbo Ozaki Super Masters Golf (World, Floppy Based, FD1094 317-0058-05c)", 1989,
         BOOT_DISK, FLOPPY | FD1094 | GOLF_IO, 0x2D00, parent="sgmast", dsw="FF ED",
         floppy=p("ds3-5000-05c.img", "63a6ef3a"), key=p("317-0058-05c.key", "ae0eabe5")),
    Game("sgmastj", "Jumbo Ozaki Super Masters Golf (Japan, Floppy Based, FD1094 317-0058-05b)", 1989,
         BOOT_DISK, FLOPPY | FD1094 | UPD4701 | GOLF_IO, 0x2D00, parent="sgmast", dsw="FF ED",
         floppy=p("ds3-5000-05b.img", "a136668c"), key=p("317-0058-05b.key", "adc0c83b")),
    Game("bnzabros", "Bonanza Bros (US, Floppy DS3-5000-07d? Based)", 1990,
         BOOT_DISK, FLOPPY | ROMBOARD, 0x2D00, MAGIC_BNZABROS, romboard=BNZA_ROM,
         floppy=p("ds3-5000-07d.img", "2e70251f")),
    Game("bnzabrosj", "Bonanza Bros (Japan, Floppy DS3-5000-07b Based)", 1990,
         BOOT_DISK, FLOPPY | ROMBOARD, 0x2D00, MAGIC_BNZABROS, parent="bnzabros",
         romboard=BNZA_ROM, floppy=p("ds3-5000-07b.img", "efa7f2a7")),
    Game("dcclub", "Dynamic Country Club (World, ROM Based)", 1991,
         BOOT_DCCLUB, ROMBOARD | GOLF_IO, magic=MAGIC_DCCLUB, dsw="FF FB",
         romboard=(Pair(p("epr-15345.2", "d9e120c2"), p("epr-15344.1", "8f8b9f74")), DCCLUB_COMMON)),
    Game("dcclubj", "Dynamic Country Club (Japan, ROM Based)", 1991,
         BOOT_DCCLUB, ROMBOARD | UPD4701 | GOLF_IO, magic=MAGIC_DCCLUB,
         parent="dcclub", dsw="FF FB",
         romboard=(Pair(p("epr-14095a.2", "88d184e9"), p("epr-14094a.1", "7dd2b7d4")), DCCLUB_COMMON)),
    Game("qgh", "Quiz Ghost Hunter (Japan, ROM Based)", 1994,
         BOOT_QGH, ROMBOARD, magic=MAGIC_QGH,
         romboard=(
             Pair(p("16902a", "d35b7706"), p("16901a", "ab4bcb33")),
             Pair(p("16904", "10987c88"), p("16903", "c19f9e46")),
             Pair(p("16906", "99c6773e"), p("16905", "3922bbe3")),
             Pair(p("16908", "407ec20f"), p("16907", "734b0a82")),
         )),
)


def all_parts(game: Game) -> list[Part]:
    result = [game.boot.even, game.boot.odd]
    for pair in game.romboard:
        result.extend((pair.even, pair.odd))
    if game.floppy:
        result.append(game.floppy)
    if game.key:
        result.append(game.key)
    return result


def archive_names(game: Game) -> str:
    if game.parent:
        return f"{game.parent}.zip|{game.setname}.zip"
    return f"{game.setname}.zip"


def validate_zip(game: Game, rom_dir: pathlib.Path) -> None:
    candidates = [rom_dir / f"{game.setname}.zip"]
    if game.parent:
        candidates.append(rom_dir / f"{game.parent}.zip")
    found: dict[str, tuple[int, str]] = {}
    for path in candidates:
        if not path.exists():
            continue
        with zipfile.ZipFile(path) as archive:
            for info in archive.infolist():
                found[info.filename.lower()] = (info.file_size, f"{info.CRC:08x}")
    missing = []
    wrong = []
    for part in all_parts(game):
        entry = found.get(part.name.lower())
        if entry is None:
            missing.append(part.name)
        elif entry[1] != part.crc:
            wrong.append(f"{part.name}: expected {part.crc}, got {entry[1]}")
    if game.floppy:
        entry = found.get(game.floppy.name.lower())
        expected_size = game.track_bytes * FLOPPY_TRACK_SIDES
        if entry is not None and entry[0] != expected_size:
            wrong.append(
                f"{game.floppy.name}: expected {expected_size:#x} bytes, "
                f"got {entry[0]:#x}"
            )
    if missing or wrong:
        detail = "; ".join((["missing " + ", ".join(missing)] if missing else []) + wrong)
        raise ValueError(f"{game.setname}: {detail}")


def emit_pair(lines: list[str], pair: Pair) -> None:
    for _ in range(pair.repeat):
        lines.append('    <interleave output="16">')
        lines.append(f'      <part name="{escape(pair.even.name)}" crc="{pair.even.crc}" map="01"/>')
        lines.append(f'      <part name="{escape(pair.odd.name)}" crc="{pair.odd.crc}" map="10"/>')
        lines.append("    </interleave>")


def generate(game: Game, out_dir: pathlib.Path) -> pathlib.Path:
    zips = archive_names(game)
    lines = [
        "<misterromdescription>",
        f"  <name>{escape(game.title)}</name>",
        f"  <mameversion>{MAME_VERSION}</mameversion>",
        f"  <setname>{game.setname}</setname>",
    ]
    if game.parent:
        lines.append(f"  <parent>{game.parent}</parent>")
    lines.extend((
        f"  <year>{game.year}</year>",
        "  <manufacturer>Sega</manufacturer>",
        f"  <rbf>{RBF}</rbf>",
        f"  <rotation>{game.rotation}</rotation>",
        "  <joystick>8-way</joystick>",
        '  <buttons default="A,B,X,Start,Select,R,L" names="Button 1,Button 2,Button 3,Button 4,Start,Coin,Service,Test"/>',
        f'  <switches default="{game.dsw}"/>',
        f'  <rom index="1" zip="{zips}" md5="none">',
    ))
    emit_pair(lines, game.boot)
    lines.append("  </rom>")
    if game.romboard:
        lines.append(f'  <rom index="2" zip="{zips}" md5="none">')
        for pair in game.romboard:
            emit_pair(lines, pair)
        lines.append("  </rom>")
    if game.floppy:
        image_bytes = game.track_bytes * FLOPPY_TRACK_SIDES
        padding_bytes = FLOPPY_BUFFER_BYTES - image_bytes
        if padding_bytes < 0:
            raise ValueError(
                f"{game.setname}: floppy image exceeds "
                f"{FLOPPY_BUFFER_BYTES:#x}-byte buffer"
            )
        lines.extend((
            f'  <rom index="3" zip="{zips}" md5="none">',
            f'    <part name="{escape(game.floppy.name)}" crc="{game.floppy.crc}"/>',
            f'    <part repeat="{padding_bytes}">00</part>',
            "  </rom>",
        ))
    if game.key:
        lines.extend((
            f'  <rom index="4" zip="{zips}" md5="none">',
            f'    <part name="{escape(game.key.name)}" crc="{game.key.crc}"/>',
            "  </rom>",
        ))
    descriptor = bytes((game.flags, game.magic, game.track_bytes & 0xFF,
                        game.track_bytes >> 8, game.input_profile, 0, 0, 0))
    lines.extend((
        '  <rom index="0">',
        f"    <part>{descriptor.hex().upper()}</part>",
        "  </rom>",
        "</misterromdescription>",
    ))
    safe_title = re.sub(r'[<>:"/\\|?*]', "-", game.title)
    path = out_dir / f"{safe_title}.mra"
    path.write_text("\n".join(lines) + "\n", encoding="utf-8", newline="\n")
    return path


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--rom-dir", type=pathlib.Path, default=pathlib.Path("roms"))
    parser.add_argument("--out-dir", type=pathlib.Path, default=pathlib.Path("mra"))
    parser.add_argument("--no-validate", action="store_true")
    args = parser.parse_args()
    args.out_dir.mkdir(parents=True, exist_ok=True)
    if not args.no_validate:
        for game in GAMES:
            validate_zip(game, args.rom_dir)
    paths = [generate(game, args.out_dir) for game in GAMES]
    print(f"generated {len(paths)} validated MRAs in {args.out_dir}")


if __name__ == "__main__":
    main()
