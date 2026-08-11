[CmdletBinding()]
param(
    [string]$ModelDirectory = 'C:/tmp/s24_obj_sprite_crkdown_list',
    [string]$Checkpoint = '',
    [int]$MemoryLatency = 0
)

$ErrorActionPreference = 'Stop'
if ($Checkpoint) {
    throw 'The strict timed Crack Down list lane is intentionally non-savable under Verilator 5.050.'
}
$repoRoot = Split-Path -Parent $PSScriptRoot
$fileSystem = New-Object -ComObject Scripting.FileSystemObject
$shortRoot = $fileSystem.GetFolder($repoRoot).ShortPath
Set-Location -LiteralPath $shortRoot
$verilatorSafe = 'C:/Users/meath/bin/verilator-safe.exe'
$env:Path = 'C:\msys64\ucrt64\bin;C:\msys64\usr\bin;' + $env:Path
$env:MSYSTEM = 'UCRT64'
$env:CHERE_INVOKING = '1'

& $verilatorSafe status
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

$modelRoot = $ModelDirectory.TrimEnd('/','\') -replace '\\','/'
$visibleMain = $modelRoot + '/sprite_crkdown_list_main.cpp'
New-Item -ItemType Directory -Force -Path $ModelDirectory | Out-Null
Copy-Item -LiteralPath 'verif/sprite_crkdown_list_main.cpp' `
    -Destination $visibleMain -Force
$sourceCopies = @(
    @('rtl/s24_pkg.sv', 's24_pkg.sv'),
    @('rtl/video/s24_sprite.sv', 's24_sprite.sv'),
    @('verif/tb_sprite_crkdown_list.sv', 'tb_sprite_crkdown_list.sv')
)
$sources = foreach($sourceCopy in $sourceCopies) {
    $destination = $modelRoot + '/' + $sourceCopy[1]
    Copy-Item -LiteralPath $sourceCopy[0] -Destination $destination -Force
    $destination
}
$sources += $visibleMain

$arguments = @(
    '--cc', '--exe', '--assert', '--timing',
    '--sched-zero-delay', '--x-initial', 'unique', '--x-assign', 'unique',
    '--MMD',
    '--top-module', 'tb_sprite_crkdown_list',
    '--Mdir', $ModelDirectory,
    '--Wno-fatal', '-O3',
    '-CFLAGS', '-O3 -march=native -D_GLIBCXX_USE_CXX11_ABI=0',
    '-MAKEFLAGS',
    'CXX=C:/msys64/ucrt64/bin/g++.exe LINK=C:/msys64/ucrt64/bin/g++.exe AR=C:/msys64/ucrt64/bin/ar.exe SHELL=C:/msys64/usr/bin/sh.exe',
    '--threads', '1', '--build-jobs', '4', '--verilate-jobs', '1'
) + $sources

& $verilatorSafe @arguments
$buildExit = $LASTEXITCODE
if ($buildExit -eq 0) {
    $modelMsys = ($modelRoot -replace '^C:', '/c')
    $makeCommand = "export PATH=/usr/bin:/ucrt64/bin:/c/Windows/System32 TMP='$modelMsys' TEMP='$modelMsys'; make -C '$modelMsys' -f Vtb_sprite_crkdown_list.mk -j 4"
    & 'C:/msys64/usr/bin/env.exe' MSYSTEM=UCRT64 CHERE_INVOKING=1 `
        'C:/msys64/usr/bin/bash.exe' -lc $makeCommand
    $buildExit = $LASTEXITCODE
}
if ($buildExit -ne 0) { exit $buildExit }

$runtimeDlls = @('libgcc_s_seh-1.dll', 'libstdc++-6.dll',
                 'libwinpthread-1.dll')
foreach ($runtimeDll in $runtimeDlls) {
    Copy-Item -LiteralPath (Join-Path 'C:/msys64/ucrt64/bin' $runtimeDll) `
        -Destination (Join-Path $ModelDirectory $runtimeDll) -Force
}

$simArguments = @('+verilator+rand+reset+2', '+verilator+seed+1',
                  "+MEM_LATENCY=$MemoryLatency")
& $verilatorSafe sim (Join-Path $ModelDirectory 'Vtb_sprite_crkdown_list.exe') `
    @simArguments
exit $LASTEXITCODE
