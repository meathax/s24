[CmdletBinding()]
param(
    [string]$ModelDirectory = 'C:/tmp/s24_obj_jt51_tone'
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
$sources = @(
    'jt51.v',
    'jt51_acc.v',
    'jt51_csr_ch.v',
    'jt51_csr_op.v',
    'jt51_eg.v',
    'jt51_exp2lin.v',
    'jt51_exprom.v',
    'jt51_kon.v',
    'jt51_lfo.v',
    'jt51_lin2exp.v',
    'jt51_mmr.v',
    'jt51_mod.v',
    'jt51_noise_lfsr.v',
    'jt51_noise.v',
    'jt51_op.v',
    'jt51_pg.v',
    'jt51_phinc_rom.v',
    'jt51_phrom.v',
    'jt51_pm.v',
    'jt51_reg_ch.v',
    'jt51_reg.v',
    'jt51_sh.v',
    'jt51_timers.v',
    's24_ym3012.sv',
    'tb_jt51_tone.sv'
)
$copiedSources = foreach ($source in $sources) {
    $sourcePath = if ($source -eq 'tb_jt51_tone.sv') {
        Join-Path $repoRoot 'verif/tb_jt51_tone.sv'
    } elseif ($source -eq 's24_ym3012.sv') {
        Join-Path $repoRoot 'rtl/audio/s24_ym3012.sv'
    } else {
        Join-Path $repoRoot ('rtl/audio/jt51/' + $source)
    }
    $destination = Join-Path $modelRoot $source
    Copy-Item -LiteralPath $sourcePath -Destination $destination -Force
    $destination
}

$arguments = @(
    '--binary', '--timing', '--assert', '--top-module', 'tb_jt51_tone',
    '--Mdir', $ModelDirectory,
    '--Wno-fatal',
    '-CFLAGS', '-O3 -D_GLIBCXX_USE_CXX11_ABI=0',
    '-MAKEFLAGS',
    'CXX=C:/msys64/ucrt64/bin/g++.exe LINK=C:/msys64/ucrt64/bin/g++.exe AR=C:/msys64/ucrt64/bin/ar.exe SHELL=C:/msys64/usr/bin/sh.exe',
    '--threads', '1', '--build-jobs', '4', '--verilate-jobs', '1'
) + $copiedSources

& verilator-safe @arguments
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

& verilator-safe sim (Join-Path $ModelDirectory 'Vtb_jt51_tone.exe')
exit $LASTEXITCODE
