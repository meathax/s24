[CmdletBinding()]
param(
    [string]$ModelDirectory = 'C:/tmp/s24_obj_gground_visual4',
    [string]$Restore = '',
    [string]$Save = 'gground.vltsv',
    [switch]$Detached,
    [switch]$SkipBuild
)

$ErrorActionPreference = 'Stop'
$repoRoot = Split-Path -Parent $PSScriptRoot
$exe = Join-Path $ModelDirectory 'Vtb_gground_boot.exe'
Set-Location -LiteralPath $repoRoot
if (!$SkipBuild) {
    & (Join-Path $PSScriptRoot 'build_gground_visual.ps1') -ModelDirectory $ModelDirectory
    if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
}
if (!(Test-Path -LiteralPath $exe)) { throw "Visual model not built: $exe" }

if ($Detached) {
    $logDirectory = Join-Path $repoRoot '.build'
    New-Item -ItemType Directory -Force -Path $logDirectory | Out-Null
    $childArguments = '-NoProfile -ExecutionPolicy Bypass -File "' + $PSCommandPath +
        '" -ModelDirectory "' + $ModelDirectory + '" -SkipBuild'
    if ($Restore) { $childArguments += ' -Restore "' + $Restore + '"' }
    if ($Save) { $childArguments += ' -Save "' + $Save + '"' }
    $process = Start-Process -FilePath 'powershell.exe' -ArgumentList $childArguments `
        -WorkingDirectory $repoRoot `
        -RedirectStandardOutput (Join-Path $logDirectory 'gground-live.stdout.log') `
        -RedirectStandardError (Join-Path $logDirectory 'gground-live.stderr.log') `
        -PassThru
    Write-Host "Gain Ground visual simulator launched (PID $($process.Id))."
    exit 0
}

$arguments = @(
    '+GAME=gground','+BOOT=verif/media/gground/boot.mem','+FLAGS=5',
    '+TRACK=2d00','+INPUT=1','+MAGIC=0','+COINAGE=ff','+DSW=ff',
    '+TARGET=8','+MAX_CLOCKS=9000000000000000000','+PROGRESS_CLOCKS=100000000',
    '+FLOPPY=verif/media/gground/floppy.bin','+KEY=verif/media/gground/key.mem'
)
if ($Restore) { $arguments += "+RESTORE=$Restore" }
if ($Save) { $arguments += "+SAVE=$Save" }
& verilator-sim-safe -- $exe @arguments
exit $LASTEXITCODE
