`timescale 1ns/1ps

module tb_ikaopm_timer;
	logic clk = 0, reset = 1, chip_reset_n = 0, ce_4m = 0;
	logic write_valid = 0, write_a0 = 0, write_accepted;
	logic [7:0] write_data = 0, status;
	logic irq_n;
	logic signed [15:0] audio_l, audio_r;
	integer div = 0;

	always #10 clk = ~clk;
	always_ff @(posedge clk) begin
		ce_4m <= 1'b0;
		if (div == 11) begin
			div <= 0;
			ce_4m <= 1'b1;
		end else div <= div + 1;
	end

	s24_opm dut (
		.clk(clk), .reset(reset), .ce_4m(ce_4m),
		.chip_reset_n(chip_reset_n), .write_valid(write_valid),
		.write_a0(write_a0), .write_data(write_data),
		.write_accepted(write_accepted), .status(status), .irq_n(irq_n),
		.audio_l(audio_l), .audio_r(audio_r)
	);

	task automatic bus_write(input logic a0, input logic [7:0] data);
		begin
			@(negedge clk);
			write_a0 = a0;
			write_data = data;
			write_valid = 1;
			while (!write_accepted) @(posedge clk);
			@(negedge clk);
			write_valid = 0;
		end
	endtask

	task automatic write_reg(input logic [7:0] addr, input logic [7:0] data);
		begin
			bus_write(0, addr);
			bus_write(1, data);
			repeat (40) @(posedge ce_4m);
		end
	endtask

	initial begin
		repeat (12) @(posedge clk);
		reset = 0;
		repeat (12) @(posedge clk);
		chip_reset_n = 1;
		repeat (80) @(posedge ce_4m);

		// Timer A starts at 0x3ff, then overflows at the first qualified tick.
		write_reg(8'h10, 8'hff);
		write_reg(8'h11, 8'h03);
		write_reg(8'h14, 8'h05); // IRQ enable + run
		fork
			begin
				wait (status[0] && !irq_n);
			end
			begin
				repeat (5000) @(posedge ce_4m);
				$fatal(1, "IKAOPM Timer A did not assert status/IRQ");
			end
		join_any
		disable fork;

		write_reg(8'h14, 8'h14); // force-reset flag, retain IRQ enable
		repeat (8) @(posedge ce_4m);
		if (status[0] || !irq_n)
			$fatal(1, "IKAOPM Timer A status/IRQ did not clear: %02h %b", status, irq_n);

		$display("PASS IKAOPM Timer A status and IRQ assertion/clear");
		$finish;
	end
endmodule
