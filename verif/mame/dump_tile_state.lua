-- Read-only System 24 tile/control snapshot at an exact emulated frame.
-- S24_DUMP_FRAME selects the frame; the script exits immediately afterward.
local machine = manager.machine
local space = machine.devices[":maincpu"].spaces["program"]
local target = tonumber(os.getenv("S24_DUMP_FRAME") or "0")
local frame = 0
local coin_frame = tonumber(os.getenv("S24_COIN_FRAME") or "0") or 0
local start_frame = tonumber(os.getenv("S24_START_FRAME") or "0") or 0
local action_frame = tonumber(os.getenv("S24_ACTION_FRAME") or "0") or 0
local input_frames = tonumber(os.getenv("S24_INPUT_FRAMES") or "4") or 4

local function find_fields(wanted)
    local result = {}
    for _, port in pairs(machine.ioport.ports) do
        for name, field in pairs(port.fields) do
            if wanted[string.lower(name)] then
                result[#result + 1] = field
            end
        end
    end
    return result
end

local function find_field(wanted)
    local fields = find_fields(wanted)
    return fields[1]
end

local coin_fields = coin_frame > 0 and
    find_fields({["coin 1"] = true, ["coin1"] = true}) or {}
local start_field = start_frame > 0 and find_field({
    ["1 player start"] = true, ["player 1 start"] = true,
    ["start 1"] = true, ["start1"] = true}) or nil
local action_field = action_frame > 0 and find_field({
    ["button 1"] = true, ["p1 button 1"] = true,
    ["p1 button1"] = true, ["p1 fire 1"] = true}) or nil
if coin_frame > 0 and #coin_fields == 0 then error("Coin 1 input field not found") end
if start_frame > 0 and not start_field then
    error("Player 1 Start input field not found")
end
if action_frame > 0 and not action_field then
    error("Player 1 Button 1 input field not found")
end

local function tile_word(offset)
    return space:read_u16(0x200000 + 2 * offset)
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
    if frame ~= target then return end

    local controls = {}
    for i = 0, 7 do
        controls[#controls + 1] = string.format("%04x", tile_word(0x5000 + i))
    end
    print(string.format("S24MAME tile frame=%d control=%s", frame,
        table.concat(controls, ",")))
    print(string.format(
        "S24MAME raw frame=%d boot=%04x t200000=%04x t205000=%04x t20a000=%04x",
        frame, space:read_u16(0), space:read_u16(0x200000),
        space:read_u16(0x205000), space:read_u16(0x20a000)))

    for layer = 0, 3 do
        local counts = {}
        for y = 0, 383 do
            local value = tile_word(0x4000 + 0x200 * layer + y)
            counts[value] = (counts[value] or 0) + 1
        end
        local values = {}
        for value, count in pairs(counts) do
            values[#values + 1] = { value, count }
        end
        table.sort(values, function(a, b) return a[1] < b[1] end)
        local rendered = {}
        for _, item in ipairs(values) do
            rendered[#rendered + 1] = string.format("%04x:%d", item[1], item[2])
        end
        print(string.format("S24MAME tile frame=%d line%d=%s", frame, layer,
            table.concat(rendered, ",")))
    end

    local curspr, normal, clips, skips = 0, 0, 0, 0
    local zooms = {}
    local normals = {}
    for seen = 0, 0x1fff do
        local current = curspr
        local word0 = space:read_u16(0x600000 + current * 16)
        if curspr == 0 and word0 == 0 then break end
        local kind = word0 & 0xc000
        curspr = word0 & 0x1fff
        if kind == 0xc000 then break end
        if kind == 0x8000 then
            skips = skips + 1
        elseif kind == 0x4000 then
            clips = clips + 1
        else
            normal = normal + 1
            normals[#normals + 1] = current
            local word1 = space:read_u16(0x600000 + current * 16 + 2)
            zooms[word1] = (zooms[word1] or 0) + 1
        end
        if curspr == 0 then break end
    end
    print(string.format(
        "S24MAME sprite frame=%d normal=%d clips=%d skips=%d",
        frame, normal, clips, skips))
    local zoom_values = {}
    for value, count in pairs(zooms) do
        zoom_values[#zoom_values + 1] = { value, count }
    end
    table.sort(zoom_values, function(a, b) return a[1] < b[1] end)
    local zoom_text = {}
    for _, item in ipairs(zoom_values) do
        zoom_text[#zoom_text + 1] = string.format("%04x:%d", item[1], item[2])
    end
    print(string.format("S24MAME sprite frame=%d zoom=%s", frame,
        table.concat(zoom_text, ",")))
    local max_active, max_width, max_clipped, max_y = 0, 0, 0, 0
    for y = 0, 383 do
        local active, width, clipped = 0, 0, 0
        for _, index in ipairs(normals) do
            local word4 = space:read_u16(0x600000 + index * 16 + 8)
            local word5 = space:read_u16(0x600000 + index * 16 + 10)
            local top = word4 & 0xfff
            if top >= 0x800 then top = top - 0x1000 end
            local rows = 8 << ((word4 >> 12) & 7)
            if y >= top and y < top + rows then
                active = active + 1
                local span = 8 << ((word5 >> 12) & 7)
                width = width + span
                local left = word5 & 0xfff
                if left >= 0x800 then left = left - 0x1000 end
                left = left - 8
                local first = math.max(0, left)
                local last = math.min(496, left + span)
                if last > first then clipped = clipped + last - first end
            end
        end
        if active > max_active or
           (active == max_active and width > max_width) then
            max_active, max_width, max_clipped, max_y = active, width, clipped, y
        end
    end
    print(string.format(
        "S24MAME sprite frame=%d max_active=%d source_width=%d clipped_width=%d y=%d",
        frame, max_active, max_width, max_clipped, max_y))
    local palette_tags, data_tags = {}, {}
    local active_descriptors = 0
    for _, index in ipairs(normals) do
        local base = 0x600000 + index * 16
        local word2 = space:read_u16(base + 4)
        local word3 = space:read_u16(base + 6)
        local word4 = space:read_u16(base + 8)
        local word5 = space:read_u16(base + 10)
        local top = word4 & 0xfff
        if top >= 0x800 then top = top - 0x1000 end
        local rows = 8 << ((word4 >> 12) & 7)
        if max_y >= top and max_y < top + rows then
            active_descriptors = active_descriptors + 1
            palette_tags[word3 & 0x3fff] = true
            local columns = 8 << ((word5 >> 12) & 7)
            local source_row = max_y - top
            local tile_y = source_row >> 3
            local within_y = source_row & 7
            local size_x = 1 << ((word5 >> 12) & 7)
            for source_column = 0, columns - 1 do
                local tile_x = source_column >> 3
                local within_x = source_column & 7
                local tile_ordinal = tile_y * size_x + tile_x
                local wanted_word = ((word2 & 0x1fff) << 4) +
                    tile_ordinal * 16 + within_y * 2 + (within_x >> 2)
                data_tags[(wanted_word & 0x1ffff) >> 3] = true
            end
        end
    end
    local unique_palettes, unique_data = 0, 0
    for _ in pairs(palette_tags) do unique_palettes = unique_palettes + 1 end
    for _ in pairs(data_tags) do unique_data = unique_data + 1 end
    print(string.format(
        "S24MAME sprite frame=%d active_descriptors=%d unique_palettes=%d unique_data_bursts=%d",
        frame, active_descriptors, unique_palettes, unique_data))
    local palette_cache, data_cache = {}, {}
    local palette_requests, palette_misses, data_requests, data_misses = 0, 0, 0, 0
    for position = #normals, 1, -1 do
        local index = normals[position]
        local base = 0x600000 + index * 16
        local word2 = space:read_u16(base + 4)
        local word3 = space:read_u16(base + 6)
        local word4 = space:read_u16(base + 8)
        local word5 = space:read_u16(base + 10)
        local top = word4 & 0xfff
        if top >= 0x800 then top = top - 0x1000 end
        local rows = 8 << ((word4 >> 12) & 7)
        if max_y >= top and max_y < top + rows then
            local palette_tag = word3 & 0x3fff
            local palette_index = palette_tag & 7
            palette_requests = palette_requests + 1
            if palette_cache[palette_index] ~= palette_tag then
                palette_cache[palette_index] = palette_tag
                palette_misses = palette_misses + 1
            end
            local columns = 8 << ((word5 >> 12) & 7)
            local source_row = max_y - top
            local tile_y = source_row >> 3
            local within_y = source_row & 7
            local size_x = 1 << ((word5 >> 12) & 7)
            local prior_tag = -1
            for source_column = 0, columns - 1 do
                local tile_x = source_column >> 3
                local within_x = source_column & 7
                local wanted_word = ((word2 & 0x1fff) << 4) +
                    (tile_y * size_x + tile_x) * 16 +
                    within_y * 2 + (within_x >> 2)
                local data_tag = (wanted_word & 0x1ffff) >> 3
                if data_tag ~= prior_tag then
                    prior_tag = data_tag
                    local data_index = data_tag & 15
                    data_requests = data_requests + 1
                    if data_cache[data_index] ~= data_tag then
                        data_cache[data_index] = data_tag
                        data_misses = data_misses + 1
                    end
                end
            end
        end
    end
    print(string.format(
        "S24MAME sprite frame=%d cache8_palette=%d/%d cache16_data=%d/%d",
        frame, palette_misses, palette_requests, data_misses, data_requests))
    local sprite_dump = os.getenv("S24_SPRITE_DUMP_FILE")
    if sprite_dump and sprite_dump ~= "" then
        local stream = assert(io.open(sprite_dump, "wb"))
        for word = 0, 0x1ffff do
            stream:write(string.format("%04x\n",
                space:read_u16(0x600000 + word * 2)))
        end
        stream:flush()
        stream:close()
        print(string.format("S24MAME sprite frame=%d dump=%s words=%d",
            frame, sprite_dump, 0x20000))
    end
    machine:exit()
end, "frame")
