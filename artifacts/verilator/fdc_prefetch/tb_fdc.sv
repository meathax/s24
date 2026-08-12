`timescale 1ns/1ps

module tb_fdc;
    localparam integer MEDIA_BYTES = 16'h5a00;
    logic clk=0,reset=1,index_pulse=0;
    logic [15:0] track_size=0;
    logic bus_rd=0,bus_wr=0;
    logic [2:0] bus_addr=0;
    logic [7:0] bus_din=0,bus_dout;
    logic bus_wait,media_req,media_wr,media_ack=0,stretch_ack=0;
    logic [26:0] media_addr;
    logic [7:0] media_wdata,media_rdata=0;
    logic [7:0] media [0:MEDIA_BYTES-1];
    integer i,requests=0;

    always #5 clk=~clk;

    s24_fdc dut(.*);

    // A one-cycle-latency byte-addressed SDRAM model.
    always @(posedge clk) begin
        if(!stretch_ack) media_ack<=0;
        if(media_req && !media_ack) begin
            if(media_addr>=MEDIA_BYTES) $fatal(1,"media address outside test image: %0d",media_addr);
            if(media_wr) media[media_addr]<=media_wdata;
            else media_rdata<=media[media_addr];
            media_ack<=1;
            requests<=requests+1;
        end else if(media_ack && !stretch_ack) begin
            media_ack<=0;
        end
    end

    task automatic idle_cycle;
        begin
            bus_rd=0;bus_wr=0;
            @(posedge clk);#1;
        end
    endtask

    task automatic write_reg(input logic [2:0] a,input logic [7:0] d);
        begin
            bus_addr=a;bus_din=d;bus_wr=1;
            @(posedge clk);#1;
            while(bus_wait) begin @(posedge clk);#1;end
            idle_cycle();
        end
    endtask

    task automatic read_reg(input logic [2:0] a,output logic [7:0] d);
        begin
            bus_addr=a;bus_rd=1;
            @(posedge clk);#1;
            while(bus_wait) begin @(posedge clk);#1;end
            d=bus_dout;
            idle_cycle();
        end
    endtask

    logic [7:0] value;
    initial begin
        for(i=0;i<MEDIA_BYTES;i++) media[i]=i[7:0]^8'h5a;
        repeat(3) @(posedge clk);reset=0;@(posedge clk);#1;

        // A board without floppy media returns an open bus and never stalls.
        bus_addr=3;bus_rd=1;#1;
        if(bus_wait || bus_dout!=8'hff) $fatal(1,"absent-media behavior");
        idle_cycle();

        track_size=4;
        write_reg(3,8'h02);
        write_reg(0,8'h10); // seek physical/logical track 2
        read_reg(1,value);
        if(value!=2) $fatal(1,"seek track register %02h",value);
        read_reg(4,value);
        if((value&8'h42)!=8'h42) $fatal(1,"seek IRQ/physical-track status %02h",value);
        read_reg(0,value); // status read clears IRQ
        read_reg(4,value);
        if(value&8'h02) $fatal(1,"status read did not clear IRQ");

        // Read track 2 side 1: 4*(2*2+1) = byte address 20.
        bus_addr=0;bus_din=8'h98;bus_wr=1;
        @(posedge clk);#1;
        if(!media_req || media_wr || media_addr!=20)
            $fatal(1,"read command did not immediately prefetch first byte");
        if(dut.drq)
            $fatal(1,"read command advertised DRQ before prefetched byte was valid");
        idle_cycle();
        read_reg(4,value);
        if((value&8'h01)==0) $fatal(1,"read command did not raise DRQ");
        if(bus_dout!==bus_dout) $fatal(1,"unexpected unknown bus data");
        for(i=0;i<4;i++) begin
            read_reg(3,value);
            if(value!=media[20+i]) $fatal(1,"read byte %0d got %02h expected %02h",i,value,media[20+i]);
        end
        if(requests!=4) $fatal(1,"read request count %0d",requests);
        read_reg(4,value);
        if((value&8'h03)!=8'h02) $fatal(1,"read completion status %02h",value);
        read_reg(0,value);

        // Write track 2 side 0: base byte address 16.
        requests=0;
        write_reg(0,8'hb0);
        for(i=0;i<4;i++) write_reg(3,8'ha0+i[7:0]);
        for(i=0;i<4;i++)
            if(media[16+i]!=(8'ha0+i[7:0])) $fatal(1,"write byte %0d mismatch",i);
        if(requests!=4) $fatal(1,"write request count %0d",requests);
        read_reg(4,value);
        if((value&8'h03)!=8'h02) $fatal(1,"write completion status %02h",value);

        // A stretched bridge acknowledgement still completes one byte only.
        requests=0;stretch_ack=1;
        write_reg(0,8'h90);
        read_reg(3,value);
        if(value!=media[16]) $fatal(1,"stretched-ack read mismatch %02h",value);
        repeat(2) @(posedge clk);
        @(negedge clk);
        media_ack=0;stretch_ack=0;
        if(dut.position!=1 || dut.span!=3 || requests!=1)
            $fatal(1,"stretched ack consumed multiple bytes pos=%0d span=%0d req=%0d",
                   dut.position,dut.span,requests);

        // Reading without a valid prefetched byte must neither consume nor
        // advance the track pipeline.
        write_reg(0,8'hd0);
        i=dut.position;
        read_reg(3,value);
        if(dut.position!=i || dut.span!=0 || dut.drq)
            $fatal(1,"invalid read advanced pipeline pos=%0d span=%0d drq=%0b",
                   dut.position,dut.span,dut.drq);

        read_reg(4,value);
        if(value&8'h03) $fatal(1,"force interrupt d0 status %02h",value);
        write_reg(0,8'hd1);
        read_reg(4,value);
        if((value&8'h02)==0 || (value&8'h01)!=0) $fatal(1,"force interrupt d1 status %02h",value);

        index_pulse=1;#1;read_reg(4,value);
        if((value&8'h20)==0) $fatal(1,"index status missing");
        index_pulse=0;

        write_reg(0,8'h00);
        read_reg(1,value);
        if(value!=0) $fatal(1,"restore track %02h",value);
        read_reg(0,value);
        if(value!=8'h04) $fatal(1,"restore status %02h",value);

        // Bonanza Bros. relies on a genuinely writable full 0x2d00-byte
        // track. Prove a complete write/read round trip rather than only the
        // four-byte command smoke test above.
        track_size=16'h2d00;
        requests=0;
        write_reg(0,8'hb0);
        for(i=0;i<16'h2d00;i++)
            write_reg(3,(i[7:0]^8'ha5));
        if(requests!=16'h2d00)
            $fatal(1,"full-track write request count %0d",requests);
        requests=0;
        write_reg(0,8'h90);
        for(i=0;i<16'h2d00;i++) begin
            read_reg(3,value);
            if(value!=(i[7:0]^8'ha5))
                $fatal(1,"full-track round trip byte %0d got %02h",i,value);
        end
        if(requests!=16'h2d00)
            $fatal(1,"full-track read request count %0d",requests);

        $display("PASS tb_fdc MAME commands, sequencing, status and full 2d00-byte writable track");
        $finish;
    end
endmodule
