[CmdletBinding()]
param(
    [string]$ModelDirectory = 'C:/tmp/s24_obj_tile',
    [string]$Checkpoint = 'C:/tmp/s24_checkpoints/tile-focused.vltsv'
)

$ErrorActionPreference = 'Stop'
$repoRoot = Split-Path -Parent $PSScriptRoot
$fileSystem = New-Object -ComObject Scripting.FileSystemObject
$shortRoot = $fileSystem.GetFolder($repoRoot).ShortPath
Set-Location -LiteralPath $shortRoot
$env:Path = 'C:\Users\meath\bin;C:\msys64\ucrt64\bin;C:\msys64\usr\bin;' + $env:Path

& verilator-safe status
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

$modelRoot = $ModelDirectory.TrimEnd('/','\') -replace '\\','/'
New-Item -ItemType Directory -Force -Path $ModelDirectory | Out-Null
$sourceCopies = @(
    @('rtl/s24_pkg.sv', 's24_pkg.sv'),
    @('rtl/video/s24_tile.sv', 's24_tile.sv'),
    @('verif/tb_tile_ownership.sv', 'tb_tile_ownership.sv'),
    @('verif/tile_main.cpp', 'tile_main.cpp')
)
$sources = foreach($sourceCopy in $sourceCopies) {
    $destination = $modelRoot + '/' + $sourceCopy[1]
    Copy-Item -LiteralPath $sourceCopy[0] -Destination $destination -Force
    $destination
}

$pkg = 'C:/msys64/ucrt64/bin/pkg-config.exe'
$sdlCflags = (& $pkg --cflags sdl2) -replace '-Dmain=SDL_main', ''
$sdlLibs = (& $pkg --libs sdl2) -replace '-lmingw32', '' `
    -replace '-mwindows', '' -replace '-lSDL2main', ''
$arguments = @(
    '--cc', '--exe', '--build', '--savable',
    '-O3', '--top-module', 'tb_tile_ownership',
    '--Mdir', $ModelDirectory,
    '-CFLAGS', "-O3 -march=native -D_GLIBCXX_USE_CXX11_ABI=0 -DSDL_MAIN_HANDLED $sdlCflags",
    '-LDFLAGS', $sdlLibs,
    '-MAKEFLAGS',
    'CXX=C:/msys64/ucrt64/bin/g++.exe LINK=C:/msys64/ucrt64/bin/g++.exe AR=C:/msys64/ucrt64/bin/ar.exe PATH=/usr/bin:/ucrt64/bin:/c/Windows/System32 SHELL=C:/msys64/usr/bin/sh.exe',
    '--threads', '1', '--build-jobs', '4', '--verilate-jobs', '1'
) + $sources

& verilator-safe @arguments
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

& verilator-safe sim (Join-Path $ModelDirectory 'Vtb_tile_ownership.exe') "+SAVE=$Checkpoint"
exit $LASTEXITCODE
