-- MAME 0.288 reference trace for dcclub's CPU-B timer polling loop.
local machine = manager.machine
local space = machine.devices[":subcpu"].spaces["program"]
local count = 0
local zero_count = 0

space:install_read_tap(
    0xa00000, 0xa00007, "dcclub_sub_timer_reads",
    function(address, data, mask)
        if true then
            count = count + 1
            if address == 0xa00004 and data == 0 then zero_count = zero_count + 1 end
            if count <= 80 then
                print(string.format(
                    "S24MAME sub-timer-read time=%.9f data=%04x mask=%04x zeroes=%d",
                    machine.time:as_double(), data, mask, zero_count))
            end
        end
    end)
