#!/usr/bin/env python3
"""Run one safe Verilated System 24 model across the 18 local game sets."""

from __future__ import annotations

import argparse
import pathlib
import subprocess

import gen_mra


GAMES = {game.setname: game for game in gen_mra.GAMES}


def command(exe: pathlib.Path, game: gen_mra.Game, media: pathlib.Path,
            target: int, max_clocks: int,
            frame_dir: pathlib.Path | None = None) -> list[str]:
    game_dir = media / game.setname
    switch_bytes = [int(value, 16) for value in game.dsw.split()]
    if len(switch_bytes) != 2:
        raise ValueError(f"{game.setname}: expected two MRA switch bytes")
    result = [
        "verilator-sim-safe", "--", str(exe),
        f"+GAME={game.setname}",
        f"+BOOT={game_dir / 'boot.mem'}",
        f"+FLAGS={game.flags:x}",
        f"+TRACK={game.track_bytes:x}",
        f"+INPUT={game.input_profile}",
        f"+MAGIC={game.magic:x}",
        f"+COINAGE={switch_bytes[0]:x}",
        f"+DSW={switch_bytes[1]:x}",
        f"+TARGET={target}",
        f"+MAX_CLOCKS={max_clocks}",
    ]
    if game.romboard:
        result.append(f"+ROMBOARD={game_dir / 'romboard.mem'}")
    if game.floppy:
        result.append(f"+FLOPPY={game_dir / 'floppy.bin'}")
    if game.key:
        result.append(f"+KEY={game_dir / 'key.mem'}")
    if frame_dir is not None and target == 3:
        result.append(f"+FRAME_OUT={frame_dir / (game.setname + '.ppm')}")
    return result


def validate_media(game: gen_mra.Game, media: pathlib.Path) -> None:
    """Reject incomplete or stale generated media before a long simulation."""
    game_dir = media / game.setname
    required = [game_dir / "boot.mem", game_dir / "descriptor.hex"]
    if game.romboard:
        required.append(game_dir / "romboard.mem")
    if game.floppy:
        required.append(game_dir / "floppy.bin")
    if game.key:
        required.append(game_dir / "key.mem")
    missing = [path for path in required if not path.is_file()]
    if missing:
        raise FileNotFoundError(
            f"{game.setname}: missing generated media: "
            + ", ".join(map(str, missing)))

    if game.floppy:
        floppy_size = (game_dir / "floppy.bin").stat().st_size
        if floppy_size != gen_mra.FLOPPY_BUFFER_BYTES:
            raise ValueError(
                f"{game.setname}: stale floppy.bin size {floppy_size:#x}; "
                "regenerate simulation media"
            )

    expected = bytes((game.flags, game.magic, game.track_bytes & 0xff,
                      game.track_bytes >> 8, game.input_profile, 0, 0, 0))
    actual = bytes.fromhex(
        "".join((game_dir / "descriptor.hex").read_text().splitlines()))
    if actual != expected:
        raise ValueError(
            f"{game.setname}: stale descriptor.hex; regenerate simulation media")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--exe", type=pathlib.Path, required=True)
    parser.add_argument("--media", type=pathlib.Path,
                        default=pathlib.Path("verif/media"))
    parser.add_argument("--sets", nargs="+", choices=GAMES,
                        default=list(GAMES))
    parser.add_argument("--target", type=int, choices=range(5), default=0,
                        help="0 media, 1 CPU-B release/read, 2 CPU-B execute, "
                             "3 visible video, 4 first video-memory write")
    parser.add_argument("--max-clocks", type=int, default=400_000_000)
    parser.add_argument("--frame-dir", type=pathlib.Path,
                        help="write one post-release RGB PPM per target-3 set")
    parser.add_argument("--dry-run", action="store_true")
    args = parser.parse_args()

    if not args.exe.is_file() and not args.dry_run:
        parser.error(f"simulation executable not found: {args.exe}")
    if args.max_clocks <= 0:
        parser.error("--max-clocks must be positive")

    for setname in args.sets:
        validate_media(GAMES[setname], args.media)
    # A dry run is deliberately source/data-only: it must not touch the
    # machine-wide Verilator lock or launch any Verilator process.
    if not args.dry_run:
        subprocess.run(["verilator-safe", "status"], check=True)
        if args.frame_dir is not None:
            args.frame_dir.mkdir(parents=True, exist_ok=True)
    for setname in args.sets:
        cmd = command(args.exe, GAMES[setname], args.media, args.target,
                      args.max_clocks, args.frame_dir)
        print(" ".join(map(str, cmd)), flush=True)
        if not args.dry_run:
            subprocess.run(cmd, check=True)


if __name__ == "__main__":
    main()
