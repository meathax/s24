-- MAME 0.288 reference trace for Crack Down's CPU-B release sequence.
local machine = manager.machine
local taps = {}
-- Tap handles must remain reachable for the entire run.  Without a global
-- root Lua can collect them before Crack Down releases CPU-B (~14 seconds).
_G.crkdown_cnt1_taps = taps

local function install(tag)
    local device = machine.devices[tag]
    local space = device.spaces["program"]
    -- 315-5296 occupies 800000-80003f mirrored by 1ffe00.  Watch the
    -- complete mirrored aperture so Crack Down's release write is visible.
    taps[#taps + 1] = space:install_write_tap(
        0x800000, 0x9fffff, "crkdown_cnt1_" .. tag,
        function(address, data, mask)
            if (address & 0xe001c0) == 0x800000 then
                print(string.format(
                    "S24MAME crkdown-io-write cpu=%s time=%.9f pc=%06x addr=%06x canonical=%02x data=%04x mask=%04x",
                    tag, machine.time:as_double(), device.state["CURPC"].value,
                    address, address & 0x3f, data, mask))
            end
        end)
    -- Command/register writes are sparse and expose the exact floppy-command
    -- sequence without the enormous polling-read stream.
    taps[#taps + 1] = space:install_write_tap(
        0xb00000, 0xb0000f, "crkdown_fdc_write_" .. tag,
        function(address, data, mask)
            print(string.format(
                "S24MAME crkdown-fdc-write cpu=%s time=%.9f pc=%06x addr=%06x data=%04x mask=%04x",
                tag, machine.time:as_double(), device.state["CURPC"].value,
                address, data, mask))
        end)
end

install(":maincpu")
install(":subcpu")

local frame = 0
local next_report = 0
emu.register_frame_done(function()
    frame = frame + 1
    if frame >= next_report then
        next_report = frame + 120
        print(string.format(
            "S24MAME crkdown-check frame=%d time=%.6f mainpc=%06x subpc=%06x",
            frame, machine.time:as_double(),
            machine.devices[":maincpu"].state["CURPC"].value,
            machine.devices[":subcpu"].state["CURPC"].value))
    end
end)
