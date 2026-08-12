#!/usr/bin/env python3
"""Run one finite visible System 24 RTL/MAME native-frame lockstep session."""

from __future__ import annotations

import argparse
import datetime as dt
import hashlib
import json
import os
import pathlib
import subprocess
import sys
import time
import wave
import xml.etree.ElementTree as ET

import gen_mra
import run_game_matrix
import check_mame_pin


REPO = pathlib.Path(__file__).resolve().parents[1]
PARENTS = tuple(game for game in gen_mra.GAMES if not game.parent)
PARENT_NAMES = tuple(game.setname for game in PARENTS)
MAME_EXE = pathlib.Path("D:/Arcade/AI/mame/mame.exe")
# The executable reference remains the pinned 0.288 build, while this newer
# source snapshot is the user-selected source-audit tree. Its behaviorally
# relevant System 24 files are hash-pinned below by check_mame_pin.
MAME_SOURCE = pathlib.Path("D:/Arcade/AI/mame289")
COORDINATOR = pathlib.Path(
    "C:/Users/meath/.codex/skills/verilator-live-lockstep/scripts/"
    "live_lockstep_compare.py"
)
# Keep reference limitations explicit in the preflight manifest.  They affect
# how a later mismatch is interpreted, but never relax the native-frame or
# gameplay gates.
REFERENCE_CAVEATS = {
    "crkdown": "MAME 0.288 marks Crack Down graphics imperfect",
}

