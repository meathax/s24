#!/usr/bin/env python3
"""Run one safe Verilated System 24 model across the supported game sets."""

from __future__ import annotations

import argparse
import dataclasses
import pathlib
import subprocess

import gen_mra


GAMES = {game.setname: game for game in gen_mra.GAMES}

# First MAME-sampled game-owned secondary-CPU PCs from the pinned attract
# sweep. Clones inherit their parent's threshold; callers can still override
# it for a deliberately bounded diagnostic.
MAME_ATTRACT_B_PC_MIN = {
    "hotrod": 0x006A5E,
    "sspirits": 0x0086B4,
    "gground": 0x0085B0,
    "crkdown": 0x008E94,
    "bnzabros": 0x0081CA,
}


@dataclasses.dataclass(frozen=True)
class GameplayProfile:
    """Native-frame input/capture contract shared by RTL and MAME audits."""

    coin_frame: int
    start_frame: int
    action_frame: int
    capture_frame: int
    checkpoint_frame: int = 0
    input_frames: int = 4
    pedal_frame: int = 0
    pedal_end_frame: int = 0
    pedal_value: int = 0


# Keep game-specific verification behaviour in the same global parent
# profile layer as the MAME-derived attract PC.  Gain Ground starts from P1
# Button 1 as well as Start 1; a Start-only run leaves CREDIT 1 intact and is
# merely the attract demo, so action_frame is intentionally non-zero.  Crack
# Down accepts Start 1 on its title screen and reaches live play by frame 2240.
# Bonanza Bros accepts the highlighted training-stage choice with P1 Button 1;
# frame 1800 is live interactive training play, not an attract demonstration.
# Hot Rod starts from its real P1 accelerator rather than a digital Start
# button; full throttle is held through the frame-2400 live-race capture.
# Scramble Spirits enters Mission 1 with the generic three-button packet and
# reaches unmistakable vertically presented gameplay by frame 2200.
GAMEPLAY_PROFILES = {
    "gground": GameplayProfile(1335, 1420, 1420, 1920, 1300),
    "crkdown": GameplayProfile(1050, 1380, 0, 2260, 1000),
    "bnzabros": GameplayProfile(900, 950, 1000, 1800, 800),
    "hotrod": GameplayProfile(
        1060, 0, 0, 2400, 1000,
        pedal_frame=1140, pedal_end_frame=2401, pedal_value=255),
    "sspirits": GameplayProfile(1210, 1270, 1450, 2200, 1200),
}


def gameplay_profile(game: gen_mra.Game) -> GameplayProfile:
    parent = game.parent or game.setname
    try:
        return GAMEPLAY_PROFILES[parent]
    except KeyError as error:
        raise ValueError(f"{parent}: gameplay profile has not been audited") from error


def default_attract_b_pc_min(game: gen_mra.Game) -> int:
    return MAME_ATTRACT_B_PC_MIN.get(
        game.parent or game.setname, min(MAME_ATTRACT_B_PC_MIN.values()))


