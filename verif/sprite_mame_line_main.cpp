#include <verilated.h>
#include <verilated_save.h>

#include <cstdio>
#include <filesystem>
#include <string>

#include "Vtb_sprite_mame_line.h"

namespace fs = std::filesystem;
double sc_time_stamp() { return 0.0; }

int main(int argc,char** argv) {
	VerilatedContext context;
	context.commandArgs(argc,argv);
	std::string save_path;
	for(int i=1;i<argc;i++) {
		std::string arg(argv[i]);
		if(arg.rfind("+SAVE=",0)==0) save_path=arg.substr(6);
	}

	Vtb_sprite_mame_line model{&context};
	int result=0;
	while(!context.gotFinish()) {
		model.clk=!model.clk;
		model.eval();
		context.timeInc(1);
	}

	if(save_path.empty()) result=result?result:5;
	else {
		fs::path path(save_path);
		if(path.has_parent_path()) fs::create_directories(path.parent_path());
		VerilatedSave stream;
		stream.open(save_path.c_str());
		stream<<&context<<model;
		stream.close();
		if(!fs::is_regular_file(path)||fs::file_size(path)==0) result=result?result:6;
		else std::fprintf(stderr,"Saved full-state checkpoint: %s\n",save_path.c_str());
	}
	if(model.test_failed) result=result?result:10;
	model.final();
	return result;
}
