[CmdletBinding()]
param(
    [Parameter(Mandatory = $true)]
    [string]$LogPath
)

$ErrorActionPreference = 'Stop'
$lines = @(Get-Content -LiteralPath $LogPath)

function Require-One {
    param([string]$Pattern, [string]$Description)
    $matches = @($lines | Where-Object { $_ -match $Pattern })
    if($matches.Count -ne 1) {
        throw "Expected exactly one $Description, found $($matches.Count)"
    }
    return $matches[0]
}

$failures = @($lines | Where-Object {
    $_ -match '%Error|%Fatal|Assertion failed|TB_RESULT=FAIL'
})
if($failures.Count -ne 0) {
    throw "Failure text is present in $LogPath"
}

Require-One '^crkdown reset-barrier clean assertions=on$' `
    'clean reset barrier' | Out-Null
Require-One '^crkdown CNT1 release #1 at clocks=[0-9]+$' `
    'CNT1 release' | Out-Null
Require-One '^PASS tb_gground_boot crkdown game milestone 1$' `
    'target-1 PASS' | Out-Null

$commands = @($lines | Where-Object {
    $_ -match '^crkdown FDC command=(96|9e) '
})
$transfers = @($lines | Where-Object {
    $_ -match '^crkdown FDC transfer=[0-9]+ '
})
if($commands.Count -ne 58) {
    throw "Expected 58 read-multiple commands, found $($commands.Count)"
}
if($transfers.Count -ne 58) {
    throw "Expected 58 complete transfers, found $($transfers.Count)"
}

$expectedPrefix = @(
    'transfer=1 bytes=11520 checksum=6c2b50a5 side/track=0/1',
    'transfer=2 bytes=11520 checksum=ef16470d side/track=0/66',
    'transfer=3 bytes=11520 checksum=e024bbc9 side/track=1/66',
    'transfer=4 bytes=11520 checksum=7525e786 side/track=0/67',
    'transfer=5 bytes=11520 checksum=aa5175db side/track=1/67',
    'transfer=6 bytes=11520 checksum=32386c67 side/track=0/68',
    'transfer=7 bytes=11520 checksum=d19139ae side/track=1/68'
)
for($index = 0; $index -lt $expectedPrefix.Count; $index++) {
    if($transfers[$index] -notmatch [regex]::Escape($expectedPrefix[$index])) {
        throw "Transfer $($index + 1) differs from the pinned prefix"
    }
}
if($transfers[-1] -notmatch
        'transfer=58 bytes=11520 checksum=32ae2a8e side/track=1/0$') {
    throw 'Final transfer differs from the pinned command-58 fingerprint'
}

$milestone = Require-One '^crkdown milestone target=1 ' 'target-1 milestone'
foreach($field in @(
    'media=668160/668160',
    'fdcbytes=668160',
    'tracks=58',
    'checksum=cdacc2b2',
    'cpuB=1',
    'release=1'
)) {
    if($milestone -notmatch "(^| )$([regex]::Escape($field))( |$)") {
        throw "Target-1 milestone is missing $field"
    }
}

Write-Output 'PASS Crack Down FDC command-58, CNT1 release and CPU-B evidence'
