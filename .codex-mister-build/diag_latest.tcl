project_open -revision Arcade-SegaSystem24 Arcade-SegaSystem24
create_timing_netlist -model slow
read_sdc
update_timing_netlist
set src [get_registers -nowarn {*hps_io:hps|joystick_l_analog_0[*] *hps_io:hps|joystick_l_analog_1[*] *hps_io:hps|joystick_l_analog_2[*] *hps_io:hps|joystick_l_analog_3[*]}]
set dst [get_registers -nowarn {*|wheel0|analog_step[*] *|wheel1|analog_step[*] *|wheel2|analog_step[*] *|wheel3|analog_step[*]}]
puts "WHEEL_SRC_COUNT=[get_collection_size $src]"
puts "WHEEL_DST_COUNT=[get_collection_size $dst]"
report_timing -setup -npaths 3 -detail full_path -stdout
report_timing -hold -npaths 3 -detail full_path -stdout
project_close
