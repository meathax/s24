param(
    [int]$PollSeconds = 5
)

$repo = 'C:\Users\meath\OneDrive\Documents\Sega System 24'
$qghResultPath = Join-Path $repo 'verif\captures\qgh-target7.result'
$matrixLogPath = Join-Path $repo 'verif\captures\universal-target7.log'
$matrixResultPath = Join-Path $repo 'verif\captures\universal-target7.result'
Set-Location -LiteralPath $repo

# QGH is the first candidate and owns the only pending core simulation. Do not
# touch the machine-wide simulation launcher until its result is final.
while (-not (Test-Path -LiteralPath $qghResultPath -PathType Leaf)) {
    Start-Sleep -Seconds $PollSeconds
}

$qghResult = Get-Content -Raw -LiteralPath $qghResultPath
if ($qghResult -notmatch 'exit_code=0(?:\s|$)') {
    "qgh prerequisite did not pass: $($qghResult.Trim())" |
        Set-Content -LiteralPath $matrixResultPath
    exit 1
}

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
