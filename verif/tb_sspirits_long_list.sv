module tb_sspirits_long_list(input logic clk);
	import s24_pkg::*;
	localparam int LIST_COUNT=3547, ACTIVE_COUNT=48;
	localparam logic [26:4] BASE=SDR_SPRITE_BASE[26:4];
	logic reset=1,ce_pixel=0;
	logic [9:0] hcount=0,vcount=0;
	logic [13:0] pixel0,pixel1,pixel2,pixel3;
	logic [10:0] rank0,rank1,rank2,rank3;
	logic mem_req,mem_ack;
	logic [26:4] mem_addr;
	logic [127:0] mem_data;
	logic [22:0] descriptor_index;
	integer phase=0,clocks=0,render_clocks=0;
	assign mem_ack=mem_req;
	assign descriptor_index=mem_addr-BASE;
	always_comb begin
		mem_data='0;
		if(descriptor_index<LIST_COUNT) begin
			mem_data[0+:16]=(descriptor_index==LIST_COUNT-1)?16'd0:
				descriptor_index[15:0]+16'd1;
			mem_data[16+:16]=16'h003f;
			mem_data[32+:16]=descriptor_index[15:0];
			mem_data[48+:16]=16'h0002;
			mem_data[64+:16]=(descriptor_index<ACTIVE_COUNT)?16'd0:16'd500;
			mem_data[80+:16]=16'h0800;
		end
	end
	s24_sprite dut(.clk(clk),.reset(reset),.ce_pixel(ce_pixel),
		.hcount(hcount),.vcount(vcount),.pixel0(pixel0),.pixel1(pixel1),
		.pixel2(pixel2),.pixel3(pixel3),.rank0(rank0),.rank1(rank1),
		.rank2(rank2),.rank3(rank3),.mem_req(mem_req),.mem_addr(mem_addr),
		.mem_data(mem_data),.mem_ack(mem_ack));
	always_ff @(posedge clk) begin
		clocks<=clocks+1;
		case(phase)
			0: if(clocks==2) begin
				reset<=0;hcount<=10'd655;vcount<=10'd383;ce_pixel<=1;phase<=1;
			end
			1: begin
				ce_pixel<=0;
				if(dut.list_cache_valid && dut.state==dut.S_IDLE) begin
					assert(dut.stack_count==LIST_COUNT)
						else $fatal(1,"SSpirits list retained %0d/%0d",dut.stack_count,LIST_COUNT);
					phase<=2;
				end
				assert(clocks<20000) else $fatal(1,"SSpirits list collection timeout");
			end
			2: if(dut.target_y==0 && dut.state!=dut.S_IDLE) begin
				render_clocks<=0;phase<=3;
			end
			3: begin
				render_clocks<=render_clocks+1;
				if(dut.state==dut.S_IDLE) begin
					assert(dut.active_count==ACTIVE_COUNT)
						else $fatal(1,"SSpirits active count %0d/%0d",dut.active_count,ACTIVE_COUNT);
					assert(render_clocks<656*3)
						else $fatal(1,"SSpirits line missed budget: %0d",render_clocks);
					$display("PASS SSpirits 3547-descriptor list active=%0d clocks=%0d",
						dut.active_count,render_clocks);
					$finish;
				end
			end
		endcase
	end
endmodule
