
local machine=manager.machine
local space=machine.devices[":maincpu"].spaces["program"]
local frame=0
local rows={}
local function w(off) return space:read_u16(0x200000+2*off) end
emu.register_frame_done(function()
 frame=frame+1
 if frame>=7496 and frame<=7504 then
  local c={}
  for i=0,7 do c[#c+1]=string.format("%04x",w(0x5000+i)) end
  rows[#rows+1]=string.format("frame=%d control=%s",frame,table.concat(c,","))
 end
 if frame>=7504 then
  local f=assert(io.open([[C:\Users\meath\OneDrive\Documents\Sega System 24\artifacts\mame-mcp\bnzabros-map-opacity\tile-state\controls.txt]],"wb")); f:write(table.concat(rows,"\n")); f:close(); machine:exit()
 end
end,"frame")