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
ROM_SET_TYPES = "merged|nonmerged|split"
FLOPPY_BUFFER_BYTES = 0x200000
FLOPPY_TRACK_SIDES = 160

FLOPPY = 1 << 0
ROMBOARD = 1 << 1
FD1094 = 1 << 2
UPD4701 = 1 << 3
ADC = 1 << 4
GOLF_IO = 1 << 5
HOTROD_IO = 1 << 6
MAHJONG_IO = 1 << 7
ALL_FLAGS = (
    FLOPPY | ROMBOARD | FD1094 | UPD4701 | ADC | GOLF_IO |
    HOTROD_IO | MAHJONG_IO
)

INPUT_GENERIC = 0
INPUT_GGROUND = 1

MAGIC_NONE = 0
MAGIC_DCCLUB = 2
MAGIC_QROUKA = 3
MAGIC_QUIZMEKU = 4
MAGIC_MAHMAJN = 5
MAGIC_MAHMAJN2 = 6
MAGIC_BNZABROS = 7

# Effective MAME 0.288 default switch bytes for the locally audited parent
# families.  Parent and clone descriptors must start from the same reference
# configuration before a trace or framebuffer mismatch is attributed to RTL.
MAME_PARENT_DIP_DEFAULTS = {
    "hotrod": "FF FF",
    "sspirits": "FF FD",
    "gground": "FF FD",
    "crkdown": "FF FF",
    "bnzabros": "FF FE",
    "dcclub": "FF FB",
}

# MAME's declared ROM-board regions.  Simulation media must materialise the
# complete hardware-visible address space, including explicit erased banks.
MAME_ROMBOARD_REGION_BYTES = {
    "bnzabros": 0x400000,
    "dcclub": 0x400000,
}

INPUT_QUIZ4 = 2
INPUT_QROUKA = 3
INPUT_MAHJONG = 4
SUPPORTED_INPUT_PROFILES = frozenset((
    INPUT_GENERIC, INPUT_GGROUND, INPUT_QUIZ4, INPUT_QROUKA, INPUT_MAHJONG,
))

MRA_CONTROL_GENERIC = "generic"
MRA_CONTROL_HOTROD = "hotrod"
MRA_CONTROL_GOLF = "golf"


@dataclass(frozen=True)
class Part:
    name: str
    crc: str = ""


@dataclass(frozen=True)
class Pair:
    even: Part
    odd: Part
    repeat: int = 1


@dataclass(frozen=True)
class SoloLane:
    """One populated ROM lane plus the board region's erased opposite lane."""

    part: Part
    lane: str
    size: int
    fill: int = 0x00


@dataclass(frozen=True)
class FillPair:
    """An erased 16-bit region not backed by an archive member."""

    size: int
    value: int = 0x00


@dataclass(frozen=True)
class MraControls:
    joystick: str
    names: tuple[str, ...]
    defaults: tuple[str, ...]


# Human-facing MiSTer metadata follows the MAME parent input definitions.  It
# is deliberately separate from the eight-byte runtime hardware descriptor.
MRA_CONTROL_PROFILES = {
    MRA_CONTROL_GENERIC: MraControls(
        "8-way",
        ("Button 1", "Button 2", "Button 3", "-", "-", "-",
         "Start", "Coin", "Service", "Test"),
        ("A", "B", "X", "Start", "Select", "R", "L"),
    ),
    MRA_CONTROL_HOTROD: MraControls(
        "Steering Wheel / Accelerator",
        ("-", "-", "-", "-", "-", "-", "Start", "Coin", "Service", "Test"),
        ("Start", "Select", "R", "L"),
    ),
    MRA_CONTROL_GOLF: MraControls(
        "Swing / Angle",
        ("Club", "Stance", "Angle Left", "Angle Right",
         "-", "-",
         "Start", "Coin", "Service", "Test"),
        ("A", "B", "X", "Y", "Start", "Select", "R", "L"),
    ),
}


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
    romboard: tuple[Pair | SoloLane | FillPair, ...] = field(default_factory=tuple)
    floppy: Part | None = None
    key: Part | None = None
    dsw: str = "FF FF"
    input_profile: int = 0
    mra_controls: str | None = None


def p(name: str, crc: str = "") -> Part:
    return Part(name, crc.lower())


