-- Durable MAME 0.288 oracle for Gain Ground's first protected CPU-B fetches.
local machine = manager.machine
local cpu = assert(machine.devices[":subcpu"], "missing :subcpu")
local opcodes = assert(cpu.spaces["opcodes"], "missing :subcpu opcode space")
local log = assert(io.open(
	"C:/Users/meath/OneDrive/Documents/Sega System 24/.mame_mcp/gground_opcode_reference.log",
	"w"))
local count = 0

-- Keep the tap globally reachable after the autoboot chunk returns; otherwise
-- Lua can collect it before CPU-B is released fourteen emulated seconds later.
GGROUND_OPCODE_TAPS = GGROUND_OPCODE_TAPS or {}
GGROUND_OPCODE_TAPS[#GGROUND_OPCODE_TAPS + 1] = opcodes:install_read_tap(
	0x000000, 0x0fffff, "gground_first_protected_opcodes",
	function(address, data, mask)
		if machine.time:as_double() >= 14.3 and count < 48 then
			log:write(string.format(
				"%02d time=%.9f pc=%06x addr=%06x data=%04x mask=%04x\n",
				count, machine.time:as_double(), cpu.state["PC"].value,
				address, data, mask))
			log:flush()
			count = count + 1
			if count == 48 then
				log:close()
				manager.machine:exit()
			end
		end
		return data
	end)
