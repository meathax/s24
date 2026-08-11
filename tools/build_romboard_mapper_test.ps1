param(
    [string]$ModelDirectory = 'C:/tmp/s24_obj_romboard_mapper'
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$fileSystem = New-Object -ComObject Scripting.FileSystemObject
$shortRoot = $fileSystem.GetFolder($root).ShortPath
Set-Location -LiteralPath $shortRoot
& verilator-safe status
if($LASTEXITCODE -ne 0){ exit $LASTEXITCODE }
New-Item -ItemType Directory -Force -Path $ModelDirectory | Out-Null
$modelRoot = $ModelDirectory.TrimEnd('/','\') -replace '\\','/'
$sources = @('s24_pkg.sv','tb_romboard_mapper.sv')
$copiedSources = foreach($source in $sources){
    $sourcePath = if($source -eq 'tb_romboard_mapper.sv'){
        Join-Path $root 'verif/tb_romboard_mapper.sv'
    } else {
        Join-Path $root 'rtl/s24_pkg.sv'
    }
    $destination = Join-Path $modelRoot $source
    Copy-Item -LiteralPath $sourcePath -Destination $destination -Force
    $destination
}
$arguments = @(
    '--binary','--timing','--assert','--top-module','tb_romboard_mapper',
    '--Mdir',$ModelDirectory,'--Wno-fatal',
    '-CFLAGS','-O3 -D_GLIBCXX_USE_CXX11_ABI=0',
    '-MAKEFLAGS',
    'CXX=C:/msys64/ucrt64/bin/g++.exe LINK=C:/msys64/ucrt64/bin/g++.exe AR=C:/msys64/ucrt64/bin/ar.exe SHELL=C:/msys64/usr/bin/sh.exe',
    '--threads','1','--build-jobs','4','--verilate-jobs','1'
) + $copiedSources
& verilator-safe @arguments
if($LASTEXITCODE -ne 0){ exit $LASTEXITCODE }
& verilator-safe sim (Join-Path $ModelDirectory 'Vtb_romboard_mapper.exe')
exit $LASTEXITCODE
