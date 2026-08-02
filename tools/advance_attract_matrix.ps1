param(
    [string]$Exe = 'verif\obj_gground_irqfix\Vtb_gground_boot.exe',
    [int]$PollSeconds = 15
)

$repo = 'C:\Users\meath\OneDrive\Documents\Sega System 24'
$pwsh = 'C:\Program Files\PowerShell\7\pwsh.exe'
$sets = @(
    'sspirits', 'hotrod', 'roughrac', 'bnzabros', 'dcclub', 'crkdown', 'gground'
)

Set-Location -LiteralPath $repo
$chainLog = Join-Path $repo 'verif\captures\attract-matrix-chain.log'

function Write-ChainLog([string]$Message) {
    "$(Get-Date -Format o) $Message" | Add-Content -LiteralPath $chainLog
}

function Read-Result([string]$SetName) {
    $path = Join-Path $repo ("verif\captures\{0}-target7.result" -f $SetName)
    if (-not (Test-Path -LiteralPath $path)) { return '' }
    return Get-Content -Raw -LiteralPath $path
}

function Start-SetWrapper([string]$SetName) {
    $process = Start-Process -FilePath $pwsh -WindowStyle Hidden -WorkingDirectory $repo -PassThru -ArgumentList @(
        '-NoProfile', '-ExecutionPolicy', 'Bypass', '-File',
        'tools\wait_and_run_game_matrix.ps1', '-SetName', $SetName,
        '-Exe', $Exe, '-MaxAttempts', '720', '-RetrySeconds', '10',
        '-MaxClocks', '6000000000', '-ProgressClocks', '100000000'
    )
    try { (Get-Process -Id $process.Id -ErrorAction Stop).PriorityClass = 'BelowNormal' } catch {}
    Write-ChainLog ("started {0} wrapper pid={1}" -f $SetName, $process.Id)
}

foreach ($set in $sets) {
    Write-ChainLog ("waiting for {0}" -f $set)
    while ($true) {
        $result = Read-Result $set
        if ($result -match 'exit_code=0') {
            Write-ChainLog ("PASS {0}" -f $set)
            break
        }
        if ($result -match 'exit_code=\d+') {
            Write-ChainLog ("STOP {0}: {1}" -f $set, ($result.Trim() -replace "`r?`n", ' | '))
            exit 1
        }

        # crkdown is already owned by the live wrapper. Later sets are
        # started only after their predecessor has passed the strict gate.
        if ($set -ne 'crkdown' -and -not (Test-Path -LiteralPath (Join-Path $repo ("verif\captures\{0}-target7.result" -f $set)))) {
            Start-SetWrapper $set
        }
        Start-Sleep -Seconds $PollSeconds
    }
}

Write-ChainLog 'COMPLETE all queued target-7 sets'
exit 0
