param(
    [int]$MaxClocks = 100000000,
    [int]$ProgressClocks = 25000000
)

$repo = 'C:\Users\meath\OneDrive\Documents\Sega System 24'
$logPath = Join-Path $repo 'verif\captures\dcclub-timer-boundary.log'
$resultPath = Join-Path $repo 'verif\captures\dcclub-timer-boundary.result'
Set-Location -LiteralPath $repo

$simArgs = @(
    '--',
    'verif\obj_gground\Vtb_gground_boot.exe',
    '+GAME=dcclub',
    '+BOOT=verif\media\dcclub\boot.mem',
    '+FLAGS=22',
    '+TRACK=0',
    '+INPUT=0',
    '+MAGIC=2',
    '+COINAGE=ff',
    '+DSW=fb',
    '+TARGET=8',
    "+MAX_CLOCKS=$MaxClocks",
    "+PROGRESS_CLOCKS=$ProgressClocks",
    '+ROMBOARD=verif\media\dcclub\romboard.mem'
)

"started=$(Get-Date -Format o)" | Set-Content -LiteralPath $resultPath
& verilator-sim-safe @simArgs *> $logPath
$result = $LASTEXITCODE
"exit_code=$result completed=$(Get-Date -Format o)" | Set-Content -LiteralPath $resultPath
exit $result
