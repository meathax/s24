// Transactional bundled-data clock-domain crossing for one SDRAM client.
//
// The source owns at most one transaction at a time.  Its request payload is
// held until the destination completes the transaction.  A toggle, passed
// through two synchronizer registers, announces the stable payload to the
// destination.  The response uses the same scheme in the opposite direction.
//
// src_req may be either a pulse or a level held until src_ack.  src_ack is a
// one-source-clock pulse.  dst_req is a one-destination-clock pulse; dst_ack
// may be a pulse or a stretched level.
module s24_sdram_cdc #(
    parameter integer REQ_WIDTH = 1,
    parameter integer RSP_WIDTH = 1
) (
    input  logic                 reset,

    input  logic                 src_clk,
    input  logic                 src_req,
    input  logic [REQ_WIDTH-1:0] src_payload,
    output logic                 src_ack,
    output logic [RSP_WIDTH-1:0] src_response,

    input  logic                 dst_clk,
    output logic                 dst_req,
    output logic [REQ_WIDTH-1:0] dst_payload,
    input  logic                 dst_ack,
    input  logic [RSP_WIDTH-1:0] dst_response
);
    logic                 req_toggle;
    logic [REQ_WIDTH-1:0] req_hold;
    logic                 src_busy;
    logic                 src_armed;

    (* altera_attribute = {"-name SYNCHRONIZER_IDENTIFICATION FORCED_IF_ASYNCHRONOUS"} *)
    logic rsp_sync_m;
    (* altera_attribute = {"-name SYNCHRONIZER_IDENTIFICATION FORCED_IF_ASYNCHRONOUS"} *)
    logic rsp_sync_s;
    logic                 rsp_seen;
    logic [RSP_WIDTH-1:0] rsp_hold;

    (* altera_attribute = {"-name SYNCHRONIZER_IDENTIFICATION FORCED_IF_ASYNCHRONOUS"} *)
    logic req_sync_m;
    (* altera_attribute = {"-name SYNCHRONIZER_IDENTIFICATION FORCED_IF_ASYNCHRONOUS"} *)
    logic req_sync_s;
    logic                 req_seen;
    logic                 dst_busy;
    logic                 rsp_toggle;

    // Source-domain request launch and response receive.
    always_ff @(posedge src_clk or posedge reset) begin
        if (reset) begin
            req_toggle  <= 1'b0;
            req_hold    <= '0;
            src_busy    <= 1'b0;
            src_armed   <= 1'b1;
            rsp_sync_m  <= 1'b0;
            rsp_sync_s  <= 1'b0;
            rsp_seen    <= 1'b0;
            src_ack     <= 1'b0;
            src_response<= '0;
        end else begin
            rsp_sync_m <= rsp_toggle;
            rsp_sync_s <= rsp_sync_m;
            src_ack    <= 1'b0;

            // A held request is one transaction.  Do not re-arm until the
            // requester has observed src_ack and dropped the level.
            if (!src_req)
                src_armed <= 1'b1;

            if (!src_busy && src_req && src_armed) begin
                req_hold   <= src_payload;
                req_toggle <= ~req_toggle;
                src_busy   <= 1'b1;
                src_armed  <= 1'b0;
            end

            if (src_busy && rsp_sync_s != rsp_seen) begin
                // rsp_hold was made stable before rsp_toggle traversed both
                // synchronizer stages.
                src_response <= rsp_hold;
                rsp_seen     <= rsp_sync_s;
                src_ack      <= 1'b1;
                src_busy     <= 1'b0;
            end
        end
    end

    // Destination-domain request receive and response launch.
    always_ff @(posedge dst_clk or posedge reset) begin
        if (reset) begin
            req_sync_m <= 1'b0;
            req_sync_s <= 1'b0;
            req_seen   <= 1'b0;
            dst_req    <= 1'b0;
            dst_payload<= '0;
            dst_busy   <= 1'b0;
            rsp_hold   <= '0;
            rsp_toggle <= 1'b0;
        end else begin
            req_sync_m <= req_toggle;
            req_sync_s <= req_sync_m;
            dst_req    <= 1'b0;

            if (!dst_busy && req_sync_s != req_seen) begin
                // req_hold has been stable throughout toggle synchronization.
                dst_payload <= req_hold;
                req_seen    <= req_sync_s;
                dst_req     <= 1'b1;
                dst_busy    <= 1'b1;
            end

            if (dst_busy && dst_ack) begin
                rsp_hold   <= dst_response;
                rsp_toggle <= ~rsp_toggle;
                dst_busy   <= 1'b0;
            end
        end
    end
endmodule
