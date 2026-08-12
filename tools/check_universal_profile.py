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
    "Arcade-SegaSystem24.sv",
    "rtl/s24_core.sv",
    "rtl/s24_board_arbiter.sv",
    "rtl/io/s24_inputs.sv",
    "rtl/io/s24_analog.sv",
    "rtl/audio/s24_opm.sv",
    "rtl/audio/ikaopm/IKAOPM.qip",
    "rtl/io/s24_wheel_input.sv",
    "rtl/io/s24_pedal_merge.sv",
    "rtl/prot/s24_magic_latch.sv",
    "rtl/prot/s24_romboard_epld.sv",
    "rtl/fdc/s24_fdc.sv",
    "rtl/mem/s24_rom_loader.sv",
    "rtl/mem/sdram.sv",
    "rtl/cpu/s24_fd1094.sv",
    "rtl/cpu/s24_a_opcache.sv",
    "rtl/cpu/s24_b_opcache.sv",
    "rtl/crt_adjust.sv",
    "rtl/video/s24_sprite.sv",
))

CURATED_MRA_FILENAMES = {
    "bnzabros": "Bonanza Bros.mra",
    "crkdown": "Crack Down.mra",
    "gground": "Gain Ground.mra",
    "hotrod": "Hot Rod (World, 3 Players, Turbo).mra",
    "roughrac": "Rough Racer.mra",
    "sspirits": "Scramble Spirits.mra",
}

# Hardware contracts behind the three visible fixes that exposed stale RBF
# packaging.  These checks deliberately name behavior, not commit hashes, so
# they survive rebases while preventing a future manifest/profile cleanup from
# silently building an older implementation.
REQUIRED_FIX_CONTRACTS = {
    "rtl/video/s24_sprite.sv": (
        "localparam int STACK_DEPTH = 4096;",  # SSpirits long sprite lists
        "logic [LINE_BANKS-1:0] bank_filling;",  # no invisible fill/display race
        "{1'b0,bank_line_y[reclaim_scan]}<next_display_line",  # scoreboard/banding
        "if(active_list_valid && !line_boundary[render_next_target]) begin",  # Hot Rod list budget
        "end else if(descriptor_zoomy_step==9'h040) begin",  # Hot Rod 1:1 row mapping
        "state<=S_X_EMIT4;",  # four-pixel 1:1 throughput path
    ),
    "rtl/mem/sdram.sv": (
        "if (p2_pend)                 read_grant = 3'd2;",  # Crack Down hand
    ),
    "Arcade-SegaSystem24.sv": (
        '"P1,CRT Adjust;"',
        '"H0O[22:20],Analog Steering Speed,100%,25%,50%,75%,125%,150%,175%;"',
        '"H0O[24:23],Steering Response,Normal,Fine,Fast;"',
        ".status_menumask({13'd0,~descriptor.video_profile[0],~status[101],~wheel_controls})",
        ".flip(descriptor.video_profile[1] | video_flip)",
    ),
}

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
    if set(CURATED_MRA_FILENAMES) != set(expected):
        raise ValueError("curated MRA filename map does not match GAMES")
    for expected_setname, filename in CURATED_MRA_FILENAMES.items():
        path = mra_dir / filename
        if not path.is_file():
            raise ValueError(f"missing curated MRA {filename}")
        root = ET.parse(path).getroot()
        setname = required_text(root.find("setname"), "setname", path)
        if setname != expected_setname:
            raise ValueError(
                f"{path}: setname {setname} != {expected_setname}"
            )
        if setname in actual:
            raise ValueError(f"duplicate MRA setname {setname}")
        actual[setname] = (path, root)

    missing = sorted(expected.keys() - actual.keys())
    if missing:
        raise ValueError(f"MRA set mismatch: missing={missing}")

    for setname, game in expected.items():
        path, root = actual[setname]
        if root.tag != "misterromdescription":
            raise ValueError(f"{path}: invalid MRA root {root.tag}")
        for field in ("homebrew", "bootleg"):
            value = required_text(root.find(field), field, path)
            if value not in {"no", "yes"}:
                raise ValueError(f"{path}: {field} must be no or yes")
        if required_text(root.find("resolution"), "resolution", path) != "15kHz":
            raise ValueError(f"{path}: resolution must be 15kHz")
        if required_text(root.find("rbf"), "rbf", path) != gen_mra.RBF:
            raise ValueError(f"{path}: does not target {gen_mra.RBF}.rbf")
        typed_roms = [node.attrib.get("index", "?") for node in root.findall("rom")
                      if "type" in node.attrib]
        if typed_roms:
            raise ValueError(
                f"{path}: deprecated ROM type placeholder on indexes {typed_roms}"
            )
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

    # The supported Japan clone is curated outside the parent-only release
    # matrix. It must retain the parent's hardware descriptor and controls.
    japan_path = mra_dir / "Hot Rod (Japan, 4 Players).mra"
    japan_root = ET.parse(japan_path).getroot()
    if required_text(japan_root.find("setname"), "setname", japan_path) != "hotrodj":
        raise ValueError(f"{japan_path}: stale setname")
    if required_text(japan_root.find("parent"), "parent", japan_path) != "hotrod":
        raise ValueError(f"{japan_path}: stale parent")
    hotrod = expected["hotrod"]
    japan_descriptor = bytes.fromhex(required_text(
        japan_root.find("./rom[@index='0']/part"), "descriptor", japan_path
    ))
    if japan_descriptor != gen_mra.descriptor_bytes(hotrod):
        raise ValueError(f"{japan_path}: stale Hot Rod descriptor")
    hotrod_controls = gen_mra.mra_controls_for(hotrod)
    if required_text(japan_root.find("joystick"), "joystick", japan_path) != \
            hotrod_controls.joystick:
        raise ValueError(f"{japan_path}: stale Hot Rod joystick metadata")
    japan_buttons = japan_root.find("buttons")
    if japan_buttons is None or (
            japan_buttons.attrib.get("names") != ",".join(hotrod_controls.names) or
            japan_buttons.attrib.get("default") != ",".join(hotrod_controls.defaults)):
        raise ValueError(f"{japan_path}: stale Hot Rod button metadata")


