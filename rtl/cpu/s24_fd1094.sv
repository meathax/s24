module s24_fd1094 #(
    parameter MASK_FILE="rtl/cpu/fd1094_masked.mem"
) (
    input  logic        clk,
    input  logic        reset,
    input  logic        key_wr,
    input  logic [11:0] key_word_addr,
    input  logic [15:0] key_wdata,
    input  logic        start,
    input  logic [23:1] word_address,
    input  logic [15:0] encrypted,
    input  logic        irq_enter,
    input  logic        instruction_start,
    input  logic [15:0] instruction_opcode,
    input  logic [23:1] instruction_address,
    output logic        busy,
    output logic        done,
    output logic [15:0] plaintext,
    output logic [7:0]  current_state
);
    // The HPS writes both bytes of a key word in one cycle. Banking even and
    // odd bytes gives each M10K one write port and one decrypt read port.
    (* ramstyle="M10K, no_rw_check" *) logic [7:0] key_ram_even [0:4095];
    (* ramstyle="M10K, no_rw_check" *) logic [7:0] key_ram_odd [0:4095];
    (* romstyle="M10K" *) logic [7:0] mask_rom [0:8191];
    initial $readmemh(MASK_FILE,mask_rom);

    logic [7:0] irq_key=0,global_key1=0,global_key2=0,global_key3=0;
    logic [7:0] normal_state,decrypt_state,mainkey;
    logic irq_mode;
    logic [12:0] key_address,dec_mask_address,mask_address_l;
    logic [2:0] dec_mask_bit,mask_bit_l;
    logic [15:0] encrypted_l,preliminary,dec_preliminary;
    logic [23:1] address_l;
    logic vector_l;
    logic [7:0] mask_byte;
    logic [15:0] result_next;
    logic [1:0] cmp_phase;
    logic [23:1] cmp_expected;
    logic [15:0] cmp_high;
    logic [3:0] fetch_history_valid;
    logic [23:1] fetch_history_addr [0:3];
    logic [15:0] fetch_history_data [0:3];
    logic [15:0] cmp_history_high,cmp_history_low;

    typedef enum logic [2:0] {F_IDLE,F_KEY,F_DECRYPT,F_MASK,F_DONE} fstate_t;
    fstate_t fstate;

    function automatic logic history_has(input logic [23:1] sought);
        history_has = ((fstate==F_DONE) && address_l==sought) ||
                      (fetch_history_valid[0] && fetch_history_addr[0]==sought) ||
                      (fetch_history_valid[1] && fetch_history_addr[1]==sought) ||
                      (fetch_history_valid[2] && fetch_history_addr[2]==sought) ||
                      (fetch_history_valid[3] && fetch_history_addr[3]==sought);
    endfunction

    function automatic logic [15:0] history_word(input logic [23:1] sought);
        if((fstate==F_DONE) && address_l==sought) history_word=result_next;
        else if(fetch_history_valid[0] && fetch_history_addr[0]==sought)
            history_word=fetch_history_data[0];
        else if(fetch_history_valid[1] && fetch_history_addr[1]==sought)
            history_word=fetch_history_data[1];
        else if(fetch_history_valid[2] && fetch_history_addr[2]==sought)
            history_word=fetch_history_data[2];
        else history_word=fetch_history_data[3];
    endfunction

    assign busy=(fstate!=F_IDLE);
    assign current_state=irq_mode?irq_key:normal_state;
    assign result_next=mask_byte[mask_bit_l]?16'hffff:preliminary;
    assign cmp_history_high=history_word(instruction_address+23'd1);
    assign cmp_history_low=history_word(instruction_address+23'd2);

    s24_fd1094_decrypt decryptor(
        .word_address(address_l),.encrypted(encrypted_l),.mainkey(mainkey),
        .global_key1(global_key1),.global_key2(global_key2),
        .global_key3(global_key3),.state(decrypt_state),.vector_fetch(vector_l),
        .value_unmasked(dec_preliminary),.mask_address(dec_mask_address),
        .mask_bit(dec_mask_bit));

    always_ff @(posedge clk) begin
        done<=0;
        if(reset) begin
            fstate<=F_IDLE;done<=0;plaintext<=0;normal_state<=0;irq_mode<=0;
            key_address<=0;mainkey<=0;decrypt_state<=0;encrypted_l<=0;
            address_l<=0;vector_l<=0;mask_address_l<=0;mask_bit_l<=0;
            mask_byte<=0;preliminary<=0;cmp_phase<=0;cmp_expected<=0;
            cmp_high<=0;
            fetch_history_valid<=0;
            fetch_history_addr[0]<=0;fetch_history_addr[1]<=0;
            fetch_history_addr[2]<=0;fetch_history_addr[3]<=0;
            fetch_history_data[0]<=0;fetch_history_data[1]<=0;
            fetch_history_data[2]<=0;fetch_history_data[3]<=0;
        end else begin
            if(irq_enter) irq_mode<=1'b1;
            case(fstate)
                F_IDLE: if(start) begin
                    address_l<=word_address;
                    encrypted_l<=encrypted;
                    vector_l<=(word_address<=3);
                    decrypt_state<=current_state;
                    // word_address is a packed [23:1] bus address, so
                    // [13:1] is the numeric low 13-bit MAME word address.
                    // This matches decrypt_one()'s address & 0x1fff and its
                    // (address & 0x0ffc) == 0 special-key window.
                    if((word_address[12:3]==0)&&(word_address>=4))
                        key_address<=word_address[13:1]|13'h1000;
                    else key_address<=word_address[13:1];
                    fstate<=F_KEY;
                end
                F_KEY: begin
                    mainkey <= key_address[0]
                               ? key_ram_odd[key_address[12:1]]
                               : key_ram_even[key_address[12:1]];
                    fstate<=F_DECRYPT;
                end
                F_DECRYPT: begin
                    preliminary<=dec_preliminary;
                    mask_address_l<=dec_mask_address;
                    mask_bit_l<=dec_mask_bit;
                    fstate<=F_MASK;
                end
                F_MASK: begin mask_byte<=mask_rom[mask_address_l];fstate<=F_DONE;end
                F_DONE: begin
                    plaintext<=result_next;
                    done<=1'b1;
                    fstate<=F_IDLE;
                    fetch_history_valid<={fetch_history_valid[2:0],1'b1};
                    fetch_history_addr[3]<=fetch_history_addr[2];
                    fetch_history_addr[2]<=fetch_history_addr[1];
                    fetch_history_addr[1]<=fetch_history_addr[0];
                    fetch_history_addr[0]<=address_l;
                    fetch_history_data[3]<=fetch_history_data[2];
                    fetch_history_data[2]<=fetch_history_data[1];
                    fetch_history_data[1]<=fetch_history_data[0];
                    fetch_history_data[0]<=result_next;
                    if(cmp_phase==1 && address_l==cmp_expected) begin
                        cmp_high<=result_next;cmp_expected<=address_l+23'd1;cmp_phase<=2;
                    end else if(cmp_phase==2 && address_l==cmp_expected) begin
                        cmp_phase<=0;
                        if(result_next==16'hffff) begin
                            case(cmp_high[9:8])
                                2'b00: normal_state<=cmp_high[7:0];
                                2'b01: begin normal_state<=cmp_high[7:0];irq_mode<=0;end
                                2'b10: irq_mode<=1;
                                default: irq_mode<=0;
                            endcase
                        end
                    end else begin
                        cmp_phase<=0;
                    end
                end
                default: fstate<=F_IDLE;
            endcase
            // MAME changes FD1094 state when the 68000 executes these
            // instructions. Qualifying with fx68k's IR->IRD boundary avoids
            // treating a discarded prefetch as an executed RTE or CMPI.L.
            // The fetch history also covers fx68k prefetching one or both long
            // immediate words before the opcode reaches that boundary.
            if(instruction_start) begin
                cmp_phase<=0;
                if(instruction_opcode==16'h0c80) begin
                    if(history_has(instruction_address+23'd1)) begin
                        cmp_high<=cmp_history_high;
                        if(history_has(instruction_address+23'd2)) begin
                            if(cmp_history_low==16'hffff) begin
                                case(cmp_history_high[9:8])
                                    2'b00: normal_state<=cmp_history_high[7:0];
                                    2'b01: begin
                                        normal_state<=cmp_history_high[7:0];
                                        irq_mode<=0;
                                    end
                                    2'b10: irq_mode<=1;
                                    default: irq_mode<=0;
                                endcase
                            end
                        end else begin
                            cmp_phase<=2;
                            cmp_expected<=instruction_address+23'd2;
                        end
                    end else begin
                        cmp_phase<=1;
                        cmp_expected<=instruction_address+23'd1;
                    end
                end
                if(instruction_opcode==16'h4e73) irq_mode<=0;
            end
        end
        // Key download deliberately remains writable while the emulated CPU
        // is held in reset by ioctl_download.
        if(key_wr) begin
            key_ram_even[key_word_addr]<=key_wdata[7:0];
            key_ram_odd[key_word_addr]<=key_wdata[15:8];
            case({key_word_addr,1'b0})
                13'd0: begin irq_key<=key_wdata[7:0];global_key1<=key_wdata[15:8];end
                13'd2: begin global_key2<=key_wdata[7:0];global_key3<=key_wdata[15:8];end
                default: ;
            endcase
        end
    end
endmodule
