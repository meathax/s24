local log = assert(io.open("C:/Users/meath/OneDrive/Documents/Sega System 24/artifacts/mame-mcp/crkdown-title/crkdown_ioports_20260808_233235.log", "w"))
local function w(s) log:write(s .. "\n"); log:flush() end
w("# mame_mcp ioport list")
for tag, port in pairs(manager.machine.ioport.ports) do
  for fname, field in pairs(port.fields) do
    w(string.format("PORT\t%s\tFIELD\t%s", tostring(tag), tostring(fname)))
  end
end
log:close()
manager.machine:exit()
