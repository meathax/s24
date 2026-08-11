[CmdletBinding()]
param(
    [string]$ModelDirectory = 'C:/tmp/s24_obj_ym_write'
)

$ErrorActionPreference = 'Stop'
$repoRoot = Split-Path -Parent $PSScriptRoot
$fileSystem = New-Object -ComObject Scripting.FileSystemObject
$shortRoot = $fileSystem.GetFolder($repoRoot).ShortPath
Set-Location -LiteralPath $shortRoot
& verilator-safe status
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

New-Item -ItemType Directory -Force -Path $ModelDirectory | Out-Null
$sources = @(
    'rtl/s24_pkg.sv','rtl/s24_clock_enables.sv','rtl/s24_board_arbiter.sv',
    'rtl/s24_cpu_bus.sv','rtl/io/s24_io_5296.sv','rtl/io/s24_inputs.sv',
    'rtl/io/s24_analog.sv','rtl/audio/s24_ym3012.sv',
    'rtl/prot/s24_magic_latch.sv','rtl/prot/s24_romboard_epld.sv','rtl/fdc/s24_fdc.sv','rtl/s24_irq.sv',
    'rtl/video/s24_video_timing.sv','rtl/video/s24_palette.sv',
    'rtl/video/s24_tile.sv','rtl/video/s24_sprite.sv','rtl/video/s24_mixer.sv',
    'rtl/cpu/fx68k/fx68kAlu.sv','rtl/cpu/fx68k/uaddrPla.sv',
    'rtl/cpu/fx68k/fx68k.sv','rtl/cpu/s24_fd1094_decrypt.sv',
    'rtl/cpu/s24_fd1094.sv','rtl/cpu/s24_a_opcache.sv',
    'rtl/cpu/s24_b_opcache.sv','rtl/s24_core.sv',
    'verif/tb_ym_write.sv'
)
$arguments = @(
    '--binary','--timing','--assert','-O3','--output-split','20000',
    '--top-module','tb_ym_write','--Mdir',$ModelDirectory,'--Wno-fatal',
    '-CFLAGS','-O3 -march=native -D_GLIBCXX_USE_CXX11_ABI=0',
    '-MAKEFLAGS',
    'CXX=C:/msys64/ucrt64/bin/g++.exe LINK=C:/msys64/ucrt64/bin/g++.exe AR=C:/msys64/ucrt64/bin/ar.exe SHELL=C:/msys64/usr/bin/sh.exe',
    '--threads','1','--build-jobs','4','--verilate-jobs','1'
) + $sources
& verilator-safe @arguments
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
& verilator-sim-safe (Join-Path $ModelDirectory 'Vtb_ym_write.exe')
exit $LASTEXITCODE
