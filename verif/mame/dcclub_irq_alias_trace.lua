-- Bounded MAME probe for the CPU-B IRQ-controller address alias.
local machine = manager.machine
local space = machine.devices[":subcpu"].spaces["program"]
local reads = 0
local writes = 0

local function install(base, suffix)
    space:install_read_tap(
        base, base + 0x07, "dcclub_alias_r_" .. suffix,
        function(address, data, mask)
            reads = reads + 1
            if reads <= 256 then
                print(string.format(
                    "S24MAME sub-alias-read base=%06x addr=%06x time=%.9f data=%04x mask=%04x",
                    base, address, machine.time:as_double(), data, mask))
            end
        end)
    space:install_write_tap(
        base, base + 0x07, "dcclub_alias_w_" .. suffix,
        function(address, data, mask)
            writes = writes + 1
            if writes <= 128 then
                print(string.format(
                    "S24MAME sub-alias-write base=%06x addr=%06x time=%.9f data=%04x mask=%04x",
                    base, address, machine.time:as_double(), data, mask))
            end
        end)
end

install(0x00a000, "short")
install(0xa00000, "long")
