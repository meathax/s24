-- Bounded Gain Ground MAME bus trace for scoreboard differential replay.
--
-- The trace is intentionally restricted to the frame window supplied through
-- S24_TRACE_START_FRAME/S24_TRACE_END_FRAME.  It records completed CPU bus
-- taps for the video/control address ranges that can causally affect the
-- rendered scoreboard, while avoiding an unbounded boot log.

local root = os.getenv("S24_TRACE_ROOT")
if root == nil or root == "" then error("S24_TRACE_ROOT is required") end
root = root:gsub("\\", "/"):gsub("/$", "")

local start_frame = tonumber(os.getenv("S24_TRACE_START_FRAME") or "1") or 1
local end_frame = tonumber(os.getenv("S24_TRACE_END_FRAME") or "0") or 0
local maincpu = manager.machine.devices[":maincpu"]
local subcpu = manager.machine.devices[":subcpu"]
local mainspace = maincpu and maincpu.spaces["program"]
local subspace = subcpu and subcpu.spaces["program"]
if not mainspace or not subspace then error("System 24 CPU program spaces are required") end

local trace_stream = assert(io.open(root .. "/mame_trace.jsonl", "wb"))
local state_stream = assert(io.open(root .. "/mame_state.jsonl", "wb"))
local frame = 0
local sequence = 0
local taps = {}

local function state_value(device, name)
    local state = device.state[name]
    return state and state.value or 0
end

local function trace_device(address)
    if address >= 0xf00000 then return 1 end
    if (address & 0xee0000) == 0x200000 then return 20 end -- tile
    if (address & 0xe80000) == 0x280000 then return 21 end -- character
    if (address & 0xe04000) == 0x400000 then return 12 end -- palette
    if (address & 0xe04000) == 0x404000 then return 22 end -- mixer
    if (address & 0xe40000) == 0x600000 then return 23 end -- sprite
    if (address & 0xe00000) == 0x800000 and (address & 0x1ff) < 0x40 then return 4 end
    if (address & 0xfffffc) == 0x800100 then return 18 end -- YM2151
    if (address & 0xf00000) == 0xa00000 then return 24 end -- IRQ/timer
    if (address & 0xf80000) == 0xb00000 then return 25 end -- FDC
    if (address & 0xfc0000) == 0xbc0000 or
       (address & 0xfc0000) == 0xcc0000 then return 26 end -- bank/FRC/magic
    return 0
end

local function append_trace(cpu, rw, address, data, mask)
    if frame < start_frame or (end_frame > 0 and frame > end_frame) then return end
    local device = trace_device(address)
    if device == 0 then return end
    if device == 1 then address = address & 0xfbffff end
    local lanes = 0
    if (mask & 0x00ff) ~= 0 then lanes = lanes | 1 else data = data & 0xff00 end
    if (mask & 0xff00) ~= 0 then lanes = lanes | 2 else data = data & 0x00ff end
    sequence = sequence + 1
    local pc = state_value(cpu == 0 and maincpu or subcpu, "CURPC")
    trace_stream:write(string.format(
        "{\"schema\":\"mister-bus-jsonl-v1\",\"seq\":%d,\"frame\":%d,\"cpu\":%d,\"event\":\"bus\",\"rw\":\"%s\",\"address\":%d,\"data\":%d,\"lanes\":%d,\"device\":%d,\"pc\":%d}\n",
        sequence, frame, cpu, rw, address, data, lanes, device, pc))
end

local function install(space, cpu, tag)
    taps[#taps + 1] = space:install_write_tap(
        0x200000, 0xdfffff, "s24_scoreboard_w_" .. tag,
        function(address, data, mask) append_trace(cpu, "w", address, data, mask) end)
    taps[#taps + 1] = space:install_read_tap(
        0x800000, 0xdfffff, "s24_scoreboard_r_" .. tag,
        function(address, data, mask) append_trace(cpu, "r", address, data, mask) end)
    taps[#taps + 1] = space:install_write_tap(
        0xf00000, 0xffffff, "s24_scoreboard_shared_w_" .. tag,
        function(address, data, mask) append_trace(cpu, "w", address, data, mask) end)
end

install(mainspace, 0, "main")
install(subspace, 1, "sub")

emu.register_frame_done(function()
    frame = frame + 1
    if frame >= start_frame and (end_frame == 0 or frame <= end_frame) then
        state_stream:write(string.format(
            "{\"frame\":%d,\"mame_main_pc\":%d,\"mame_sub_pc\":%d}\n",
            frame, state_value(maincpu, "CURPC"), state_value(subcpu, "CURPC")))
        state_stream:flush()
        trace_stream:flush()
    end
    if end_frame > 0 and frame >= end_frame then
        trace_stream:flush()
        state_stream:flush()
        trace_stream:close()
        state_stream:close()
        manager.machine:exit()
    end
end, "frame")
