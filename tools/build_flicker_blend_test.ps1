[CmdletBinding()]
param(
    [string]$ModelDirectory = 'C:/tmp/s24_obj_flicker_blend'
)

$ErrorActionPreference = 'Stop'
$repoRoot = Split-Path -Parent $PSScriptRoot
$fileSystem = New-Object -ComObject Scripting.FileSystemObject
$shortRoot = $fileSystem.GetFolder($repoRoot).ShortPath
Set-Location -LiteralPath $shortRoot

& verilator-safe status
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

$sources = @(
    'rtl/s24_pkg.sv',
    'rtl/video/s24_video_timing.sv',
    'rtl/video/s24_tile.sv',
    'rtl/video/s24_mixer.sv',
    'verif/tb_flicker_blend.sv'
)
$arguments = @(
    '--binary', '--timing', '--top-module', 'tb_flicker_blend',
    '--Mdir', $ModelDirectory,
    '--Wno-fatal',
    '-CFLAGS', '-O3 -D_GLIBCXX_USE_CXX11_ABI=0',
    '-MAKEFLAGS',
    'CXX=C:/msys64/ucrt64/bin/g++.exe LINK=C:/msys64/ucrt64/bin/g++.exe AR=C:/msys64/ucrt64/bin/ar.exe SHELL=C:/msys64/usr/bin/sh.exe',
    '--threads', '1', '--build-jobs', '4', '--verilate-jobs', '1'
) + $sources

& verilator-safe @arguments
exit $LASTEXITCODE
