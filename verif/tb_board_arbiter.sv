`timescale 1ns/1ps

import s24_pkg::*;

// Deterministic long-run contract for the shared 315-5295-facing arbiter.
// This bench intentionally exercises only the board transaction boundary, so
// it can run without ROM/media and remains useful while the SDRAM adapter or
// game models evolve.
module tb_board_arbiter;
    logic clk = 1'b0;
    logic reset = 1'b1;
    board_transaction_t a_transaction, b_transaction, transaction;
    logic a_pending = 1'b0, b_pending = 1'b0;
    logic a_grant, b_grant, transaction_valid;
    logic completion = 1'b0;
    logic a_complete, b_complete;
    integer grants_a = 0;
    integer grants_b = 0;
    integer completes_a = 0;
    integer completes_b = 0;
    logic holding = 1'b0;
    board_transaction_t held_transaction;

    always #5 clk = ~clk;

    s24_board_arbiter dut(
        .clk(clk),.reset(reset),
        .a_transaction(a_transaction),.b_transaction(b_transaction),
        .a_pending(a_pending),.b_pending(b_pending),
        .a_grant(a_grant),.b_grant(b_grant),
        .transaction(transaction),.transaction_valid(transaction_valid),
        .completion(completion),.a_complete(a_complete),.b_complete(b_complete));

    task automatic fill_transaction(
        output board_transaction_t value,
        input logic requester,
        input logic [23:0] address,
        input logic [15:0] data
    );
        begin
            value = '0;
            value.valid = 1'b1;
            value.requester = requester;
            value.address = address;
            value.byte_enable = 2'b11;
            value.read_nwrite = 1'b0;
            value.function_code = 3'b001;
            value.write_data = data;
            value.phase = BUS_PHASE_CAPTURE;
        end
    endtask

    always @(posedge clk) begin
        #1;
        if (a_grant && b_grant)
            $fatal(1, "both CPUs granted in one board cycle");
        if (a_complete && b_complete)
            $fatal(1, "both CPUs completed in one board cycle");
        if (a_grant) grants_a = grants_a + 1;
        if (b_grant) grants_b = grants_b + 1;
        if (a_complete) completes_a = completes_a + 1;
        if (b_complete) completes_b = completes_b + 1;

        if (transaction_valid) begin
            if (!holding) begin
                held_transaction = transaction;
                holding = 1'b1;
            end else if (transaction.address != held_transaction.address ||
                         transaction.write_data != held_transaction.write_data ||
                         transaction.requester != held_transaction.requester ||
                         transaction.byte_enable != held_transaction.byte_enable ||
                         transaction.function_code != held_transaction.function_code) begin
                $fatal(1, "active transaction changed before completion");
            end
        end else begin
            holding = 1'b0;
        end
    end

    integer cycle;
    initial begin
        fill_transaction(a_transaction,1'b0,24'h00a000,16'h1000);
        fill_transaction(b_transaction,1'b1,24'h00a002,16'h2000);
        repeat (3) @(posedge clk);
        @(negedge clk);
        reset = 1'b0;

        // One million deterministic source cycles cover repeated ties,
        // isolated requests, wait-state holds, and completion ordering.
        for (cycle = 0; cycle < 1_000_000; cycle = cycle + 1) begin
            @(negedge clk);
            completion = 1'b0;
            if (a_grant) a_pending = 1'b0;
            if (b_grant) b_pending = 1'b0;
            if (!transaction_valid) begin
                if (!a_pending && (cycle % 5 == 0)) begin
                    a_transaction.address = 24'h100000 + cycle[23:0];
                    a_transaction.write_data = cycle[15:0];
                    a_pending = 1'b1;
                end
                if (!b_pending && (cycle % 7 == 0)) begin
                    b_transaction.address = 24'h200000 + cycle[23:0];
                    b_transaction.write_data = ~cycle[15:0];
                    b_pending = 1'b1;
                end
            end else if (cycle % 3 == 0) begin
                completion = 1'b1;
            end
        end

        completion = 1'b1;
        repeat (4) @(posedge clk);
        if (grants_a == 0 || grants_b == 0 ||
            completes_a == 0 || completes_b == 0)
            $fatal(1, "arbiter did not exercise both requesters: grants=%0d/%0d completes=%0d/%0d",
                   grants_a,grants_b,completes_a,completes_b);
        $display("PASS board arbiter: 1,000,000 deterministic cycles grants=%0d/%0d completes=%0d/%0d",
                 grants_a,grants_b,completes_a,completes_b);
        $finish;
    end
endmodule
