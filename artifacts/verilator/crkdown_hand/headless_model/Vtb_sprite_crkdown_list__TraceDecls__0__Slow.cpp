// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations

#include "verilated_fst_c.h"


void Vtb_sprite_crkdown_list___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"P_RESET", "P_PRIME_SETUP", "P_PRIME_PULSE", 
                                "P_PRIME_CLEAR", "P_LIST_WAIT", 
                                "P_LINE_SETUP", "P_LINE_PULSE", 
                                "P_LINE_CLEAR", "P_LINE_WAIT", 
                                "P_CHECK"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001"};
        tracep->declDTypeEnum(1, "tb_sprite_crkdown_list.phase_t", 10, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"S_IDLE", "S_CLEAR", "S_LIST_REQ", "S_LIST_WAIT", 
                                "S_SCAN_PREFETCH", 
                                "S_SCAN", "S_SCAN_SECOND", 
                                "S_SCAN_QUAD_DRAIN", 
                                "S_RENDER_PREFETCH", 
                                "S_RENDER_REQ", "S_RENDER_WAIT", 
                                "S_RENDER_SETUP", "S_YDIV", 
                                "S_YMAP", "S_PALETTE_WAIT", 
                                "S_X_SOURCE", "S_DATA_WAIT", 
                                "S_X_EMIT", "S_X_EMIT4", 
                                "S_NEXT_SPRITE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111", 
                                "10000", "10001", "10010", 
                                "10011"};
        tracep->declDTypeEnum(2, "s24_sprite.state_t", 20, 5, __VenumItemNames, __VenumItemValues);
    }
}

void Vtb_sprite_crkdown_list___024root__trace_decl_types(VerilatedFst* tracep) {
    Vtb_sprite_crkdown_list___024root__traceDeclTypesSub0(tracep);
}
