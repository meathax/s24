-- MAME 0.288 System 24 attract-mode observation probe.
-- The probe is intentionally behavioural: it records no-input frame progress,
-- CPU PCs, sampled shared RAM, video writes, audio writes, and screen pixels.
-- It does not modify the emulated machine or claim a game-specific state bit.

local machine = manager.machine
local maincpu = machine.devices[":maincpu"]
local subcpu = machine.devices[":subcpu"]
local mainspace = maincpu.spaces["program"]
local subspace = subcpu.spaces["program"]
local screen = machine.screens[":screen"]
local frame = 0
local next_report = 0
local first_game_frame = nil
local video_writes = 0
local audio_writes = 0
local last_ram = {}
local last_pixels = {}

if not mainspace or not subspace or not screen then

    error("System 24 attract probe requires maincpu, subcpu, and :screen")
end

local function state_value(device, name)
    local state = device.state[name]
    if state then
        return state.value
    end
    return 0
end

local function sample_ram(space)
    local result = {}
    -- Shared work RAM is 0x080000-0x0bffff in segas24.cpp.  Sparse samples
    -- retain useful game-state transitions without dumping commercial RAM.
    for i = 0, 31 do
        result[#result + 1] = space:read_u16(0x080000 + i * 0x1000)
    end
    return result
end

local function sample_pixels()
    local result = {}
    local grid_nonblack = 0
    local points = {
        { 8, 8 }, { 64, 32 }, { 128, 64 }, { 248, 96 },
        { 372, 128 }, { 480, 192 }, { 96, 256 }, { 320, 320 },
    }
    for _, point in ipairs(points) do
        result[#result + 1] = screen:pixel(point[1], point[2])
    end
    -- Fixed points can miss narrow text and rotated/oriented game content.
    -- A coarse grid gives a deterministic whole-screen activity signal while
    -- keeping the probe much cheaper than dumping a frame every report.
    local width = screen.width
    local height = screen.height
    for y = 0, height - 1, 8 do
        for x = 0, width - 1, 8 do
            local pixel = screen:pixel(x, y)
            if pixel ~= 0xff000000 and pixel ~= 0 then
                grid_nonblack = grid_nonblack + 1
            end
        end
    end
    return result, grid_nonblack
end

local function changed(old, new)
    if #old ~= #new then
        return true
    end
    for i = 1, #new do
        if old[i] ~= new[i] then
            return true
        end
    end
    return false
end

local function write_probe(address, data, mask)
    if address >= 0x200000 and address <= 0x7fffff then
        video_writes = video_writes + 1
    elseif address >= 0x800100 and address <= 0x800103 then
        audio_writes = audio_writes + 1
    end
end

mainspace:install_write_tap(0x200000, 0x7fffff, "s24_attract_video", write_probe)
mainspace:install_write_tap(0x800100, 0x800103, "s24_attract_audio", write_probe)
subspace:install_write_tap(0x200000, 0x7fffff, "s24_attract_video_sub", write_probe)
subspace:install_write_tap(0x800100, 0x800103, "s24_attract_audio_sub", write_probe)

emu.register_frame_done(function()
    frame = frame + 1
    if frame == 800 then
        local error_text = screen:snapshot("s24_attract")
        if error_text then
            print("S24MAME attract snapshot error=" .. error_text)
        else
            print("S24MAME attract snapshot frame=800")
        end
    end
    if frame < next_report then
        return
    end
    next_report = frame + 60

    local ram = sample_ram(mainspace)
    local pixels, grid_nonblack = sample_pixels()
    if first_game_frame == nil and grid_nonblack >= 1000 then
        first_game_frame = frame
        local snapshot_name = string.format("game_screen_%04d", frame)
        local error_text = screen:snapshot(snapshot_name)
        if error_text then
            print("S24MAME attract first-grid snapshot error=" .. error_text)
        else
            print(string.format(
                "S24MAME attract first-grid frame=%d grid_nonblack=%d snapshot=%s",
                frame, grid_nonblack, snapshot_name))
        end
    end
    local ram_changed = changed(last_ram, ram)
    local pixels_changed = changed(last_pixels, pixels)
    last_ram = ram
    last_pixels = pixels
    print(string.format(
        "S24MAME attract frame=%d time=%.6f mainpc=%06x subpc=%06x ram_changed=%d pixels_changed=%d grid_nonblack=%d video_writes=%d audio_writes=%d pixels=%08x,%08x,%08x,%08x,%08x,%08x,%08x,%08x",
        frame, machine.time:as_double(), state_value(maincpu, "CURPC"),
        state_value(subcpu, "CURPC"), ram_changed and 1 or 0,
        pixels_changed and 1 or 0, grid_nonblack, video_writes, audio_writes,
        pixels[1], pixels[2], pixels[3], pixels[4], pixels[5], pixels[6],
        pixels[7], pixels[8]))
end)
