package s24_pkg;

    localparam logic [26:0] SDR_BOOT_BASE    = 27'h000_0000;
    localparam logic [26:0] SDR_ROMBOARD_BASE= 27'h010_0000;
    localparam logic [26:0] SDR_FLOPPY_BASE  = 27'h080_0000;
    localparam logic [26:0] SDR_FDKEY_BASE   = 27'h0a0_0000;
    localparam logic [26:0] SDR_WORKA_BASE   = 27'h100_0000;
    localparam logic [26:0] SDR_WORKB_BASE   = 27'h104_0000;
    localparam logic [26:0] SDR_TILE_BASE    = 27'h108_0000;
    localparam logic [26:0] SDR_CHAR_BASE    = 27'h110_0000;
    localparam logic [26:0] SDR_PALETTE_BASE = 27'h118_0000;
    localparam logic [26:0] SDR_SPRITE_BASE  = 27'h400_0000;

    typedef struct packed {
        logic [7:0] input_profile;
        logic [7:0] track_bytes_hi;
        logic [7:0] track_bytes_lo;
        logic [3:0] reserved1;
        logic [3:0] magic_table;
        logic       mahjong;
        logic       hotrod_io;
        logic       golf_io;
        logic       has_adc;
        logic       has_upd4701;
        logic       has_fd1094;
        logic       has_romboard;
        logic       has_floppy;
        // Bytes 5..7 are zero in the legacy descriptor.  Version one gives
        // the loader named board-domain profile fields without changing the
        // descriptor size or invalidating existing MRAs.
        logic [7:0] profile_version;
        logic [3:0] motherboard_revision;
        logic [1:0] sprite_memory_population;
        logic [1:0] fdc_timing_profile;
        logic [1:0] romboard_profile;
        logic [1:0] analogue_profile;
        logic [1:0] video_profile;
        logic [1:0] cpu_profile;
    } board_desc_t;

    // The 315-5295-facing transaction contract.  The physical SDRAM adapter
    // remains below this boundary; these fields describe the board-visible
    // cycle that arbitration and device models must observe.
    typedef enum logic [1:0] {
        BUS_PHASE_CAPTURE = 2'd0,
        BUS_PHASE_GRANTED = 2'd1,
        BUS_PHASE_WAIT    = 2'd2,
        BUS_PHASE_COMPLETE= 2'd3
    } bus_phase_t;

    typedef struct packed {
        logic        valid;
        logic        requester;     // 0 = CPU-A, 1 = CPU-B
        logic [23:0] address;
        logic [1:0]  byte_enable;   // {UDS, LDS}, active lanes are one
        logic        read_nwrite;
        logic [2:0]  function_code;
        logic [15:0] write_data;
        bus_phase_t  phase;
        logic        grant;
        logic        wait_state;
        logic        complete;
    } board_transaction_t;

    typedef enum logic [2:0] {
        AUDIO_EVENT_NONE  = 3'd0,
        AUDIO_EVENT_YM_WRITE = 3'd1,
        AUDIO_EVENT_YM_IRQ   = 3'd2,
        AUDIO_EVENT_YM_SAMPLE= 3'd3,
        AUDIO_EVENT_DAC      = 3'd4
    } audio_event_type_t;

    typedef struct packed {
        logic [2:0]  event_type;
        logic [1:0]  channel;
        logic [7:0]  address;
        logic [15:0] value;
        logic [15:0] left;
        logic [15:0] right;
        logic        valid;
    } audio_event_t;

    localparam logic [7:0] INPUT_GENERIC = 8'd0;
    localparam logic [7:0] INPUT_GGROUND = 8'd1;
    // Additional MAME System 24 cabinet/input families.  Keep these as
    // behavioural profiles rather than set-name checks so clones and future
    // dumps select the same physical wiring.
    localparam logic [7:0] INPUT_QUIZ4   = 8'd2;
    localparam logic [7:0] INPUT_QROUKA  = 8'd3;
    localparam logic [7:0] INPUT_MAHJONG = 8'd4;

    typedef enum logic [3:0] {
        MAGIC_NONE      = 4'd0,
        MAGIC_DCCLUB    = 4'd2,
        MAGIC_QROUKA    = 4'd3,
        MAGIC_QUIZMEKU  = 4'd4,
        MAGIC_MAHMAJN   = 4'd5,
        MAGIC_MAHMAJN2  = 4'd6,
        MAGIC_BNZABROS  = 4'd7
    } magic_sel_t;

    localparam int IRQ_YM2151 = 1;
    localparam int IRQ_TIMER  = 2;
    localparam int IRQ_VBLANK = 3;
    localparam int IRQ_SPRITE = 4;
    localparam int IRQ_FRC    = 5;

    function automatic [15:0] merge16(
        input [15:0] old_data,
        input [15:0] new_data,
        input [1:0]  byte_en
    );
        merge16 = {
            byte_en[1] ? new_data[15:8] : old_data[15:8],
            byte_en[0] ? new_data[7:0]  : old_data[7:0]
        };
    endfunction

    function automatic logic [26:1] word_address(input logic [26:0] byte_address);
        word_address = byte_address[26:1];
    endfunction

endpackage
