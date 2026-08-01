[CmdletBinding()]
param(
    [string]$ModelDirectory = 'C:/tmp/s24_obj_gground_visual4',
    [string]$Restore = '',
    [string]$Save = 'gground.vltsv',
    [switch]$Detached,
    [switch]$SkipBuild
)

$arguments = @(
    '-Game', 'gground', '-ModelDirectory', $ModelDirectory,
    '-Save', $Save
)
if ($Restore) { $arguments += @('-Restore', $Restore) }
if ($Detached) { $arguments += '-Detached' }
if ($SkipBuild) { $arguments += '-SkipBuild' }
& (Join-Path $PSScriptRoot 'run_game_visual.ps1') @arguments
exit $LASTEXITCODE
