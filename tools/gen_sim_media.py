#!/usr/bin/env python3
"""Generate non-redistributable simulation media from the user's ROM ZIPs.

The word files match s24_rom_loader after its host-lane byte swap, so a
behavioral SDRAM model can consume them directly with $readmemh.
"""

from __future__ import annotations

import argparse
import pathlib
import zipfile

import gen_mra


def read_part(game: gen_mra.Game, name: str, rom_dir: pathlib.Path) -> bytes:
    candidates = [rom_dir / f"{game.setname}.zip"]
    if game.parent:
        candidates.append(rom_dir / f"{game.parent}.zip")
    for path in candidates:
        if not path.exists():
            continue
        with zipfile.ZipFile(path) as archive:
            lookup = {item.filename.lower(): item for item in archive.infolist()}
            item = lookup.get(name.lower())
            if item is not None:
                return archive.read(item)
    raise FileNotFoundError(f"{game.setname}: cannot find {name}")


def pair_words(game: gen_mra.Game, pair: gen_mra.Pair,
               rom_dir: pathlib.Path) -> list[int]:
    even = read_part(game, pair.even.name, rom_dir)
    odd = read_part(game, pair.odd.name, rom_dir)
    if len(even) != len(odd):
        raise ValueError(
            f"{game.setname}: unequal pair {pair.even.name}/{pair.odd.name}"
        )
    words = [(hi << 8) | lo for hi, lo in zip(even, odd)]
    return words * pair.repeat


def write_words(path: pathlib.Path, words: list[int]) -> None:
    path.write_text("".join(f"{word:04x}\n" for word in words), encoding="ascii")


def write_word_binary(path: pathlib.Path, words: list[int]) -> None:
    path.write_bytes(b"".join(word.to_bytes(2, "big") for word in words))


def generate(game: gen_mra.Game, rom_dir: pathlib.Path,
             out_dir: pathlib.Path) -> None:
    gen_mra.validate_zip(game, rom_dir)
    target = out_dir / game.setname
    target.mkdir(parents=True, exist_ok=True)

    write_words(target / "boot.mem", pair_words(game, game.boot, rom_dir))

    rom_words: list[int] = []
    for pair in game.romboard:
        rom_words.extend(pair_words(game, pair, rom_dir))
    if rom_words:
        write_words(target / "romboard.mem", rom_words)
        write_word_binary(target / "romboard.bin", rom_words)

    if game.floppy:
        floppy = read_part(game, game.floppy.name, rom_dir)
        expected_size = game.track_bytes * gen_mra.FLOPPY_TRACK_SIDES
        if len(floppy) != expected_size:
            raise ValueError(
                f"{game.setname}: expected {expected_size:#x} floppy bytes, "
                f"got {len(floppy):#x}"
            )
        (target / "floppy.bin").write_bytes(
            floppy.ljust(gen_mra.FLOPPY_BUFFER_BYTES, b"\0")
        )
    if game.key:
        key = read_part(game, game.key.name, rom_dir)
        if len(key) & 1:
            raise ValueError(f"{game.setname}: odd FD1094 key size")
        # Key download is byte-linear: preserve adjacent bytes in host words.
        write_words(target / "key.mem", [
            key[i] | (key[i + 1] << 8) for i in range(0, len(key), 2)
        ])

    descriptor = gen_mra.descriptor_bytes(game)
    (target / "descriptor.hex").write_text(
        descriptor.hex() + "\n", encoding="ascii"
    )
    print(f"generated simulation media for {game.setname} in {target}")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("setname", nargs="?",
                        choices=[game.setname for game in gen_mra.GAMES])
    parser.add_argument("--all", action="store_true",
                        help="generate media for every validated local set")
    parser.add_argument("--rom-dir", type=pathlib.Path, default=pathlib.Path("roms"))
    parser.add_argument("--out-dir", type=pathlib.Path,
                        default=pathlib.Path("verif/media"))
    args = parser.parse_args()
    gen_mra.validate_game_contracts()
    if args.all == (args.setname is not None):
        parser.error("select exactly one setname or --all")
    selected = gen_mra.GAMES if args.all else (
        next(game for game in gen_mra.GAMES if game.setname == args.setname),
    )
    for game in selected:
        generate(game, args.rom_dir, args.out_dir)
    print(f"generated {len(selected)} validated simulation-media set(s)")


if __name__ == "__main__":
    main()
