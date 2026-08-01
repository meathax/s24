[CmdletBinding()]
param(
    [string]$ModelDirectory = 'C:/tmp/s24_obj_gground_visual4',
    [ValidateRange(1,8)][int]$ModelThreads = 1
)

$ErrorActionPreference = 'Stop'
$repoRoot = Split-Path -Parent $PSScriptRoot
Set-Location -LiteralPath $repoRoot
$visualMain = (($ModelDirectory.TrimEnd('/','\')) + '/s24_visual_main.cpp') -replace '\\','/'
New-Item -ItemType Directory -Force -Path $ModelDirectory | Out-Null

$pkg = 'C:/msys64/ucrt64/bin/pkg-config.exe'
$sdlCflags = (& $pkg --cflags sdl2) -replace '-Dmain=SDL_main', ''
$sdlLibs = (& $pkg --libs sdl2) -replace '-lmingw32', '' -replace '-mwindows', '' -replace '-lSDL2main', ''
function Get-Sha256Hex([string]$Path) {
    $algorithm = [Security.Cryptography.SHA256]::Create()
    $stream = [IO.File]::OpenRead($Path)
    try {
        return -join ($algorithm.ComputeHash($stream) | ForEach-Object {
            $_.ToString('x2')
        })
    } finally {
        $stream.Dispose()
        $algorithm.Dispose()
    }
}
$repoSources = @(
    'rtl/s24_pkg.sv','rtl/s24_clock_enables.sv','rtl/s24_cpu_bus.sv',
    'rtl/io/s24_io_5296.sv','rtl/io/s24_inputs.sv','rtl/io/s24_analog.sv',
    'rtl/prot/s24_magic_latch.sv','rtl/fdc/s24_fdc.sv','rtl/s24_irq.sv',
    'rtl/video/s24_video_timing.sv','rtl/video/s24_palette.sv',
    'rtl/video/s24_tile.sv','rtl/video/s24_sprite.sv','rtl/video/s24_mixer.sv',
    'rtl/cpu/fx68k/fx68kAlu.sv','rtl/cpu/fx68k/uaddrPla.sv',
    'rtl/cpu/fx68k/fx68k.sv','rtl/cpu/s24_fd1094_decrypt.sv',
    'rtl/cpu/s24_fd1094.sv','verif/jt51_boot_stub.sv','rtl/s24_core.sv',
    'verif/tb_gground_boot.sv'
)
$exe = Join-Path $ModelDirectory 'Vtb_gground_boot.exe'
$signaturePath = Join-Path $ModelDirectory 'build.signature'
$verilatorVersion = & 'C:/Users/meath/bin/verilator.exe' --version
$signatureParts = @(
    $verilatorVersion, $sdlCflags, $sdlLibs,
    "tb_gground_boot|S24_VISUAL|no-timing|savable|packed-fx68k-structs|threads=$ModelThreads|OPT_FAST=O3|OPT_SLOW=O2|OPT_GLOBAL=O2|march=native|mtune=native|fomit-frame-pointer|ABI=0"
) + (@($repoSources + 'verif/s24_visual_main.cpp' | ForEach-Object {
    $file = Join-Path $repoRoot $_
    "$_|$(Get-Sha256Hex $file)"
}))
$signatureBytes = [Text.Encoding]::UTF8.GetBytes(($signatureParts -join "`n"))
$sha256 = [Security.Cryptography.SHA256]::Create()
try {
    $signature = -join ($sha256.ComputeHash($signatureBytes) | ForEach-Object { $_.ToString('x2') })
} finally {
    $sha256.Dispose()
}
if ((Test-Path -LiteralPath $exe) -and (Test-Path -LiteralPath $signaturePath) -and
    ((Get-Content -Raw -LiteralPath $signaturePath).Trim() -eq $signature)) {
    Write-Host "Using cached visual model: $exe"
    exit 0
}

Copy-Item -LiteralPath (Join-Path $repoRoot 'verif\s24_visual_main.cpp') -Destination $visualMain -Force
& verilator-safe status
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

$sourceRoot = Join-Path $ModelDirectory 'src'
$sources = @($repoSources | ForEach-Object {
    $stagedSource = Join-Path $sourceRoot $_
    New-Item -ItemType Directory -Force -Path (Split-Path -Parent $stagedSource) | Out-Null
    Copy-Item -LiteralPath (Join-Path $repoRoot $_) -Destination $stagedSource -Force
    ($stagedSource -replace '\\','/')
}) + $visualMain
$arguments = @(
    '--cc','--exe','--build','--savable','--no-timing',
    '-DS24_VISUAL','--top-module','tb_gground_boot','--Mdir',$ModelDirectory,
    '-CFLAGS',"-march=native -mtune=native -fomit-frame-pointer -D_GLIBCXX_USE_CXX11_ABI=0 -DSDL_MAIN_HANDLED $sdlCflags",
    '-LDFLAGS',$sdlLibs,
    '-MAKEFLAGS','CXX=C:/msys64/ucrt64/bin/g++.exe LINK=C:/msys64/ucrt64/bin/g++.exe AR=C:/msys64/ucrt64/bin/ar.exe PATH=/usr/bin:/ucrt64/bin:/c/Windows/System32 SHELL=C:/msys64/usr/bin/sh.exe OPT_FAST=-O3 OPT_SLOW=-O2 OPT_GLOBAL=-O2',
    '--Wno-fatal','--Wno-BLKANDNBLK','--Wno-MULTIDRIVEN',
    '--Wno-WIDTHEXPAND','--Wno-WIDTHTRUNC','--Wno-INITIALDLY',
    '--threads',"$ModelThreads",'--build-jobs','4','--verilate-jobs','1'
) + $sources

& verilator-safe @arguments
$buildExit = $LASTEXITCODE
if ($buildExit -eq 0) { Set-Content -LiteralPath $signaturePath -Value $signature -NoNewline }
exit $buildExit
