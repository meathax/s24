-- Native System 24 MAME framebuffer producer for lockstep protocol v2.
-- S24_LOCKSTEP_DIR must name an isolated session directory.

local root = os.getenv("S24_LOCKSTEP_DIR")
if root == nil or root == "" then
    error("S24_LOCKSTEP_DIR is required")
end
root = root:gsub("\\", "/"):gsub("/$", "")

local machine = manager.machine
local screen = machine.screens[":screen"]
local maincpu = machine.devices[":maincpu"]
local subcpu = machine.devices[":subcpu"]
if not screen or not maincpu or not subcpu then
    error("System 24 screen/maincpu/subcpu devices are required")
end

local state_value, exists

local function trace_device(address)
    if address >= 0xf00000 then return 1 end
    if (address & 0xee0000) == 0x200000 then return 20 end
    if (address & 0xe80000) == 0x280000 then return 21 end
    if (address & 0xe04000) == 0x400000 then return 12 end
    if (address & 0xe04000) == 0x404000 then return 22 end
    if (address & 0xe40000) == 0x600000 then return 23 end
    if (address & 0xe00000) == 0x800000 and (address & 0x1ff) < 0x40 then return 4 end
    if (address & 0xfffffc) == 0x800100 then return 18 end
    if (address & 0xf00000) == 0xa00000 then return 24 end
    if (address & 0xf80000) == 0xb00000 then return 25 end
    if (address & 0xfc0000) == 0xbc0000 or
       (address & 0xfc0000) == 0xcc0000 then return 26 end
    return 0
end

local trace_frame = 0
local taps = {}
local trace_stream = assert(io.open(root .. "/mame_trace.jsonl", "ab"))
local function append_trace(cpu, rw, address, data, mask)
    if exists(root .. "/TRACE_STOP.txt") then return end
    local device = trace_device(address)
    if device == 0 then return end
    if device == 1 then address = address & 0xfbffff end
    local lanes = 0
    if (mask & 0x00ff) ~= 0 then lanes = lanes | 1 else data = data & 0xff00 end
    if (mask & 0xff00) ~= 0 then lanes = lanes | 2 else data = data & 0x00ff end
    local pc = state_value(cpu == 0 and maincpu or subcpu, "CURPC")
    trace_stream:write(string.format(
        "{\"frame\":%d,\"cpu\":%d,\"event\":\"bus\",\"rw\":\"%s\"," ..
        "\"address\":%d,\"data\":%d,\"lanes\":%d,\"device\":%d,\"pc\":%d}\n",
        trace_frame, cpu, rw, address, data, lanes, device, pc))
end

local function install_trace(cpu, device)
    local space = assert(device.spaces["program"])
    taps[#taps + 1] = space:install_write_tap(
        0x200000, 0xdfffff, "s24_lockstep_write_" .. cpu,
        function(address, data, mask) append_trace(cpu, "w", address, data, mask) end)
    taps[#taps + 1] = space:install_read_tap(
        0x800000, 0xdfffff, "s24_lockstep_read_" .. cpu,
        function(address, data, mask) append_trace(cpu, "r", address, data, mask) end)
    taps[#taps + 1] = space:install_write_tap(
        0xf00000, 0xffffff, "s24_lockstep_shared_write_" .. cpu,
        function(address, data, mask) append_trace(cpu, "w", address, data, mask) end)
    -- Do not tap the high shared-RAM read mirror here.  MAME's address-space
    -- tap does not observe that mirror consistently, while RTL legitimately
    -- performs tens of thousands of fetch/poll reads per frame.  Recording
    -- only writes keeps causal handshakes comparable without overloading the
    -- finite-frame producer.  Shared reads remain explicit missing evidence.
end

install_trace(0, maincpu)
install_trace(1, subcpu)

state_value = function(device, name)
    local state = device.state[name]
    return state and state.value or 0
end

local function read_token(path)
    local stream = io.open(path, "r")
    if not stream then return -1 end
    local value = tonumber(stream:read("*a")) or -1
    stream:close()
    return value
end

exists = function(path)
    local stream = io.open(path, "rb")
    if stream then stream:close() return true end
    return false
end

local function atomic_write(path, payload)
    local temporary = path .. ".tmp"
    local stream = assert(io.open(temporary, "wb"))
    assert(stream:write(payload))
    stream:flush()
    stream:close()
    os.remove(path)
    assert(os.rename(temporary, path))
end

local function append_state(frame, pixels)
    local hash = 2166136261
    -- screen:pixels() is BGRA on this little-endian host; hash the same RGB
    -- byte order as the RTL native surface.
    for i = 1, #pixels, 4 do
        hash = ((hash ~ pixels:byte(i + 2)) * 16777619) & 0xffffffff
        hash = ((hash ~ pixels:byte(i + 1)) * 16777619) & 0xffffffff
        hash = ((hash ~ pixels:byte(i)) * 16777619) & 0xffffffff
    end
    local stream = assert(io.open(root .. "/mame_state.jsonl", "ab"))
    stream:write(string.format(
        "{\"frame\":%d,\"frame_hash\":%u,\"mame_main_pc\":%u,\"mame_sub_pc\":%u," ..
        "\"input_packet\":\"neutral-v1\"}\n",
        frame, hash, state_value(maincpu, "CURPC"), state_value(subcpu, "CURPC")))
    stream:flush()
    stream:close()
end

local frame = 0
local function producer()
    while true do
        emu.wait_next_frame()
        frame = frame + 1
        trace_frame = frame
        local pixels, width, height = screen:pixels()
        local frame_name = string.format("%s/mame/frame_%06d.argb32", root, frame)
        atomic_write(frame_name, string.pack("<I4I4", width, height) .. pixels)
        append_state(frame, pixels)
        trace_stream:flush()
        atomic_write(root .. "/mame_frame.txt", tostring(frame) .. "\n")
        emu.pause()
        while read_token(root .. "/release_frame.txt") < frame do
            if exists(root .. "/STOP.txt") then
                trace_stream:flush()
                trace_stream:close()
                machine:exit()
                return
            end
            emu.wait_next_update()
        end
        if exists(root .. "/STOP.txt") then
            trace_stream:flush()
            trace_stream:close()
            machine:exit()
            return
        end
        emu.unpause()
    end
end

local thread = coroutine.create(producer)
local ok, message = coroutine.resume(thread)
if not ok then error(message) end
