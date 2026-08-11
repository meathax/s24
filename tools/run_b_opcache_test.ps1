[CmdletBinding()]
param([string]$ModelDirectory = 'C:/tmp/s24_obj_b_opcache')

$ErrorActionPreference='Stop'
$exe=Join-Path $ModelDirectory 'Vtb_b_opcache.exe'
if(-not (Test-Path -LiteralPath $exe)) {
    throw "Missing $exe; run tools/build_b_opcache_test.ps1 first"
}
& verilator-sim-safe $exe
exit $LASTEXITCODE
