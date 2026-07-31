// Sega 315-5296 behavior from MAME 315_5296.cpp.
module s24_io_5296 (
    input  logic        clk,
    input  logic        reset,
    input  logic        rd,
    input  logic        wr,
    input  logic [5:0]  addr,
    input  logic [7:0]  din,
    output logic [7:0]  dout,
    input  logic [63:0] port_in,
    output logic [63:0] port_out,
    output logic [7:0]  port_dir,
    output logic [2:0]  cnt
);
    logic [7:0] latch [0:7];
    logic [7:0] cnt_reg;
    integer i;

    always_comb begin
        case (addr)
            6'h00,6'h01,6'h02,6'h03,6'h04,6'h05,6'h06,6'h07:
                dout = port_dir[addr[2:0]] ? latch[addr[2:0]]
                                           : port_in[addr[2:0]*8 +: 8];
            6'h08: dout = 8'h53; // S
            6'h09: dout = 8'h45; // E
            6'h0a: dout = 8'h47; // G
            6'h0b: dout = 8'h41; // A
            6'h0c,6'h0e: dout = cnt_reg;
            6'h0d,6'h0f: dout = port_dir;
            default: dout = 8'hff;
        endcase
    end

    always_comb begin
        for (int p = 0; p < 8; p++)
            port_out[p*8 +: 8] = port_dir[p] ? latch[p] : 8'h00;
        cnt = cnt_reg[2:0];
    end

    always_ff @(posedge clk) begin
        if (reset) begin
            port_dir <= 8'h00;
            cnt_reg <= 8'h00;
            for (i = 0; i < 8; i = i + 1) latch[i] <= 8'h00;
        end else if (wr) begin
            case (addr)
                6'h00,6'h01,6'h02,6'h03,6'h04,6'h05,6'h06,6'h07:
                    latch[addr[2:0]] <= din;
                6'h0e: cnt_reg <= din;
                6'h0f: port_dir <= din;
                default: ;
            endcase
        end
    end
endmodule

