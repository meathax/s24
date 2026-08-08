-- Exact Gain Ground mixer-register 13 reference trace.
local machine = manager.machine
local taps = {}
local frame = 0

local function install_for(tag)
	local cpu = assert(machine.devices[tag], "missing " .. tag)
	local space = assert(cpu.spaces["program"], "missing program space for " .. tag)
	taps[#taps + 1] = space:install_write_tap(
		0x400000, 0x5fffff, "gground_mixer13_" .. tag,
		function(address, data, mask)
			-- System 24 mixer $404000-$40401f, mirrored by $1fbfe0.
			if (address & 0xe0401f) == 0x40401a then
				local pc = cpu.state["PC"].value
				print(string.format(
					"S24MAME mixer13 frame=%d time=%.9f cpu=%s pc=%06x addr=%06x data=%04x mask=%04x",
					frame, machine.time:as_double(), tag, pc, address, data, mask))
			end
		end)
end

install_for(":maincpu")
install_for(":subcpu")

emu.register_frame_done(function()
	frame = frame + 1
	if frame >= 1400 then
		manager.machine:exit()
	end
end, "frame")
