[CmdletBinding()]
param([string]$ModelDirectory='C:/tmp/s24_obj_sspirits_long_list',
	[string]$Checkpoint='C:/tmp/s24_obj_sspirits_long_list/sspirits-long-list.vltsv')
$ErrorActionPreference='Stop'
Set-Location -LiteralPath (Split-Path -Parent $PSScriptRoot)
$vs='C:/Users/meath/bin/verilator-safe.exe'
$env:Path='C:\msys64\ucrt64\bin;C:\msys64\usr\bin;'+$env:Path
& $vs status;if($LASTEXITCODE-ne 0){exit $LASTEXITCODE}
New-Item -ItemType Directory -Force -Path $ModelDirectory|Out-Null
$modelRoot=(Resolve-Path -LiteralPath $ModelDirectory).Path -replace '\\','/'
$sources=@(
	@('rtl/s24_pkg.sv','s24_pkg.sv'),
	@('rtl/video/s24_sprite.sv','s24_sprite.sv'),
	@('verif/tb_sspirits_long_list.sv','tb_sspirits_long_list.sv'),
	@('verif/sspirits_long_list_main.cpp','sspirits_long_list_main.cpp')
)|ForEach-Object{$dest=$modelRoot+'/'+$_[1];Copy-Item -LiteralPath $_[0] -Destination $dest -Force;$dest}
$pkg='C:/msys64/ucrt64/bin/pkg-config.exe'
$cf=(& $pkg --cflags sdl2)-replace '-Dmain=SDL_main',''
$lf=(& $pkg --libs sdl2)-replace '-lmingw32',''-replace '-mwindows',''-replace '-lSDL2main',''
$guard=Join-Path $ModelDirectory 'sdl_verilator_guard.exe'
& 'C:/msys64/ucrt64/bin/g++.exe' 'verif/sdl_verilator_guard.cpp' '-DSDL_MAIN_HANDLED' `
	($cf-split '\s+'|Where-Object{$_}) ($lf-split '\s+'|Where-Object{$_}) '-o' $guard
if($LASTEXITCODE-ne 0){exit $LASTEXITCODE}
$gp=Start-Process -FilePath $guard -PassThru;Start-Sleep -Milliseconds 300
$args=@('--cc','--exe','--build','--savable','--assert','-O3','--top-module',
	'tb_sspirits_long_list','--Mdir',$ModelDirectory,'--Wno-fatal','-CFLAGS',
	"-O3 -march=native -D_GLIBCXX_USE_CXX11_ABI=0 -DSDL_MAIN_HANDLED $cf",'-LDFLAGS',$lf,
	'-MAKEFLAGS','CXX=C:/msys64/ucrt64/bin/g++.exe LINK=C:/msys64/ucrt64/bin/g++.exe AR=C:/msys64/ucrt64/bin/ar.exe SHELL=C:/msys64/usr/bin/sh.exe',
	'--threads','1','--build-jobs','4','--verilate-jobs','1','rtl/s24_pkg.sv',
	'rtl/video/s24_sprite.sv','verif/tb_sspirits_long_list.sv','verif/sspirits_long_list_main.cpp')
$args=$args[0..($args.Count-5)]+$sources
try{& $vs @args;$be=$LASTEXITCODE}finally{if($gp-and-not $gp.HasExited){Stop-Process -Id $gp.Id}}
if($be-ne 0){exit $be}
& $vs sim (Join-Path $ModelDirectory 'Vtb_sspirits_long_list.exe') "+SAVE=$Checkpoint"
exit $LASTEXITCODE
