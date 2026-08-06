`timescale 1ns/1ps

module tb_fd1094;
    logic clk=0;
    always #10 clk=~clk;
    logic reset=1,key_wr=0,start=0,key_start=0,irq_enter=0,instruction_start=0;
    logic [11:0] key_word_addr=0;
    logic [15:0] key_wdata=0,encrypted=0,plaintext;
    logic [23:1] word_address=0;
    logic busy,done;
    logic [7:0] current_state;
    logic [15:0] instruction_opcode=0;
    logic [23:1] instruction_address=0;
    logic [23:1] state_test_address=23'h000200;
    logic [7:0]  state_used;
    logic        hit_record=0;
    logic [23:1] hit_address=0;
    logic [15:0] hit_data=0;

    s24_fd1094 #(.MASK_FILE("rtl/cpu/fd1094_masked.mem")) dut(
        .clk(clk),.reset(reset),.key_wr(key_wr),.key_word_addr(key_word_addr),
        .key_wdata(key_wdata),.start(start),.key_start(key_start),
        .word_address(word_address),
        .encrypted(encrypted),.irq_enter(irq_enter),.busy(busy),.done(done),
        .instruction_start(instruction_start),.instruction_opcode(instruction_opcode),
        .instruction_address(instruction_address),
        .plaintext(plaintext),.current_state(current_state),
        .state_used(state_used),
        .hit_record(hit_record),.hit_address(hit_address),.hit_data(hit_data));

    task automatic hit_record_pulse(input logic [23:1] addr,
                                     input logic [15:0] data);
        begin
            @(negedge clk); hit_address=addr; hit_data=data; hit_record=1;
            @(negedge clk); hit_record=0;
        end
    endtask

    task automatic load_word(input logic [11:0] address,input logic [15:0] data);
        begin
            @(negedge clk);key_word_addr=address;key_wdata=data;key_wr=1;
            @(negedge clk);key_wr=0;
        end
    endtask

    task automatic check_decrypt(
        input logic [22:0] address,
        input logic [15:0] cipher,
        input logic [15:0] expected
    );
        begin
            // key_start kicks off the key-RAM lookup (F_IDLE->F_KEY->
            // F_KEY_Q->F_ARMED, 2 cycles). Real callers (rtl/s24_core.sv)
            // raise it when the SDRAM read is issued and start only once
            // the SDRAM round trip returns the word many cycles later, so
            // start normally arrives after fstate has already settled in
            // F_ARMED and is caught directly there -- start_pending exists
            // only for the rare case start beats the 2-cycle key lookup.
            // Match that ordering: wait for F_ARMED before raising start,
            // instead of racing the two together and hitting the
            // start_pending path (a corner case, not the norm) by accident.
            @(negedge clk);word_address=address;encrypted=cipher;key_start=1;
            @(negedge clk);key_start=0;
            while(dut.fstate!==dut.F_ARMED) @(negedge clk);
            start=1;
            @(negedge clk);start=0;
            while(!done) @(negedge clk);
            if(plaintext!==expected)
                $fatal(1,"address=%h cipher=%h expected=%h got=%h state=%h",
                       address,cipher,expected,plaintext,current_state);
        end
    endtask

    // Present an already-prefetched CMPI.L immediate at fx68k's execution
    // boundary.  FD1094 state commands are recognized only for CMPI.L #x,D0
    // and only when the low immediate word is $ffff.
    task automatic execute_state_command(
        input logic [15:0] opcode,
        input logic [15:0] command,
        input logic [15:0] command_low
    );
        begin
            @(negedge clk);
            state_test_address=state_test_address+23'd3;
            instruction_address=state_test_address;
            instruction_opcode=opcode;
            dut.fetch_history_valid=4'b0011;
            dut.fetch_history_addr[0]=instruction_address+23'd1;
            dut.fetch_history_data[0]=command;
            dut.fetch_history_addr[1]=instruction_address+23'd2;
            dut.fetch_history_data[1]=command_low;
            // Changing the lookup address above and allowing a delta makes
            // legacy ModelSim reevaluate the function after these deposits.
            #1;
            instruction_start=1;
            @(negedge clk);instruction_start=0;
        end
    endtask

    initial begin
        // 317-0058-04C key bytes used by the independent MAME-derived oracle.
        // Download while reset is held, matching the MiSTer ioctl sequence.
        load_word(12'h000,16'hfc19); // key[1], key[0]
        load_word(12'h001,16'hfae4); // key[3], key[2]
        load_word(12'h003,16'he200); // key[7]
        load_word(12'h080,16'h0088); // key[0x100]
        @(negedge clk);reset=0;

        check_decrypt(23'h000000,16'h1234,16'hc2b4); // reset vector rules
        check_decrypt(23'h000100,16'habcd,16'h176f); // normal state 00

        @(negedge clk);irq_enter=1;
        @(negedge clk);irq_enter=0;
        check_decrypt(23'h000100,16'habcd,16'h4d14); // IRQ state key[0]=19

        // A fetched-but-discarded RTE must not leave IRQ mode. Only fx68k's
        // instruction boundary is allowed to perform MAME's RTE callback.
        instruction_opcode=16'h4e73;
        repeat(2) @(negedge clk);
        if(current_state!==8'h19) $fatal(1,"prefetched RTE changed FD1094 state");
        instruction_start=1;
        @(negedge clk);instruction_start=0;
        if(current_state!==8'h00) $fatal(1,"executed RTE did not leave IRQ mode");

        // MAME's four state commands.  In particular, 01xx selects state xx
        // while leaving IRQ mode; jts16_fd1094_ctrl currently forces state 0
        // for this case, so retain the MAME-compatible behavior here.
        execute_state_command(16'h0c80,16'h005a,16'hffff);
        if(current_state!==8'h5a) $fatal(1,"00xx did not select normal state");
        @(negedge clk);irq_enter=1;
        @(negedge clk);irq_enter=0;
        if(current_state!==8'h19) $fatal(1,"IRQ acknowledge did not select key[0]");
        execute_state_command(16'h0c80,16'h013c,16'hffff);
        if(current_state!==8'h3c)
            $fatal(1,"01xx did not select state and leave IRQ mode: current=%h normal=%h irq=%b",
                   current_state,dut.normal_state,dut.irq_mode);
        execute_state_command(16'h0c80,16'h0200,16'hffff);
        if(current_state!==8'h19) $fatal(1,"02xx did not enter IRQ mode");
        execute_state_command(16'h0c80,16'h0300,16'hffff);
        if(current_state!==8'h3c) $fatal(1,"03xx did not leave IRQ mode");

        // A non-$ffff low word is an ordinary comparison, and MAME's cmpild
        // callback accepts offset zero only (CMPI.L to D0).  jts16's broad
        // 0c80-0cbf opcode match is therefore intentionally not copied.
        execute_state_command(16'h0c80,16'h0066,16'hfffe);
        if(current_state!==8'h3c) $fatal(1,"ordinary CMPI.L changed FD1094 state");
        execute_state_command(16'h0c81,16'h0066,16'hffff);
        if(current_state!==8'h3c) $fatal(1,"CMPI.L to D1 changed FD1094 state");

        @(negedge clk);reset=1;
        @(negedge clk);reset=0;
        if(current_state!==8'h00)
            $fatal(1,"FD1094 reset did not select state 00");
        check_decrypt(23'h000007,16'h013a,16'hffff); // aggressive mask ROM

        // hit_record must replay F_DONE's bookkeeping identically for a word
        // the opcode cache served instead of the decrypt pipeline: the
        // cmp_phase 1->2->apply walk and the fetch_history push. Drive the
        // 00xx CMPI.L two-word sequence entirely through hit_record, with
        // cmp_phase seeded as execute_state_command's instruction_start path
        // would have left it after the opcode word, and confirm the FD1094
        // state selects exactly as a real hardware decrypt would.
        dut.cmp_phase=1; dut.cmp_expected=23'h000401;
        hit_record_pulse(23'h000401,16'h0077); // high word -> cmp_high, phase 2
        if(dut.cmp_phase!==2 || dut.cmp_high!==16'h0077)
            $fatal(1,"hit_record phase1->2 walk incorrect: phase=%0d cmp_high=%h",
                   dut.cmp_phase,dut.cmp_high);
        hit_record_pulse(23'h000402,16'hffff); // low word $ffff -> apply state
        if(current_state!==8'h77)
            $fatal(1,"hit_record phase-2 walk did not select state: current=%h",
                   current_state);
        if(!dut.fetch_history_valid[0] || dut.fetch_history_addr[0]!==23'h000402
           || dut.fetch_history_data[0]!==16'hffff)
            $fatal(1,"hit_record did not push fetch_history");
        // A non-$ffff low word must not select a state, same as F_DONE.
        dut.cmp_phase=1; dut.cmp_expected=23'h000501;
        hit_record_pulse(23'h000501,16'h0099);
        hit_record_pulse(23'h000502,16'h1234);
        if(current_state!==8'h77)
            $fatal(1,"hit_record applied a state from a non-$ffff low word");

        $display("PASS FD1094 MAME vectors and mask ROM");
        $finish;
    end
endmodule