BOOT_DISK = Pair(p("epr-12187.ic2", "e83783f3"), p("epr-12186.ic1", "ce76319d"))
BOOT_HOTROD = Pair(p("epr-11339.ic2", "75130e73"), p("epr-11338.ic1", "7d4a7ff3"))
BOOT_DCCLUB = Pair(p("epr13948.bin", "d6a031c8"), p("epr13947.bin", "7e3cff5e"))

BNZA_ROM = (
    Pair(p("mpr-13188-h.2", "d3802294"), p("mpr-13187-h.1", "e3d8c5f7")),
    Pair(p("mpr-13190.4", "0b4df388"), p("mpr-13189.3", "5ea5a2f3"), repeat=2),
    # MAME declares a 4 MiB ROM-board region and leaves banks 8..15 zeroed.
    # Make that game-family hardware state explicit in MRA and simulation
    # media instead of allowing an uninitialised/ffff tail.
    FillPair(0x100000),
)
DCCLUB_COMMON = Pair(p("mpr-14097-t.4", "4bd74cae"), p("mpr-14096-t.3", "38d96502"))


GAMES = (
    Game("hotrod", "Hot Rod (World, 3 Players, Turbo set 1, Floppy Based)", 1988,
         BOOT_HOTROD, FLOPPY | UPD4701 | ADC | HOTROD_IO, 0x2F00,
         floppy=p("ds3-5000-01d_3p_turbo.img", "842006fd"),
         mra_controls=MRA_CONTROL_HOTROD),
    Game("sspirits", "Scramble Spirits (World, Floppy Based)", 1988,
         BOOT_DISK, FLOPPY, 0x2D00, rotation="vertical (ccw)", dsw="FF FD",
         floppy=p("ds3-5000-02-.img", "179b98e9")),
    Game("gground", "Gain Ground (World, 3 Players, Floppy Based, FD1094 317-0058-03d Rev A)", 1988,
         BOOT_DISK, FLOPPY | FD1094, 0x2D00, rotation="vertical (ccw)",
         floppy=p("ds3-5000-03d-rev-a.img", "5c5910f2"),
         key=p("317-0058-03d.key", "e1785bbd"),
         dsw="FF FD", input_profile=INPUT_GGROUND),
    Game("crkdown", "Crack Down (World, Floppy Based, FD1094 317-0058-04c)", 1989,
         BOOT_DISK, FLOPPY | FD1094, 0x2D00,
         floppy=p("ds3-5000-04c.img", "7d97ba5e"), key=p("317-0058-04c.key", "16e978cc")),
    Game("roughrac", "Rough Racer (Japan, Floppy Based, FD1094 317-0058-06b)", 1990,
         BOOT_DISK, FLOPPY | FD1094 | UPD4701, 0x2D00, dsw="FF FD",
         floppy=p("ds3-5000-06b.img", "a7fb2149"),
         key=p("317-0058-06b.key", "6a5bf536")),
    Game("bnzabros", "Bonanza Bros (US, Floppy DS3-5000-07d? Based)", 1990,
         BOOT_DISK, FLOPPY | ROMBOARD, 0x2D00, MAGIC_BNZABROS, romboard=BNZA_ROM,
         floppy=p("ds3-5000-07d.img", "2e70251f"), dsw="FF FE"),
    Game("dcclub", "Dynamic Country Club (World, ROM Based)", 1991,
         BOOT_DCCLUB, ROMBOARD | GOLF_IO, magic=MAGIC_DCCLUB, dsw="FF FB",
         romboard=(Pair(p("epr-15345.2", "d9e120c2"), p("epr-15344.1", "8f8b9f74")),
                   DCCLUB_COMMON, FillPair(0x100000)),
         mra_controls=MRA_CONTROL_GOLF),
)

