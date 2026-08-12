[CmdletBinding()]
param(
	[string]$ModelDirectory=(Join-Path $env:TEMP 's24_obj_sprite_ydiv')
)

$ErrorActionPreference='Stop'
$repoRoot=Split-Path -Parent $PSScriptRoot
Set-Location -LiteralPath $repoRoot
$verilatorSafe='C:/Users/meath/bin/verilator-safe.exe'
$env:Path='C:\msys64\ucrt64\bin;C:\msys64\usr\bin;'+$env:Path

& $verilatorSafe status
if($LASTEXITCODE-ne 0){exit $LASTEXITCODE}

New-Item -ItemType Directory -Force -Path $ModelDirectory|Out-Null
$modelRoot=(Resolve-Path -LiteralPath $ModelDirectory).Path-replace'\\','/'
$sources=@(
	@('rtl/s24_pkg.sv','s24_pkg.sv'),
	@('rtl/video/s24_sprite.sv','s24_sprite.sv'),
	@('verif/tb_sprite_ydiv.sv','tb_sprite_ydiv.sv'),
	@('verif/sprite_ydiv_main.cpp','sprite_ydiv_main.cpp')
)|ForEach-Object{
	$destination=$modelRoot+'/'+$_[1]
	Copy-Item -LiteralPath $_[0] -Destination $destination -Force
	$destination
}

$arguments=@(
	'--cc','--exe','--build','--assert','--timing','--sched-zero-delay',
	'--x-initial','unique','--x-assign','unique','-O3','--top-module',
	'tb_sprite_ydiv','--Mdir',$ModelDirectory,'--Wno-fatal','-CFLAGS',
	'-O3 -march=native -D_GLIBCXX_USE_CXX11_ABI=0','-MAKEFLAGS',
	'CXX=C:/msys64/ucrt64/bin/g++.exe LINK=C:/msys64/ucrt64/bin/g++.exe AR=C:/msys64/ucrt64/bin/ar.exe SHELL=C:/msys64/usr/bin/sh.exe',
	'--threads','1','--build-jobs','4','--verilate-jobs','1'
)+$sources

& $verilatorSafe @arguments
if($LASTEXITCODE-ne 0){exit $LASTEXITCODE}
& $verilatorSafe sim (Join-Path $ModelDirectory 'Vtb_sprite_ydiv.exe')
exit $LASTEXITCODE
