param(
    [Parameter(Mandatory = $true)]
    [string]$SetName,
    [string]$Exe = 'verif\obj_gground_irqfix\Vtb_gground_boot.exe',
    [int]$MaxAttempts = 720,
    [int]$RetrySeconds = 10,
    [long]$MaxClocks = 6000000000,
    [long]$ProgressClocks = 100000000,
    # Crack Down's 6-billion-clock path is substantially slower than the
    # bounded 500-million-clock diagnostic (~13 minutes on this host).  Keep
    # the timeout finite, but long enough for one deterministic full attract
    # attempt to complete without being mistaken for a launcher failure.
    [double]$SimulationTimeoutSeconds = 14400
)

$repo = 'C:\Users\meath\OneDrive\Documents\Sega System 24'
$logPath = Join-Path $repo ("verif\captures\{0}-target7.log" -f $SetName)
$resultPath = Join-Path $repo ("verif\captures\{0}-target7.result" -f $SetName)
$statusPath = Join-Path $repo ("verif\captures\{0}-target7-status.log" -f $SetName)
$frameDir = Join-Path $repo ("verif\frames\{0}-attract" -f $SetName)
Set-Location -LiteralPath $repo

verilator-safe status *> $statusPath
"pending=1 started=$(Get-Date -Format o)" | Set-Content -LiteralPath $resultPath
$runnerArgs = @(
    'tools/run_game_matrix.py',
    '--exe', $Exe,
    '--media', 'verif/media',
    '--sets', $SetName,
    '--target', '7',
    '--max-clocks', $MaxClocks,
    '--progress-clocks', $ProgressClocks,
    '--sim-timeout', $SimulationTimeoutSeconds,
    '--attract-min-pixels', '1000',
    '--attract-frames', '120',
    '--attract-b-pc-min', '0x4000',
    '--frame-dir', $frameDir
)

$result = 125
$attempt = 0
for ($attempt = 1; $attempt -le $MaxAttempts; $attempt++) {
    # Keep every attempt's diagnostic output. The stable logPath remains the
    # latest attempt for existing coverage/reporting tools, while the
    # numbered files preserve launcher interruptions and first divergences.
    $attemptLogPath = Join-Path $repo ("verif\captures\{0}-target7-attempt-{1:D3}.log" -f $SetName, $attempt)
    & python @runnerArgs *> $attemptLogPath
    Copy-Item -LiteralPath $attemptLogPath -Destination $logPath -Force
    $result = $LASTEXITCODE
    $retryable = $result -eq 125
    if (-not $retryable -and (Test-Path -LiteralPath $logPath)) {
        $retryable = (Get-Content -Raw -LiteralPath $logPath) -match
            'unable to create simulation synchronization objects|exit status 125|returned non-zero exit status 125'
    }
    if (-not $retryable) {
        break
    }
    Start-Sleep -Seconds $RetrySeconds
}

"exit_code=$result attempts=$attempt completed=$(Get-Date -Format o)" |
    Set-Content -LiteralPath $resultPath
exit $result
