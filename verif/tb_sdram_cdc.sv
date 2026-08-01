`timescale 1ns/1ps

// Focused regression for the transactional SDRAM clock-domain crossing.
//
// The clocks deliberately have unrelated periods and a non-zero phase offset.
// Each transaction changes the live source payload after launch, proving that
// the bundled-data holding register (rather than the live bus) crosses domains.
module tb_sdram_cdc;
    localparam integer REQ_WIDTH = 16;
    localparam integer RSP_WIDTH = 12;

    logic                 reset = 1'b1;
    logic                 src_clk = 1'b0;
    logic                 src_req = 1'b0;
    logic [REQ_WIDTH-1:0] src_payload = '0;
    logic                 src_ack;
    logic [RSP_WIDTH-1:0] src_response;

    logic                 dst_clk = 1'b0;
    logic                 dst_req;
    logic [REQ_WIDTH-1:0] dst_payload;
    logic                 dst_ack = 1'b0;
    logic [RSP_WIDTH-1:0] dst_response = '0;

    integer dst_request_count = 0;
    integer src_ack_count = 0;
    logic   dst_req_q = 1'b0;
    logic   src_ack_q = 1'b0;

    // 14 ns and 22 ns periods, with a 3 ns destination phase offset.
    always #7 src_clk = ~src_clk;
    initial begin
        #3;
        forever #11 dst_clk = ~dst_clk;
    end

    s24_sdram_cdc #(
        .REQ_WIDTH(REQ_WIDTH),
        .RSP_WIDTH(RSP_WIDTH)
    ) dut (
        .reset(reset),
        .src_clk(src_clk),
        .src_req(src_req),
        .src_payload(src_payload),
        .src_ack(src_ack),
        .src_response(src_response),
        .dst_clk(dst_clk),
        .dst_req(dst_req),
        .dst_payload(dst_payload),
        .dst_ack(dst_ack),
        .dst_response(dst_response)
    );

    // Protocol pulse-width and duplicate accounting.
    always @(posedge dst_clk) begin
        if (reset) begin
            dst_request_count <= 0;
            dst_req_q <= 1'b0;
        end else begin
            if (dst_req && dst_req_q)
                $fatal(1, "dst_req was asserted for more than one dst_clk");
            if (dst_req)
                dst_request_count <= dst_request_count + 1;
            dst_req_q <= dst_req;
        end
    end

    always @(posedge src_clk) begin
        if (reset) begin
            src_ack_count <= 0;
            src_ack_q <= 1'b0;
        end else begin
            if (src_ack && src_ack_q)
                $fatal(1, "src_ack was asserted for more than one src_clk");
            if (src_ack)
                src_ack_count <= src_ack_count + 1;
            src_ack_q <= src_ack;
        end
    end

    task automatic run_transaction(
        input logic [REQ_WIDTH-1:0] request_value,
        input logic [REQ_WIDTH-1:0] live_bus_mutation,
        input logic [RSP_WIDTH-1:0] response_value,
        input integer               request_high_src_cycles,
        input integer               ack_delay_dst_cycles,
        input integer               ack_high_dst_cycles,
        input integer               held_drop_delay_src_cycles,
        input integer               settle_cycles
    );
        integer requests_before;
        integer acks_before;
        integer index;
        begin
            requests_before = dst_request_count;
            acks_before = src_ack_count;

            // Launch away from the active source edge. A value of one makes a
            // pulse; a larger value models a requester holding until src_ack.
            @(negedge src_clk);
            src_payload = request_value;
            src_req = 1'b1;
            for (index = 0; index < request_high_src_cycles; index = index + 1)
                @(posedge src_clk);

            // Immediately corrupt the live input after launch. The captured
            // request must still arrive unchanged in the destination domain.
            @(negedge src_clk);
            src_payload = live_bus_mutation;
            if (request_high_src_cycles == 1)
                src_req = 1'b0;

            wait (dst_req === 1'b1);
            if (dst_payload !== request_value)
                $fatal(1,
                       "destination payload mismatch: expected %04h got %04h",
                       request_value, dst_payload);
            // dst_req is registered by the DUT after a destination edge. The
            // monitor observes that pulse on the following destination edge.
            @(posedge dst_clk);
            #1;
            if (dst_request_count != requests_before + 1)
                $fatal(1, "missing or duplicate destination request");

            // Delay the destination service, then stretch acknowledgement.
            // The response is stable before the first acknowledged edge.
            for (index = 0; index < ack_delay_dst_cycles; index = index + 1)
                @(posedge dst_clk);
            @(negedge dst_clk);
            dst_response = response_value;
            dst_ack = 1'b1;
            fork
                begin : drive_stretched_ack
                    integer ack_index;
                    for (ack_index = 0; ack_index < ack_high_dst_cycles;
                         ack_index = ack_index + 1)
                        @(posedge dst_clk);
                    @(negedge dst_clk);
                    dst_ack = 1'b0;
                end
                begin : receive_source_response
                    wait (src_ack === 1'b1);
                    if (src_response !== response_value)
                        $fatal(1,
                               "source response mismatch: expected %03h got %03h",
                               response_value, src_response);
                    // src_ack is registered after an edge and accounted on
                    // the following source edge.
                    @(posedge src_clk);
                    #1;
                    if (src_ack_count != acks_before + 1)
                        $fatal(1, "missing or duplicate source acknowledgement");
                end
            join

            // For held requests, deliberately leave the level asserted after
            // src_ack. It must remain the same transaction until it drops.
            if (request_high_src_cycles != 1) begin
                for (index = 0; index < held_drop_delay_src_cycles;
                     index = index + 1)
                    @(posedge src_clk);
                @(negedge src_clk);
                src_req = 1'b0;
            end

            // Allow both synchronizers enough time to expose duplicates.
            repeat (settle_cycles) @(posedge dst_clk);
            repeat (settle_cycles) @(posedge src_clk);
            if (dst_request_count != requests_before + 1)
                $fatal(1, "request was reissued after completion");
            if (src_ack_count != acks_before + 1)
                $fatal(1, "response was acknowledged more than once");
        end
    endtask

    initial begin : timeout_guard
        #20000;
        $fatal(1, "timeout waiting for CDC regression to complete");
    end

    initial begin
        // Assert asynchronous reset across several edges in both domains.
        repeat (4) @(posedge src_clk);
        #2 reset = 1'b0;

        // A one-source-clock request pulse, delayed destination service.
        run_transaction(16'h1234, 16'hdead, 12'ha51, 1, 4, 1, 0, 5);

        // Held-until-ack request with a three-cycle stretched dst_ack. The
        // source remains asserted for three clocks after seeing its ack.
        run_transaction(16'h5678, 16'hbeef, 12'h29c, 3, 2, 3, 3, 5);

        // Back-to-back protocol transactions: only the mandatory low source
        // edge needed to re-arm separates these launches.
        run_transaction(16'h9abc, 16'h0000, 12'h135, 1, 0, 1, 0, 0);
        run_transaction(16'hdef0, 16'hffff, 12'heca, 1, 0, 1, 0, 5);

        if (dst_request_count != 4)
            $fatal(1, "expected four destination requests, got %0d",
                   dst_request_count);
        if (src_ack_count != 4)
            $fatal(1, "expected four source acknowledgements, got %0d",
                   src_ack_count);

        $display("PASS tb_sdram_cdc: pulse/held/back-to-back requests, bundled payloads, and delayed/stretched responses");
        $finish;
    end
endmodule
