[CmdletBinding()]
param(
    [Parameter(Mandatory)][string]$Game,
    [Parameter(Mandatory)][ValidateNotNullOrEmpty()][int[]]$Frames,
    [Parameter(Mandatory)][string]$OutputDirectory,
    [string]$MameExecutable = 'D:\Arcade\AI\mame\mame.exe',
    [string]$MameRoms = 'D:\Arcade\AI\mame\roms',
    [int]$CoinFrame = 0,
    [int]$StartFrame = 0,
    [int]$ActionFrame = 0,
    [ValidateRange(1,120)][int]$InputFrames = 4,
    [switch]$VideoNone
)

$ErrorActionPreference = 'Stop'
$repoRoot = Split-Path -Parent $PSScriptRoot
$outputRoot = [IO.Path]::GetFullPath((Join-Path $repoRoot $OutputDirectory))
foreach ($name in 'cfg','nvram','state','snap') {
    New-Item -ItemType Directory -Force -Path (Join-Path $outputRoot $name) |
        Out-Null
}

$priorFrames = [Environment]::GetEnvironmentVariable('S24_CAPTURE_FRAMES')
$priorPrefix = [Environment]::GetEnvironmentVariable('S24_CAPTURE_PREFIX')
$priorCoin = [Environment]::GetEnvironmentVariable('S24_COIN_FRAME')
$priorStart = [Environment]::GetEnvironmentVariable('S24_START_FRAME')
$priorAction = [Environment]::GetEnvironmentVariable('S24_ACTION_FRAME')
$priorInputFrames = [Environment]::GetEnvironmentVariable('S24_INPUT_FRAMES')
try {
    $env:S24_CAPTURE_FRAMES = (($Frames | Sort-Object -Unique) -join ',')
    $env:S24_CAPTURE_PREFIX = $Game
    $env:S24_COIN_FRAME = $CoinFrame
    $env:S24_START_FRAME = $StartFrame
    $env:S24_ACTION_FRAME = $ActionFrame
    $env:S24_INPUT_FRAMES = $InputFrames
    $videoArguments = if ($VideoNone) { @('-video','none') } else { @('-window','-nomaximize') }
    & $MameExecutable $Game @videoArguments -skip_gameinfo -nothrottle `
        -rompath "$repoRoot\roms;$MameRoms" `
        -cfg_directory (Join-Path $outputRoot 'cfg') `
        -nvram_directory (Join-Path $outputRoot 'nvram') `
        -state_directory (Join-Path $outputRoot 'state') `
        -snapshot_directory (Join-Path $outputRoot 'snap') `
        -autoboot_script (Join-Path $repoRoot 'verif\mame\capture_frames.lua')
    exit $LASTEXITCODE
} finally {
    [Environment]::SetEnvironmentVariable('S24_CAPTURE_FRAMES',$priorFrames)
    [Environment]::SetEnvironmentVariable('S24_CAPTURE_PREFIX',$priorPrefix)
    [Environment]::SetEnvironmentVariable('S24_COIN_FRAME',$priorCoin)
    [Environment]::SetEnvironmentVariable('S24_START_FRAME',$priorStart)
    [Environment]::SetEnvironmentVariable('S24_ACTION_FRAME',$priorAction)
    [Environment]::SetEnvironmentVariable('S24_INPUT_FRAMES',$priorInputFrames)
}
