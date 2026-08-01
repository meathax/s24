#!/usr/bin/env python3
"""Report the authoritative target-7 status for every universal-profile set."""

from __future__ import annotations

import argparse
import pathlib
import re
import sys

import gen_mra


PASS_RE = re.compile(
    r"^PASS tb_gground_boot (?P<set>\S+) game milestone 7\r?$",
    re.MULTILINE,
)
RESULT_RE = re.compile(r"\bexit_code=(?P<code>-?\d+)")


def read_text(path: pathlib.Path) -> str:
    """Read both legacy UTF-16LE PowerShell logs and current UTF-8 logs."""
    raw = path.read_bytes()
    if raw.startswith((b"\xff\xfe", b"\xfe\xff")):
        return raw.decode("utf-16", errors="replace")
    if b"\x00" in raw[:4096]:
        return raw.decode("utf-16-le", errors="replace")
    return raw.decode("utf-8", errors="replace")


def inspect_set(setname: str, captures: pathlib.Path) -> tuple[str, str]:
    result_path = captures / f"{setname}-target7.result"
    log_path = captures / f"{setname}-target7.log"
    result = read_text(result_path) if result_path.is_file() else ""
    log = read_text(log_path) if log_path.is_file() else ""

    pass_match = PASS_RE.search(log)
    if pass_match and pass_match.group("set") == setname:
        code_match = RESULT_RE.search(result)
        if code_match and code_match.group("code") == "0":
            return "PASS", "exit_code=0"

    if "pending=1" in result and "exit_code=" not in result:
        return "RUNNING", "pending=1"
    code_match = RESULT_RE.search(result)
    if code_match:
        return "FAIL", f"exit_code={code_match.group('code')}"
    if result or log:
        return "INCOMPLETE", "evidence present"
    return "MISSING", "no target-7 result"


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--captures",
        type=pathlib.Path,
        default=pathlib.Path("verif/captures"),
        help="directory containing <set>-target7.result and .log files",
    )
    parser.add_argument(
        "--strict",
        action="store_true",
        help="return nonzero unless every universal-profile set passes",
    )
    args = parser.parse_args()

    passed = 0
    for game in gen_mra.GAMES:
        status, detail = inspect_set(game.setname, args.captures)
        if status == "PASS":
            passed += 1
        print(f"{game.setname:10} {status:10} {detail}")

    total = len(gen_mra.GAMES)
    print(f"attract coverage: {passed}/{total}")
    return 0 if not args.strict or passed == total else 1


if __name__ == "__main__":
    sys.exit(main())
