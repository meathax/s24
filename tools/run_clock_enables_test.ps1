[CmdletBinding()]
param(
    [string]$ModelDirectory = 'C:/tmp/s24_obj_gground'
)

$ErrorActionPreference = 'Stop'
$exe = Join-Path $ModelDirectory 'Vtb_clock_enables.exe'
if (-not (Test-Path -LiteralPath $exe)) {
    throw "Missing $exe; run tools/build_clock_enables_test.ps1 first"
}

& verilator-sim-safe $exe
exit $LASTEXITCODE
