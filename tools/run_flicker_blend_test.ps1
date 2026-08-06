[CmdletBinding()]
param(
    [string]$ModelDirectory = 'C:/tmp/s24_obj_flicker_blend'
)

$ErrorActionPreference = 'Stop'
$exe = Join-Path $ModelDirectory 'Vtb_flicker_blend.exe'
if (-not (Test-Path -LiteralPath $exe)) {
    throw "Missing $exe; run tools/build_flicker_blend_test.ps1 first"
}

& verilator-sim-safe $exe
exit $LASTEXITCODE
