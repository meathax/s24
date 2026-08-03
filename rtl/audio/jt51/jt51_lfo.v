/*  This file is part of JT51.

    JT51 is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    JT51 is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with JT51.  If not, see <http://www.gnu.org/licenses/>.

    Author: Jose Tejada Gomez. Twitter: @topapate
    Version: 1.0
    Date: 27-10-2016
    */

module jt51_lfo(
    input               rst,
    input               clk,
    input               cen,
    input       [4:0]   cycles,

    // configuration
    input       [7:0]   lfo_freq,
    input       [6:0]   lfo_amd,
    input       [6:0]   lfo_pmd,
    input       [1:0]   lfo_w,
    input               lfo_up,
    input               noise,

    // test
    input       [7:0]   test,
    output  reg         lfo_clk,

    // data
    output  reg [7:0]   am,
    output  reg [7:0]   pm
);

localparam [1:0] SAWTOOTH = 2'd0,
                 SQUARE   = 2'd1,
                 TRIANG   = 2'd2,
                 NOISE    = 2'd3;

function automatic [14:0] lfo_lut_value(input [3:0] index);
    case (index)
        4'd0: lfo_lut_value = 15'h0000;
        4'd1: lfo_lut_value = 15'h4000;
        4'd2: lfo_lut_value = 15'h6000;
        4'd3: lfo_lut_value = 15'h7000;
        4'd4: lfo_lut_value = 15'h7800;
        4'd5: lfo_lut_value = 15'h7c00;
        4'd6: lfo_lut_value = 15'h7e00;
        4'd7: lfo_lut_value = 15'h7f00;
        4'd8: lfo_lut_value = 15'h7f80;
        4'd9: lfo_lut_value = 15'h7fc0;
        4'd10: lfo_lut_value = 15'h7fe0;
        4'd11: lfo_lut_value = 15'h7ff0;
        4'd12: lfo_lut_value = 15'h7ff8;
        4'd13: lfo_lut_value = 15'h7ffc;
        4'd14: lfo_lut_value = 15'h7ffe;
        default: lfo_lut_value = 15'h7fff;
    endcase
endfunction

// counters
reg  [ 3:0] cnt1, cnt3, bitcnt;
reg  [14:0] cnt2;
reg  [15:0] next_cnt2;
reg  [ 1:0] cnt1_ov, cnt2_ov;

// LFO state (value)
reg  [15:0] val,    // counts next integrator step
            out2;   // integrator for PM/AM
reg  [ 6:0] out1;
wire        pm_sign;
reg         trig_sign, saw_sign;

reg         bitcnt_rst, cnt2_load, cnt3_step;
wire        lfo_clk_next;
reg         lfo_clk_latch;

wire cyc_5 = cycles[3:0]==4'h5;
wire cyc_6 = cycles[3:0]==4'h6;
wire cyc_c = cycles[3:0]==4'hc; // 12
wire cyc_d = cycles[3:0]==4'hd; // 13
wire cyc_e = cycles[3:0]==4'he; // 14
wire cyc_f = cycles[3:0]==4'hf; // 15

reg  cnt3_clk;
wire ampm_sel =  bitcnt[3];
wire bit7     = &bitcnt[2:0];

reg lfo_up_latch;

assign pm_sign = lfo_w==TRIANG ? trig_sign : saw_sign;
assign lfo_clk_next = test[2] | next_cnt2[15] | cnt3_step;

