[CmdletBinding()]
param(
    [string]$ModelDirectory = 'C:/tmp/s24_obj_sprite_bank_ownership'
)

$ErrorActionPreference = 'Stop'
$repoRoot = Split-Path -Parent $PSScriptRoot
$fileSystem = New-Object -ComObject Scripting.FileSystemObject
$shortRoot = $fileSystem.GetFolder($repoRoot).ShortPath
Set-Location -LiteralPath $shortRoot
$env:Path = 'C:\msys64\ucrt64\bin;C:\msys64\usr\bin;' + $env:Path

& verilator-safe status
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

$modelRoot = $ModelDirectory.TrimEnd('/','\') -replace '\\','/'
$headlessMain = $modelRoot + '/sprite_bank_ownership_main.cpp'
New-Item -ItemType Directory -Force -Path $ModelDirectory | Out-Null
Copy-Item -LiteralPath 'verif/sprite_bank_ownership_main.cpp' `
    -Destination $headlessMain -Force
$sourceCopies = @(
    @('rtl/s24_pkg.sv', 's24_pkg.sv'),
    @('rtl/video/s24_sprite.sv', 's24_sprite.sv'),
    @('verif/tb_sprite_bank_ownership.sv', 'tb_sprite_bank_ownership.sv')
)
$sources = foreach($sourceCopy in $sourceCopies) {
    $destination = $modelRoot + '/' + $sourceCopy[1]
    Copy-Item -LiteralPath $sourceCopy[0] -Destination $destination -Force
    $destination
}
$sources += $headlessMain
$arguments = @(
    '--cc', '--exe', '--build', '--timing', '--assert',
    '--top-module', 'tb_sprite_bank_ownership',
    '--Mdir', $ModelDirectory,
    '--Wno-fatal',
    '-CFLAGS', '-O3 -march=native -D_GLIBCXX_USE_CXX11_ABI=0',
    '-MAKEFLAGS',
    'CXX=C:/msys64/ucrt64/bin/g++.exe LINK=C:/msys64/ucrt64/bin/g++.exe AR=C:/msys64/ucrt64/bin/ar.exe SHELL=C:/msys64/usr/bin/sh.exe',
    '--threads', '1', '--build-jobs', '4', '--verilate-jobs', '1'
) + $sources

& verilator-safe @arguments
$buildExit = $LASTEXITCODE
if ($buildExit -ne 0) { exit $buildExit }

& verilator-safe sim (Join-Path $ModelDirectory 'Vtb_sprite_bank_ownership.exe')
exit $LASTEXITCODE
