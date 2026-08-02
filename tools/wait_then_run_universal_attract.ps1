param(
    [int]$PollSeconds = 5
)

$repo = 'C:\Users\meath\OneDrive\Documents\Sega System 24'
$matrixLogPath = Join-Path $repo 'verif\captures\universal-target7.log'
$matrixResultPath = Join-Path $repo 'verif\captures\universal-target7.result'
Set-Location -LiteralPath $repo

# Move from the simplest unprotected ROM-board family through the floppy,
# analog, magic-latch, and protected feature families. The runner stops at
# the first failing set, preserving a useful first divergence.
$sets = @(
    'dcclub', 'dcclubj',
    'sspirits',
    'hotrod', 'hotroda', 'hotrodj', 'hotrodja',
    'bnzabros', 'bnzabrosj',
    'crkdown', 'crkdownu', 'crkdownj',
    'sgmast', 'sgmastc', 'sgmastj',
    'gground', 'ggroundj'
)
$runnerArgs = @(
    'tools/run_game_matrix.py',
    '--exe', 'verif/obj_gground/Vtb_gground_boot.exe',
    '--media', 'verif/media',
    '--sets'
) + $sets + @(
    '--target', '7',
    # MAME's first stable dcclubj attract screen is around frame 1321; the
    # RTL reaches only about 264 frames in the former 800M-clock cap.
    # Keep the universal gate long enough for the slowest BIOS/ROM-board set.
    '--max-clocks', '6000000000',
    '--progress-clocks', '100000000',
    '--attract-min-pixels', '1000',
    '--attract-frames', '120',
    '--attract-b-pc-min', '0x4000',
    '--frame-dir', 'verif/frames/universal-attract'
)

& python @runnerArgs *> $matrixLogPath
$result = $LASTEXITCODE
"exit_code=$result completed=$(Get-Date -Format o)" |
    Set-Content -LiteralPath $matrixResultPath
exit $result
