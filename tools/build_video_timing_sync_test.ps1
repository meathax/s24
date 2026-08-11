[CmdletBinding()]
param(
    [string]$ModelDirectory = 'C:/tmp/s24_obj_video_timing_sync'
)

$ErrorActionPreference = 'Stop'
$repoRoot = Split-Path -Parent $PSScriptRoot
$fileSystem = New-Object -ComObject Scripting.FileSystemObject
$shortRoot = $fileSystem.GetFolder($repoRoot).ShortPath
Set-Location -LiteralPath $shortRoot

New-Item -ItemType Directory -Force -Path $ModelDirectory | Out-Null
& verilator-safe status
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

$arguments = @(
    '--binary', '--timing', '--assert',
    '--top-module', 'tb_video_timing_sync',
    '--Mdir', $ModelDirectory,
    '--Wno-fatal',
    '-CFLAGS', '-O3 -D_GLIBCXX_USE_CXX11_ABI=0',
    '-MAKEFLAGS',
    'CXX=C:/msys64/ucrt64/bin/g++.exe LINK=C:/msys64/ucrt64/bin/g++.exe AR=C:/msys64/ucrt64/bin/ar.exe SHELL=C:/msys64/usr/bin/sh.exe',
    '--threads', '1', '--build-jobs', '4', '--verilate-jobs', '1',
    'rtl/video/s24_video_timing.sv',
    'verif/tb_video_timing_sync.sv'
)

& verilator-safe @arguments
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
& verilator-sim-safe (Join-Path $ModelDirectory 'Vtb_video_timing_sync.exe')
exit $LASTEXITCODE
