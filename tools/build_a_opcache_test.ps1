[CmdletBinding()]
param(
    [string]$ModelDirectory = 'C:/tmp/s24_obj_a_opcache'
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
    'rtl/cpu/s24_a_opcache.sv',
    'verif/tb_a_opcache.sv'
)
$arguments = @(
    '--binary','--timing','-O3','--output-split','20000',
    '--top-module','tb_a_opcache',
    '--Mdir',$ModelDirectory,'--Wno-fatal','--assert',
    '-CFLAGS','-O3 -march=native -D_GLIBCXX_USE_CXX11_ABI=0',
    '-MAKEFLAGS',
    'CXX=C:/msys64/ucrt64/bin/g++.exe LINK=C:/msys64/ucrt64/bin/g++.exe AR=C:/msys64/ucrt64/bin/ar.exe SHELL=C:/msys64/usr/bin/sh.exe',
    '--threads','1','--build-jobs','4','--verilate-jobs','1'
) + $sources

& verilator-safe @arguments
exit $LASTEXITCODE
