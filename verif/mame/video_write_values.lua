-- Bounded MAME 0.288 video-write evidence for the dcclub rendering failure.
-- This logs only the first non-zero write per device and a small sample of
-- subsequent values; it never changes the emulated bus data.
local machine = manager.machine
local counts = { tile=0, char=0, palette=0, mixer=0, sprite=0 }
local samples = { tile=0, char=0, palette=0, mixer=0, sprite=0 }
local taps = {}

local function classify(address)
    if (address & 0xee0000) == 0x200000 then return "tile" end
    if (address & 0xe80000) == 0x280000 then return "char" end
    if (address & 0xe04000) == 0x400000 then return "palette" end
    if (address & 0xe04000) == 0x404000 then return "mixer" end
    if (address & 0xe40000) == 0x600000 then return "sprite" end
    return nil
end

local function install_for(tag)
    local device = machine.devices[tag]
    if not device then return end
    local space = device.spaces["program"]
    if not space then return end
    taps[#taps+1] = space:install_write_tap(
        0x200000, 0x7fffff, "s24_video_values_" .. tag,
        function(address, data, mask)
            local kind = classify(address)
            if not kind then return end
            counts[kind] = counts[kind] + 1
            -- The first few seconds are the shared BIOS RAM-fill diagnostic;
            -- sample game-owned rendering writes after it has completed.
            if machine.time:as_double() >= 10 and data ~= 0 and samples[kind] < 24 then
                samples[kind] = samples[kind] + 1
                print(string.format(
                    "S24MAME nonzero %-7s cpu=%s n=%d time=%.9f addr=%06x data=%04x mask=%04x",
                    kind, tag, samples[kind], machine.time:as_double(),
                    address, data, mask))
            end
        end)
end

install_for(":maincpu")
install_for(":subcpu")

local reported = false
emu.register_frame_done(function()
    if not reported and machine.time:as_double() >= 14.9 then
        reported = true
        print(string.format(
            "S24MAME video values counts tile=%d char=%d palette=%d mixer=%d sprite=%d",
            counts.tile, counts.char, counts.palette, counts.mixer, counts.sprite))
    end
end, "frame")
