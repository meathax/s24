-- MAME 0.288 IRQ/timer contract for the dcclub CPU-B wait loop.
local machine = manager.machine
local taps = {}
local read_counts = { [":maincpu"] = 0, [":subcpu"] = 0 }
local function install(tag)
    local dev = machine.devices[tag]
    local space = dev.spaces["program"]
    taps[#taps+1] = space:install_write_tap(
        0xa00000, 0xa00007, "dcclub_irq_w_" .. tag,
        function(address, data, mask)
            print(string.format("S24MAME irq-write cpu=%s time=%.9f addr=%06x data=%04x mask=%04x",
                tag, machine.time:as_double(), address, data, mask))
        end)
    taps[#taps+1] = space:install_read_tap(
        0xa00000, 0xa00007, "dcclub_irq_r_" .. tag,
        function(address, data, mask)
            read_counts[tag] = read_counts[tag] + 1
            if read_counts[tag] <= 128 then
                print(string.format("S24MAME irq-read cpu=%s time=%.9f addr=%06x data=%04x mask=%04x",
                    tag, machine.time:as_double(), address, data, mask))
            end
        end)
end
install(":maincpu")
install(":subcpu")
