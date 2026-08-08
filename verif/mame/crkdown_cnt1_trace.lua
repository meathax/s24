-- MAME 0.288 reference trace for Crack Down's CPU-B release sequence.
local machine = manager.machine
local taps = {}

local function install(tag)
    local device = machine.devices[tag]
    local space = device.spaces["program"]
    taps[#taps + 1] = space:install_write_tap(
        0x800000, 0x80003f, "crkdown_cnt1_" .. tag,
        function(address, data, mask)
            print(string.format(
                "S24MAME crkdown-io-write cpu=%s time=%.9f pc=%06x addr=%06x data=%04x mask=%04x",
                tag, machine.time:as_double(), device.state["CURPC"].value,
                address, data, mask))
        end)
    taps[#taps + 1] = space:install_write_tap(
        0xb00000, 0xb0000f, "crkdown_fdc_" .. tag,
        function(address, data, mask)
            print(string.format(
                "S24MAME crkdown-fdc-write cpu=%s time=%.9f pc=%06x addr=%06x data=%04x mask=%04x",
                tag, machine.time:as_double(), device.state["CURPC"].value,
                address, data, mask))
        end)
    taps[#taps + 1] = space:install_read_tap(
        0xb00000, 0xb0000f, "crkdown_fdc_read_" .. tag,
        function(address, data, mask)
            print(string.format(
                "S24MAME crkdown-fdc-read cpu=%s time=%.9f pc=%06x addr=%06x data=%04x mask=%04x",
                tag, machine.time:as_double(), device.state["CURPC"].value,
                address, data, mask))
        end)
    taps[#taps + 1] = space:install_write_tap(
        0xa00000, 0xbfffff, "crkdown_high_write_" .. tag,
        function(address, data, mask)
            print(string.format(
                "S24MAME crkdown-high-write cpu=%s time=%.9f pc=%06x addr=%06x data=%04x mask=%04x",
                tag, machine.time:as_double(), device.state["CURPC"].value,
                address, data, mask))
        end)
    taps[#taps + 1] = space:install_read_tap(
        0xa00000, 0xbfffff, "crkdown_high_read_" .. tag,
        function(address, data, mask)
            print(string.format(
                "S24MAME crkdown-high-read cpu=%s time=%.9f pc=%06x addr=%06x data=%04x mask=%04x",
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
