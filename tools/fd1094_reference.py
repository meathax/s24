#!/usr/bin/env python3
"""Small BSD-derived FD1094 oracle for RTL differential tests.

The transform is kept structurally close to MAME's fd1094.cpp, but uses an
explicit Python bitswap helper so SystemVerilog concatenation mistakes are
caught by an independent implementation.
"""
from __future__ import annotations

import argparse
import zipfile
from pathlib import Path


def bit(value: int, number: int) -> int:
    return (value >> number) & 1


def bitswap(value: int, *order: int) -> int:
    result = 0
    for output_bit, input_bit in zip(range(15, -1, -1), order):
        result |= bit(value, input_bit) << output_bit
    return result


def decrypt_unmasked(key: bytes, address: int, value: int, state: int, vector: bool):
    g1, g2, g3 = key[1], key[2], key[3]
    changes = (
        (0x04, 0x80, 0x80), (0x01, 0x10, 0x01),
        (0x80, 0x40, 0x04), (0x20, 0x02, 0x20),
        (0x42, 0x08, 0x00), (0x08, 0x00, 0x18),
        (0x10, 0x24, 0x00), (0x00, 0x01, 0x42),
    )
    for state_bit, (x1, x2, x3) in enumerate(changes):
        if bit(state, state_bit):
            g1, g2, g3 = g1 ^ x1, g2 ^ x2, g3 ^ x3

    key_address = ((address & 0x1FFF) | 0x1000) if (
        (address & 0x0FFC) == 0 and address >= 4) else (address & 0x1FFF)
    main = key[key_address]
    key_f = bit(main, 7 if address & 0x1000 else 6)
    if vector:
        if address <= 3: g3 = 0
        if address <= 2: g2 = 0
        if address <= 1: g1 = 0
        if address <= 1: key_f = 0

    gx0, gx1, gs2 = 1 ^ bit(g1, 5), 1 ^ bit(g1, 2), 1 ^ bit(g1, 0)
    gs0a, gs0b = 1 ^ bit(g2, 5), 1 ^ bit(g2, 2)
    gs3, gs1, gs4 = 1 ^ bit(g3, 6), 1 ^ bit(g3, 4), 1 ^ bit(g3, 2)
    k0a, k0b, k0c = bit(main, 0)^bit(g3, 1), bit(main, 0)^bit(g1, 7), bit(main, 0)^bit(g1, 1)
    k1a, k1b = bit(main, 1)^bit(g2, 7), bit(main, 1)^bit(g1, 3)
    k2a, k2b = bit(main, 2)^bit(g3, 7), bit(main, 2)^bit(g1, 4)
    k3a, k3b = bit(main, 3)^bit(g2, 0), bit(main, 3)^bit(g3, 3)
    k4a, k4b = bit(main, 4)^bit(g2, 3), bit(main, 4)^bit(g3, 0)
    k5a, k5b = bit(main, 5)^bit(g3, 5), bit(main, 5)^bit(g1, 6)
    k6a, k6b = bit(main, 6)^bit(g2, 1), bit(main, 6)^bit(g2, 6)
    k7a = bit(main, 7)^bit(g2, 4)

    if value & 0x8000:
        value = bitswap(value,15,9,10,13,3,12,0,14,6,5,2,11,8,1,4,7)
        if not gx1 and not value & 0x0800: value ^= 0x3002
        if not value & 0x0020: value ^= 0x0044
        if not k1b and not value & 0x0400: value ^= 0x0890
        if not gs2 and not k0c: value ^= 0x0308
        value ^= 0x6561
        if not k2b: value = bitswap(value,15,10,13,12,11,14,9,8,7,6,0,4,3,2,1,5)
    if value & 0x4000:
        value = bitswap(value,13,14,7,0,8,6,4,2,1,15,3,11,12,10,5,9)
        if not gx0 and value & 0x0010: value ^= 0x0468
        if not k3a and value & 0x0100: value ^= 0x0081
        if not k6a and value & 0x0004: value ^= 0x0100
        if not k5b and not k0b: value ^= 0x3012
        value ^= 0x3523
        if not gs0b: value = bitswap(value,2,14,13,12,9,10,11,8,7,6,5,4,3,15,1,0)
    if value & 0x2000:
        value = bitswap(value,10,2,13,7,8,0,3,14,6,15,1,11,9,4,5,12)
        if not k4a and value & 0x0800: value ^= 0x010C
        if not k1a and value & 0x0080: value ^= 0x1000
        if not k7a and value & 0x0400: value ^= 0x0A21
        if not k4b and not k0a: value ^= 0x0080
        if not gs0a and not k6b: value ^= 0xC000
        value ^= 0x99A5
        if not k5b: value = bitswap(value,15,14,13,12,11,1,9,8,7,10,5,6,3,2,4,0)
    if value & 0xE000:
        value = bitswap(value,15,13,14,5,6,0,9,10,4,11,1,2,12,3,7,8) ^ 0x17FF
        if not gs4: value = bitswap(value,15,14,13,6,11,10,9,5,7,12,8,4,3,2,1,0)
        if not gs3: value = bitswap(value,13,15,14,12,11,10,9,8,7,6,5,4,3,2,1,0)
        if not gs2: value = bitswap(value,15,14,13,12,11,2,9,8,10,6,5,4,3,0,1,7)
        if not k3b: value = bitswap(value,15,14,13,12,11,10,4,8,7,6,5,9,1,2,3,0)
        if not k2a: value = bitswap(value,13,14,15,12,11,10,9,8,7,6,5,4,3,2,1,0)
        if not gs1: value = bitswap(value,15,14,13,12,9,8,11,10,7,6,5,4,3,2,1,0)
        if not k5a: value = bitswap(value,15,14,13,12,11,10,9,8,4,5,7,6,3,2,1,0)
        if not gs0a: value = bitswap(value,15,14,13,12,11,10,9,8,7,6,5,4,0,3,2,1)

    value = bitswap(value,12,15,14,13,11,10,9,8,7,6,5,4,3,2,1,0)
    if value & 0xB080 == 0x8000: value ^= 0x4000
    if value & 0xF000 == 0xC000: value ^= 0x0080
    if value & 0xB100 == 0x0000: value ^= 0x4000
    return value, key_f


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument('zip_path', type=Path)
    parser.add_argument('key_name')
    parser.add_argument('address', type=lambda value: int(value, 0))
    parser.add_argument('encrypted', type=lambda value: int(value, 0))
    parser.add_argument('--state', type=lambda value: int(value, 0), default=0)
    parser.add_argument('--vector', action='store_true')
    args = parser.parse_args()
    with zipfile.ZipFile(args.zip_path) as archive:
        key = archive.read(args.key_name)
    value, key_f = decrypt_unmasked(key,args.address,args.encrypted,args.state,args.vector)
    print(f'unmasked={value:04x} key_f={key_f} mask_byte={key_f*4096+(value>>4):04x} mask_bit={(value>>1)&7}')


if __name__ == '__main__':
    main()
