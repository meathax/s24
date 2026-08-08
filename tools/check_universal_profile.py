#!/usr/bin/env python3
"""Verify that every local System 24 set targets one universal s24.rbf."""

from __future__ import annotations

import argparse
import pathlib
import sys
import xml.etree.ElementTree as ET

import check_mame_pin
import gen_mra
import run_game_matrix


REQUIRED_RTL = frozenset((
    "rtl/s24_core.sv",
    "rtl/s24_board_arbiter.sv",
    "rtl/io/s24_inputs.sv",
    "rtl/io/s24_analog.sv",
    "rtl/prot/s24_magic_latch.sv",
    "rtl/fdc/s24_fdc.sv",
    "rtl/cpu/s24_fd1094.sv",
))

# Release-build settings. The fitter effort/router/physical-synthesis entries
# were raised from the light-load development policy: at 86% ALM / 86% RAM the
# router reported severe congestion under FAST FIT and left hold violations on
# the s24_sdram_cdc payload paths. None of these affect hardware behaviour --
# they trade compile time for placement/routing quality.
#
# COMPRESSION_MODE must be ON: the DE10-nano HPS configuration path expects a
# compressed Cyclone V bitstream, and every shipping MiSTer core is built this
# way. An uncompressed RBF can assemble and report clean yet fail to configure
# the fabric on the real device, which presents as a black screen with no
# diagnostic pointing at the bitstream.
REQUIRED_QSF_SETTINGS = frozenset((
    'set_global_assignment -name NUM_PARALLEL_PROCESSORS 8',
    'set_global_assignment -name FITTER_EFFORT "STANDARD FIT"',
    'set_global_assignment -name ROUTER_TIMING_OPTIMIZATION_LEVEL MAXIMUM',
    'set_global_assignment -name PHYSICAL_SYNTHESIS_COMBO_LOGIC ON',
    'set_global_assignment -name PHYSICAL_SYNTHESIS_REGISTER_DUPLICATION ON',
    'set_global_assignment -name SMART_RECOMPILE ON',
    'set_global_assignment -name SAVE_DISK_SPACE OFF',
    'set_global_assignment -name COMPRESSION_MODE ON',
))


def required_text(
    node: ET.Element | None,
    label: str,
    path: pathlib.Path,
) -> str:
    if node is None or node.text is None:
        raise ValueError(f"{path}: missing {label}")
    return node.text.strip()


def validate_mras(mra_dir: pathlib.Path) -> None:
    expected = {game.setname: game for game in gen_mra.GAMES}
    actual: dict[str, tuple[pathlib.Path, ET.Element]] = {}
    for path in mra_dir.glob("*.mra"):
        root = ET.parse(path).getroot()
        setname = required_text(root.find("setname"), "setname", path)
        if setname in actual:
            raise ValueError(f"duplicate MRA setname {setname}")
        actual[setname] = (path, root)

    missing = sorted(expected.keys() - actual.keys())
    extra = sorted(actual.keys() - expected.keys())
    if missing or extra:
        raise ValueError(f"MRA set mismatch: missing={missing}, extra={extra}")

    for setname, game in expected.items():
        path, root = actual[setname]
        if required_text(root.find("rbf"), "rbf", path) != gen_mra.RBF:
            raise ValueError(f"{path}: does not target {gen_mra.RBF}.rbf")
        descriptor_node = root.find("./rom[@index='0']/part")
        descriptor = bytes.fromhex(required_text(
            descriptor_node, "descriptor", path
        ))
        if descriptor != gen_mra.descriptor_bytes(game):
            raise ValueError(f"{path}: stale universal descriptor")

        indexes = {
            int(node.attrib["index"]) for node in root.findall("rom")
        }
        expected_indexes = {0, 1}
        if game.romboard:
            expected_indexes.add(2)
        if game.floppy:
            expected_indexes.add(3)
        if game.key:
            expected_indexes.add(4)
        if indexes != expected_indexes:
            raise ValueError(
                f"{path}: ROM indexes {sorted(indexes)} != "
                f"{sorted(expected_indexes)}"
            )
        switches = root.find("switches")
        if switches is None or switches.attrib.get("default") != game.dsw:
            raise ValueError(f"{path}: stale DIP defaults")
        controls = gen_mra.mra_controls_for(game)
        if required_text(root.find("joystick"), "joystick", path) != controls.joystick:
            raise ValueError(f"{path}: stale joystick metadata")
        buttons = root.find("buttons")
        expected_names = ",".join(controls.names)
        expected_defaults = ",".join(controls.defaults)
        if buttons is None or (
                buttons.attrib.get("names") != expected_names or
                buttons.attrib.get("default") != expected_defaults):
            raise ValueError(f"{path}: stale button metadata")


