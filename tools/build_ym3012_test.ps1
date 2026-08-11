[CmdletBinding()]
param(
    [string]$ModelDirectory = 'C:/tmp/s24_obj_ym3012'
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
$sources = @('s24_ym3012.sv','tb_ym3012.sv')
$copiedSources = foreach ($source in $sources) {
    $sourcePath = if ($source -eq 'tb_ym3012.sv') {
        Join-Path $repoRoot 'verif/tb_ym3012.sv'
    } else {
        Join-Path $repoRoot 'rtl/audio/s24_ym3012.sv'
    }
    $destination = Join-Path $modelRoot $source
    Copy-Item -LiteralPath $sourcePath -Destination $destination -Force
    $destination
}

$arguments = @(
    '--binary','--timing','--assert','--top-module','tb_ym3012',
    '--Mdir',$ModelDirectory,'--Wno-fatal',
    '-CFLAGS','-O3 -D_GLIBCXX_USE_CXX11_ABI=0',
    '-MAKEFLAGS',
    'CXX=C:/msys64/ucrt64/bin/g++.exe LINK=C:/msys64/ucrt64/bin/g++.exe AR=C:/msys64/ucrt64/bin/ar.exe SHELL=C:/msys64/usr/bin/sh.exe',
    '--threads','1','--build-jobs','4','--verilate-jobs','1'
) + $copiedSources

& verilator-safe @arguments
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
& verilator-safe sim (Join-Path $ModelDirectory 'Vtb_ym3012.exe')
exit $LASTEXITCODE
