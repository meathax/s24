[CmdletBinding()]
param(
    [string]$ModelDirectory = 'C:/tmp/s24_obj_gground',
    [switch]$DisableACache,
    [switch]$NoInstall
)

$ErrorActionPreference = 'Stop'

$repoRoot = Split-Path -Parent $PSScriptRoot
$fileSystem = New-Object -ComObject Scripting.FileSystemObject
$shortRoot = $fileSystem.GetFolder($repoRoot).ShortPath
Set-Location -LiteralPath $shortRoot
# Keep Verilator's scratch model on a writable local no-space path.  The
# previous visualizations path is no longer writable in this task context,
# while MSYS canonicalizes the OneDrive path back to spaces before GNU Make
# runs. Preserve the old object directory; use this path for subsequent
# incremental builds. The prior generated model remains preserved here for a
# controlled compatibility check after the testbench type change. A caller can
# select a second local scratch directory when an existing generated source is
# held open by another process; no object directory is deleted or cleaned.
New-Item -ItemType Directory -Force -Path $ModelDirectory | Out-Null
$mainCpp = Join-Path $ModelDirectory 'gground_boot_main.cpp'
Copy-Item -LiteralPath 'verif/gground_boot_main.cpp' -Destination $mainCpp -Force
$mainCppArg = $mainCpp.Replace('\','/')

& verilator-safe status
if ($LASTEXITCODE -ne 0) {
    exit $LASTEXITCODE
}

$sources = @(
    'rtl/s24_pkg.sv',
    'rtl/s24_clock_enables.sv',
    'rtl/s24_board_arbiter.sv',
    'rtl/s24_cpu_bus.sv',
    'rtl/io/s24_io_5296.sv',
    'rtl/io/s24_inputs.sv',
    'rtl/io/s24_analog.sv',
    'rtl/audio/s24_ym3012.sv',
    'rtl/prot/s24_magic_latch.sv',
    'rtl/prot/s24_romboard_epld.sv',
    'rtl/fdc/s24_fdc.sv',
    'rtl/s24_irq.sv',
    'rtl/video/s24_video_timing.sv',
    'rtl/video/s24_palette.sv',
    'rtl/video/s24_tile.sv',
    'rtl/video/s24_sprite.sv',
    'rtl/video/s24_mixer.sv',
    'rtl/cpu/fx68k/fx68kAlu.sv',
    'rtl/cpu/fx68k/uaddrPla.sv',
    'rtl/cpu/fx68k/fx68k.sv',
    'rtl/cpu/s24_fd1094_decrypt.sv',
    'rtl/cpu/s24_fd1094.sv','rtl/cpu/s24_a_opcache.sv','rtl/cpu/s24_b_opcache.sv',
    'verif/jt51_boot_stub.sv',
    'rtl/s24_core.sv',
    'verif/tb_gground_boot.sv'
)

$arguments = @(
    '--cc',
    '--exe',
    '--build',
    '--timing',
    '--assert',
    '-O3',
    '--output-split', '20000',
    '--top-module', 'tb_gground_boot',
    '--Mdir', $modelDirectory,
    # Keep assertions enabled, but use an optimized C++ model for the long
    # deterministic attract sweep. This does not change Verilator's safe
    # thread/job limits or the RTL being verified.
    '-CFLAGS', '-O3 -march=native -D_GLIBCXX_USE_CXX11_ABI=0',
    '-MAKEFLAGS',
    'CXX=C:/msys64/ucrt64/bin/g++.exe LINK=C:/msys64/ucrt64/bin/g++.exe AR=C:/msys64/ucrt64/bin/ar.exe SHELL=C:/msys64/usr/bin/sh.exe OPT_FAST=-O3',
    '--Wno-fatal',
    '--Wno-BLKANDNBLK',
    '--Wno-MULTIDRIVEN',
    '--Wno-WIDTHEXPAND',
    '--Wno-WIDTHTRUNC',
    '--Wno-INITIALDLY',
    '--threads', '1',
    '--build-jobs', '4',
    # Keep generation deterministic while diagnosing the Windows/MSYS
    # single-file write race; C++ compilation remains bounded at four jobs.
    '--verilate-jobs', '1',
    $mainCppArg
) + $(if($DisableACache) { @('-GA_OPCACHE_ENABLE=0') } else { @() }) + $sources

& verilator-safe @arguments
$buildExitCode = $LASTEXITCODE
if ($buildExitCode -ne 0) {
    exit $buildExitCode
}

$builtExecutable = Join-Path $modelDirectory 'Vtb_gground_boot.exe'
$repositoryExecutable = Join-Path $repoRoot 'verif\obj_gground\Vtb_gground_boot.exe'
if($NoInstall) {
    Write-Output "Built $builtExecutable (repository executable unchanged)"
} else {
    Copy-Item -LiteralPath $builtExecutable -Destination $repositoryExecutable -Force
    Write-Output "Updated $repositoryExecutable"
}
