module tb_sprite_ydiv (
	input  logic [17:0] dividend,
	input  logic [8:0]  divisor,
	output logic [17:0] quotient,
	output logic [18:0] remainder
);
	logic [17:0] dividend_stage [0:9];
	logic [17:0] quotient_stage [0:9];
	logic [18:0] remainder_stage [0:9];

	assign dividend_stage[0]=dividend;
	assign quotient_stage[0]=18'd0;
	assign remainder_stage[0]=19'd0;

	generate
		for(genvar step=0;step<9;step=step+1) begin : radix4_steps
			s24_sprite_ydiv_radix4_step dut_step (
				.dividend(dividend_stage[step]),
				.quotient(quotient_stage[step]),
				.remainder(remainder_stage[step]),
				.divisor(divisor),
				.next_quotient(quotient_stage[step+1]),
				.next_remainder(remainder_stage[step+1])
			);
			assign dividend_stage[step+1]=
				{dividend_stage[step][15:0],2'b00};
		end
	endgenerate

	assign quotient=quotient_stage[9];
	assign remainder=remainder_stage[9];
endmodule
