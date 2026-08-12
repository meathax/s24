[CmdletBinding()]
param([string]$ModelDirectory = 'C:/tmp/s24_obj_ikaopm_timer')

$ErrorActionPreference = 'Stop'
$repoRoot = Split-Path -Parent $PSScriptRoot
$fileSystem = New-Object -ComObject Scripting.FileSystemObject
$shortRoot = $fileSystem.GetFolder($repoRoot).ShortPath
Set-Location -LiteralPath $shortRoot
& verilator-safe status
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

$sources = @(
	'rtl/audio/ikaopm/IKAOPM.v',
	'rtl/audio/ikaopm/IKAOPM_modules/IKAOPM_acc.v',
	'rtl/audio/ikaopm/IKAOPM_modules/IKAOPM_eg.v',
	'rtl/audio/ikaopm/IKAOPM_modules/IKAOPM_lfo.v',
	'rtl/audio/ikaopm/IKAOPM_modules/IKAOPM_noise.v',
	'rtl/audio/ikaopm/IKAOPM_modules/IKAOPM_op.v',
	'rtl/audio/ikaopm/IKAOPM_modules/IKAOPM_pg.v',
	'rtl/audio/ikaopm/IKAOPM_modules/IKAOPM_primitives.v',
	'rtl/audio/ikaopm/IKAOPM_modules/IKAOPM_reg.v',
	'rtl/audio/ikaopm/IKAOPM_modules/IKAOPM_timer.v',
	'rtl/audio/ikaopm/IKAOPM_modules/IKAOPM_timinggen.v',
	'rtl/audio/s24_opm.sv', 'verif/tb_ikaopm_timer.sv'
)
$arguments = @(
	'--binary', '--timing', '--assert', '-O3', '--threads', '1',
	'--top-module', 'tb_ikaopm_timer', '--Mdir', $ModelDirectory, '--Wno-fatal',
	'-CFLAGS', '-O3 -march=native -D_GLIBCXX_USE_CXX11_ABI=0',
	'-MAKEFLAGS', 'CXX=C:/msys64/ucrt64/bin/g++.exe LINK=C:/msys64/ucrt64/bin/g++.exe AR=C:/msys64/ucrt64/bin/ar.exe SHELL=C:/msys64/usr/bin/sh.exe',
	'--build-jobs', '4', '--verilate-jobs', '1'
) + $sources
& verilator-safe @arguments
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
& verilator-sim-safe (Join-Path $ModelDirectory 'Vtb_ikaopm_timer.exe')
exit $LASTEXITCODE
