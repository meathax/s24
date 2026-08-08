[CmdletBinding()]
param(
    [string]$ModelDirectory = 'C:/tmp/s24_obj_gground_visual4',
    [string]$Restore = '',
    [string]$Save = 'gground.vltsv',
    [switch]$Detached,
    [switch]$SkipBuild,
    [switch]$NoAutoFinish
)

$parameters = @{
    Game = 'gground'
    ModelDirectory = $ModelDirectory
    Save = $Save
}
if ($Restore) { $parameters.Restore = $Restore }
if ($Detached) { $parameters.Detached = $true }
if ($SkipBuild) { $parameters.SkipBuild = $true }
if ($NoAutoFinish) { $parameters.NoAutoFinish = $true }
& (Join-Path $PSScriptRoot 'run_game_visual.ps1') @parameters
exit $LASTEXITCODE