# MAME-supported sets for which this workspace currently has no local archive.
# They are fully described here so the universal bitstream and source-only
# contracts cover every working System 24 driver.  Default MRA/media commands
# continue to use GAMES, the user's validated local inventory.
OPTIONAL_GAMES = (
    Game("qrouka", "Quiz Rouka Ni Tattenasai (Japan, ROM Based)", 1991,
         Pair(p("14485", "fc0085f9"), p("14484", "f51c641c")),
         ROMBOARD, magic=MAGIC_QROUKA, dsw="FF FC",
         input_profile=INPUT_QROUKA,
         romboard=(
             SoloLane(p("14482", "7a13dd97"), "01", 0x80000),
             SoloLane(p("14483", "f3eb51a0"), "01", 0x80000),
             FillPair(0x100000),
         )),
    Game("quizmeku", "Quiz Mekurumeku Story (Japan, ROM Based)", 1992,
         Pair(p("epr15343.ic2", "c72399a7"), p("epr15342.ic1", "0968ac84")),
         ROMBOARD, magic=MAGIC_QUIZMEKU, dsw="FF F0",
         input_profile=INPUT_QUIZ4,
         romboard=(
             Pair(p("epr15345.ic5", "88030b5d"), p("epr15344.ic4", "dd11b382")),
             Pair(p("mpr15347.ic7", "0472677b"), p("mpr15346.ic6", "746d4d0e")),
             Pair(p("mpr15349.ic9", "770eecf1"), p("mpr15348.ic8", "7666e960")),
         )),
    Game("mahmajn", "Tokoro San no MahMahjan (Japan, ROM Based)", 1992,
         Pair(p("epr14813.bin", "ea38cf4b"), p("epr14812.bin", "5a3cb4a7")),
         ROMBOARD | MAHJONG_IO, magic=MAGIC_MAHMAJN, dsw="FF FE",
         input_profile=INPUT_MAHJONG,
         romboard=(
             Pair(p("mpr14820.bin", "8d2a03d3"), p("mpr14819.bin", "e84c4827")),
             Pair(p("mpr14822.bin", "7c3dcc51"), p("mpr14821.bin", "bd8dc543")),
             Pair(p("mpr14824.bin", "38311933"), p("mpr14823.bin", "4c8d4550")),
             Pair(p("mpr14826.bin", "c31b8805"), p("mpr14825.bin", "191080a1")),
         )),
    Game("mahmajn2", "Tokoro San no MahMahjan 2 (Japan, ROM Based)", 1994,
         Pair(p("epr16799.bin", "3a34cf75"), p("epr16798.bin", "662923fa")),
         ROMBOARD | MAHJONG_IO, magic=MAGIC_MAHMAJN2, dsw="FF FE",
         input_profile=INPUT_MAHJONG,
         romboard=(
             Pair(p("mpr16801.bin", "74855a17"), p("mpr16800.bin", "6dbc1e02")),
             Pair(p("mpr16803.bin", "9b658dd6"), p("mpr16802.bin", "b4723225")),
             Pair(p("mpr16805.bin", "d15528df"), p("mpr16804.bin", "a0de08e2")),
             Pair(p("mpr16807.bin", "816188bb"), p("mpr16806.bin", "54b353d3")),
         )),
    Game("sspiritj", "Scramble Spirits (Japan, Floppy Based)", 1988,
         BOOT_HOTROD, FLOPPY, 0x2F00, parent="sspirits", dsw="FF FD",
         rotation="vertical (ccw)",
         floppy=p("ds3-5000-02-rev-a.img", "0385470f")),
    Game("qsww", "Quiz Syukudai wo Wasuremashita (Japan, Floppy Based)", 1991,
         BOOT_DISK, FLOPPY | FD1094, 0x2D00, dsw="FF FD",
         floppy=p("ds3-5000-08b.img", "5a886d38"),
         key=p("317-0058-08b.key", "fe0a336a")),
    Game("dcclubfd", "Dynamic Country Club (US, Floppy Based, FD1094 317-0058-09d)", 1991,
         BOOT_DISK, FLOPPY | FD1094 | GOLF_IO, 0x2D00,
         magic=MAGIC_DCCLUB, parent="dcclub", dsw="FF FB",
         floppy=p("ds3-5000-09d.img", "69870887"),
         key=p("317-0058-09d.key", "a91ebffb")),
)

# MAME carries the descriptor/key for this set, but its disk is NO_DUMP and
# the driver is MACHINE_NOT_WORKING.  Keep it in source validation without
# generating an unusable MRA in --all-supported mode.
UNDUMPED_GAMES = (
    Game("sspirtfc", "Scramble Spirits (World, Floppy Based, FD1094 317-0058-02c)", 1988,
         BOOT_DISK, FLOPPY | FD1094, 0x2D00, parent="sspirits",
         rotation="vertical (ccw)", dsw="FF FD",
         floppy=p("ds3-5000-02c.img"),
         key=p("317-0058-02c.key", "ebae170e")),
)