def validate_single_build(repo: pathlib.Path) -> None:
    qip = (repo / "files.qip").read_text(encoding="utf-8")
    missing_rtl = sorted(path for path in REQUIRED_RTL if path not in qip)
    if missing_rtl:
        raise ValueError(f"files.qip omits universal RTL: {missing_rtl}")

    qsf_lines = {
        line.strip() for line in
        (repo / "Arcade-SegaSystem24.qsf").read_text(
            encoding="utf-8"
        ).splitlines()
    }
    missing_settings = sorted(REQUIRED_QSF_SETTINGS - qsf_lines)
    if missing_settings:
        raise ValueError(f"QSF policy mismatch: {missing_settings}")


def validate_gameplay_profiles() -> None:
    parents = {game.setname for game in gen_mra.GAMES if not game.parent}
    misplaced = sorted(run_game_matrix.GAMEPLAY_PROFILES.keys() - parents)
    if misplaced:
        raise ValueError(
            f"gameplay schedules must be owned by parent profiles: {misplaced}"
        )
    for parent, profile in run_game_matrix.GAMEPLAY_PROFILES.items():
        if not (0 < profile.checkpoint_frame <= profile.coin_frame
                < profile.capture_frame):
            raise ValueError(f"{parent}: invalid gameplay frame ordering")
        if profile.start_frame and not (
                profile.coin_frame < profile.start_frame
                < profile.capture_frame):
            raise ValueError(f"{parent}: invalid gameplay start frame")
        if profile.action_frame and not (
                max(profile.coin_frame, profile.start_frame) <= profile.action_frame
                < profile.capture_frame):
            raise ValueError(f"{parent}: invalid gameplay action frame")
        if profile.pedal_frame and not (
                profile.coin_frame <= profile.pedal_frame
                < profile.pedal_end_frame <= profile.capture_frame + 1
                and 0 < profile.pedal_value <= 255):
            raise ValueError(f"{parent}: invalid gameplay pedal packet")
        if profile.input_frames <= 0:
            raise ValueError(f"{parent}: gameplay input pulse must be nonzero")
    for game in gen_mra.GAMES:
        parent = game.parent or game.setname
        if parent in run_game_matrix.GAMEPLAY_PROFILES and (
                run_game_matrix.gameplay_profile(game)
                is not run_game_matrix.GAMEPLAY_PROFILES[parent]):
            raise ValueError(
                f"{game.setname}: does not inherit {parent}'s global gameplay profile"
            )


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--repo", type=pathlib.Path,
                        default=pathlib.Path("."))
    parser.add_argument("--mra-dir", type=pathlib.Path,
                        default=pathlib.Path("mra"))
    parser.add_argument(
        "--mame-source", type=pathlib.Path,
        default=pathlib.Path("D:/Arcade/AI/mame289"),
    )
    parser.add_argument(
        "--mame-exe", type=pathlib.Path,
        default=pathlib.Path("D:/Arcade/AI/mame/mame.exe"),
    )
    args = parser.parse_args()
    repo = args.repo.resolve()
    mra_dir = args.mra_dir
    if not mra_dir.is_absolute():
        mra_dir = repo / mra_dir

    gen_mra.validate_game_contracts()
    validate_mras(mra_dir)
    validate_single_build(repo)
    validate_gameplay_profiles()
    mame_head = check_mame_pin.validate(
        args.mame_source.resolve(), args.mame_exe.resolve()
    )
    profiles = {gen_mra.descriptor_bytes(game) for game in gen_mra.ALL_GAMES}
    feature_union = 0
    for game in gen_mra.ALL_GAMES:
        feature_union |= game.flags
    print(
        f"PASS universal {gen_mra.RBF}.rbf profile: "
        f"{len(gen_mra.GAMES)} local / {len(gen_mra.ALL_GAMES)} MAME sets, "
        f"{len(profiles)} runtime descriptors, "
        f"feature mask {feature_union:#04x}, MAME source {mame_head}"
    )


if __name__ == "__main__":
    try:
        main()
    except (OSError, ValueError, ET.ParseError) as error:
        print(f"FAIL universal profile: {error}", file=sys.stderr)
        raise SystemExit(1)
