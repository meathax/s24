[CmdletBinding()]
param(
    [string]$ModelDirectory = 'C:/tmp/s24_obj_palette_scheduler'
)
$ErrorActionPreference = 'Stop'
$exe = Join-Path $ModelDirectory 'Vtb_palette_scheduler.exe'
if (-not (Test-Path -LiteralPath $exe)) {
    throw "Missing $exe; run tools/build_palette_scheduler_test.ps1 first"
}
& verilator-sim-safe $exe
exit $LASTEXITCODE
