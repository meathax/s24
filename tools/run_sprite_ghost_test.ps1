[CmdletBinding()]
param(
    [string]$ModelDirectory = 'C:/tmp/s24_obj_sprite_ghost'
)

$ErrorActionPreference = 'Stop'
$exe = Join-Path $ModelDirectory 'Vtb_sprite_ghost.exe'
if (-not (Test-Path -LiteralPath $exe)) {
    throw "Missing $exe; run tools/build_sprite_ghost_test.ps1 first"
}

& verilator-sim-safe $exe
exit $LASTEXITCODE
