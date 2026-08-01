-- Capture exact native MAME frames for phase-matched RTL comparisons.
-- Set S24_CAPTURE_FRAMES to a comma-separated list (for example 1261,1382)
-- and optionally S24_CAPTURE_PREFIX before launching MAME with an isolated
-- snapshot directory. The emulated machine exits after the last capture.

local machine = manager.machine
local screen = machine.screens[":screen"]
local requested = os.getenv("S24_CAPTURE_FRAMES") or ""
local prefix = os.getenv("S24_CAPTURE_PREFIX") or "mame_frame"
local captures = {}
local final_frame = 0
local frame = 0
local coin_frame = tonumber(os.getenv("S24_COIN_FRAME") or "0") or 0
local start_frame = tonumber(os.getenv("S24_START_FRAME") or "0") or 0
local action_frame = tonumber(os.getenv("S24_ACTION_FRAME") or "0") or 0
local input_frames = tonumber(os.getenv("S24_INPUT_FRAMES") or "4") or 4
local coin_fields = {}
local start_field = nil
local action_field = nil

if not screen then
    error("System 24 frame capture requires :screen")
end

for value in string.gmatch(requested, "[^,]+") do
    local number = tonumber(value)
    if not number or number < 1 or number ~= math.floor(number) then
        error("invalid S24_CAPTURE_FRAMES entry: " .. value)
    end
    captures[number] = true
    if number > final_frame then
        final_frame = number
    end
end

if final_frame == 0 then
    error("S24_CAPTURE_FRAMES must name at least one positive frame")
end

if coin_frame > 0 or start_frame > 0 or action_frame > 0 then
    for tag, port in pairs(machine.ioport.ports) do
        for name, field in pairs(port.fields) do
            local lower = string.lower(name)
            if lower == "coin 1" or lower == "coin1" then
                coin_fields[#coin_fields + 1] = field
                print(string.format("S24MAME gameplay coin field=%s port=%s", name, tag))
            end
            if not start_field and
               (lower == "1 player start" or lower == "player 1 start" or
                lower == "start 1" or lower == "start1") then
                start_field = field
                print(string.format("S24MAME gameplay start field=%s port=%s", name, tag))
            end
            if not action_field and
               (lower == "p1 button 1" or lower == "button 1") then
                action_field = field
                print(string.format("S24MAME gameplay action field=%s port=%s", name, tag))
            end
        end
    end
    if coin_frame > 0 and #coin_fields == 0 then error("Coin 1 input field not found") end
    if start_frame > 0 and not start_field then error("Player 1 Start input field not found") end
    if action_frame > 0 and not action_field then error("P1 Button 1 input field not found") end
end

emu.register_frame_done(function()
    frame = frame + 1
    for _, coin_field in ipairs(coin_fields) do
        coin_field:set_value(frame >= coin_frame and
                             frame < coin_frame + input_frames and 1 or 0)
    end
    if start_field then
        start_field:set_value(frame >= start_frame and
                              frame < start_frame + input_frames and 1 or 0)
    end
    if action_field then
        action_field:set_value(frame >= action_frame and
                               frame < action_frame + input_frames and 1 or 0)
    end
    if captures[frame] then
        local name = string.format("%s_%06d", prefix, frame)
        local error_text = screen:snapshot(name)
        if error_text then
            error(string.format("snapshot %s failed: %s", name, error_text))
        end
        print(string.format("S24MAME captured frame=%d snapshot=%s", frame, name))
    end
    if frame >= final_frame then
        machine:exit()
    end
end)
