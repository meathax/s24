[CmdletBinding()]
param([string]$ModelDirectory = 'C:/tmp/s24_obj_audio_lpf')

$ErrorActionPreference = 'Stop'
$repoRoot = Split-Path -Parent $PSScriptRoot
$fileSystem = New-Object -ComObject Scripting.FileSystemObject
$shortRoot = $fileSystem.GetFolder($repoRoot).ShortPath
Set-Location -LiteralPath $shortRoot
& verilator-safe status
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
New-Item -ItemType Directory -Force -Path $ModelDirectory | Out-Null
$arguments = @(
    '--binary','--timing','--assert','-O3','--top-module','tb_audio_lpf',
    '--Mdir',$ModelDirectory,'--Wno-fatal',
    '-CFLAGS','-O3 -march=native -D_GLIBCXX_USE_CXX11_ABI=0',
    '-MAKEFLAGS','CXX=C:/msys64/ucrt64/bin/g++.exe LINK=C:/msys64/ucrt64/bin/g++.exe AR=C:/msys64/ucrt64/bin/ar.exe SHELL=C:/msys64/usr/bin/sh.exe',
    '--threads','1','--build-jobs','4','--verilate-jobs','1',
    'rtl/audio/s24_audio_lpf.sv','verif/tb_audio_lpf.sv'
)
& verilator-safe @arguments
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
& verilator-sim-safe (Join-Path $ModelDirectory 'Vtb_audio_lpf.exe')
exit $LASTEXITCODE
