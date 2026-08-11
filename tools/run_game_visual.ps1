[CmdletBinding()]
param(
    [Parameter(Mandatory=$true)][string]$Game,
    [string]$ModelDirectory = 'C:/tmp/s24_obj_gground_visual4',
    [string]$Restore = '',
    [string]$Save = '',
    [string]$LockstepDirectory = '',
    [string]$TraceFile = '',
    [UInt64]$TraceStartFrame = 0,
    [UInt64]$TraceEndFrame = 0,
    [ValidateRange(0,8)][int]$Target = 8,
    [string]$FrameOut = '',
    [string]$WavOut = '',
    [UInt64]$AutoCoinFrame = 0,
    [UInt64]$AutoStartFrame = 0,
    [UInt64]$AutoActionFrame = 0,
    [UInt64]$AutoPedalFrame = 0,
    [UInt64]$AutoPedalEndFrame = 0,
    [ValidateRange(0,255)][int]$AutoPedalValue = 255,
    [UInt64]$AutoCaptureFrame = 0,
    [UInt64]$AutoExitFrame = 0,
    [UInt64]$AutoSaveFrame = 0,
    [UInt64]$AutoInputFrames = 4,
    [string]$HostFrameOut = '',
    [switch]$Gameplay,
    [switch]$RealAudio,
    [switch]$NoAutoFinish,
    [string]$ResultFile = '',
    [string]$RunTag = '',
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
if ($WavOut) {
    $wavParent = Split-Path -Parent $WavOut
    if ($wavParent) { New-Item -ItemType Directory -Force -Path $wavParent | Out-Null }
}
if (!$SkipBuild) {
    $buildArgs = @{ ModelDirectory = $ModelDirectory }
    if($RealAudio) { $buildArgs.RealAudio = $true }
    & (Join-Path $PSScriptRoot 'build_gground_visual.ps1') @buildArgs
    if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
}
if (!(Test-Path -LiteralPath $exe)) { throw "Visual model not built: $exe" }

if ($Detached) {
    $logDirectory = Join-Path $repoRoot '.build'
    New-Item -ItemType Directory -Force -Path $logDirectory | Out-Null
    $logStem = $Game
    if ($RunTag) { $logStem = "$Game-$RunTag" }
    $detachedResult = Join-Path $logDirectory "$logStem-live.result"
    Remove-Item -LiteralPath $detachedResult -ErrorAction SilentlyContinue
    $childArguments = '-NoProfile -ExecutionPolicy Bypass -File "' + $PSCommandPath +
        '" -Game "' + $Game + '" -ModelDirectory "' + $ModelDirectory +
        '" -ResultFile "' + $detachedResult + '" -SkipBuild'
    if ($Restore) { $childArguments += ' -Restore "' + $Restore + '"' }
    if ($Save) { $childArguments += ' -Save "' + $Save + '"' }
    if ($LockstepDirectory) {
        $childArguments += ' -LockstepDirectory "' + $LockstepDirectory + '"'
    }
    if ($TraceFile) { $childArguments += ' -TraceFile "' + $TraceFile + '"' }
    if ($TraceStartFrame) { $childArguments += ' -TraceStartFrame ' + $TraceStartFrame }
    if ($TraceEndFrame) { $childArguments += ' -TraceEndFrame ' + $TraceEndFrame }
    $childArguments += ' -Target ' + $Target
    if ($FrameOut) { $childArguments += ' -FrameOut "' + $FrameOut + '"' }
    if ($AutoCoinFrame) { $childArguments += ' -AutoCoinFrame ' + $AutoCoinFrame }
    if ($AutoStartFrame) { $childArguments += ' -AutoStartFrame ' + $AutoStartFrame }
    if ($AutoActionFrame) { $childArguments += ' -AutoActionFrame ' + $AutoActionFrame }
    if ($AutoPedalFrame) { $childArguments += ' -AutoPedalFrame ' + $AutoPedalFrame }
    if ($AutoPedalEndFrame) { $childArguments += ' -AutoPedalEndFrame ' + $AutoPedalEndFrame }
    if ($AutoPedalFrame) { $childArguments += ' -AutoPedalValue ' + $AutoPedalValue }
    if ($AutoCaptureFrame) { $childArguments += ' -AutoCaptureFrame ' + $AutoCaptureFrame }
    if ($AutoExitFrame) { $childArguments += ' -AutoExitFrame ' + $AutoExitFrame }
    if ($AutoSaveFrame) { $childArguments += ' -AutoSaveFrame ' + $AutoSaveFrame }
    if ($AutoInputFrames) { $childArguments += ' -AutoInputFrames ' + $AutoInputFrames }
    if ($HostFrameOut) { $childArguments += ' -HostFrameOut "' + $HostFrameOut + '"' }
    if ($WavOut) { $childArguments += ' -WavOut "' + $WavOut + '"' }
    if ($RunTag) { $childArguments += ' -RunTag "' + $RunTag + '"' }
    if ($Gameplay) { $childArguments += ' -Gameplay' }
    if ($RealAudio) { $childArguments += ' -RealAudio' }
    if ($NoAutoFinish) { $childArguments += ' -NoAutoFinish' }
    $process = Start-Process -FilePath 'powershell.exe' -ArgumentList $childArguments `
        -WorkingDirectory $repoRoot `
        -WindowStyle Hidden `
        -RedirectStandardOutput (Join-Path $logDirectory "$logStem-live.stdout.log") `
        -RedirectStandardError (Join-Path $logDirectory "$logStem-live.stderr.log") `
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
if ($TraceFile) { $arguments += "+TRACE_FILE=$TraceFile" }
if ($TraceStartFrame) { $arguments += "+TRACE_START_FRAME=$TraceStartFrame" }
if ($TraceEndFrame) { $arguments += "+TRACE_END_FRAME=$TraceEndFrame" }
if ($AutoCoinFrame) { $arguments += "+AUTO_COIN_FRAME=$AutoCoinFrame" }
if ($AutoStartFrame) { $arguments += "+AUTO_START_FRAME=$AutoStartFrame" }
if ($AutoActionFrame) { $arguments += "+AUTO_ACTION_FRAME=$AutoActionFrame" }
if ($AutoPedalFrame) { $arguments += "+AUTO_PEDAL_FRAME=$AutoPedalFrame" }
if ($AutoPedalEndFrame) { $arguments += "+AUTO_PEDAL_END_FRAME=$AutoPedalEndFrame" }
if ($AutoPedalFrame) { $arguments += "+AUTO_PEDAL_VALUE=$AutoPedalValue" }
if ($AutoCaptureFrame) { $arguments += "+AUTO_CAPTURE_FRAME=$AutoCaptureFrame" }
if ($AutoExitFrame) { $arguments += "+AUTO_EXIT_FRAME=$AutoExitFrame" }
if ($AutoSaveFrame) { $arguments += "+AUTOSAVE_FRAME=$AutoSaveFrame" }
if ($AutoInputFrames) { $arguments += "+AUTO_INPUT_FRAMES=$AutoInputFrames" }
if ($HostFrameOut) { $arguments += "+HOST_FRAME_OUT=$HostFrameOut" }
if ($WavOut) { $arguments += "+WAV_OUT=$WavOut" }
if ($NoAutoFinish) { $arguments += '+NO_AUTO_FINISH=1' }
$simLauncher = Get-Command verilator-sim-safe -ErrorAction SilentlyContinue
if (!$simLauncher) {
	$simLauncher = 'C:/Users/meath/bin/verilator-sim-safe.exe'
}
$ucrtBin = 'C:/msys64/ucrt64/bin'
$msysBin = 'C:/msys64/usr/bin'
if ((Test-Path -LiteralPath $ucrtBin) -and (Test-Path -LiteralPath $msysBin)) {
	$env:PATH = "$ucrtBin;$msysBin;$env:PATH"
}
& $simLauncher -- $exe @arguments
$runExit = $LASTEXITCODE
if ($ResultFile) {
    "exit_code=$runExit finished=$(Get-Date -Format o)" |
        Set-Content -LiteralPath $ResultFile
}
exit $runExit
