// Continuous-raster Scramble Spirits sprite deadline regression.
//
// The input is a diagnostic MAME-captured sprite-RAM image.  The capture is
// not a golden framebuffer: it supplies the real descriptor and artwork
// locality while this bench checks the FPGA renderer's independent scanline
// deadline.  The externally driven clock keeps the model savable.
module tb_sprite_mame_line(input logic clk,output logic test_failed);
	import s24_pkg::*;
	localparam int LINE_CLOCKS=1968;
	localparam logic [26:4] BASE=SDR_SPRITE_BASE[26:4];

	logic reset=1,ce_pixel=0;
	logic [9:0] hcount=0,vcount=0;
	logic [13:0] pixel0,pixel1,pixel2,pixel3;
	logic [10:0] rank0,rank1,rank2,rank3;
	logic mem_req,mem_ack=0,mem_req_d=0;
	logic [26:4] mem_addr;
	logic [127:0] mem_data;
	logic [15:0] sprite_ram [0:131071];

	integer i,phase=0,reset_edges=0,line_clocks=0;
	integer raster_frames=2,completed_frames=0,first_frame_misses=-1;
	integer mem_latency=13,mem_wait=0,mem_requests=0,data_requests=0;
	integer cache_entries=0,cache_hits=0,cache_misses=0;
	integer cache_hash=0;
	integer cache_index,request_cache_index;
	string sprite_hex_path;
	logic [13:0] request_cache_tag;
	logic mem_pending=0;
	logic [13:0] probe_cache_tag [0:1023];
	logic probe_cache_valid [0:1023];
	logic probe_cache_hit;

	integer deadline_misses=0,first_miss=-1,last_miss=-1;
	integer current_run=0,max_miss_run=0,max_active=0,max_stack=0;
	logic edge_monitor=0,stop_pending=0;
	logic cache_invalidate=0,snoop_check_pending=0,snoop_pass=0;
	logic [13:0] cache_invalidate_tag=0;
	integer snoop_pick,snoop_i;
	function automatic [7:0] rtl_cache_index(input logic [13:0] tag);
		begin
			rtl_cache_index=tag[7:0]^{2'b00,tag[13:8]};
		end
	endfunction
	function automatic [13:0] rtl_cache_reconstruct(
		input logic [7:0] index,input logic [5:0] tag_high);
		begin
			rtl_cache_reconstruct={tag_high,index^{2'b00,tag_high}};
		end
	endfunction

	initial begin
		// Every pair below collided in the former low-byte-only cache. Keep the
		// address-folding contract explicit so a later simplification cannot
		// silently restore the continuous gameplay miss band.
		for(i=0;i<256;i=i+1)
			assert(rtl_cache_index(i[13:0])!=
			       rtl_cache_index(i[13:0]+14'h0100))
				else $fatal(1,"sprite cache alias contract index=%0d",i);
		for(i=0;i<16384;i=i+1)
			assert(rtl_cache_reconstruct(rtl_cache_index(i[13:0]),i[13:8])==
			       i[13:0])
				else $fatal(1,"sprite cache tag reconstruction tag=%0h",i);
		if(!$value$plusargs("SPRITE_HEX=%s",sprite_hex_path))
			sprite_hex_path=".build/mame-sspirits-sprite1200.hex";
		if(!$value$plusargs("MEM_LATENCY=%d",mem_latency)) mem_latency=13;
		if(!$value$plusargs("CACHE_ENTRIES=%d",cache_entries)) cache_entries=0;
		if(!$value$plusargs("CACHE_HASH=%d",cache_hash)) cache_hash=0;
		if(!$value$plusargs("RASTER_FRAMES=%d",raster_frames)) raster_frames=2;
		if(raster_frames<1) $fatal(1,"RASTER_FRAMES must be positive");
		if(cache_entries!=0 && cache_entries!=64 &&
		   cache_entries!=128 && cache_entries!=256 &&
		   cache_entries!=512 && cache_entries!=1024)
			$fatal(1,"CACHE_ENTRIES must be 0, 64, 128, 256, 512, or 1024");
		for(i=0;i<1024;i=i+1) begin
			probe_cache_tag[i]=0;
			probe_cache_valid[i]=0;
		end
		$readmemh(sprite_hex_path,sprite_ram);
	end

	function automatic [127:0] sprite_burst(input logic [26:4] address);
		integer base;
		begin
			base=(address-BASE)*8;
			sprite_burst={sprite_ram[base+7],sprite_ram[base+6],
				sprite_ram[base+5],sprite_ram[base+4],
				sprite_ram[base+3],sprite_ram[base+2],
				sprite_ram[base+1],sprite_ram[base]};
		end
	endfunction
	always_comb begin
		mem_data=sprite_burst(mem_addr);
		cache_index=(mem_addr-BASE)&1023;
		if(cache_hash!=0)
			cache_index=cache_index^((mem_addr-BASE)>>8);
		probe_cache_hit=cache_entries!=0 &&
			probe_cache_valid[cache_index&(cache_entries-1)] &&
			probe_cache_tag[cache_index&(cache_entries-1)]==(mem_addr-BASE);
	end

	// A hit is returned on the next renderer edge.  Misses retain the measured
	// SDRAM/CDC round trip.  The probe cache is diagnostic only; CACHE_ENTRIES=0
	// is the unmodified RTL baseline and the acceptance result.
	always_ff @(posedge clk) begin
		mem_req_d<=mem_req;
		mem_ack<=0;
		if(reset) begin
			mem_pending<=0;
			mem_wait<=0;
			mem_requests<=0;
			data_requests<=0;
			cache_hits<=0;
			cache_misses<=0;
		end else if(mem_req && !mem_req_d) begin
			mem_requests<=mem_requests+1;
			request_cache_tag<=mem_addr-BASE;
			request_cache_index<=cache_index&(cache_entries-1);
			if(dut.state==dut.S_DATA_WAIT)
				data_requests<=data_requests+1;
			if(probe_cache_hit) begin
				mem_ack<=1;
				cache_hits<=cache_hits+1;
			end else if(mem_latency==0) begin
				mem_ack<=1;
				cache_misses<=cache_misses+1;
			end else begin
				mem_pending<=1;
				mem_wait<=mem_latency-1;
				cache_misses<=cache_misses+1;
			end
		end else if(mem_pending && mem_wait!=0) begin
			mem_wait<=mem_wait-1;
		end else if(mem_pending) begin
			mem_ack<=1;
			mem_pending<=0;
			if(cache_entries!=0) begin
				probe_cache_valid[request_cache_index]<=1;
				probe_cache_tag[request_cache_index]<=request_cache_tag;
			end
		end
	end

	s24_sprite dut(
		.clk(clk),.reset(reset),.ce_pixel(ce_pixel),.hcount(hcount),
		.vcount(vcount),.pixel0(pixel0),.pixel1(pixel1),.pixel2(pixel2),
		.pixel3(pixel3),.rank0(rank0),.rank1(rank1),.rank2(rank2),
		.rank3(rank3),.mem_req(mem_req),.mem_addr(mem_addr),
		.mem_data(mem_data),.mem_ack(mem_ack),
		.cache_invalidate(cache_invalidate),
		.cache_invalidate_tag(cache_invalidate_tag));

	// Generate the actual 424-line raster cadence.  The renderer receives the
	// full 40-line vertical blank before visible line zero and must keep a bank
	// ready for every subsequent visible deadline.
	always_ff @(negedge clk) begin
		edge_monitor<=0;
		cache_invalidate<=0;
		if(snoop_check_pending) begin
			if(dut.burst_cache_valid[rtl_cache_index(cache_invalidate_tag)]) begin
				test_failed<=1;
				$display("FAIL sprite burst cache snoop did not invalidate index %0d",
					rtl_cache_index(cache_invalidate_tag));
			end else snoop_pass<=1;
			snoop_check_pending<=0;
		end
		case(phase)
			0: begin
				if(reset_edges==0) test_failed<=0;
				reset_edges<=reset_edges+1;
				if(reset_edges==3) begin
					reset<=0;
					vcount<=10'd383;
					hcount<=10'd655;
					ce_pixel<=1;
					edge_monitor<=1;
					phase<=1;
				end
			end
			1: begin
				if(ce_pixel) begin
					ce_pixel<=0;
					hcount<=0;
					line_clocks<=0;
					if(vcount==10'd423) vcount<=0;
					else vcount<=vcount+1'b1;
					if(stop_pending) begin
						if(completed_frames==0 && raster_frames>1) begin
							snoop_pick=-1;
							for(snoop_i=0;snoop_i<256;snoop_i=snoop_i+1)
								if(snoop_pick<0 && dut.burst_cache_valid[snoop_i])
									snoop_pick=snoop_i;
							if(snoop_pick<0) begin
								test_failed<=1;
								$display("FAIL sprite burst cache had no valid snoop target");
							end else begin
								cache_invalidate_tag<=rtl_cache_reconstruct(
									snoop_pick[7:0],dut.burst_cache_tag[snoop_pick]);
								cache_invalidate<=1;
								snoop_check_pending<=1;
							end
						end
						completed_frames<=completed_frames+1;
						if(first_frame_misses<0)
							first_frame_misses<=deadline_misses;
						if(completed_frames+1>=raster_frames) phase<=2;
						else stop_pending<=0;
					end
				end else if(line_clocks==LINE_CLOCKS-2) begin
					hcount<=10'd655;
					ce_pixel<=1;
					edge_monitor<=1;
					if(vcount==10'd382) stop_pending<=1;
				end else line_clocks<=line_clocks+1;
			end
			2: begin
				$display("SSpirits raster frames=%0d stack=%0d max_active=%0d requests=%0d data=%0d cache=%0d hits=%0d misses=%0d deadlines=%0d frame1=%0d later=%0d snoop=%0d first=%0d last=%0d max_run=%0d",
					raster_frames,max_stack,max_active,mem_requests,data_requests,
					cache_entries,cache_hits,cache_misses,deadline_misses,
					first_frame_misses,deadline_misses-first_frame_misses,
					snoop_pass,first_miss,last_miss,
					(current_run>max_miss_run)?current_run:max_miss_run);
				if(deadline_misses-first_frame_misses!=0 ||
				   (raster_frames>1 && !snoop_pass)) begin
					test_failed<=1;
					$display("FAIL SSpirits sprite scanline deadlines");
				end else
					$display("PASS SSpirits sprite scanline deadlines");
				$finish;
			end
		endcase
	end

	// Sample before the DUT's nonblocking boundary updates.  This is the bank
	// availability the real raster sees at that deadline.
	always_ff @(posedge clk) if(!reset) begin
		if(dut.active_count>max_active) max_active<=dut.active_count;
		if(dut.stack_count>max_stack) max_stack<=dut.stack_count;
		if(edge_monitor && (vcount==10'd423 || vcount<10'd382)) begin
			if(!dut.next_display_ready) begin
				if(deadline_misses<5)
					$display("deadline miss v=%0d state=%0d next_render=%0d list=%0d active=%0d line_valid=%b filling=%b",
						vcount,dut.state,dut.render_next_target,
						dut.list_cache_valid,dut.active_count,
						dut.line_valid,dut.bank_filling);
				deadline_misses<=deadline_misses+1;
				if(first_miss<0) first_miss<=vcount;
				last_miss<=vcount;
				current_run<=current_run+1;
			end else begin
				if(current_run>max_miss_run) max_miss_run<=current_run;
				current_run<=0;
			end
		end
	end
endmodule
