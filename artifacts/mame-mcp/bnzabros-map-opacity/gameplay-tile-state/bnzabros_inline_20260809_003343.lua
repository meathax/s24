
local machine=manager.machine
local space=machine.devices[":maincpu"].spaces["program"]
local frame=0
local rows={}
local function w(off) return space:read_u16(0x200000+2*off) end
local coin,start,action
for tag,port in pairs(machine.ioport.ports) do
 for name,field in pairs(port.fields) do
  local n=string.lower(name)
  if n=="coin 1" then coin=field end
  if n=="1 player start" then start=field end
  if n=="p1 button 1" then action=field end
 end
end
emu.register_frame_done(function()
 frame=frame+1
 if coin then coin:set_value(frame>=900 and frame<904 and 1 or 0) end
 if start then start:set_value(frame>=950 and frame<954 and 1 or 0) end
 if action then action:set_value(frame>=1000 and frame<1004 and 1 or 0) end
 if frame>=3796 and frame<=3804 then
  local c={}
  for i=0,7 do c[#c+1]=string.format("%04x",w(0x5000+i)) end
  rows[#rows+1]=string.format("frame=%d control=%s",frame,table.concat(c,","))
 end
 if frame>=3804 then
  local f=assert(io.open([[C:/Users/meath/OneDrive/Documents/Sega System 24/artifacts/mame-mcp/bnzabros-map-opacity/gameplay-controls.txt]],"wb")); f:write(table.concat(rows,"\n")); f:close(); machine:exit()
 end
end,"frame")