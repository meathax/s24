#!/usr/bin/env python3
"""Verify the pinned MAME executable and System 24 behavioral source files."""

from __future__ import annotations

import argparse
import hashlib
import pathlib
import re
import subprocess
import sys


PINNED_COMMIT = "affe701f9210d003d2cc5eff311f94053afa679b"
PINNED_VERSION = "0.288 (mame0288)"
# MAME sets covered by the local and optional source contracts. Removed local
# clones are intentionally not part of this profile pin.
DRIVER_SETS = frozenset((
    "hotrod", "sspirits", "gground", "crkdown", "roughrac", "bnzabros",
    "qrouka", "quizmeku", "mahmajn", "mahmajn2", "sspiritj",
    "sspirtfc", "qsww", "dcclubfd",
))
PINNED_FILES = {
    "src/mame/sega/segas24.cpp":
        "EF5C780EDB731233530729E31E832F6ADF4575EA931D6ADD023DAF39D5756DB6",
    "src/mame/sega/segaic24.cpp":
        "D37DEC05ACE5470719336704E7706E4800DA73854A0783E169F3BED534B48EE7",
    "src/mame/sega/segaic24.h":
        "342CC01A077F13371ADCF8ECC12FC8D02C55851F0BFEE634E9A53F8EF3BDAF13",
    "src/mame/sega/315_5296.cpp":
        "FCB77693B9E19B7BE057EAB98910275CD5E1B0502CE56EB9A46D435D7692FF92",
    "src/mame/sega/315_5296.h":
        "B281BF2183BECBE278E6275574FF3E0F565EA666184D31FD150FA8FE424C8905",
    "src/mame/sega/fd1094.cpp":
        "41B023A16437E9676517F8D56EF1D4C67DCFE8544B37C36B9D1022E23CEC022F",
    "src/mame/sega/fd1094.h":
        "E356DDB8FA6224C1506818A3B6325E37DEDD779F6FAC36AF47B4D0B5E3AA0262",
    "src/devices/machine/upd4701.cpp":
        "3CBA4E4FCD064F14B87566C5C2C9CBB2CBB10A06FAAD6774777E9440E9AB2D28",
    "src/devices/machine/upd4701.h":
        "3D97A1C120234BE2D3360407B50FD9C47F6B86B7822219EC7364AD9E46875F2B",
    "src/devices/machine/msm6253.cpp":
        "F344C7BDCFE22AB10776D084891EFCD5CF5F3C543B4BE2A929E2BDFA4DF80617",
    "src/devices/machine/msm6253.h":
        "F31407D0A84E566964E09801B454A10825234574CBBE82D119025EAEFA01B4F1",
    "src/devices/sound/ymopm.cpp":
        "08DE3298A57A21B6320DDB28E371676C352EADC4D963B417AD2AD7F1DCB2F45E",
    "src/devices/sound/ymopm.h":
        "4CEE97C0B044B499E5458075E0199DB7619FF89C21F2F2E3750D9735FBD75B48",
    "src/mame/sega/segaybd.cpp":
        "360782A46C30E5A2B9E2853DE78E2D5638D0DEAECE55CE051BDAF76907C99B29",
    "src/mame/sega/segaic16.cpp":
        "07B8C573ADBC302691597B2BA2F4BF7E39AFB80B39F47016FB29F72CCE4EA496",
    "src/emu/addrmap.cpp":
        "89F6B6EAEC174EB2E64AE2DAC48D24EC07052D5E536DBB369B3B1D3ECB05C9C3",
    "src/emu/emumem_aspace.cpp":
        "C6AC144F181AB0DD2B38CFCDEF6C97D4A4D30982C8AB8432B536C4062F971089",
}


def sha256(path: pathlib.Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as stream:
        for block in iter(lambda: stream.read(1024 * 1024), b""):
            digest.update(block)
    return digest.hexdigest().upper()


def git_head(source: pathlib.Path) -> str:
    # Git config values treat backslashes as escapes on Windows.  Use the
    # canonical forward-slash spelling for the one-command safe-directory
    # exception while retaining pathlib paths for file access.
    safe_source = source.as_posix()
    result = subprocess.run(
        ["git", "-c", f"safe.directory={safe_source}", "-C", str(source),
         "rev-parse", "HEAD"],
        capture_output=True, text=True,
    )
    if result.returncode == 0:
        return result.stdout.strip()

    # The user-maintained mame289 tree may be a source snapshot without its
    # .git directory. Do not weaken the pin: identify that snapshot by an
    # aggregate of every individually validated behavioral file instead.
    digest = hashlib.sha256()
    for relative in sorted(PINNED_FILES):
        digest.update(relative.encode("utf-8"))
        digest.update(b"\0")
        digest.update(sha256(source / relative).encode("ascii"))
        digest.update(b"\n")
    return f"snapshot:{digest.hexdigest()}"


def executable_version(executable: pathlib.Path) -> str:
    result = subprocess.run(
        [str(executable), "-version"],
        check=True, capture_output=True, text=True,
    )
    return result.stdout.strip().splitlines()[0]


def validate(source: pathlib.Path, executable: pathlib.Path) -> str:
    """Validate the pin and return the source checkout HEAD."""
    head = git_head(source)
    version = executable_version(executable)
    if version != PINNED_VERSION:
        raise ValueError(f"MAME executable is not pinned: {version!r}")
    driver_text = (source / "src/mame/sega/segas24.cpp").read_text(
        encoding="utf-8"
    )
    driver_sets = set(re.findall(
        r"\bGAME\(\s*\d+\s*,\s*([A-Za-z0-9_]+)", driver_text
    ))
    missing_sets = sorted(DRIVER_SETS - driver_sets)
    if missing_sets:
        raise ValueError(f"segas24.cpp omits profile sets: {missing_sets}")
    for relative, expected in PINNED_FILES.items():
        path = source / relative
        actual = sha256(path)
        if actual != expected:
            raise ValueError(
                f"{path}: SHA-256 {actual} != pinned {expected}"
            )
    return head


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--mame-source", type=pathlib.Path,
        default=pathlib.Path("D:/Arcade/AI/mame289"),
    )
    parser.add_argument(
        "--mame-exe", type=pathlib.Path,
        default=pathlib.Path("D:/Arcade/AI/mame/mame.exe"),
    )
    args = parser.parse_args()
    source = args.mame_source.resolve()
    executable = args.mame_exe.resolve()

    head = validate(source, executable)
    print(
        "PASS MAME behavioral pin: executable 0.288, "
        f"{len(PINNED_FILES)} files match {PINNED_COMMIT}, "
        f"{len(DRIVER_SETS)} driver sets, "
        f"source identity {head}"
    )


if __name__ == "__main__":
    try:
        main()
    except (OSError, subprocess.CalledProcessError, ValueError) as error:
        print(f"FAIL MAME behavioral pin: {error}", file=sys.stderr)
        raise SystemExit(1)