ALL_GAMES = GAMES + OPTIONAL_GAMES + UNDUMPED_GAMES


def descriptor_bytes(game: Game) -> bytes:
    """Return the sole runtime hardware profile consumed by s24.rbf."""
    return bytes((
        game.flags,
        game.magic,
        game.track_bytes & 0xFF,
        game.track_bytes >> 8,
        game.input_profile,
        0,
        0,
        0,
    ))


def mra_controls_for(
    game: Game, games: tuple[Game, ...] = ALL_GAMES
) -> MraControls:
    """Resolve parent-owned presentation metadata for a parent or clone."""
    by_setname = {item.setname: item for item in games}
    current = game
    seen: set[str] = set()
    while current.mra_controls is None and current.parent:
        if current.setname in seen:
            raise ValueError(f"{game.setname}: cyclic parent controls")
        seen.add(current.setname)
        current = by_setname[current.parent]
    profile = current.mra_controls or MRA_CONTROL_GENERIC
    return MRA_CONTROL_PROFILES[profile]


def validate_game_contracts(games: tuple[Game, ...] = ALL_GAMES) -> None:
    """Reject descriptors that disagree with their media or feature family."""
    setnames = {game.setname for game in games}
    if len(setnames) != len(games):
        raise ValueError("duplicate System 24 setname")

    for game in games:
        if game.parent and game.parent not in setnames:
            raise ValueError(f"{game.setname}: unknown parent {game.parent}")
        if game.flags & ~ALL_FLAGS:
            raise ValueError(
                f"{game.setname}: unsupported descriptor flags "
                f"{game.flags & ~ALL_FLAGS:#x}"
            )
        if not 0 <= game.magic <= 0x0F:
            raise ValueError(f"{game.setname}: magic selector exceeds one nibble")
        if game.input_profile not in SUPPORTED_INPUT_PROFILES:
            raise ValueError(
                f"{game.setname}: unsupported input profile "
                f"{game.input_profile}"
            )
        if game.mra_controls not in (None, *MRA_CONTROL_PROFILES):
            raise ValueError(
                f"{game.setname}: unsupported MRA controls {game.mra_controls}"
            )
        if game.parent and game.mra_controls is not None:
            raise ValueError(
                f"{game.setname}: clone must inherit parent MRA controls"
            )
        if bool(game.flags & FLOPPY) != (game.floppy is not None):
            raise ValueError(f"{game.setname}: floppy flag/media mismatch")
        if bool(game.flags & ROMBOARD) != bool(game.romboard):
            raise ValueError(f"{game.setname}: ROM-board flag/media mismatch")
        if bool(game.flags & FD1094) != (game.key is not None):
            raise ValueError(f"{game.setname}: FD1094 flag/key mismatch")
        if game.floppy is None and game.track_bytes != 0:
            raise ValueError(f"{game.setname}: track size without floppy media")
        if game.floppy is not None and not 0 < game.track_bytes <= 0xFFFF:
            raise ValueError(f"{game.setname}: invalid floppy track size")
        if game.flags & ADC and not game.flags & HOTROD_IO:
            raise ValueError(f"{game.setname}: ADC requires the Hot Rod profile")
        if game.flags & HOTROD_IO:
            required = FLOPPY | UPD4701 | ADC
            if game.flags & required != required:
                raise ValueError(
                    f"{game.setname}: Hot Rod profile lacks analog hardware"
                )
        controls = mra_controls_for(game, games)
        if bool(game.flags & HOTROD_IO) != (
                controls is MRA_CONTROL_PROFILES[MRA_CONTROL_HOTROD]):
            raise ValueError(f"{game.setname}: Hot Rod MRA controls mismatch")
        if bool(game.flags & GOLF_IO) != (
                controls is MRA_CONTROL_PROFILES[MRA_CONTROL_GOLF]):
            raise ValueError(f"{game.setname}: golf MRA controls mismatch")
        if game.input_profile == INPUT_GGROUND:
            required = FLOPPY | FD1094
            if game.flags & required != required:
                raise ValueError(
                    f"{game.setname}: Gain Ground input profile lacks "
                    "floppy/FD1094"
                )
        if game.input_profile == INPUT_MAHJONG and not game.flags & MAHJONG_IO:
            raise ValueError(f"{game.setname}: Mahjong profile lacks matrix I/O")
        if game.flags & MAHJONG_IO and game.input_profile != INPUT_MAHJONG:
            raise ValueError(f"{game.setname}: Mahjong hardware lacks input profile")
        if game.input_profile in (INPUT_QUIZ4, INPUT_QROUKA) and not game.flags & ROMBOARD:
            raise ValueError(f"{game.setname}: quiz profile lacks ROM board")
        for item in game.romboard:
            if isinstance(item, SoloLane):
                if item.lane not in ("01", "10") or item.size <= 0:
                    raise ValueError(f"{game.setname}: invalid solo-lane ROM item")
            elif isinstance(item, FillPair) and item.size <= 0:
                raise ValueError(f"{game.setname}: invalid ROM fill item")
        try:
            switch_bytes = bytes.fromhex(game.dsw)
        except ValueError as error:
            raise ValueError(f"{game.setname}: invalid DIP bytes") from error
        if len(switch_bytes) != 2:
            raise ValueError(f"{game.setname}: expected exactly two DIP bytes")
        family = game.parent or game.setname
        expected_dsw = MAME_PARENT_DIP_DEFAULTS.get(family)
        if expected_dsw is not None and game.dsw != expected_dsw:
            raise ValueError(
                f"{game.setname}: DIP default {game.dsw} does not match "
                f"MAME parent profile {expected_dsw}"
            )
        if len(descriptor_bytes(game)) != 8:
            raise AssertionError("universal descriptor must remain eight bytes")


