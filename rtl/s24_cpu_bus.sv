// Arbitration front-end for the two physical 68000 buses. Each CPU keeps its
// own AS cycle pending; transactions are serialized onto the shared board bus.
// Interrupt acknowledge cycles are autovectored with VPA and never appear here.
module s24_cpu_bus (
    input  logic        clk,
    input  logic        reset,

    input  logic        a_as_n,
    input  logic        a_rw_n,
    input  logic        a_uds_n,
    input  logic        a_lds_n,
    input  logic [2:0]  a_fc,
    input  logic [23:1] a_addr,
    input  logic [15:0] a_dout,
    output logic [15:0] a_din,
    output logic        a_dtack_n,

    input  logic        b_as_n,
    input  logic        b_rw_n,
    input  logic        b_uds_n,
    input  logic        b_lds_n,
    input  logic [2:0]  b_fc,
    input  logic [23:1] b_addr,
    input  logic [15:0] b_dout,
    output logic [15:0] b_din,
    output logic        b_dtack_n,

    output logic        bus_req,
    output logic        bus_cpu,
    output logic        bus_rnw,
    output logic [1:0]  bus_be,
    output logic [2:0]  bus_fc,
    output logic [23:0] bus_addr,
    output logic [15:0] bus_dout,
    input  logic [15:0] bus_din,
    input  logic        bus_ack
);
    logic a_seen, b_seen, a_pending, b_pending;
    logic a_ack, b_ack, active, selected, rr;
    logic a_rnw_p, b_rnw_p;
    logic [1:0] a_be_p, b_be_p;
    logic [2:0] a_fc_p, b_fc_p;
    logic [23:0] a_addr_p, b_addr_p;
    logic [15:0] a_dout_p, b_dout_p;

    assign a_dtack_n = ~a_ack;
    assign b_dtack_n = ~b_ack;
    assign bus_req = active;
    assign bus_cpu = selected;

    always_comb begin
        if (!selected) begin
            bus_rnw = a_rnw_p; bus_be = a_be_p; bus_fc = a_fc_p;
            bus_addr = a_addr_p; bus_dout = a_dout_p;
        end else begin
            bus_rnw = b_rnw_p; bus_be = b_be_p; bus_fc = b_fc_p;
            bus_addr = b_addr_p; bus_dout = b_dout_p;
        end
    end

    always_ff @(posedge clk) begin
        if (reset) begin
            a_seen <= 0; b_seen <= 0; a_pending <= 0; b_pending <= 0;
            a_ack <= 0; b_ack <= 0; active <= 0; selected <= 0; rr <= 0;
            a_din <= 16'hffff; b_din <= 16'hffff;
            a_rnw_p <= 0; b_rnw_p <= 0; a_be_p <= 0; b_be_p <= 0;
            a_fc_p <= 0; b_fc_p <= 0; a_addr_p <= 0; b_addr_p <= 0;
            a_dout_p <= 0; b_dout_p <= 0;
        end else begin
            if (a_as_n) begin a_seen <= 0; a_ack <= 0; end
            if (b_as_n) begin b_seen <= 0; b_ack <= 0; end

            // fx68k asserts AS before the data strobes settle.  Capture only
            // once at least one active-low byte strobe is valid; sampling on
            // AS alone turns every write into a zero-byte transaction.
            if (!a_as_n && (!a_uds_n || !a_lds_n) && !a_seen
                    && a_fc != 3'b111) begin
                a_seen <= 1'b1; a_pending <= 1'b1;
                a_rnw_p <= a_rw_n;
                a_be_p <= {~a_uds_n,~a_lds_n};
                a_fc_p <= a_fc;
                a_addr_p <= {a_addr,1'b0};
                a_dout_p <= a_dout;
            end
            if (!b_as_n && (!b_uds_n || !b_lds_n) && !b_seen
                    && b_fc != 3'b111) begin
                b_seen <= 1'b1; b_pending <= 1'b1;
                b_rnw_p <= b_rw_n;
                b_be_p <= {~b_uds_n,~b_lds_n};
                b_fc_p <= b_fc;
                b_addr_p <= {b_addr,1'b0};
                b_dout_p <= b_dout;
            end

            if (!active) begin
                if (a_pending && b_pending) begin
                    selected <= rr;
                    if (rr) b_pending <= 1'b0; else a_pending <= 1'b0;
                    rr <= ~rr;
                    active <= 1'b1;
                end else if (a_pending) begin
                    selected <= 1'b0; a_pending <= 1'b0; active <= 1'b1;
                end else if (b_pending) begin
                    selected <= 1'b1; b_pending <= 1'b0; active <= 1'b1;
                end
            end else if (bus_ack) begin
                active <= 1'b0;
                if (!selected) begin a_din <= bus_din; a_ack <= 1'b1; end
                else begin b_din <= bus_din; b_ack <= 1'b1; end
            end
        end
    end
endmodule
