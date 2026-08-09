[CmdletBinding()]
param(
    [string]$ModelDirectory = 'C:/tmp/s24_obj_sprite_crkdown_list',
    [string]$Checkpoint = 'C:/tmp/s24_obj_sprite_crkdown_list/crkdown-list.vltsv',
    [int]$MemoryLatency = 0
)

$ErrorActionPreference = 'Stop'
$repoRoot = Split-Path -Parent $PSScriptRoot
$fileSystem = New-Object -ComObject Scripting.FileSystemObject
$shortRoot = $fileSystem.GetFolder($repoRoot).ShortPath
Set-Location -LiteralPath $shortRoot
$verilatorSafe = 'C:/Users/meath/bin/verilator-safe.exe'
$env:Path = 'C:\msys64\ucrt64\bin;C:\msys64\usr\bin;' + $env:Path
$env:MSYSTEM = 'UCRT64'
$env:CHERE_INVOKING = '1'

& $verilatorSafe status
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

$modelRoot = $ModelDirectory.TrimEnd('/','\') -replace '\\','/'
$visibleMain = $modelRoot + '/sprite_crkdown_list_main.cpp'
New-Item -ItemType Directory -Force -Path $ModelDirectory | Out-Null
Copy-Item -LiteralPath 'verif/sprite_crkdown_list_main.cpp' `
    -Destination $visibleMain -Force
$sourceCopies = @(
    @('rtl/s24_pkg.sv', 's24_pkg.sv'),
    @('rtl/video/s24_sprite.sv', 's24_sprite.sv'),
    @('verif/tb_sprite_crkdown_list.sv', 'tb_sprite_crkdown_list.sv')
)
$sources = foreach($sourceCopy in $sourceCopies) {
    $destination = $modelRoot + '/' + $sourceCopy[1]
    Copy-Item -LiteralPath $sourceCopy[0] -Destination $destination -Force
    $destination
}
$sources += $visibleMain

$pkg = 'C:/msys64/ucrt64/bin/pkg-config.exe'
$sdlCflags = (& $pkg --cflags sdl2) -replace '-Dmain=SDL_main', ''
$sdlLibs = (& $pkg --libs sdl2) -replace '-lmingw32', '' `
    -replace '-mwindows', '' -replace '-lSDL2main', ''
$sdlCompileArgs = @($sdlCflags -split '\s+' | Where-Object { $_ })
$sdlLinkArgs = @($sdlLibs -split '\s+' | Where-Object { $_ })
$guardExe = Join-Path $ModelDirectory 'sdl_verilator_guard.exe'
& 'C:/msys64/ucrt64/bin/g++.exe' 'verif/sdl_verilator_guard.cpp' `
    '-DSDL_MAIN_HANDLED' $sdlCompileArgs $sdlLinkArgs '-o' $guardExe
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
$guard = Start-Process -FilePath $guardExe -PassThru
Start-Sleep -Milliseconds 300

$arguments = @(
    '--cc', '--exe', '--savable', '--assert',
    '--top-module', 'tb_sprite_crkdown_list',
    '--Mdir', $ModelDirectory,
    '--Wno-fatal', '-O3',
    '-CFLAGS', "-O3 -march=native -D_GLIBCXX_USE_CXX11_ABI=0 -DSDL_MAIN_HANDLED $sdlCflags",
    '-LDFLAGS', $sdlLibs,
    '-MAKEFLAGS',
    'CXX=C:/msys64/ucrt64/bin/g++.exe LINK=C:/msys64/ucrt64/bin/g++.exe AR=C:/msys64/ucrt64/bin/ar.exe SHELL=C:/msys64/usr/bin/sh.exe',
    '--threads', '1', '--build-jobs', '4', '--verilate-jobs', '1'
) + $sources

try {
    & $verilatorSafe @arguments
    $buildExit = $LASTEXITCODE
    if ($buildExit -eq 0) {
        $modelMsys = (& 'C:/msys64/usr/bin/cygpath.exe' -u $ModelDirectory).Trim()
        $makeCommand = "export PATH=/usr/bin:/ucrt64/bin:/c/Windows/System32 TMP='$modelMsys' TEMP='$modelMsys'; make -C '$modelMsys' -f Vtb_sprite_crkdown_list.mk -j 4"
        & 'C:/msys64/usr/bin/env.exe' MSYSTEM=UCRT64 CHERE_INVOKING=1 `
            'C:/msys64/usr/bin/bash.exe' -lc $makeCommand
        $buildExit = $LASTEXITCODE
    }
} finally {
    if ($guard -and -not $guard.HasExited) { Stop-Process -Id $guard.Id }
}
if ($buildExit -ne 0) { exit $buildExit }

# Keep the generated regression self-contained.  `verilator-safe sim` may be
# launched from a process that does not inherit the MSYS2 UCRT64 PATH; without
# the runtime beside the executable Windows opens a modal SDL2.dll error and
# the mandatory visible test never starts.
$runtimeDlls = @('SDL2.dll', 'libgcc_s_seh-1.dll', 'libstdc++-6.dll',
                 'libwinpthread-1.dll')
foreach ($runtimeDll in $runtimeDlls) {
    Copy-Item -LiteralPath (Join-Path 'C:/msys64/ucrt64/bin' $runtimeDll) `
        -Destination (Join-Path $ModelDirectory $runtimeDll) -Force
}

& $verilatorSafe sim (Join-Path $ModelDirectory 'Vtb_sprite_crkdown_list.exe') `
    "+SAVE=$Checkpoint" "+MEM_LATENCY=$MemoryLatency"
exit $LASTEXITCODE