def all_parts(game: Game) -> list[Part]:
    result = [game.boot.even, game.boot.odd]
    for item in game.romboard:
        if isinstance(item, Pair):
            result.extend((item.even, item.odd))
        elif isinstance(item, SoloLane):
            result.append(item.part)
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
    # Match MiSTer's MRA loader: try the archives in the order listed by the
    # MRA and select a member by CRC before falling back to its filename. CRC
    # lookup is what makes a single MRA work with all three MAME layouts:
    #
    # * non-merged: every file is in setname.zip
    # * split:      clone files are in setname.zip, shared files in parent.zip
    # * merged:     all files are in parent.zip, often below clone/ directories
    candidates = [rom_dir / name for name in archive_names(game).split("|")]
    archives: list[tuple[pathlib.Path, list[zipfile.ZipInfo]]] = []
    for path in candidates:
        if not path.exists():
            continue
        with zipfile.ZipFile(path) as archive:
            archives.append((path, archive.infolist()))

    def find_part(part: Part) -> tuple[pathlib.Path, zipfile.ZipInfo] | None:
        if part.crc:
            expected_crc = int(part.crc, 16)
            for path, entries in archives:
                for info in entries:
                    if not info.is_dir() and info.CRC == expected_crc:
                        return path, info
        # This is the same fallback MiSTer uses when a CRC is absent or does
        # not match. Compare both the full member name and its basename so the
        # validator gives useful diagnostics for clone-prefixed merged sets.
        expected_name = part.name.casefold()
        for path, entries in archives:
            for info in entries:
                member_name = info.filename.replace("\\", "/").casefold()
                if member_name == expected_name or member_name.rsplit("/", 1)[-1] == expected_name:
                    return path, info
        return None

    missing = []
    wrong = []
    for part in all_parts(game):
        match = find_part(part)
        if match is None:
            missing.append(part.name)
        else:
            path, entry = match
            actual_crc = f"{entry.CRC:08x}"
            if part.crc and actual_crc != part.crc:
                wrong.append(
                    f"{part.name} in {path.name}:{entry.filename}: "
                    f"expected {part.crc}, got {actual_crc}"
                )
    if game.floppy:
        match = find_part(game.floppy)
        expected_size = game.track_bytes * FLOPPY_TRACK_SIDES
        if match is not None and match[1].file_size != expected_size:
            path, entry = match
            wrong.append(
                f"{game.floppy.name} in {path.name}:{entry.filename}: "
                f"expected {expected_size:#x} bytes, got {entry.file_size:#x}"
            )
    for item in game.romboard:
        if isinstance(item, SoloLane):
            match = find_part(item.part)
            if match is not None and match[1].file_size != item.size:
                path, entry = match
                wrong.append(
                    f"{item.part.name} in {path.name}:{entry.filename}: "
                    f"expected {item.size:#x} bytes, got {entry.file_size:#x}"
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


def emit_romboard_item(lines: list[str], item: Pair | SoloLane | FillPair) -> None:
    if isinstance(item, Pair):
        emit_pair(lines, item)
        return
    lines.append('    <interleave output="16">')
    if isinstance(item, SoloLane):
        other_lane = "10" if item.lane == "01" else "01"
        crc = f' crc="{item.part.crc}"' if item.part.crc else ""
        lines.append(
            f'      <part name="{escape(item.part.name)}"{crc} map="{item.lane}"/>'
        )
        lines.append(
            f'      <part repeat="{item.size}" map="{other_lane}">{item.fill:02X}</part>'
        )
    else:
        lines.append(
            f'      <part repeat="{item.size}" map="01">{item.value:02X}</part>'
        )
        lines.append(
            f'      <part repeat="{item.size}" map="10">{item.value:02X}</part>'
        )
    lines.append("    </interleave>")


def generate(game: Game, out_dir: pathlib.Path) -> pathlib.Path:
    zips = archive_names(game)
    controls = mra_controls_for(game)
    if len(controls.names) != 10:
        raise ValueError(f"{game.setname}: MiSTer control names require 10 slots")
    if len(controls.defaults) != sum(name != "-" for name in controls.names):
        raise ValueError(f"{game.setname}: compact control defaults do not match named inputs")
    button_names = ",".join(controls.names)
    button_defaults = ",".join(controls.defaults)
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
        f"  <joystick>{escape(controls.joystick)}</joystick>",
        f'  <buttons default="{button_defaults}" names="{button_names}"/>',
        f'  <switches default="{game.dsw}"/>',
        f'  <rom index="1" zip="{zips}" md5="none" type="{ROM_SET_TYPES}">',
    ))
    emit_pair(lines, game.boot)
    lines.append("  </rom>")
    if game.romboard:
        lines.append(
            f'  <rom index="2" zip="{zips}" md5="none" type="{ROM_SET_TYPES}">'
        )
        for item in game.romboard:
            emit_romboard_item(lines, item)
        lines.append("  </rom>")
    if game.floppy:
        image_bytes = game.track_bytes * FLOPPY_TRACK_SIDES
        padding_bytes = FLOPPY_BUFFER_BYTES - image_bytes
        if padding_bytes < 0:
            raise ValueError(
                f"{game.setname}: floppy image exceeds "
                f"{FLOPPY_BUFFER_BYTES:#x}-byte buffer"
            )
        floppy_crc = f' crc="{game.floppy.crc}"' if game.floppy.crc else ""
        lines.extend((
            f'  <rom index="3" zip="{zips}" md5="none" type="{ROM_SET_TYPES}">',
            f'    <part name="{escape(game.floppy.name)}"{floppy_crc}/>',
            f'    <part repeat="{padding_bytes}">00</part>',
            "  </rom>",
        ))
    if game.key:
        lines.extend((
            f'  <rom index="4" zip="{zips}" md5="none" type="{ROM_SET_TYPES}">',
            f'    <part name="{escape(game.key.name)}" crc="{game.key.crc}"/>',
            "  </rom>",
        ))
    descriptor = descriptor_bytes(game)
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
    parser.add_argument(
        "--all-supported", action="store_true",
        help="include working MAME sets not present in the local 7-set inventory",
    )
    args = parser.parse_args()
    validate_game_contracts()
    args.out_dir.mkdir(parents=True, exist_ok=True)
    selected = GAMES + OPTIONAL_GAMES if args.all_supported else GAMES
    if not args.no_validate:
        for game in selected:
            validate_zip(game, args.rom_dir)
    paths = [generate(game, args.out_dir) for game in selected]
    status = "source-only" if args.no_validate else "validated"
    print(f"generated {len(paths)} {status} MRAs in {args.out_dir}")


if __name__ == "__main__":
    main()
