-- Bounded MAME 0.288 CPU-B checkpoint for the dcclub first divergence.
local machine = manager.machine
local maincpu = machine.devices[":maincpu"]
local subcpu = machine.devices[":subcpu"]
local mainspace = maincpu.spaces["program"]
local subspace = subcpu.spaces["program"]
local reported = false

local function words(space, base, count)
    local out = {}
    for i = 0, count - 1 do
        out[#out + 1] = string.format("%04x", space:read_u16(base + i * 2))
    end
    return table.concat(out, " ")
end

emu.register_frame_done(function()
    if not reported and machine.time:as_double() >= 12.5 then
        reported = true
        print(string.format(
            "S24MAME dcclub checkpoint time=%.6f mainpc=%06x subpc=%06x sub8058=%s work80000=%s",
            machine.time:as_double(), maincpu.state["CURPC"].value,
            subcpu.state["CURPC"].value, words(subspace, 0x8050, 16),
            words(mainspace, 0x080000, 16)))
    end
end, "frame")
