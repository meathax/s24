param(
    [int]$MaxAttempts = 720,
    [int]$RetrySeconds = 5
)

$repo = 'C:\Users\meath\OneDrive\Documents\Sega System 24'
$logPath = Join-Path $repo 'verif\captures\qgh-target7.log'
$resultPath = Join-Path $repo 'verif\captures\qgh-target7.result'
Set-Location -LiteralPath $repo

$simArgs = @(
    '--',
    'verif\obj_gground\Vtb_gground_boot.exe',
    '+GAME=qgh',
    '+BOOT=verif\media\qgh\boot.mem',
    '+FLAGS=2',
    '+TRACK=0',
    '+INPUT=0',
    '+MAGIC=1',
    '+COINAGE=ff',
    '+DSW=ff',
    '+TARGET=7',
    '+MAX_CLOCKS=800000000',
    '+PROGRESS_CLOCKS=100000000',
    '+ROMBOARD=verif\media\qgh\romboard.mem',
    '+ATTRACT_MIN_PIXELS=1000',
    '+ATTRACT_FRAMES=120',
    '+ATTRACT_B_PC_MIN=16384',
    '+FRAME_OUT=verif\frames\qgh-attract\qgh.ppm'
)

verilator-safe status *> (Join-Path $repo 'verif\captures\qgh-target7-status.log')
$result = 125
for ($attempt = 1; $attempt -le $MaxAttempts; $attempt++) {
    & verilator-sim-safe @simArgs *> $logPath
    $result = $LASTEXITCODE
    if ($result -ne 125) {
        break
    }
    Start-Sleep -Seconds $RetrySeconds
}

"exit_code=$result attempts=$attempt completed=$(Get-Date -Format o)" |
    Set-Content -LiteralPath $resultPath
exit $result
