-- Deterministic System 24 video-bus reference trace for MAME.
-- Install pass-through taps on both 68000 program spaces and report the first
-- write plus aggregate count for each video device without changing data.

local machine = manager.machine
local counts = { tile=0, char=0, palette=0, mixer=0, sprite=0 }
local first = {}
local taps = {}

local function classify(address)
    -- common_map mirrors from segas24.cpp. These tests intentionally match the
    -- masks used by rtl/s24_core.sv so traces expose decode disagreements.
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
        0x200000, 0x7fffff, "s24_video_trace_" .. tag,
        function(address, data, mask)
            local kind = classify(address)
            if kind then
                counts[kind] = counts[kind] + 1
                if not first[kind] then
                    first[kind] = true
                    print(string.format(
                        "S24MAME first %-7s cpu=%s time=%.9f addr=%06x data=%04x mask=%04x",
                        kind, tag, machine.time:as_double(), address, data, mask))
                end
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
            "S24MAME video counts tile=%d char=%d palette=%d mixer=%d sprite=%d time=%.9f",
            counts.tile, counts.char, counts.palette, counts.mixer, counts.sprite,
            machine.time:as_double()))
    end
end, "frame")
