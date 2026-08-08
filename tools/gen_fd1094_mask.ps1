param(
    [string]$Source = 'D:\Arcade\AI\mame289\src\mame\sega\fd1094.cpp',
    [string]$Output = 'rtl\cpu\fd1094_masked.mem'
)

$text = [IO.File]::ReadAllText((Resolve-Path -LiteralPath $Source))
$start = $text.IndexOf('const uint16_t fd1094_device::s_masked_opcodes[]')
if ($start -lt 0) { throw 'FD1094 masked opcode table was not found' }
$open = $text.IndexOf('{', $start)
$close = $text.IndexOf('};', $open)
if ($open -lt 0 -or $close -lt 0) { throw 'FD1094 masked opcode table is incomplete' }

[byte[]]$rom = New-Object byte[] 8192
$table = $text.Substring($open, $close - $open)
foreach ($match in [regex]::Matches($table, '0x([0-9a-fA-F]{4})')) {
    $opcode = [Convert]::ToInt32($match.Groups[1].Value, 16)
    $byteIndex = $opcode -shr 4
    $bit = ($opcode -shr 1) -band 7
    $rom[$byteIndex] = $rom[$byteIndex] -bor (1 -shl $bit)
    $rom[4096 + $byteIndex] = $rom[4096 + $byteIndex] -bor (1 -shl $bit)
}

for ($opcode = 0; $opcode -lt 65536; $opcode += 2) {
    $aggressive = (($opcode -band 0xff80) -eq 0x4e80) -or
                  (($opcode -band 0xf0f8) -eq 0x50c8) -or
                  (($opcode -band 0xf000) -eq 0x6000)
    if ($aggressive) {
        $byteIndex = $opcode -shr 4
        $bit = ($opcode -shr 1) -band 7
        $rom[4096 + $byteIndex] = $rom[4096 + $byteIndex] -bor (1 -shl $bit)
    }
}

$lines = foreach ($value in $rom) { $value.ToString('x2') }
$resolvedOutput = [IO.Path]::GetFullPath((Join-Path (Get-Location) $Output))
[IO.Directory]::CreateDirectory([IO.Path]::GetDirectoryName($resolvedOutput)) | Out-Null
[IO.File]::WriteAllLines($resolvedOutput, $lines)
Write-Output "Generated $resolvedOutput from $Source"
