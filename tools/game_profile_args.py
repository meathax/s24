#!/usr/bin/env python3
"""Print descriptor-derived plusargs for the reusable visual System 24 model."""

from __future__ import annotations

import argparse
import pathlib

import gen_mra
import run_game_matrix


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("game", choices=[game.setname for game in gen_mra.GAMES])
    parser.add_argument("--media", type=pathlib.Path, default=pathlib.Path("verif/media"))
    parser.add_argument("--lockstep-dir", type=pathlib.Path)
    parser.add_argument("--target", type=int, choices=range(9), default=8)
    parser.add_argument("--frame-out", type=pathlib.Path)
    parser.add_argument("--gameplay", action="store_true")
    parser.add_argument("--host-frame-out", type=pathlib.Path)
    args = parser.parse_args()

    game = run_game_matrix.GAMES[args.game]
    run_game_matrix.validate_media(game, args.media)
    command = run_game_matrix.command(
        pathlib.Path("visual-model.exe"), game, args.media,
        target=args.target, max_clocks=9_000_000_000_000_000_000,
        progress_clocks=100_000_000,
        frame_dir=args.frame_out.parent if args.frame_out else None,
    )
    # Drop `verilator-sim-safe -- visual-model.exe`; the PowerShell launcher
    # owns the safe wrapper and the actual cached executable path.
    plusargs = command[3:]
    if args.lockstep_dir:
        plusargs.append(f"+LOCKSTEP_DIR={args.lockstep_dir.resolve()}")
    if args.frame_out:
        plusargs = [argument for argument in plusargs
                    if not argument.startswith("+FRAME_OUT=")]
        plusargs.append(f"+FRAME_OUT={args.frame_out.resolve()}")
    if args.gameplay:
        gameplay = run_game_matrix.gameplay_profile(game)
        plusargs.extend([
            "+NO_AUTO_FINISH=1",
            f"+AUTO_COIN_FRAME={gameplay.coin_frame}",
            f"+AUTO_START_FRAME={gameplay.start_frame}",
            f"+AUTO_ACTION_FRAME={gameplay.action_frame}",
            f"+AUTO_CAPTURE_FRAME={gameplay.capture_frame}",
            f"+AUTO_EXIT_FRAME={gameplay.capture_frame + 1}",
            f"+AUTO_INPUT_FRAMES={gameplay.input_frames}",
        ])
        if gameplay.checkpoint_frame:
            plusargs.append(f"+AUTOSAVE_FRAME={gameplay.checkpoint_frame}")
        if gameplay.pedal_frame:
            plusargs.extend([
                f"+AUTO_PEDAL_FRAME={gameplay.pedal_frame}",
                f"+AUTO_PEDAL_END_FRAME={gameplay.pedal_end_frame}",
                f"+AUTO_PEDAL_VALUE={gameplay.pedal_value}",
            ])
        if not args.host_frame_out:
            parser.error("--gameplay requires --host-frame-out")
        plusargs.append(f"+HOST_FRAME_OUT={args.host_frame_out.resolve()}")
    print("\n".join(plusargs))


if __name__ == "__main__":
    main()
