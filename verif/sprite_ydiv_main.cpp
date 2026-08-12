#include "Vtb_sprite_ydiv.h"
#include "verilated.h"

#include <cstdint>
#include <cstdio>

double sc_time_stamp() { return 0.0; }

int main(int argc, char** argv) {
	Verilated::commandArgs(argc, argv);
	Vtb_sprite_ydiv top;
	std::uint64_t cases=0;

	// The live mapper forms N=64*target_offset+31, with every 12-bit offset
	// valid.  A nonzero descriptor zoom byte forms every divisor from 2..256;
	// byte zero's 1:1 divisor (64) is included as an additional check.
	for(std::uint32_t divisor=2;divisor<=256;divisor++) {
		for(std::uint32_t offset=0;offset<4096;offset++) {
			const std::uint32_t dividend=(offset<<6)+31;
			top.dividend=dividend;
			top.divisor=divisor;
			top.eval();
			const std::uint32_t expected_q=dividend/divisor;
			const std::uint32_t expected_r=dividend%divisor;
			if(top.quotient!=expected_q || top.remainder!=expected_r) {
				std::fprintf(stderr,
					"FAIL divisor=%u offset=%u dividend=%u q=%u/%u r=%u/%u\n",
					divisor,offset,dividend,top.quotient,expected_q,
					top.remainder,expected_r);
				return 1;
			}
			cases++;
		}
	}

	std::printf("TB_RESULT=PASS cases=%llu divisors=2..256 offsets=0..4095 cycles=9\n",
		static_cast<unsigned long long>(cases));
	top.final();
	return 0;
}