always @(*) begin
    if( cnt2_load ) begin
        next_cnt2 = {1'b0, lfo_lut_value(lfo_freq[7:4]) };
    end else begin
        next_cnt2 = {1'd0,cnt2 } + {15'd0,cnt1_ov[1]|test[3]};
    end
end

always @(posedge clk) begin
    if( lfo_up )
        lfo_up_latch <= 1;
    else if( cen )
        lfo_up_latch <= 0;
end

always @(posedge clk, posedge rst) begin
    if( rst ) begin
        cnt1      <= 4'd0;
        cnt2      <= 15'd0;
        cnt3      <= 4'd0;
        cnt1_ov   <= 2'd0;
        cnt3_step <= 0;
        bitcnt    <= 4'h8;
    end else if( cen ) begin
        // counter 1
        if( cyc_c )
            { cnt1_ov[0], cnt1 } <= { 1'b0, cnt1 } + 1'd1;
        else
            cnt1_ov[0] <= 0;
        cnt1_ov[1] <= cnt1_ov[0];
        bitcnt_rst <= cnt1==4'd2;
        if( bitcnt_rst && !cyc_c )
            bitcnt <= 4'd0;
        else if( cyc_e )
            bitcnt <= bitcnt + 1'd1;
        // counter 2
        cnt2_load <= lfo_up_latch | next_cnt2[15];
        cnt2 <= next_cnt2[14:0];
        if( cyc_e ) begin
            cnt2_ov[0]    <= next_cnt2[15];
            lfo_clk_latch <= lfo_clk_next;
        end
        if( cyc_5 ) cnt2_ov[1] <= cnt2_ov[0];
        // counter 3
        cnt3_step <= 0;
        if( cnt2_ov[1] & cyc_d ) begin
            cnt3_clk <= 1;
            // frequency LSB control
            if( !cnt3[0] ) cnt3_step <= lfo_freq[3];
            else if( !cnt3[1] ) cnt3_step <= lfo_freq[2];
            else if( !cnt3[2] ) cnt3_step <= lfo_freq[1];
            else if( !cnt3[3] ) cnt3_step <= lfo_freq[0];
        end else begin
            cnt3_clk <= 0;
        end
        if( cnt3_clk )
            cnt3 <= cnt3 + 1'd1;
        // LFO clock
        lfo_clk <= lfo_clk_next;
    end
end

// LFO value
reg  [1:0] val_sum;
reg        val_c, wcarry, val0_next;
reg        w1, w2, w3, w4, w5, w6, w7, w8;

reg  [6:0] dmux;
reg        integ_c, out1bit;
reg  [1:0] out2sum;
wire [7:0] out2b;
reg  [2:0] bitsel;

assign out2b = out2[15:8];

always @(*) begin
    w1        = !lfo_clk || lfo_w==NOISE || !cyc_f;
    w4        =  lfo_clk_latch && lfo_w==NOISE;
    w3        = !w4 && val[15] && !test[1];
    w2        = !w1 && lfo_w==TRIANG;
    wcarry    = !w1 || ( !cyc_f && lfo_w!=NOISE && val_c);
    val_sum   = {1'b0, w2} + {1'b0, w3} + {1'b0, wcarry};
    val0_next = val_sum[0] || (lfo_w==NOISE && lfo_clk_latch && noise);
    // LFO compound output, AM/PM base value one after the other
    w5        = ampm_sel ? saw_sign : (!trig_sign || lfo_w!=TRIANG);
    w6        = w5 ^ w3;
    w7        = cycles[3:0]<4'd7 || cycles[3:0]==4'd15;
    w8        = lfo_w == SQUARE ? (ampm_sel?cyc_6 : !saw_sign) : w6;
    w8        = ~(w8 & w7);

    // Integrator
    dmux      = (ampm_sel ? lfo_pmd : lfo_amd) &~out1;
    bitsel    = ~(bitcnt[2:0]+3'd1);
    out1bit   = dmux[ bitsel ] & ~bit7;
    out2sum   = {1'b0, out1bit} + {1'b0, out2[0] && bitcnt[2:0]!=0} + {1'b0, integ_c & ~cyc_f };
end

always @(posedge clk, posedge rst) begin
    if( rst ) begin
        val       <= 16'd0;
        val_c     <= 0;
        trig_sign <= 0;
        saw_sign  <= 0;
        out1      <= ~7'd0;
        out2      <= 16'd0;
        integ_c   <= 0;
    end else if( cen ) begin
        val   <= {val[14:0], val0_next };
        val_c <= val_sum[1];
        if( cyc_f ) begin
            trig_sign <= val[7];
            saw_sign  <= val[8];
        end
        // current step
        out1 <= {out1[5:0], w8};
        // integrator
        integ_c <= out2sum[1];
        out2    <= { out2sum[0], out2[15:1] };
        // final output
        if( bit7 & cyc_f ) begin
            if( ampm_sel )
                pm <= lfo_pmd==7'd0 ? 8'd0 : { out2b[7]^pm_sign, out2b[6:0]};
            else
                am <= out2b;
        end
    end
end

endmodule
