[CmdletBinding()]
param([string]$ModelDirectory = 'C:/tmp/s24_obj_siliconre_3155242')

$ErrorActionPreference = 'Stop'
$repoRoot = Split-Path -Parent $PSScriptRoot
$fileSystem = New-Object -ComObject Scripting.FileSystemObject
$shortRoot = $fileSystem.GetFolder($repoRoot).ShortPath
Set-Location -LiteralPath $shortRoot
$env:Path = 'C:\msys64\ucrt64\bin;C:\msys64\usr\bin;' + $env:Path

& verilator-safe status
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

$modelRoot = $ModelDirectory.TrimEnd('/','\') -replace '\\','/'
New-Item -ItemType Directory -Force -Path $ModelDirectory | Out-Null
$pkg = 'C:/msys64/ucrt64/bin/pkg-config.exe'
$sdlCflags = (& $pkg --cflags sdl2) -replace '-Dmain=SDL_main', ''
$sdlLibs = (& $pkg --libs sdl2) -replace '-lmingw32', '' -replace '-mwindows', '' -replace '-lSDL2main', ''
$sdlCompileArgs = @($sdlCflags -split '\s+' | Where-Object { $_ })
$sdlLinkArgs = @($sdlLibs -split '\s+' | Where-Object { $_ })
$guardExe = Join-Path $ModelDirectory 'sdl_verilator_guard.exe'
& 'C:/msys64/ucrt64/bin/g++.exe' 'verif/sdl_verilator_guard.cpp' '-DSDL_MAIN_HANDLED' $sdlCompileArgs $sdlLinkArgs '-o' $guardExe
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
$guard = Start-Process -FilePath $guardExe -PassThru
Start-Sleep -Milliseconds 300

$sourceCopies = @(
    @('verif/upstream/siliconre_315_5242/M71064.v', 'M71064.v'),
    @('rtl/video/s24_palette.sv', 's24_palette.sv'),
    @('verif/tb_siliconre_3155242.sv', 'tb_siliconre_3155242.sv'),
    @('verif/siliconre_3155242_main.cpp', 'siliconre_3155242_main.cpp')
)
$sources = foreach ($sourceCopy in $sourceCopies) {
    $destination = $modelRoot + '/' + $sourceCopy[1]
    Copy-Item -LiteralPath $sourceCopy[0] -Destination $destination -Force
    $destination
}

$arguments = @(
    '--cc','--exe','--build','--timing','--top-module','tb_siliconre_3155242',
    '--Mdir',$ModelDirectory,'--Wno-fatal','--Wno-DECLFILENAME',
    '-CFLAGS',"-O3 -D_GLIBCXX_USE_CXX11_ABI=0 -DSDL_MAIN_HANDLED $sdlCflags",
    '-LDFLAGS',$sdlLibs,
    '-MAKEFLAGS','CXX=C:/msys64/ucrt64/bin/g++.exe LINK=C:/msys64/ucrt64/bin/g++.exe AR=C:/msys64/ucrt64/bin/ar.exe PATH=/usr/bin:/ucrt64/bin:/c/Windows/System32 SHELL=C:/msys64/usr/bin/sh.exe',
    '--threads','1','--build-jobs','4','--verilate-jobs','1',
    $sources)
try {
    & verilator-safe @arguments
    $buildExit = $LASTEXITCODE
    if ($buildExit -eq 0) {
        & (Join-Path $ModelDirectory 'Vtb_siliconre_3155242.exe')
        $buildExit = $LASTEXITCODE
    }
} finally {
    if ($guard -and -not $guard.HasExited) { Stop-Process -Id $guard.Id }
}
exit $buildExit
