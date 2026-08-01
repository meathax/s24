#!/usr/bin/env python3
"""Verify that every local System 24 set targets one universal s24.rbf."""

from __future__ import annotations

import argparse
import pathlib
import sys
import xml.etree.ElementTree as ET

import check_mame_pin
import gen_mra


REQUIRED_RTL = frozenset((
    "rtl/s24_core.sv",
    "rtl/io/s24_inputs.sv",
    "rtl/io/s24_analog.sv",
    "rtl/prot/s24_magic_latch.sv",
    "rtl/fdc/s24_fdc.sv",
    "rtl/cpu/s24_fd1094.sv",
))

REQUIRED_QSF_SETTINGS = frozenset((
    'set_global_assignment -name NUM_PARALLEL_PROCESSORS 6',
    'set_global_assignment -name FITTER_EFFORT "FAST FIT"',
    'set_global_assignment -name ROUTER_TIMING_OPTIMIZATION_LEVEL NORMAL',
    'set_global_assignment -name PHYSICAL_SYNTHESIS_COMBO_LOGIC OFF',
    'set_global_assignment -name PHYSICAL_SYNTHESIS_REGISTER_DUPLICATION OFF',
    'set_global_assignment -name SMART_RECOMPILE ON',
    'set_global_assignment -name SAVE_DISK_SPACE OFF',
    'set_global_assignment -name COMPRESSION_MODE OFF',
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


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--repo", type=pathlib.Path,
                        default=pathlib.Path("."))
    parser.add_argument("--mra-dir", type=pathlib.Path,
                        default=pathlib.Path("mra"))
    parser.add_argument(
        "--mame-source", type=pathlib.Path,
        default=pathlib.Path("D:/Arcade/AI/MAMESOURCE/mame"),
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
        f"feature mask {feature_union:#04x}, MAME HEAD {mame_head}"
    )


if __name__ == "__main__":
    try:
        main()
    except (OSError, ValueError, ET.ParseError) as error:
        print(f"FAIL universal profile: {error}", file=sys.stderr)
        raise SystemExit(1)