def sha256(path: pathlib.Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as stream:
        for block in iter(lambda: stream.read(1024 * 1024), b""):
            digest.update(block)
    return digest.hexdigest().lower()


def wav_receipt(path: pathlib.Path) -> dict[str, object]:
    """Return auditable metadata for a native PCM capture, without decoding it."""
    if not path.is_file():
        return {"status": "missing", "path": str(path)}
    receipt: dict[str, object] = {
        "status": "present", "path": str(path),
        "size": path.stat().st_size, "sha256": sha256(path),
    }
    try:
        with wave.open(str(path), "rb") as stream:
            receipt.update({
                "channels": stream.getnchannels(),
                "sample_width": stream.getsampwidth(),
                "sample_rate": stream.getframerate(),
                "frames": stream.getnframes(),
                "compression": stream.getcomptype(),
            })
    except (wave.Error, OSError) as error:
        receipt.update({"status": "invalid", "error": str(error)})
    return receipt


def mame_dip_defaults(game: str, executable: pathlib.Path) -> dict[str, int]:
    output = subprocess.run(
        [str(executable), game, "-listxml"], check=True,
        capture_output=True,
    ).stdout
    machine = ET.fromstring(output).find("machine")
    if machine is None:
        raise ValueError(f"MAME listxml omitted machine {game}")
    values: dict[str, int] = {}
    for switch in machine.findall("dipswitch"):
        tag = switch.get("tag")
        if not tag:
            continue
        values.setdefault(tag, 0)
        default = next(
            (choice for choice in switch.findall("dipvalue")
             if choice.get("default") == "yes"), None,
        )
        if default is None:
            raise ValueError(f"{game}: {tag}/{switch.get('name')} has no default")
        values[tag] |= int(default.get("value", "0"), 0)
    return values


def media_manifest(game: gen_mra.Game, media_root: pathlib.Path,
                   mame_roms: pathlib.Path) -> dict[str, object]:
    game_dir = media_root / game.setname
    files = [game_dir / "boot.mem", game_dir / "descriptor.hex"]
    if game.floppy:
        files.append(game_dir / "floppy.bin")
    if game.key:
        files.append(game_dir / "key.mem")
    if game.romboard:
        files.append(game_dir / "romboard.mem")
    archives = []
    for root, role in ((REPO / "roms", "rtl_source_archive"),
                       (mame_roms, "mame_archive")):
        path = root / f"{game.setname}.zip"
        if path.is_file():
            archives.append({"role": role, "path": str(path.resolve()),
                             "size": path.stat().st_size, "sha256": sha256(path)})
    if not any(item["role"] == "mame_archive" for item in archives):
        shared = next((item for item in archives
                       if item["role"] == "rtl_source_archive"), None)
        if shared:
            archives.append({**shared, "role": "mame_archive_via_rompath"})
    return {
        "rtl_regions": [
            {"path": str(path.resolve()), "size": path.stat().st_size,
             "sha256": sha256(path)} for path in files
        ],
        "archives": archives,
        "provenance": {
            "mapping": "MAME CRC-declared parts -> generated interleaved/padded RTL regions",
            "archive_names": gen_mra.archive_names(game),
            "containers_expected_to_hash_equal": False,
        },
    }


def write_json(path: pathlib.Path, value: object) -> None:
    temporary = path.with_suffix(path.suffix + ".tmp")
    temporary.write_text(json.dumps(value, indent=2) + "\n", encoding="utf-8")
    os.replace(temporary, path)


def create_preflight(game: gen_mra.Game, session: pathlib.Path,
                     media_root: pathlib.Path, mame_exe: pathlib.Path,
                     mame_roms: pathlib.Path) -> dict[str, object]:
    run_game_matrix.validate_media(game, media_root)
    source_head = check_mame_pin.validate(MAME_SOURCE, mame_exe)
    defaults = mame_dip_defaults(game.setname, mame_exe)
    rtl_coinage, rtl_dsw = (int(value, 16) for value in game.dsw.split())
    mismatches = []
    for tag, rtl_value in (("COINAGE", rtl_coinage), ("DSW", rtl_dsw)):
        if defaults.get(tag) != rtl_value:
            mismatches.append({"field": tag, "rtl": rtl_value,
                               "mame": defaults.get(tag)})
    analog = {
        "policy": "neutral-v1 fixed no-input attract packet",
        "rtl": {
            "spinners": [0, 0, 0, 0],
            "paddles": [1, 1, 1, 1] if game.flags & gen_mra.HOTROD_IO
                       else [0, 0, 0, 0],
            "unassigned_adc_channels": 255,
        },
        "mame_source_contract": {
            "hotrod_dials": 0, "hotrod_pedals": 1,
            "golf_paddle": 0, "unassigned": 255,
            "source": str((MAME_SOURCE / "src/mame/sega/segas24.cpp").resolve()),
        },
    }
    preflight = {
        "schema": "rtl-mame-preflight-v2",
        "result": "pass" if not mismatches else "failure",
        "game": game.setname,
        "parent": game.parent or game.setname,
        "clone": bool(game.parent),
        "reference": {
            "mame_version": check_mame_pin.PINNED_VERSION,
            "behavioral_pin": check_mame_pin.PINNED_COMMIT,
            "checkout_head": source_head,
            "pinned_file_count": len(check_mame_pin.PINNED_FILES),
            "caveats": [REFERENCE_CAVEATS[game.setname]]
                       if game.setname in REFERENCE_CAVEATS else [],
        },
        "media": media_manifest(game, media_root, mame_roms),
        "configuration": {
            "isolated_cfg": str((session / "cfg").resolve()),
            "isolated_nvram": str((session / "nvram").resolve()),
            "isolated_state": str((session / "state").resolve()),
            "isolated_snap": str((session / "snap").resolve()),
            "rtl_dips": {"COINAGE": rtl_coinage, "DSW": rtl_dsw},
            "mame_default_dips": defaults,
            "cabinet": "descriptor/MAME set default",
            "digital_inputs": "neutral-v1",
            "analog": analog,
            "reset": "cold power-on",
            "sound": "enabled on both sides with production IKAOPM RTL",
        },
        "video": {
            "rtl_native": [496, 384], "mame_raw_visible_expected": [496, 384],
            "rtl_boundary": "completed surface at registered vblank->active raster advance",
            "mame_boundary": "screen_device::pixels() after emu.wait_next_frame",
            "start_token": 1, "crop": [0, 0, 496, 384],
            "orientation": "native hardware raster; presentation rotation not applied",
        },
        "input_packet": {"identity": "neutral-v1", "owner": "RTL window",
                         "interactive": False},
        "mismatches": mismatches,
    }
    write_json(session / ("PREFLIGHT_PASS.json" if not mismatches
                          else "PREFLIGHT_FAILURE.json"), preflight)
    if mismatches:
        raise ValueError(f"reference preflight failed: {mismatches}")
    return preflight


def stop_process(process: subprocess.Popen[bytes], grace: float = 10.0) -> int | None:
    try:
        return process.wait(timeout=grace)
    except subprocess.TimeoutExpired:
        process.terminate()
        try:
            return process.wait(timeout=5.0)
        except subprocess.TimeoutExpired:
            process.kill()
            return process.wait(timeout=5.0)


def compact_successful_session(session: pathlib.Path,
                               records: list[dict[str, object]],
                               stride: int) -> dict[str, object]:
    """Retain milestone screenshots/metrics without keeping gigabytes of frames."""
    if not records or stride == 0:
        return {"policy": "keep_all", "removed_files": 0}
    keep = {1, len(records)}
    keep.update(range(stride, len(records) + 1, stride))
    mismatches = [record for record in records
                  if record["pixels"]["different_pixels"]]
    if mismatches:
        keep.add(int(mismatches[0]["frame"]))
        keep.add(int(min(records,
                         key=lambda record: record["pixels"]["exact_ratio"])["frame"]))
    removed = 0
    for directory in (session / "rtl", session / "mame", session / "diff"):
        for path in directory.glob("frame_*.*"):
            try:
                frame = int(path.stem.split("_")[-1])
            except ValueError:
                continue
            if frame not in keep:
                path.unlink()
                removed += 1
    result = {
        "policy": "milestone_frames",
        "stride": stride,
        "retained_frames": sorted(keep),
        "removed_files": removed,
        "metrics_retained_for_all_frames": True,
    }
    write_json(session / "retention.json", result)
    return result


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("game", choices=PARENT_NAMES)
    parser.add_argument("--frames", type=int, default=5,
                        help="exact native frame sample count for this session")
    parser.add_argument("--reason", default="adaptive proving budget")
    parser.add_argument("--session-root", type=pathlib.Path,
                        default=pathlib.Path("verif/lockstep"))
    parser.add_argument("--media", type=pathlib.Path, default=pathlib.Path("verif/media"))
    parser.add_argument("--model-dir", default="C:/tmp/s24_obj_gground_visual4")
    parser.add_argument("--mame-exe", type=pathlib.Path, default=MAME_EXE)
    parser.add_argument("--mame-roms", type=pathlib.Path,
                        default=pathlib.Path("D:/Arcade/AI/mame/roms"))
    parser.add_argument("--mame-video", choices=("d3d", "bgfx", "gdi", "opengl"),
                        default="gdi",
                        help="native MAME presentation backend; raw screen pixels remain the reference")
    parser.add_argument("--timeout", type=float, default=900.0)
    parser.add_argument("--retain-stride", type=int, default=60,
                        help="after success retain every Nth native screenshot plus first/final/worst; 0 keeps all")
    parser.add_argument("--skip-build", action="store_true")
    args = parser.parse_args()
    if args.frames <= 0 or args.timeout <= 0 or args.retain_stride < 0:
        parser.error("frames/timeout must be positive and retain-stride nonnegative")
    game = next(game for game in PARENTS if game.setname == args.game)
    stamp = dt.datetime.now().strftime("%Y%m%d-%H%M%S")
    session = (REPO / args.session_root / f"{args.game}-{stamp}").resolve()
    for directory in ("rtl", "mame", "diff", "logs", "cfg", "nvram", "state", "snap"):
        (session / directory).mkdir(parents=True, exist_ok=True)
    preflight = create_preflight(game, session, REPO / args.media,
                                 args.mame_exe, args.mame_roms)

    if not args.skip_build:
        build = subprocess.run([
            "powershell", "-NoProfile", "-ExecutionPolicy", "Bypass", "-File",
            str(REPO / "tools/build_gground_visual.ps1"),
            "-ModelDirectory", args.model_dir,
        ], cwd=REPO)
        if build.returncode:
            return build.returncode

    coordinator_log = (session / "logs/coordinator.log").open("wb")
    rtl_out = (session / "logs/rtl.stdout.log").open("wb")
    rtl_err = (session / "logs/rtl.stderr.log").open("wb")
    mame_out = (session / "logs/mame.stdout.log").open("wb")
    mame_err = (session / "logs/mame.stderr.log").open("wb")
    coordinator = subprocess.Popen([
        sys.executable, str(COORDINATOR), str(session),
        "--start-frame", "1", "--frames", str(args.frames),
        "--offset-x", "0", "--offset-y", "0", "--timeout", str(args.timeout),
        "--reference-dir", "mame",
        "--rtl-extension", "ppm", "--reference-extension", "argb32",
        "--reference-token", "mame_frame.txt",
        "--reference-trace", "mame_trace.jsonl",
        "--reference-state", "mame_state.jsonl",
    ], cwd=REPO, stdout=coordinator_log, stderr=subprocess.STDOUT)
    env = os.environ.copy()
    env["S24_LOCKSTEP_DIR"] = str(session)
    visual_exe = pathlib.Path(args.model_dir) / "Vtb_gground_boot.exe"
    rtl_command = run_game_matrix.command(
        visual_exe, game, REPO / args.media,
        target=8, max_clocks=9_000_000_000_000_000_000,
        progress_clocks=100_000_000,
    )
    rtl_audio_path = session / "rtl_audio.wav"
    mame_audio_path = session / "mame_audio.wav"
    rtl_command.extend((f"+LOCKSTEP_DIR={session}",
                        f"+WAV_OUT={rtl_audio_path}",
                        f"+SAVE={REPO / (args.game + '.vltsv')}"))
    # Own the safe wrapper directly.  An intermediate PowerShell process can
    # be terminated on timeout while leaving its queued safe-launch child
    # orphaned; direct ownership makes bounded cleanup reliable.
    rtl = subprocess.Popen(
        [str(argument) for argument in rtl_command], cwd=REPO,
        stdout=rtl_out, stderr=rtl_err,
    )
    mame = subprocess.Popen([
        str(args.mame_exe), args.game, "-video", args.mame_video,
        "-noswitchres", "-window", "-nomaximize", "-skip_gameinfo",
        "-rompath", f"{REPO / 'roms'};{args.mame_roms}",
        "-cfg_directory", str(session / "cfg"),
        "-nvram_directory", str(session / "nvram"),
        "-state_directory", str(session / "state"),
        "-snapshot_directory", str(session / "snap"),
        "-samplerate", "48000",
        "-wavwrite", str(mame_audio_path),
        "-autoboot_script", str(REPO / "verif/mame/live_lockstep_producer.lua"),
    ], cwd=args.mame_exe.parent, env=env, stdout=mame_out, stderr=mame_err)
    manifest = {
        "schema": "s24-live-lockstep-v2", "game": args.game,
        "top_module": "tb_gground_boot", "model_directory": args.model_dir,
        "mame_version": "0.288 (mame0288)",
        "mame_source_pin": preflight["reference"],
        "adaptive_budget": [{"frames": args.frames, "reason": args.reason}],
        "commands": {"rtl": rtl.args, "mame": mame.args,
                     "coordinator": coordinator.args},
        "pids": {"rtl_wrapper": rtl.pid, "mame": mame.pid,
                 "coordinator": coordinator.pid},
        "preflight": preflight,
        "capture_provenance": {
            "rtl": "native 496x384 RGB surface before SDL scaling",
            "mame": "screen_device::pixels() raw visible-area BGRA bytes",
        },
    }
    write_json(session / "manifest.json", manifest)

    coordinator_code = 1
    try:
        coordinator_code = coordinator.wait(timeout=args.timeout + 60.0)
    except subprocess.TimeoutExpired:
        (session / "STOP.txt").write_text("coordinator timeout\n", encoding="utf-8")
        coordinator.terminate()
        coordinator_code = coordinator.wait(timeout=10.0)
    finally:
        if not (session / "STOP.txt").exists():
            (session / "STOP.txt").write_text("session complete\n", encoding="utf-8")
        rtl_code = stop_process(rtl)
        mame_code = stop_process(mame)
        for stream in (coordinator_log, rtl_out, rtl_err, mame_out, mame_err):
            stream.close()

    audio_receipt = {
        "schema": "s24-lockstep-audio-v1",
        "sample_contract": {
            "sample_rate": 48000,
            "channels": 2,
            "format": "signed 16-bit little-endian PCM",
            "rtl": "48.317307 MHz host mix resampled by WavWriter",
            "mame": "MAME sound mixer wavwrite at -samplerate 48000",
        },
        "rtl": wav_receipt(rtl_audio_path),
        "mame": wav_receipt(mame_audio_path),
        "comparison": "capture-only; sample alignment and analogue response remain separate gates",
    }
    write_json(session / "audio_receipt.json", audio_receipt)

    metrics_path = session / "metrics.jsonl"
    records = [json.loads(line) for line in
               metrics_path.read_text(encoding="utf-8").splitlines() if line] \
        if metrics_path.is_file() else []
    compared = len(records)
    protocol_completion = coordinator_code == 0 and compared == args.frames
    pixel_exact_completion = protocol_completion and all(
        record["pixels"]["different_pixels"] == 0 for record in records
    )
    close_frames = sum(
        record["pixels"]["exact_ratio"] >= 0.98 and
        record["pixels"]["rgb_mae"] <= 2.0 for record in records
    )
    completion = {
        "requested_count": args.frames, "compared_count": compared,
        "start_token": 1, "end_token": compared if compared else None,
        "protocol_completion": protocol_completion,
        "pixel_exact_completion": pixel_exact_completion,
        "exact_completion": pixel_exact_completion,
        "close_frame_count_98pct_mae2": close_frames,
        "exit_codes": {"coordinator": coordinator_code, "rtl": rtl_code,
                       "mame": mame_code},
        "windows_closed": rtl_code is not None and mame_code is not None,
        "stop_reason": "adaptive budget completed" if coordinator_code == 0
                       else "session failure",
    }
    write_json(session / "completion.json", completion)
    coverage = {
        "pixels": {"rtl": "compared", "mame": "compared"},
        "cpu_pc": {"rtl": "captured_only", "mame": "captured_only"},
        "input": {"rtl": "compared neutral-v1", "mame": "compared neutral-v1"},
        "bus_events": {"rtl": "compared", "mame": "compared",
                       "reason": "normalized low-volume IO, YM2151, mixer, IRQ, and bank/FRC/magic control traffic"},
        "bulk_device_bus": {"rtl": "focused_tests_only", "mame": "missing_evidence",
                            "devices": ["shared_ram", "palette", "tile", "character", "sprite", "fdc"],
                            "reason": "MAME address-space taps do not expose handler-internal accesses consistently; one-sided RTL traffic is not treated as differential proof"},
        "audio": {
            "rtl": audio_receipt["rtl"].get("status", "unknown"),
            "mame": audio_receipt["mame"].get("status", "unknown"),
            "receipt": str((session / "audio_receipt.json").resolve()),
            "comparison": "capture-only; no equivalence verdict",
        },
    }
    write_json(session / "coverage_ledger.json", coverage)
    if protocol_completion:
        completion["retention"] = compact_successful_session(
            session, records, args.retain_stride
        )
        write_json(session / "completion.json", completion)
    print(f"S24_LOCKSTEP_SESSION={session}")
    print(json.dumps(completion, sort_keys=True))
    return 0 if completion["protocol_completion"] else 1


if __name__ == "__main__":
    raise SystemExit(main())
