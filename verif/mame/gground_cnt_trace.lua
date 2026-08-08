-- Narrow MAME reference trace for Gain Ground's CPU-B release control.
local machine = manager.machine
local taps = {}

local maincpu = machine.devices[":maincpu"]
local space = maincpu and maincpu.spaces["program"]
if not space then error("missing :maincpu program space") end

taps[#taps + 1] = space:install_write_tap(
    0x800000, 0x80003f, "s24_gground_cnt_trace",
    function(address, data, mask)
        print(string.format(
            "S24MAME gground io-write time=%.9f addr=%06x data=%04x mask=%04x",
            machine.time:as_double(), address, data, mask))
    end)
