param(
    [int64]$MaxClocks = 6000000000,
    [int64]$ProgressClocks = 100000000
)

$repo = 'C:\Users\meath\OneDrive\Documents\Sega System 24'
$logPath = Join-Path $repo 'verif\captures\gground-target7.log'
$resultPath = Join-Path $repo 'verif\captures\gground-target7.result'
Set-Location -LiteralPath $repo

$runnerArgs = @(
    'tools/run_game_matrix.py',
    '--exe', 'verif/obj_gground/Vtb_gground_boot.exe',
    '--media', 'verif/media',
    '--sets', 'gground',
    '--target', '7',
    '--max-clocks', "$MaxClocks",
    '--progress-clocks', "$ProgressClocks",
    '--attract-min-pixels', '1000',
    '--attract-frames', '120',
    '--attract-b-pc-min', '0x4000',
    '--frame-dir', 'verif/frames/gground-attract'
)

"started=$(Get-Date -Format o)" | Set-Content -LiteralPath $resultPath
& python @runnerArgs *> $logPath
$result = $LASTEXITCODE
"exit_code=$result completed=$(Get-Date -Format o)" | Set-Content -LiteralPath $resultPath
exit $result
