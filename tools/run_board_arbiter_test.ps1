[CmdletBinding()]
param(
    [string]$ModelDirectory = 'C:/tmp/s24_obj_gground'
)

$ErrorActionPreference = 'Stop'
$exe = Join-Path $ModelDirectory 'Vtb_board_arbiter.exe'
if (-not (Test-Path -LiteralPath $exe)) {
    throw "Missing $exe; run tools/build_board_arbiter_test.ps1 first"
}

& verilator-sim-safe $exe
exit $LASTEXITCODE
