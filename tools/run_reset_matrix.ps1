[CmdletBinding()]
param(
    [Parameter(Mandatory = $true)]
    [string]$Executable,
    [string]$OutputDirectory = 'C:/tmp/s24_reset_matrix'
)

$ErrorActionPreference = 'Stop'
$repoRoot = Split-Path -Parent $PSScriptRoot
Set-Location -LiteralPath $repoRoot
New-Item -ItemType Directory -Force -Path $OutputDirectory | Out-Null

$common = @(
    '+GAME=crkdown',
    '+BOOT=verif/media/crkdown/boot.mem',
    '+FLAGS=5',
    '+TRACK=2d00',
    '+INPUT=0',
    '+MAGIC=0',
    '+COINAGE=ff',
    '+DSW=ff',
    '+TARGET=8',
    '+MAX_CLOCKS=100000',
    '+PROGRESS_CLOCKS=0',
    '+FLOPPY=verif/media/crkdown/floppy.bin',
    '+KEY=verif/media/crkdown/key.mem'
)
$cases = @(
    @('reset0-seed1', '+verilator+rand+reset+0', '+verilator+seed+1'),
    @('reset1-seed1', '+verilator+rand+reset+1', '+verilator+seed+1'),
    @('reset2-seed1', '+verilator+rand+reset+2', '+verilator+seed+1'),
    @('reset2-seed2', '+verilator+rand+reset+2', '+verilator+seed+2')
)

$referenceMilestone = $null
foreach($case in $cases) {
    $name = $case[0]
    $logPath = Join-Path $OutputDirectory ($name + '.log')
    $output = & verilator-sim-safe -- $Executable @common $case[1] $case[2] 2>&1
    $exitCode = $LASTEXITCODE
    $output | Set-Content -LiteralPath $logPath
    if($exitCode -ne 0) {
        throw "$name failed with exit code $exitCode; see $logPath"
    }

    $barriers = @($output | Where-Object {
        $_ -match '^crkdown reset-barrier clean assertions=on$'
    })
    $passes = @($output | Where-Object {
        $_ -match '^PASS tb_gground_boot crkdown game milestone 8$'
    })
    $milestones = @($output | Where-Object {
        $_ -match '^crkdown milestone target=8 '
    })
    if($barriers.Count -ne 1 -or $passes.Count -ne 1 -or
            $milestones.Count -ne 1) {
        throw "$name did not produce exactly one reset barrier, milestone and PASS"
    }
    if($null -eq $referenceMilestone) {
        $referenceMilestone = $milestones[0]
    } elseif($milestones[0] -ne $referenceMilestone) {
        throw "$name milestone differs from reset0-seed1"
    }
    Write-Output "PASS $name"
}

Write-Output $referenceMilestone
Write-Output 'PASS reset matrix: all normalized milestones identical'
