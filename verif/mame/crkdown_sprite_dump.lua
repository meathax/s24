-- Dump the 315-5293/5295 linked sprite list at a chosen frame.
-- S24_DUMP_FRAME selects the frame; output goes to stdout with a stable prefix
-- so the harness can grep it. Read-only: no machine state is modified.

local machine = manager.machine
local screen = machine.screens[":screen"]
local cpu = machine.devices[":maincpu"]
local space = cpu.spaces["program"]
local target = tonumber(os.getenv("S24_DUMP_FRAME") or "1500") or 1500
local frame = 0

local function w(addr)
    return space:read_u16(addr)
end

emu.register_frame_done(function()
    frame = frame + 1
    if frame ~= target then
        if frame > target then machine:exit() end
        return
    end
    print(string.format("S24DUMP frame=%d", frame))
    local cur = 0
    local seen = 0
    local clip = nil
    local dumped = {}
    while seen < 0x2000 do
        local base = 0x600000 + cur * 16
        local s0 = w(base)
        if not dumped[cur] then
            dumped[cur] = true
            print(string.format("S24RAW idx=%d %04x %04x %04x %04x %04x %04x %04x %04x",
                cur, s0, w(base + 2), w(base + 4), w(base + 6),
                w(base + 8), w(base + 10), w(base + 12), w(base + 14)))
        end
        if cur == 0 and s0 == 0 then
            print("S24DUMP end reason=zero-head")
            break
        end
        local nxt = s0 & 0x1fff
        local typ = s0 & 0xc000
        if typ == 0xc000 then
            print("S24DUMP end reason=type3")
            break
        end
        if typ == 0x4000 then
            local c1, c2, c3, c4, c5 =
                w(base + 2), w(base + 4), w(base + 6), w(base + 8), w(base + 10)
            clip = string.format("rev=%d ytop=%d xleft=%d ybot=%d xright=%d",
                (c1 >> 13) & 1, c2 & 511, (c3 & 511) - 8, c4 & 511, (c5 & 511) - 8)
            print(string.format("S24DUMP idx=%d CLIP %s", cur, clip))
        elseif typ == 0x0000 then
            local s1, s2, s3, s4, s5 =
                w(base + 2), w(base + 4), w(base + 6), w(base + 8), w(base + 10)
            local x = s5 & 0xfff
            if x & 0x800 ~= 0 then x = x - 0x1000 end
            x = x - 8
            local y = s4 & 0xfff
            if y & 0x800 ~= 0 then y = y - 0x1000 end
            local sx = 1 << ((s5 & 0x7000) >> 12)
            local sy = 1 << ((s4 & 0x7000) >> 12)
            local zx, zy
            if s0 & 0x2000 == 0 then zx = s1 & 0xff; zy = s1 & 0xff
            else zx = s1 >> 8; zy = s1 & 0xff end
            if zx == 0 then zx = 0x3f end
            if zy == 0 then zy = 0x3f end
            zx = zx + 1; zy = zy + 1
            local hpx = (32 + sy * 8 * zy) >> 6
            local wpx = (32 + sx * 8 * zx) >> 6
            print(string.format(
                "S24DUMP idx=%d SPR x=%d y=%d sx=%d sy=%d zx=%d zy=%d w=%d h=%d y2=%d x2=%d flip=%d%d clip[%s]",
                cur, x, y, sx, sy, zx, zy, wpx, hpx, y + hpx, x + wpx,
                (s5 >> 15) & 1, (s4 >> 15) & 1, clip or "none"))
        end
        seen = seen + 1
        cur = nxt
        if cur == 0 then
            print("S24DUMP end reason=next-zero")
            break
        end
    end
    print("S24DUMP done")
    machine:exit()
end)
