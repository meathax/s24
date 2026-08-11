[CmdletBinding()]
param(
    [string]$ModelDirectory = 'C:/tmp/s24_obj_mixer'
)

$ErrorActionPreference = 'Stop'
$repoRoot = Split-Path -Parent $PSScriptRoot
$fileSystem = New-Object -ComObject Scripting.FileSystemObject
$shortRoot = $fileSystem.GetFolder($repoRoot).ShortPath
Set-Location -LiteralPath $shortRoot

& verilator-safe status
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

New-Item -ItemType Directory -Force -Path $ModelDirectory | Out-Null
$modelRoot = $ModelDirectory.TrimEnd('/','\') -replace '\\','/'
$sourceCopies = @(
    @('rtl/s24_pkg.sv', 's24_pkg.sv'),
    @('rtl/video/s24_mixer.sv', 's24_mixer.sv'),
    @('verif/tb_mixer.sv', 'tb_mixer.sv')
)
$sources = foreach ($sourceCopy in $sourceCopies) {
    $destination = $modelRoot + '/' + $sourceCopy[1]
    Copy-Item -LiteralPath (Join-Path $repoRoot $sourceCopy[0]) -Destination $destination -Force
    $destination
}

$arguments = @(
    '--binary','--timing','--assert','--top-module','tb_mixer',
    '--Mdir',$ModelDirectory,'--Wno-fatal',
    '-CFLAGS','-O3 -D_GLIBCXX_USE_CXX11_ABI=0',
    '-MAKEFLAGS',
    'CXX=C:/msys64/ucrt64/bin/g++.exe LINK=C:/msys64/ucrt64/bin/g++.exe AR=C:/msys64/ucrt64/bin/ar.exe SHELL=C:/msys64/usr/bin/sh.exe',
    '--threads','1','--build-jobs','4','--verilate-jobs','1'
) + $sources

& verilator-safe @arguments
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
& verilator-safe sim (Join-Path $ModelDirectory 'Vtb_mixer.exe')
exit $LASTEXITCODE
