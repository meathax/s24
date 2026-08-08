`timescale 1ns/1ps

// Regression for an opcode-cache hit coincident with fx68k's IR->IRD
// instruction boundary.  The just-returned immediate word is architecturally
// before the CMPI.L execution event even though both notifications share a
// clk edge, so FD1094 state recognition must see it without waiting for the
// nonblocking fetch-history update.
module tb_fd1094_cache_race;
	logic clk=0;
	always #10 clk=~clk;

	logic reset=1;
	logic instruction_start=0;
	logic hit_record=0;
	logic [15:0] instruction_opcode=0;
	logic [23:1] instruction_address=0;
	logic [23:1] hit_address=0;
	logic [15:0] hit_data=0;
	logic [7:0] current_state;

	s24_fd1094 dut(
		.clk(clk),.reset(reset),
		.key_wr(1'b0),.key_word_addr('0),.key_wdata('0),
		.start(1'b0),.key_start(1'b0),.word_address('0),
		.encrypted('0),.irq_enter(1'b0),
		.instruction_start(instruction_start),
		.instruction_opcode(instruction_opcode),
		.instruction_address(instruction_address),
		.busy(),.done(),.plaintext(),.current_state(current_state),
		.state_used(),.hit_record(hit_record),
		.hit_address(hit_address),.hit_data(hit_data));

	initial begin
		repeat(2) @(negedge clk);
		reset=0;
		@(negedge clk);

		instruction_address=23'h004228; // Gain Ground byte PC $008450
		instruction_opcode=16'h0c80;
		// Seed the high immediate through the real replay interface one cycle
		// earlier, exactly as an earlier cache-served prefetch would.
		hit_address=instruction_address+23'd1;
		hit_data=16'h0091;
		hit_record=1;
		@(negedge clk);
		// The low $ffff word is accepted on the execution-boundary edge.
		hit_address=instruction_address+23'd2;
		hit_data=16'hffff;
		instruction_start=1;

		@(negedge clk);
		hit_record=0;
		instruction_start=0;
		#1;
		if(current_state!==8'h91)
			$fatal(1,"same-cycle cache hit/CMPI boundary lost FD1094 state command: current=%h",
			       current_state);

		$display("PASS FD1094 same-cycle cache hit/state command");
		$finish;
	end
endmodule
