[CmdletBinding()]
param(
    [string]$ModelDirectory = 'C:/tmp/s24_obj_gground'
)

$ErrorActionPreference = 'Stop'
$repoRoot = Split-Path -Parent $PSScriptRoot
$fileSystem = New-Object -ComObject Scripting.FileSystemObject
$shortRoot = $fileSystem.GetFolder($repoRoot).ShortPath
Set-Location -LiteralPath $shortRoot
& verilator-safe status
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

$sources = @(
    'rtl/s24_pkg.sv','rtl/s24_clock_enables.sv','rtl/s24_board_arbiter.sv',
    'rtl/s24_cpu_bus.sv','rtl/io/s24_io_5296.sv','rtl/io/s24_inputs.sv',
    'rtl/io/s24_analog.sv','rtl/audio/s24_opm.sv','rtl/audio/s24_audio_lpf.sv','rtl/audio/ikaopm/IKAOPM.v','rtl/audio/ikaopm/IKAOPM_modules/IKAOPM_acc.v','rtl/audio/ikaopm/IKAOPM_modules/IKAOPM_eg.v','rtl/audio/ikaopm/IKAOPM_modules/IKAOPM_lfo.v','rtl/audio/ikaopm/IKAOPM_modules/IKAOPM_noise.v','rtl/audio/ikaopm/IKAOPM_modules/IKAOPM_op.v','rtl/audio/ikaopm/IKAOPM_modules/IKAOPM_pg.v','rtl/audio/ikaopm/IKAOPM_modules/IKAOPM_primitives.v','rtl/audio/ikaopm/IKAOPM_modules/IKAOPM_reg.v','rtl/audio/ikaopm/IKAOPM_modules/IKAOPM_timer.v','rtl/audio/ikaopm/IKAOPM_modules/IKAOPM_timinggen.v','rtl/prot/s24_magic_latch.sv','rtl/prot/s24_romboard_epld.sv','rtl/fdc/s24_fdc.sv',
    'rtl/s24_irq.sv','rtl/video/s24_video_timing.sv','rtl/video/s24_palette.sv',
    'rtl/video/s24_tile.sv','rtl/video/s24_sprite.sv',
    'rtl/video/s24_mixer.sv',
    'rtl/cpu/fx68k/fx68kAlu.sv','rtl/cpu/fx68k/uaddrPla.sv',
    'rtl/cpu/fx68k/fx68k.sv','rtl/cpu/s24_fd1094_decrypt.sv',
    'rtl/cpu/s24_fd1094.sv','rtl/cpu/s24_a_opcache.sv','rtl/cpu/s24_b_opcache.sv','rtl/s24_core.sv',
    'verif/tb_core_dual_bus.sv'
)
$arguments = @(
    '--binary','--timing','-O3','--output-split','20000',
    '--top-module','tb_core_dual_bus',
    '--Mdir',$ModelDirectory,'--Wno-fatal',
    '-CFLAGS','-O3 -march=native -D_GLIBCXX_USE_CXX11_ABI=0',
    '-MAKEFLAGS',
    'CXX=C:/msys64/ucrt64/bin/g++.exe LINK=C:/msys64/ucrt64/bin/g++.exe AR=C:/msys64/ucrt64/bin/ar.exe SHELL=C:/msys64/usr/bin/sh.exe',
    '--threads','1','--build-jobs','4','--verilate-jobs','1'
) + $sources
& verilator-safe @arguments
exit $LASTEXITCODE