def validate_single_build(repo: pathlib.Path) -> None:
    qip = (repo / "files.qip").read_text(encoding="utf-8")
    missing_rtl = sorted(path for path in REQUIRED_RTL if path not in qip)
    if missing_rtl:
        raise ValueError(f"files.qip omits universal RTL: {missing_rtl}")

    forbidden_controls = {
        "Arcade-SegaSystem24.sv": ("Steering Sensitivity", "status[19:17]",
                                    "stick_sensitivity"),
        "rtl/io/s24_wheel_input.sv": ("stick_sensitivity",),
    }
    for relative_path, forbidden_fragments in forbidden_controls.items():
        source = (repo / relative_path).read_text(encoding="utf-8")
        present = [fragment for fragment in forbidden_fragments
                   if fragment in source]
        if present:
            raise ValueError(
                f"{relative_path}: removed steering controls returned: {present}"
            )

    for relative_path, required_fragments in REQUIRED_FIX_CONTRACTS.items():
        source = (repo / relative_path).read_text(encoding="utf-8")
        missing_fragments = [
            fragment for fragment in required_fragments if fragment not in source
        ]
        if missing_fragments:
            raise ValueError(
                f"{relative_path}: missing universal fix contracts: "
                f"{missing_fragments}"
            )

    qsf_lines = {
        line.strip() for line in
        (repo / "Arcade-SegaSystem24.qsf").read_text(
            encoding="utf-8"
        ).splitlines()
    }
    missing_settings = sorted(REQUIRED_QSF_SETTINGS - qsf_lines)
    if missing_settings:
        raise ValueError(f"QSF policy mismatch: {missing_settings}")
    if "source files.qip" not in qsf_lines:
        raise ValueError("QSF does not source the universal files.qip manifest")

    duplicate_core_sources = sorted(
        line for line in qsf_lines
        if line.startswith("set_global_assignment -name SYSTEMVERILOG_FILE rtl/")
    )
    if duplicate_core_sources:
        raise ValueError(
            "QSF duplicates core RTL outside files.qip: "
            f"{duplicate_core_sources}"
        )


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
                        default=pathlib.Path("releases"),
                        help="curated release MRA directory (default: releases)")
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
