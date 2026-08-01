param(
    [long]$MaxClocks = 500000000,
    [long]$ProgressClocks = 50000000,
    [int]$MaxAttempts = 720,
    [int]$RetrySeconds = 10
)

$repo = 'C:\Users\meath\OneDrive\Documents\Sega System 24'
$logPath = Join-Path $repo 'verif\captures\crkdown-target8-diag.log'
$resultPath = Join-Path $repo 'verif\captures\crkdown-target8-diag.result'
Set-Location -LiteralPath $repo

$simArgs = @(
    '--',
    'verif\obj_gground_irqfix\Vtb_gground_boot.exe',
    '+GAME=crkdown',
    '+BOOT=verif\media\crkdown\boot.mem',
    '+FLAGS=5',
    '+TRACK=2d00',
    '+INPUT=0',
    '+MAGIC=0',
    '+COINAGE=ff',
    '+DSW=ff',
    '+TARGET=8',
    "+MAX_CLOCKS=$MaxClocks",
    "+PROGRESS_CLOCKS=$ProgressClocks",
    '+FLOPPY=verif\media\crkdown\floppy.bin',
    '+KEY=verif\media\crkdown\key.mem'
)

"pending=1 started=$(Get-Date -Format o) max_clocks=$MaxClocks" |
    Set-Content -LiteralPath $resultPath
for ($attempt = 1; $attempt -le $MaxAttempts; $attempt++) {
    & verilator-sim-safe @simArgs *> $logPath
    $result = $LASTEXITCODE
    $retryable = $result -eq 125
    if (-not $retryable -and (Test-Path -LiteralPath $logPath)) {
        $retryable = (Get-Content -Raw -LiteralPath $logPath) -match
            'unable to create simulation synchronization objects|exit status 125'
    }
    if (-not $retryable) {
        break
    }
    Start-Sleep -Seconds $RetrySeconds
}
"exit_code=$result completed=$(Get-Date -Format o)" |
    Set-Content -LiteralPath $resultPath
exit $result
