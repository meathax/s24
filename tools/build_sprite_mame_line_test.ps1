[CmdletBinding()]
param(
	[string]$ModelDirectory='C:/tmp/s24_obj_sprite_mame_line_raster',
	[string]$Checkpoint='C:/tmp/s24_obj_sprite_mame_line_raster/sspirits-raster.vltsv',
	[int]$MemoryLatency=13,
	[ValidateSet(0,64,128,256,512,1024)][int]$CacheEntries=0
)
$ErrorActionPreference='Stop'
$repoRoot=Split-Path -Parent $PSScriptRoot
Set-Location -LiteralPath $repoRoot
if(!(Test-Path -LiteralPath '.build/mame-sspirits-sprite1200.hex')) {
	throw 'Missing diagnostic capture .build/mame-sspirits-sprite1200.hex'
}
$vs='C:/Users/meath/bin/verilator-safe.exe'
$env:Path='C:\msys64\ucrt64\bin;C:\msys64\usr\bin;'+$env:Path
& $vs status
if($LASTEXITCODE-ne 0){exit $LASTEXITCODE}
New-Item -ItemType Directory -Force -Path $ModelDirectory|Out-Null
$modelRoot=(Resolve-Path -LiteralPath $ModelDirectory).Path-replace'\\','/'
$sources=@(
	@('rtl/s24_pkg.sv','s24_pkg.sv'),
	@('rtl/video/s24_sprite.sv','s24_sprite.sv'),
	@('verif/tb_sprite_mame_line.sv','tb_sprite_mame_line.sv'),
	@('verif/sprite_mame_line_main.cpp','sprite_mame_line_main.cpp')
)|ForEach-Object{$dest=$modelRoot+'/'+$_[1];Copy-Item -LiteralPath $_[0] -Destination $dest -Force;$dest}
$args=@('--cc','--exe','--build','--savable','--assert','-O3','--top-module',
	'tb_sprite_mame_line','--Mdir',$ModelDirectory,'--Wno-fatal','-CFLAGS',
	'-O3 -march=native -D_GLIBCXX_USE_CXX11_ABI=0',
	'-MAKEFLAGS','CXX=C:/msys64/ucrt64/bin/g++.exe LINK=C:/msys64/ucrt64/bin/g++.exe AR=C:/msys64/ucrt64/bin/ar.exe SHELL=C:/msys64/usr/bin/sh.exe',
	'--threads','1','--build-jobs','4','--verilate-jobs','1')+$sources
& $vs @args;$buildExit=$LASTEXITCODE
if($buildExit-ne 0){exit $buildExit}
& $vs sim (Join-Path $ModelDirectory 'Vtb_sprite_mame_line.exe') `
	"+MEM_LATENCY=$MemoryLatency" "+CACHE_ENTRIES=$CacheEntries" "+SAVE=$Checkpoint"
exit $LASTEXITCODE
