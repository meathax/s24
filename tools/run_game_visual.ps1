[CmdletBinding()]
param(
    [Parameter(Mandatory=$true)][string]$Game,
    [string]$ModelDirectory = 'C:/tmp/s24_obj_gground_visual4',
    [string]$Restore = '',
    [string]$Save = '',
    [string]$LockstepDirectory = '',
    [ValidateRange(0,8)][int]$Target = 8,
    [string]$FrameOut = '',
    [UInt64]$AutoCoinFrame = 0,
    [UInt64]$AutoStartFrame = 0,
    [UInt64]$AutoActionFrame = 0,
    [UInt64]$AutoCaptureFrame = 0,
    [UInt64]$AutoExitFrame = 0,
    [UInt64]$AutoSaveFrame = 0,
    [UInt64]$AutoInputFrames = 4,
    [string]$HostFrameOut = '',
    [switch]$Gameplay,
    [switch]$NoAutoFinish,
    [string]$ResultFile = '',
    [switch]$Detached,
    [switch]$SkipBuild
)

$ErrorActionPreference = 'Stop'
$repoRoot = Split-Path -Parent $PSScriptRoot
$exe = Join-Path $ModelDirectory 'Vtb_gground_boot.exe'
if (!$Save) { $Save = Join-Path $repoRoot "$Game.vltsv" }
Set-Location -LiteralPath $repoRoot
if ($FrameOut) {
    $frameParent = Split-Path -Parent $FrameOut
    if ($frameParent) { New-Item -ItemType Directory -Force -Path $frameParent | Out-Null }
}
if ($HostFrameOut) {
    $hostFrameParent = Split-Path -Parent $HostFrameOut
    if ($hostFrameParent) { New-Item -ItemType Directory -Force -Path $hostFrameParent | Out-Null }
}
if (!$SkipBuild) {
    & (Join-Path $PSScriptRoot 'build_gground_visual.ps1') -ModelDirectory $ModelDirectory
    if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
}
if (!(Test-Path -LiteralPath $exe)) { throw "Visual model not built: $exe" }

if ($Detached) {
    $logDirectory = Join-Path $repoRoot '.build'
    New-Item -ItemType Directory -Force -Path $logDirectory | Out-Null
    $detachedResult = Join-Path $logDirectory "$Game-live.result"
    Remove-Item -LiteralPath $detachedResult -ErrorAction SilentlyContinue
    $childArguments = '-NoProfile -ExecutionPolicy Bypass -File "' + $PSCommandPath +
        '" -Game "' + $Game + '" -ModelDirectory "' + $ModelDirectory +
        '" -ResultFile "' + $detachedResult + '" -SkipBuild'
    if ($Restore) { $childArguments += ' -Restore "' + $Restore + '"' }
    if ($Save) { $childArguments += ' -Save "' + $Save + '"' }
    if ($LockstepDirectory) {
        $childArguments += ' -LockstepDirectory "' + $LockstepDirectory + '"'
    }
    $childArguments += ' -Target ' + $Target
    if ($FrameOut) { $childArguments += ' -FrameOut "' + $FrameOut + '"' }
    if ($AutoCoinFrame) { $childArguments += ' -AutoCoinFrame ' + $AutoCoinFrame }
    if ($AutoStartFrame) { $childArguments += ' -AutoStartFrame ' + $AutoStartFrame }
    if ($AutoActionFrame) { $childArguments += ' -AutoActionFrame ' + $AutoActionFrame }
    if ($AutoCaptureFrame) { $childArguments += ' -AutoCaptureFrame ' + $AutoCaptureFrame }
    if ($AutoExitFrame) { $childArguments += ' -AutoExitFrame ' + $AutoExitFrame }
    if ($AutoSaveFrame) { $childArguments += ' -AutoSaveFrame ' + $AutoSaveFrame }
    if ($AutoInputFrames) { $childArguments += ' -AutoInputFrames ' + $AutoInputFrames }
    if ($HostFrameOut) { $childArguments += ' -HostFrameOut "' + $HostFrameOut + '"' }
    if ($Gameplay) { $childArguments += ' -Gameplay' }
    if ($NoAutoFinish) { $childArguments += ' -NoAutoFinish' }
    $process = Start-Process -FilePath 'powershell.exe' -ArgumentList $childArguments `
        -WorkingDirectory $repoRoot `
        -WindowStyle Hidden `
        -RedirectStandardOutput (Join-Path $logDirectory "$Game-live.stdout.log") `
        -RedirectStandardError (Join-Path $logDirectory "$Game-live.stderr.log") `
        -PassThru
    Write-Host "$Game visual simulator launched (PID $($process.Id))."
    exit 0
}

$profileCommand = @((Join-Path $PSScriptRoot 'game_profile_args.py'), $Game,
    '--target', "$Target")
if ($LockstepDirectory) {
    $profileCommand += @('--lockstep-dir', $LockstepDirectory)
}
if ($FrameOut) { $profileCommand += @('--frame-out', $FrameOut) }
if ($Gameplay) {
    if (!$HostFrameOut) { throw '-Gameplay requires -HostFrameOut' }
    $profileCommand += @('--gameplay','--host-frame-out',$HostFrameOut)
}
$arguments = @(& python @profileCommand)
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
if ($Restore) { $arguments += "+RESTORE=$Restore" }
if ($Save) { $arguments += "+SAVE=$Save" }
if ($AutoCoinFrame) { $arguments += "+AUTO_COIN_FRAME=$AutoCoinFrame" }
if ($AutoStartFrame) { $arguments += "+AUTO_START_FRAME=$AutoStartFrame" }
if ($AutoActionFrame) { $arguments += "+AUTO_ACTION_FRAME=$AutoActionFrame" }
if ($AutoCaptureFrame) { $arguments += "+AUTO_CAPTURE_FRAME=$AutoCaptureFrame" }
if ($AutoExitFrame) { $arguments += "+AUTO_EXIT_FRAME=$AutoExitFrame" }
if ($AutoSaveFrame) { $arguments += "+AUTOSAVE_FRAME=$AutoSaveFrame" }
if ($AutoInputFrames) { $arguments += "+AUTO_INPUT_FRAMES=$AutoInputFrames" }
if ($HostFrameOut) { $arguments += "+HOST_FRAME_OUT=$HostFrameOut" }
if ($NoAutoFinish) { $arguments += '+NO_AUTO_FINISH=1' }
& verilator-sim-safe -- $exe @arguments
$runExit = $LASTEXITCODE
if ($ResultFile) {
    "exit_code=$runExit finished=$(Get-Date -Format o)" |
        Set-Content -LiteralPath $ResultFile
}
exit $runExit