def command(exe: pathlib.Path, game: gen_mra.Game, media: pathlib.Path,
            target: int, max_clocks: int,
            progress_clocks: int,
            frame_dir: pathlib.Path | None = None,
            attract_min_pixels: int = 1000,
            attract_frames: int = 120,
            attract_b_pc_min: int | None = None) -> list[str]:
    if attract_b_pc_min is None:
        attract_b_pc_min = default_attract_b_pc_min(game)
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
        f"+PROGRESS_CLOCKS={progress_clocks}",
    ]
    if game.romboard:
        result.append(f"+ROMBOARD={game_dir / 'romboard.mem'}")
    if game.floppy:
        result.append(f"+FLOPPY={game_dir / 'floppy.bin'}")
    if game.key:
        result.append(f"+KEY={game_dir / 'key.mem'}")
    if target == 7:
        result.extend([
            f"+ATTRACT_MIN_PIXELS={attract_min_pixels}",
            f"+ATTRACT_FRAMES={attract_frames}",
            f"+ATTRACT_B_PC_MIN={attract_b_pc_min}",
        ])
    if frame_dir is not None and target in (3, 7):
        result.append(f"+FRAME_OUT={frame_dir / (game.setname + '.ppm')}")
    # Scheduled coin/start injection so a batch run can actually reach
    # gameplay instead of stalling in attract mode: the non-visual harness
    # previously had no way to drive joy0 at all (host_joy0..3 truncated to
    # an implicit 1-bit net -- see verif/tb_gground_boot.sv). Native-frame
    # numbers come straight from the profile that already documented them.
    # Deep gameplay schedules currently exist only for parents that have been
    # calibrated against MAME.  Media/video/attract coverage must still be
    # runnable for the remaining universal profiles instead of failing while
    # constructing their command line.
    profile = GAMEPLAY_PROFILES.get(game.parent or game.setname)
    if profile is not None:
        if profile.coin_frame:
            result.append(f"+COIN_FRAME={profile.coin_frame}")
        if profile.start_frame:
            result.append(f"+START_FRAME={profile.start_frame}")
        if profile.input_frames:
            result.append(f"+INPUT_HOLD_FRAMES={profile.input_frames}")
        if profile.pedal_value:
            result.append(f"+PADDLE0={profile.pedal_value:x}")
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

    if game.romboard:
        expected_rom_bytes = gen_mra.MAME_ROMBOARD_REGION_BYTES.get(
            game.parent or game.setname
        )
        if expected_rom_bytes is not None:
            expected_words = expected_rom_bytes // 2
            with (game_dir / "romboard.mem").open(
                    "r", encoding="ascii", newline=None) as stream:
                actual_words = sum(1 for line in stream if line.strip())
            if actual_words != expected_words:
                raise ValueError(
                    f"{game.setname}: stale/incomplete romboard.mem has "
                    f"{actual_words:#x} words; expected full MAME region "
                    f"{expected_rom_bytes:#x}, regenerate simulation media"
                )

    expected = gen_mra.descriptor_bytes(game)
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
    parser.add_argument("--target", type=int, choices=range(9), default=0,
                        help="0 media, 1 CPU-B release/read, 2 CPU-B execute, "
                             "3 visible video, 4 first video-memory write, "
                             "5 one complete contiguous floppy track, "
                             "6 all common video-write families, "
                             "7 no-input attract mode, "
                             "8 bounded diagnostic stop")
    parser.add_argument("--max-clocks", type=int, default=400_000_000)
    parser.add_argument("--progress-clocks", type=int, default=25_000_000)
    parser.add_argument("--sim-timeout", type=float, default=300.0,
                        help="maximum wall time for one safe simulation")
    parser.add_argument("--attract-min-pixels", type=int, default=1000)
    parser.add_argument("--attract-frames", type=int, default=120)
    parser.add_argument("--attract-b-pc-min", type=lambda value: int(value, 0),
                        default=None,
                        help="override the MAME-derived per-parent PC minimum")
    parser.add_argument("--frame-dir", type=pathlib.Path,
                        help="write one post-release RGB PPM per target-3 set")
    parser.add_argument("--dry-run", action="store_true")
    args = parser.parse_args()
    gen_mra.validate_game_contracts()

    if not args.exe.is_file() and not args.dry_run:
        parser.error(f"simulation executable not found: {args.exe}")
    if args.max_clocks <= 0:
        parser.error("--max-clocks must be positive")
    if args.progress_clocks < 0:
        parser.error("--progress-clocks cannot be negative")
    if args.sim_timeout <= 0:
        parser.error("--sim-timeout must be positive")
    if args.attract_min_pixels <= 0 or args.attract_frames <= 0:
        parser.error("attract thresholds must be positive")
    if args.attract_b_pc_min is not None and args.attract_b_pc_min < 0:
        parser.error("--attract-b-pc-min cannot be negative")

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
                      args.max_clocks, args.progress_clocks, args.frame_dir,
                      args.attract_min_pixels, args.attract_frames,
                      args.attract_b_pc_min)
        print(" ".join(map(str, cmd)), flush=True)
        if not args.dry_run:
            try:
                subprocess.run(cmd, check=True, timeout=args.sim_timeout)
            except subprocess.TimeoutExpired:
                print(
                    f"safe simulation exceeded {args.sim_timeout:g}s; "
                    "returning retryable status 125",
                    flush=True,
                )
                raise SystemExit(125)
            except subprocess.CalledProcessError as exc:
                # The machine-wide safe launcher reports an interrupted
                # child as signed -1 (4294967295 on Windows).  Treat only
                # that launcher-level result as retryable; Verilator
                # assertions and ordinary non-zero exits remain hard
                # failures so diagnostics cannot be hidden by the matrix.
                if exc.returncode in (-1, 0xffffffff):
                    print(
                        "safe simulation returned signed -1; "
                        "returning retryable status 125",
                        flush=True,
                    )
                    raise SystemExit(125)
                raise


if __name__ == "__main__":
    main()
