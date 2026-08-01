#!/usr/bin/env python3
"""Run the single safe Verilated model across all FD1094 floppy sets.

The runner is deliberately sequential: the account-wide safe-simulation
launcher owns concurrency and every invocation reuses the same compiled model.
"""

from __future__ import annotations

import argparse
import pathlib
import subprocess

import gen_mra


def protected_games() -> dict[str, gen_mra.Game]:
    return {
        game.setname: game for game in gen_mra.GAMES
        if game.flags & gen_mra.FLOPPY and game.flags & gen_mra.FD1094
    }


def command(exe: pathlib.Path, game: gen_mra.Game, media: pathlib.Path,
            target: int, max_clocks: int) -> list[str]:
    game_dir = media / game.setname
    return [
        "verilator-sim-safe", "--", str(exe),
        f"+GAME={game.setname}",
        f"+BOOT={game_dir / 'boot.mem'}",
        f"+KEY={game_dir / 'key.mem'}",
        f"+FLOPPY={game_dir / 'floppy.bin'}",
        f"+FLAGS={game.flags:x}",
        f"+TRACK={game.track_bytes:x}",
        f"+INPUT={game.input_profile}",
        f"+TARGET={target}",
        f"+MAX_CLOCKS={max_clocks}",
    ]


def main() -> None:
    available = protected_games()
    parser = argparse.ArgumentParser()
    parser.add_argument("--exe", type=pathlib.Path, required=True)
    parser.add_argument("--media", type=pathlib.Path,
                        default=pathlib.Path("verif/media"))
    parser.add_argument("--sets", nargs="+", choices=available,
                        default=list(available))
    parser.add_argument("--target", type=int, choices=range(7), default=0)
    parser.add_argument("--max-clocks", type=int, default=400_000_000)
    parser.add_argument("--dry-run", action="store_true")
    args = parser.parse_args()

    if not args.exe.is_file() and not args.dry_run:
        parser.error(f"simulation executable not found: {args.exe}")
    if args.max_clocks <= 0:
        parser.error("--max-clocks must be positive")

    # Keep dry-run source/data-only so it never takes or probes a simulation
    # reservation. The general matrix runner follows the same contract.
    if not args.dry_run:
        subprocess.run(["verilator-safe", "status"], check=True)
    for setname in args.sets:
        game = available[setname]
        cmd = command(args.exe, game, args.media, args.target,
                      args.max_clocks)
        print(" ".join(map(str, cmd)), flush=True)
        if not args.dry_run:
            subprocess.run(cmd, check=True)


if __name__ == "__main__":
    main()
