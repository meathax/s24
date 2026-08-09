[CmdletBinding()]
param([string]$ModelDirectory = 'C:/tmp/s24_obj_loader_ux')
$ErrorActionPreference='Stop'
$repoRoot=Split-Path -Parent $PSScriptRoot
$fileSystem=New-Object -ComObject Scripting.FileSystemObject
$shortRoot=$fileSystem.GetFolder($repoRoot).ShortPath
Set-Location -LiteralPath $shortRoot
& verilator-safe status
if($LASTEXITCODE -ne 0){exit $LASTEXITCODE}
$modelRoot=$ModelDirectory.TrimEnd('/','\') -replace '\\','/'
New-Item -ItemType Directory -Force -Path $ModelDirectory|Out-Null
$copies=@(
 @('rtl/s24_pkg.sv','s24_pkg.sv'),
 @('rtl/mem/s24_rom_loader.sv','s24_rom_loader.sv'),
 @('verif/tb_loader.sv','tb_loader.sv'),
 @('verif/loader_main.cpp','loader_main.cpp'))
$sources=foreach($copy in $copies){$dst=$modelRoot+'/'+$copy[1];Copy-Item $copy[0] $dst -Force;$dst}
$pkg='C:/msys64/ucrt64/bin/pkg-config.exe'
$sdlCflags=(& $pkg --cflags sdl2)-replace '-Dmain=SDL_main',''
$sdlLibs=(& $pkg --libs sdl2)-replace '-lmingw32',''-replace '-mwindows',''-replace '-lSDL2main',''
$args=@('--cc','--exe','--build','--timing','--top-module','tb_loader',
 '--Mdir',$ModelDirectory,'--Wno-fatal',
 '-CFLAGS',"-O3 -D_GLIBCXX_USE_CXX11_ABI=0 -DSDL_MAIN_HANDLED $sdlCflags",
 '-LDFLAGS',$sdlLibs,'-MAKEFLAGS',
 'CXX=C:/msys64/ucrt64/bin/g++.exe LINK=C:/msys64/ucrt64/bin/g++.exe AR=C:/msys64/ucrt64/bin/ar.exe PATH=/usr/bin:/ucrt64/bin:/c/Windows/System32 SHELL=C:/msys64/usr/bin/sh.exe',
 '--threads','1','--build-jobs','4','--verilate-jobs','1')+$sources
& verilator-safe @args
if($LASTEXITCODE -ne 0){exit $LASTEXITCODE}
& verilator-safe sim (Join-Path $ModelDirectory 'Vtb_loader.exe')
exit $LASTEXITCODE
