#!/usr/bin/env python3
"""Reject stale or split System 24 RBF release artifacts."""

from __future__ import annotations

import hashlib
import pathlib
import subprocess
import sys

import check_universal_profile


HARDWARE_PATHS = (
    "Arcade-SegaSystem24.sv",
    "Arcade-SegaSystem24.qsf",
    "Arcade-SegaSystem24.sdc",
    "files.qip",
    "rtl",
)


def git(repo: pathlib.Path, *args: str) -> str:
    result = subprocess.run(
        ("git", *args), cwd=repo, check=True,
        stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True,
    )
    return result.stdout.strip()


def sha256(path: pathlib.Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as stream:
        for chunk in iter(lambda: stream.read(1024 * 1024), b""):
            digest.update(chunk)
    return digest.hexdigest()


def release_paths(repo: pathlib.Path) -> list[pathlib.Path]:
    dated = sorted((repo / "releases").glob("Arcade-SegaSystem24_*.rbf"))
    if not dated:
        raise ValueError("no dated releases/Arcade-SegaSystem24_*.rbf exists")
    return [
        repo / "output_files" / "Arcade-SegaSystem24.rbf",
        dated[-1],
        repo / "release_mister" / "_Arcade" / "s24.rbf",
    ]


def main() -> None:
    repo = pathlib.Path(__file__).resolve().parent.parent
    check_universal_profile.validate_single_build(repo)

    dirty = git(repo, "status", "--porcelain", "--", *HARDWARE_PATHS)
    if dirty:
        raise ValueError(
            "hardware profile has uncommitted changes; build and release from "
            f"one recorded tree:\n{dirty}"
        )

    head = git(repo, "rev-parse", "--short=12", "HEAD")
    hardware_commit_time = int(git(
        repo, "log", "-1", "--format=%ct", "--", *HARDWARE_PATHS
    ))

    paths = release_paths(repo)
    missing = [str(path) for path in paths if not path.is_file()]
    if missing:
        raise ValueError(f"missing RBF release artifacts: {missing}")

    hashes = {path: sha256(path) for path in paths}
    if len(set(hashes.values())) != 1:
        details = ", ".join(
            f"{path.relative_to(repo)}={digest[:12]}"
            for path, digest in hashes.items()
        )
        raise ValueError(f"RBF release artifacts are from different builds: {details}")

    stale = [
        str(path.relative_to(repo)) for path in paths
        if path.stat().st_mtime < hardware_commit_time
    ]
    if stale:
        raise ValueError(
            f"RBF artifacts predate hardware HEAD {head}: {stale}"
        )

    path = paths[0]
    if not 3_000_000 <= path.stat().st_size <= 7_000_000:
        raise ValueError(
            f"unexpected RBF size {path.stat().st_size}; verify compression"
        )

    print(
        "PASS one universal RBF release: "
        f"HEAD {head}, sha256 {hashes[path]}, {path.stat().st_size} bytes"
    )


if __name__ == "__main__":
    try:
        main()
    except (OSError, ValueError, subprocess.CalledProcessError) as error:
        print(f"FAIL RBF release: {error}", file=sys.stderr)
        raise SystemExit(1)
