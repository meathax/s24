[CmdletBinding()]
param([string]$ModelDirectory = 'C:/tmp/s24_obj_analog')

$ErrorActionPreference = 'Stop'
$repoRoot = Split-Path -Parent $PSScriptRoot
$fileSystem = New-Object -ComObject Scripting.FileSystemObject
$shortRoot = $fileSystem.GetFolder($repoRoot).ShortPath
Set-Location -LiteralPath $shortRoot
& verilator-safe status
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

$modelRoot = $ModelDirectory.TrimEnd('/','\') -replace '\\','/'
New-Item -ItemType Directory -Force -Path $ModelDirectory | Out-Null
$copies = @(
    @('rtl/s24_pkg.sv','s24_pkg.sv'),
    @('rtl/io/s24_analog.sv','s24_analog.sv'),
    @('rtl/io/s24_wheel_input.sv','s24_wheel_input.sv'),
    @('verif/tb_analog.sv','tb_analog.sv'),
    @('verif/analog_main.cpp','analog_main.cpp')
)
$sources = foreach($copy in $copies) {
    $destination = $modelRoot + '/' + $copy[1]
    Copy-Item -LiteralPath $copy[0] -Destination $destination -Force
    $destination
}
$arguments = @(
    '--cc','--exe','--build','--timing','--top-module','tb_analog',
    '--Mdir',$ModelDirectory,'--Wno-fatal',
    '-CFLAGS',"-O3 -D_GLIBCXX_USE_CXX11_ABI=0",
    '-MAKEFLAGS',
    'CXX=C:/msys64/ucrt64/bin/g++.exe LINK=C:/msys64/ucrt64/bin/g++.exe AR=C:/msys64/ucrt64/bin/ar.exe SHELL=C:/msys64/usr/bin/sh.exe',
    '--threads','1','--build-jobs','4','--verilate-jobs','1'
) + $sources
& verilator-safe @arguments
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
& verilator-safe sim (Join-Path $ModelDirectory 'Vtb_analog.exe')
exit $LASTEXITCODE
