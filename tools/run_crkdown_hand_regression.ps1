[CmdletBinding()]
param(
    [Parameter(Mandatory = $true)]
    [string]$ListExecutable,
    [Parameter(Mandatory = $true)]
    [string]$RealArtworkExecutable,
    [int[]]$MemoryLatencies = @(0, 16, 64)
)

$ErrorActionPreference = 'Stop'
$repoRoot = Split-Path -Parent $PSScriptRoot
Set-Location -LiteralPath $repoRoot

foreach($latency in $MemoryLatencies) {
    $output = & verilator-sim-safe -- $ListExecutable `
        '+verilator+rand+reset+2' '+verilator+seed+1' `
        "+MEM_LATENCY=$latency" 2>&1
    if($LASTEXITCODE -ne 0) {
        throw "Crack Down list regression failed at memory latency $latency"
    }
    if(@($output | Where-Object {
        $_ -match '^crkdown sprite 1051: 64/64 expected lines rendered, 0 missing$'
    }).Count -ne 1 -or @($output | Where-Object {
        $_ -match '^TB_RESULT=PASS$'
    }).Count -ne 1) {
        throw "Crack Down list regression produced incomplete evidence at latency $latency"
    }
    Write-Output "PASS hand descriptor/list deadline at latency $latency"
}

$realOutput = & verilator-sim-safe -- $RealArtworkExecutable `
    '+verilator+rand+reset+2' '+verilator+seed+1' 2>&1
if($LASTEXITCODE -ne 0) {
    throw 'Crack Down real-artwork regression failed'
}
if(@($realOutput | Where-Object {
    $_ -match '^real-artwork probe: lines_checked=64 checked=4096 errors=0$'
}).Count -ne 1 -or @($realOutput | Where-Object {
    $_ -match '^TB_RESULT=PASS$'
}).Count -ne 1) {
    throw 'Crack Down real-artwork regression produced incomplete evidence'
}

Write-Output 'PASS hand real-artwork 4096-pixel MAME comparison'
Write-Output 'PASS Crack Down hand regression'
