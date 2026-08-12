// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_sprite_crkdown_list__Syms.h"


void Vtb_sprite_crkdown_list___024root__trace_chg_0_sub_0(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtb_sprite_crkdown_list___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_chg_0\n"); );
    // Body
    Vtb_sprite_crkdown_list___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_sprite_crkdown_list___024root*>(voidSelf);
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_sprite_crkdown_list___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_sprite_crkdown_list___024root__trace_chg_dtype____0(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 8>& __VdtypeVar);
void Vtb_sprite_crkdown_list___024root__trace_chg_dtype____1(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*8:0*/, 8>& __VdtypeVar);
void Vtb_sprite_crkdown_list___024root__trace_chg_dtype____2(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<4>/*127:0*/, 8>& __VdtypeVar);
void Vtb_sprite_crkdown_list___024root__trace_chg_dtype____3(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*13:0*/, 8>& __VdtypeVar);
void Vtb_sprite_crkdown_list___024root__trace_chg_dtype____4(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<4>/*127:0*/, 3>& __VdtypeVar);
void Vtb_sprite_crkdown_list___024root__trace_chg_dtype____5(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<3>/*80:0*/, 3>& __VdtypeVar);
void Vtb_sprite_crkdown_list___024root__trace_chg_dtype____6(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 8>& __VdtypeVar);

void Vtb_sprite_crkdown_list___024root__trace_chg_0_sub_0(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_chg_0_sub_0\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_sprite_crkdown_list__DOT__mem_latency),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+1,(vlSelfRef.tb_sprite_crkdown_list__DOT__reset));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_sprite_crkdown_list__DOT__ce_pixel));
        bufp->chgSData(oldp+3,(vlSelfRef.tb_sprite_crkdown_list__DOT__hcount),10);
        bufp->chgSData(oldp+4,(vlSelfRef.tb_sprite_crkdown_list__DOT__vcount),10);
        bufp->chgSData(oldp+5,(vlSelfRef.tb_sprite_crkdown_list__DOT__pixel0),14);
        bufp->chgSData(oldp+6,(vlSelfRef.tb_sprite_crkdown_list__DOT__pixel1),14);
        bufp->chgSData(oldp+7,(vlSelfRef.tb_sprite_crkdown_list__DOT__pixel2),14);
        bufp->chgSData(oldp+8,(vlSelfRef.tb_sprite_crkdown_list__DOT__pixel3),14);
        bufp->chgSData(oldp+9,(vlSelfRef.tb_sprite_crkdown_list__DOT__rank0),11);
        bufp->chgSData(oldp+10,(vlSelfRef.tb_sprite_crkdown_list__DOT__rank1),11);
        bufp->chgSData(oldp+11,(vlSelfRef.tb_sprite_crkdown_list__DOT__rank2),11);
        bufp->chgSData(oldp+12,(vlSelfRef.tb_sprite_crkdown_list__DOT__rank3),11);
        bufp->chgBit(oldp+13,(vlSelfRef.tb_sprite_crkdown_list__DOT__mem_req));
        bufp->chgBit(oldp+14,(vlSelfRef.tb_sprite_crkdown_list__DOT__mem_ack));
        bufp->chgIData(oldp+15,(vlSelfRef.tb_sprite_crkdown_list__DOT__mem_addr),23);
        bufp->chgWData(oldp+16,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_data),128);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_sprite_crkdown_list__DOT__target_lines),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_sprite_crkdown_list__DOT__missing_lines),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_sprite_crkdown_list__DOT__mem_wait),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_sprite_crkdown_list__DOT__init_line),32);
        bufp->chgCData(oldp+24,(vlSelfRef.tb_sprite_crkdown_list__DOT__phase),4);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_sprite_crkdown_list__DOT__phase_count),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_sprite_crkdown_list__DOT__line_index),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_sprite_crkdown_list__DOT__ln),32);
        bufp->chgSData(oldp+28,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_request_tag),14);
        bufp->chgSData(oldp+29,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_lookup_tag),14);
        bufp->chgWData(oldp+30,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_q),128);
        bufp->chgWData(oldp+34,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data),128);
        bufp->chgBit(oldp+38,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_hit));
        bufp->chgBit(oldp+39,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__cache_ack_pending));
        bufp->chgBit(oldp+40,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__read_ack));
        bufp->chgBit(oldp+41,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_ram__DOT__write_enable));
        bufp->chgIData(oldp+42,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_cache_init),32);
        bufp->chgCData(oldp+43,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren),4);
        bufp->chgCData(oldp+44,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[0]),2);
        bufp->chgCData(oldp+45,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[1]),2);
        bufp->chgCData(oldp+46,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[2]),2);
        bufp->chgCData(oldp+47,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[3]),2);
        bufp->chgSData(oldp+48,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[0]),10);
        bufp->chgSData(oldp+49,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[1]),10);
        bufp->chgSData(oldp+50,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[2]),10);
        bufp->chgSData(oldp+51,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[3]),10);
        bufp->chgQData(oldp+52,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[0]),34);
        bufp->chgQData(oldp+54,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[1]),34);
        bufp->chgQData(oldp+56,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[2]),34);
        bufp->chgQData(oldp+58,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[3]),34);
        bufp->chgBit(oldp+60,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__write_enable));
        bufp->chgBit(oldp+61,((1U & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_write_slot))));
        bufp->chgSData(oldp+62,((0x000007ffU & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_write_slot) 
                                                >> 1U))),11);
        bufp->chgWData(oldp+63,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_ram2__DOT__write_data),81);
        bufp->chgWData(oldp+66,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q),256);
        bufp->chgWData(oldp+74,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q),162);
        bufp->chgSData(oldp+80,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair2),11);
        bufp->chgSData(oldp+81,((0x000003ffU & (((5U 
                                                  == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)) 
                                                 | (6U 
                                                    == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state)))
                                                 ? (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count)
                                                 : 
                                                ((8U 
                                                  == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))
                                                  ? (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos)
                                                  : 
                                                 ((0x13U 
                                                   == (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state))
                                                   ? 
                                                  (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                                    - (IData)(2U)) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 < (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos)))))
                                                   : 
                                                  (((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos) 
                                                    - (IData)(1U)) 
                                                   & (- (IData)(
                                                                (0U 
                                                                 != (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos)))))))))),10);
        bufp->chgSData(oldp+82,((0x000003ffU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count))),10);
        bufp->chgWData(oldp+83,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q),209);
        bufp->chgWData(oldp+90,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_data),209);
        bufp->chgBit(oldp+97,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_write_enable));
        bufp->chgWData(oldp+98,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_descriptor),128);
        bufp->chgWData(oldp+102,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_render_clip),81);
        bufp->chgCData(oldp+105,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__state),5);
        bufp->chgCData(oldp+106,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_bank),3);
        bufp->chgCData(oldp+107,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_bank),3);
        bufp->chgCData(oldp+108,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_valid),8);
        bufp->chgCData(oldp+109,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_filling),8);
        bufp->chgBit(oldp+110,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_epoch));
        bufp->chgSData(oldp+111,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_read_addr),10);
        bufp->chgQData(oldp+112,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_q[0]),34);
        bufp->chgQData(oldp+114,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_q[1]),34);
        bufp->chgQData(oldp+116,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_q[2]),34);
        bufp->chgQData(oldp+118,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_q[3]),34);
        bufp->chgQData(oldp+120,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_q[0]),34);
        bufp->chgQData(oldp+122,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_q[1]),34);
        bufp->chgQData(oldp+124,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_q[2]),34);
        bufp->chgQData(oldp+126,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_q[3]),34);
        bufp->chgQData(oldp+128,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_q[0]),34);
        bufp->chgQData(oldp+130,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_q[1]),34);
        bufp->chgQData(oldp+132,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_q[2]),34);
        bufp->chgQData(oldp+134,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_q[3]),34);
        bufp->chgQData(oldp+136,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_q[0]),34);
        bufp->chgQData(oldp+138,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_q[1]),34);
        bufp->chgQData(oldp+140,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_q[2]),34);
        bufp->chgQData(oldp+142,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_q[3]),34);
        bufp->chgQData(oldp+144,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q[0]),34);
        bufp->chgQData(oldp+146,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q[1]),34);
        bufp->chgQData(oldp+148,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q[2]),34);
        bufp->chgQData(oldp+150,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_render_q[3]),34);
        bufp->chgQData(oldp+152,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q[0]),34);
        bufp->chgQData(oldp+154,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q[1]),34);
        bufp->chgQData(oldp+156,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q[2]),34);
        bufp->chgQData(oldp+158,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_render_q[3]),34);
        bufp->chgQData(oldp+160,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q[0]),34);
        bufp->chgQData(oldp+162,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q[1]),34);
        bufp->chgQData(oldp+164,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q[2]),34);
        bufp->chgQData(oldp+166,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_render_q[3]),34);
        bufp->chgQData(oldp+168,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q[0]),34);
        bufp->chgQData(oldp+170,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q[1]),34);
        bufp->chgQData(oldp+172,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q[2]),34);
        bufp->chgQData(oldp+174,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_render_q[3]),34);
        bufp->chgQData(oldp+176,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line0_display_sel),34);
        bufp->chgQData(oldp+178,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line1_display_sel),34);
        bufp->chgQData(oldp+180,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line2_display_sel),34);
        bufp->chgQData(oldp+182,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line3_display_sel),34);
        bufp->chgCData(oldp+184,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__display_lane),2);
        bufp->chgCData(oldp+185,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_generation),8);
        Vtb_sprite_crkdown_list___024root__trace_chg_dtype____0(vlSelf, bufp, 186, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_generation);
        Vtb_sprite_crkdown_list___024root__trace_chg_dtype____1(vlSelf, bufp, 194, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_line_y);
        bufp->chgSData(oldp+202,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__target_y),9);
        bufp->chgSData(oldp+203,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_next_target),9);
        bufp->chgCData(oldp+204,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_bank),3);
        bufp->chgBit(oldp+205,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_ready));
        bufp->chgCData(oldp+206,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate),3);
        bufp->chgBit(oldp+207,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__fill_candidate_valid));
        bufp->chgSData(oldp+208,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__next_display_line),10);
        bufp->chgIData(oldp+209,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__reclaim_scan),32);
        bufp->chgSData(oldp+210,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_index),13);
        bufp->chgSData(oldp+211,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_seen),14);
        bufp->chgBit(oldp+212,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_cache_valid));
        bufp->chgBit(oldp+213,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__cache_refresh_pending));
        bufp->chgBit(oldp+214,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__frame_epoch));
        bufp->chgBit(oldp+215,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__frame_boundary));
        bufp->chgSData(oldp+216,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_flags),16);
        bufp->chgSData(oldp+217,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_top),16);
        bufp->chgSData(oldp+218,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_left),16);
        bufp->chgSData(oldp+219,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_bottom),16);
        bufp->chgSData(oldp+220,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_right),16);
        bufp->chgBit(oldp+221,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_clip_valid));
        bufp->chgSData(oldp+222,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_count),13);
        bufp->chgSData(oldp+223,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_pos),13);
        bufp->chgSData(oldp+224,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_head),12);
        bufp->chgSData(oldp+225,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_write_slot),12);
        bufp->chgWData(oldp+226,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q),256);
        bufp->chgWData(oldp+234,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair_q),162);
        bufp->chgWData(oldp+240,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_q),128);
        __Vtemp_1[0U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[4U];
        __Vtemp_1[1U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[5U];
        __Vtemp_1[2U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[6U];
        __Vtemp_1[3U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair_q[7U];
        bufp->chgWData(oldp+244,(__Vtemp_1),128);
        bufp->chgWData(oldp+248,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_q),81);
        bufp->chgWData(oldp+251,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip1),81);
        bufp->chgWData(oldp+254,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_descriptor),128);
        bufp->chgWData(oldp+258,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_clip),81);
        bufp->chgWData(oldp+261,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__render_clip),81);
        bufp->chgWData(oldp+264,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor),128);
        bufp->chgWData(oldp+268,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_table),128);
        bufp->chgWData(oldp+272,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache),128);
        Vtb_sprite_crkdown_list___024root__trace_chg_dtype____2(vlSelf, bufp, 276, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_data);
        Vtb_sprite_crkdown_list___024root__trace_chg_dtype____3(vlSelf, bufp, 308, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_tags);
        bufp->chgCData(oldp+316,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_valid),8);
        bufp->chgCData(oldp+317,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_index),3);
        bufp->chgBit(oldp+318,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_cache_hit));
        bufp->chgSData(oldp+319,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_tag),14);
        bufp->chgBit(oldp+320,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__data_cache_valid));
        bufp->chgIData(oldp+321,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[0]),17);
        bufp->chgIData(oldp+322,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[1]),17);
        bufp->chgIData(oldp+323,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[2]),17);
        bufp->chgIData(oldp+324,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_line_value[3]),17);
        bufp->chgSData(oldp+325,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[0]),14);
        bufp->chgSData(oldp+326,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[1]),14);
        bufp->chgSData(oldp+327,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[2]),14);
        bufp->chgSData(oldp+328,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_dest_x[3]),14);
        bufp->chgSData(oldp+329,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_col[0]),11);
        bufp->chgSData(oldp+330,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_col[1]),11);
        bufp->chgSData(oldp+331,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_col[2]),11);
        bufp->chgSData(oldp+332,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_col[3]),11);
        bufp->chgCData(oldp+333,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_within_x[0]),3);
        bufp->chgCData(oldp+334,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_within_x[1]),3);
        bufp->chgCData(oldp+335,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_within_x[2]),3);
        bufp->chgCData(oldp+336,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_within_x[3]),3);
        bufp->chgSData(oldp+337,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_data_word[0]),16);
        bufp->chgSData(oldp+338,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_data_word[1]),16);
        bufp->chgSData(oldp+339,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_data_word[2]),16);
        bufp->chgSData(oldp+340,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_data_word[3]),16);
        bufp->chgIData(oldp+341,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_word[0]),17);
        bufp->chgIData(oldp+342,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_word[1]),17);
        bufp->chgIData(oldp+343,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_word[2]),17);
        bufp->chgIData(oldp+344,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_word[3]),17);
        bufp->chgSData(oldp+345,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_tag[0]),14);
        bufp->chgSData(oldp+346,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_tag[1]),14);
        bufp->chgSData(oldp+347,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_tag[2]),14);
        bufp->chgSData(oldp+348,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_tag[3]),14);
        bufp->chgCData(oldp+349,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_pen[0]),4);
        bufp->chgCData(oldp+350,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_pen[1]),4);
        bufp->chgCData(oldp+351,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_pen[2]),4);
        bufp->chgCData(oldp+352,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_pen[3]),4);
        bufp->chgCData(oldp+353,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[0]),8);
        bufp->chgCData(oldp+354,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[1]),8);
        bufp->chgCData(oldp+355,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[2]),8);
        bufp->chgCData(oldp+356,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__lane_color[3]),8);
        bufp->chgIData(oldp+357,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_phys),32);
        bufp->chgSData(oldp+358,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__zoomx_step),9);
        bufp->chgSData(oldp+359,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__zoomy_step),9);
        bufp->chgCData(oldp+360,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__x_accum),6);
        bufp->chgCData(oldp+361,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__y_accum),6);
        bufp->chgCData(oldp+362,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__emit_count),3);
        bufp->chgSData(oldp+363,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_row),11);
        bufp->chgSData(oldp+364,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__source_column),11);
        bufp->chgSData(oldp+365,(((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_y_tiles) 
                                  << 3U)),11);
        bufp->chgSData(oldp+366,(((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_x_tiles) 
                                  << 3U)),11);
        bufp->chgSData(oldp+367,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_y),13);
        bufp->chgSData(oldp+368,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__dest_x),13);
        bufp->chgBit(oldp+369,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__flipx));
        bufp->chgBit(oldp+370,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__flipy));
        bufp->chgCData(oldp+371,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_x_tiles),8);
        bufp->chgCData(oldp+372,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_y_tiles),8);
        bufp->chgCData(oldp+373,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_x_shift),3);
        bufp->chgCData(oldp+374,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__size_y_mask),8);
        bufp->chgIData(oldp+375,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_word),17);
        bufp->chgCData(oldp+376,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_nibble),4);
        bufp->chgCData(oldp+377,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__current_pen),4);
        bufp->chgCData(oldp+378,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__mapped_color),8);
        bufp->chgIData(oldp+379,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_value),17);
        bufp->chgBit(oldp+380,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__vertical_allowed));
        bufp->chgSData(oldp+381,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_min_x),13);
        bufp->chgSData(oldp+382,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_max_x),13);
        bufp->chgSData(oldp+383,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_first),13);
        bufp->chgSData(oldp+384,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_last),13);
        bufp->chgSData(oldp+385,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_x),13);
        bufp->chgSData(oldp+386,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_output_width),13);
        bufp->chgSData(oldp+387,((0x00003fffU & (((
                                                   (0x00002000U 
                                                    & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_x) 
                                                       << 1U)) 
                                                   | (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_x)) 
                                                  + (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_output_width)) 
                                                 - (IData)(1U)))),14);
        bufp->chgSData(oldp+388,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__d2),16);
        bufp->chgSData(oldp+389,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__d3),16);
        bufp->chgSData(oldp+390,((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor[2U] 
                                  >> 0x00000010U)),16);
        bufp->chgSData(oldp+391,((0x0000ffffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[0U])),16);
        bufp->chgSData(oldp+392,((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[0U] 
                                  >> 0x00000010U)),16);
        bufp->chgSData(oldp+393,((0x0000ffffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[1U])),16);
        bufp->chgSData(oldp+394,((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[1U] 
                                  >> 0x00000010U)),16);
        bufp->chgSData(oldp+395,((0x0000ffffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[2U])),16);
        bufp->chgSData(oldp+396,((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[2U] 
                                  >> 0x00000010U)),16);
        bufp->chgSData(oldp+397,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__palette_base),14);
        bufp->chgIData(oldp+398,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_base),17);
        bufp->chgCData(oldp+399,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_x),8);
        bufp->chgCData(oldp+400,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_y),8);
        bufp->chgCData(oldp+401,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__within_x),3);
        bufp->chgCData(oldp+402,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__within_y),3);
        bufp->chgIData(oldp+403,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__word_calc),18);
        bufp->chgSData(oldp+404,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_row_offset),14);
        bufp->chgSData(oldp+405,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__tile_ordinal),14);
        bufp->chgSData(oldp+406,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_tag),14);
        bufp->chgSData(oldp+407,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__wanted_data_word),16);
        bufp->chgSData(oldp+408,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__x_sum),9);
        bufp->chgSData(oldp+409,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__y_sum),9);
        bufp->chgSData(oldp+410,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_zoomy_step),9);
        bufp->chgSData(oldp+411,((0x000007ffU & ((IData)(8U) 
                                                 << 
                                                 (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[4U] 
                                                  >> 0x0000001dU)))),11);
        bufp->chgSData(oldp+412,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_origin_y),13);
        bufp->chgSData(oldp+413,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_bottom_y),14);
        bufp->chgIData(oldp+414,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_dividend),18);
        bufp->chgIData(oldp+415,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_quotient),18);
        bufp->chgIData(oldp+416,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_remainder),19);
        bufp->chgIData(oldp+417,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_next_remainder),19);
        bufp->chgSData(oldp+418,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_divisor),9);
        bufp->chgSData(oldp+419,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_total_rows),11);
        bufp->chgCData(oldp+420,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_count),5);
        bufp->chgIData(oldp+421,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_shifted_remainder),19);
        bufp->chgIData(oldp+422,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_next_quotient),18);
        bufp->chgSData(oldp+423,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__ydiv_adjust_value),10);
        bufp->chgSData(oldp+424,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_target_offset),12);
        bufp->chgSData(oldp+425,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pos),13);
        bufp->chgSData(oldp+426,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_count),13);
        bufp->chgSData(oldp+427,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__stack_scan_slot),12);
        bufp->chgSData(oldp+428,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_read_pair),11);
        bufp->chgSData(oldp+429,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_w1),16);
        bufp->chgSData(oldp+430,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_w4),16);
        bufp->chgSData(oldp+431,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_w1),16);
        bufp->chgSData(oldp+432,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_w4),16);
        bufp->chgSData(oldp+433,((0x0000ffffU & ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                  << 0x0000000fU) 
                                                 | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[2U] 
                                                    >> 0x00000011U)))),16);
        bufp->chgSData(oldp+434,((0x0000ffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                 >> 1U))),16);
        bufp->chgSData(oldp+435,((0x0000ffffU & ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[5U] 
                                                  << 0x0000000fU) 
                                                 | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[4U] 
                                                    >> 0x00000011U)))),16);
        bufp->chgSData(oldp+436,((0x0000ffffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[5U] 
                                                 >> 1U))),16);
        bufp->chgSData(oldp+437,((((0x40000000U & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[2U])
                                    ? (0U == (0x000000ffU 
                                              & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                 >> 9U)))
                                    : (0U == (0x000000ffU 
                                              & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                 >> 1U))))
                                   ? 0x00000040U : 
                                  (0x000001ffU & ((IData)(1U) 
                                                  + 
                                                  (0x000000ffU 
                                                   & ((0x40000000U 
                                                       & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[2U])
                                                       ? 
                                                      ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                        << 0x00000017U) 
                                                       | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                          >> 9U))
                                                       : 
                                                      ((vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                        << 0x0000001fU) 
                                                       | (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_cache_q[3U] 
                                                          >> 1U)))))))),9);
        bufp->chgIData(oldp+438,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_width_sum),20);
        bufp->chgSData(oldp+439,(((0U == (0x000000ffU 
                                          & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[0U] 
                                             >> 0x00000010U)))
                                   ? 0x00000040U : 
                                  (0x000001ffU & ((IData)(1U) 
                                                  + 
                                                  (0x000000ffU 
                                                   & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[0U] 
                                                      >> 0x00000010U)))))),9);
        bufp->chgSData(oldp+440,((0x00001fffU & (((IData)(0x00000020U) 
                                                  + 
                                                  VL_SHIFTL_III(20,20,32, 
                                                                ((0U 
                                                                  == 
                                                                  (0x000000ffU 
                                                                   & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[0U] 
                                                                      >> 0x00000010U)))
                                                                  ? 0x00000040U
                                                                  : 
                                                                 (0x000001ffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (0x000000ffU 
                                                                      & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[0U] 
                                                                         >> 0x00000010U))))), 
                                                                ((IData)(3U) 
                                                                 + 
                                                                 (7U 
                                                                  & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[2U] 
                                                                     >> 0x0000000cU))))) 
                                                 >> 6U))),13);
        bufp->chgIData(oldp+441,((0x000fffffU & ((IData)(0x00000020U) 
                                                 + 
                                                 VL_SHIFTL_III(20,20,32, 
                                                               ((0U 
                                                                 == 
                                                                 (0x000000ffU 
                                                                  & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[0U] 
                                                                     >> 0x00000010U)))
                                                                 ? 0x00000040U
                                                                 : 
                                                                (0x000001ffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (0x000000ffU 
                                                                     & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[0U] 
                                                                        >> 0x00000010U))))), 
                                                               ((IData)(3U) 
                                                                + 
                                                                (7U 
                                                                 & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_ram2__DOT__write_data[2U] 
                                                                    >> 0x0000000cU))))))),20);
        bufp->chgSData(oldp+442,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_origin_y),13);
        bufp->chgSData(oldp+443,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__list_bottom_y),14);
        bufp->chgSData(oldp+444,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_zoomy_step),9);
        bufp->chgIData(oldp+445,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_height_sum),20);
        bufp->chgSData(oldp+446,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_height),13);
        bufp->chgSData(oldp+447,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_origin_y),13);
        bufp->chgSData(oldp+448,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_bottom_y),14);
        bufp->chgBit(oldp+449,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_vertical_allowed));
        bufp->chgBit(oldp+450,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_active));
        bufp->chgSData(oldp+451,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_zoomy_step),9);
        bufp->chgIData(oldp+452,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_height_sum),20);
        bufp->chgSData(oldp+453,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_height),13);
        bufp->chgSData(oldp+454,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_origin_y),13);
        bufp->chgSData(oldp+455,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_bottom_y),14);
        bufp->chgBit(oldp+456,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_vertical_allowed));
        bufp->chgBit(oldp+457,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan1_active));
        __Vtemp_2[0U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[0U];
        __Vtemp_2[1U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[1U];
        __Vtemp_2[2U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[2U];
        __Vtemp_2[3U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[3U];
        bufp->chgWData(oldp+458,(__Vtemp_2),128);
        __Vtemp_3[0U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[4U];
        __Vtemp_3[1U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[5U];
        __Vtemp_3[2U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[6U];
        __Vtemp_3[3U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_stack_pair2_q[7U];
        bufp->chgWData(oldp+462,(__Vtemp_3),128);
        __Vtemp_6[0U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[0U];
        __Vtemp_6[1U] = vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[1U];
        __Vtemp_6[2U] = (0x0001ffffU & vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__clip_stack_pair2_q[2U]);
        bufp->chgWData(oldp+466,(__Vtemp_6),81);
        bufp->chgWData(oldp+469,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_clip3),81);
        bufp->chgSData(oldp+472,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_w1),16);
        bufp->chgSData(oldp+473,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_w4),16);
        bufp->chgSData(oldp+474,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_w1),16);
        bufp->chgSData(oldp+475,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_w4),16);
        bufp->chgSData(oldp+476,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_zoomy_step),9);
        bufp->chgSData(oldp+477,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_zoomy_step),9);
        bufp->chgIData(oldp+478,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_height_sum),20);
        bufp->chgIData(oldp+479,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_height_sum),20);
        bufp->chgSData(oldp+480,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_height),13);
        bufp->chgSData(oldp+481,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_height),13);
        bufp->chgSData(oldp+482,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_origin_y),13);
        bufp->chgSData(oldp+483,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_origin_y),13);
        bufp->chgSData(oldp+484,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_bottom_y),14);
        bufp->chgSData(oldp+485,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_bottom_y),14);
        bufp->chgBit(oldp+486,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_vertical_allowed));
        bufp->chgBit(oldp+487,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_vertical_allowed));
        bufp->chgBit(oldp+488,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan2_active));
        bufp->chgBit(oldp+489,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan3_active));
        bufp->chgBit(oldp+490,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_pair_valid));
        bufp->chgBit(oldp+491,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_valid));
        bufp->chgCData(oldp+492,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_advance),3);
        bufp->chgSData(oldp+493,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_pos),13);
        bufp->chgSData(oldp+494,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_next_slot),12);
        bufp->chgBit(oldp+495,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_second_last));
        bufp->chgCData(oldp+496,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active_count),3);
        bufp->chgCData(oldp+497,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_count),3);
        bufp->chgBit(oldp+498,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_last));
        bufp->chgWData(oldp+499,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_descriptor),128);
        bufp->chgWData(oldp+503,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_first_clip),81);
        Vtb_sprite_crkdown_list___024root__trace_chg_dtype____4(vlSelf, bufp, 506, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_descriptor);
        Vtb_sprite_crkdown_list___024root__trace_chg_dtype____5(vlSelf, bufp, 518, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_pending_clip);
        bufp->chgWData(oldp+527,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[0]),128);
        bufp->chgWData(oldp+531,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[1]),128);
        bufp->chgWData(oldp+535,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_descriptor[2]),128);
        bufp->chgWData(oldp+539,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[0]),81);
        bufp->chgWData(oldp+542,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[1]),81);
        bufp->chgWData(oldp+545,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_batch_pending_clip[2]),81);
        bufp->chgWData(oldp+548,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[0]),128);
        bufp->chgWData(oldp+552,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[1]),128);
        bufp->chgWData(oldp+556,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[2]),128);
        bufp->chgWData(oldp+560,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_descriptor[3]),128);
        bufp->chgWData(oldp+564,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[0]),81);
        bufp->chgWData(oldp+567,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[1]),81);
        bufp->chgWData(oldp+570,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[2]),81);
        bufp->chgWData(oldp+573,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_clip[3]),81);
        bufp->chgBit(oldp+576,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[0]));
        bufp->chgBit(oldp+577,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[1]));
        bufp->chgBit(oldp+578,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[2]));
        bufp->chgBit(oldp+579,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_active[3]));
        bufp->chgIData(oldp+580,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scan_quad_seen),32);
        bufp->chgSData(oldp+581,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_origin_x),13);
        bufp->chgSData(oldp+582,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_right_x),14);
        bufp->chgSData(oldp+583,((0x00001fffU & (vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__descriptor_width_sum 
                                                 >> 6U))),13);
        bufp->chgSData(oldp+584,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_min_x),13);
        bufp->chgSData(oldp+585,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_max_x),13);
        bufp->chgSData(oldp+586,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_first),13);
        bufp->chgSData(oldp+587,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_clip_last),13);
        bufp->chgBit(oldp+588,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_setup_vertical_allowed));
        bufp->chgWData(oldp+589,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_boundary),384);
        bufp->chgBit(oldp+601,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__active_list_valid));
        bufp->chgBit(oldp+602,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req));
        bufp->chgSData(oldp+603,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_addr),10);
        Vtb_sprite_crkdown_list___024root__trace_chg_dtype____6(vlSelf, bufp, 604, vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__bank_scrub);
        bufp->chgCData(oldp+612,((0x000000ffU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_request_tag))),8);
        bufp->chgCData(oldp+613,((0x000000ffU & (IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__burst_lookup_tag))),8);
        bufp->chgQData(oldp+614,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_a),34);
        bufp->chgSData(oldp+616,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[0U]),10);
        bufp->chgQData(oldp+617,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[0U]),34);
        bufp->chgBit(oldp+619,(((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                                & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                   | (0U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[0U])))));
        bufp->chgQData(oldp+620,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line0_ram__q_b),34);
        bufp->chgQData(oldp+622,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_a),34);
        bufp->chgBit(oldp+624,(((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                                & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                   | (1U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[0U])))));
        bufp->chgQData(oldp+625,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line1_ram__q_b),34);
        bufp->chgQData(oldp+627,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_a),34);
        bufp->chgBit(oldp+629,(((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                                & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                   | (2U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[0U])))));
        bufp->chgQData(oldp+630,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line2_ram__q_b),34);
        bufp->chgQData(oldp+632,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_a),34);
        bufp->chgBit(oldp+634,(((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                                & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                   | (3U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[0U])))));
        bufp->chgQData(oldp+635,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__0__KET____DOT__line3_ram__q_b),34);
        bufp->chgQData(oldp+637,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_a),34);
        bufp->chgSData(oldp+639,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[1U]),10);
        bufp->chgQData(oldp+640,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[1U]),34);
        bufp->chgBit(oldp+642,((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                                 >> 1U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                           | (0U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[1U])))));
        bufp->chgQData(oldp+643,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line0_ram__q_b),34);
        bufp->chgQData(oldp+645,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_a),34);
        bufp->chgBit(oldp+647,((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                                 >> 1U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                           | (1U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[1U])))));
        bufp->chgQData(oldp+648,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line1_ram__q_b),34);
        bufp->chgQData(oldp+650,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_a),34);
        bufp->chgBit(oldp+652,((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                                 >> 1U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                           | (2U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[1U])))));
        bufp->chgQData(oldp+653,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line2_ram__q_b),34);
        bufp->chgQData(oldp+655,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_a),34);
        bufp->chgBit(oldp+657,((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                                 >> 1U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                           | (3U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[1U])))));
        bufp->chgQData(oldp+658,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__1__KET____DOT__line3_ram__q_b),34);
        bufp->chgQData(oldp+660,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_a),34);
        bufp->chgSData(oldp+662,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[2U]),10);
        bufp->chgQData(oldp+663,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[2U]),34);
        bufp->chgBit(oldp+665,((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                                 >> 2U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                           | (0U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[2U])))));
        bufp->chgQData(oldp+666,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line0_ram__q_b),34);
        bufp->chgQData(oldp+668,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_a),34);
        bufp->chgBit(oldp+670,((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                                 >> 2U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                           | (1U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[2U])))));
        bufp->chgQData(oldp+671,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line1_ram__q_b),34);
        bufp->chgQData(oldp+673,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_a),34);
        bufp->chgBit(oldp+675,((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                                 >> 2U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                           | (2U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[2U])))));
        bufp->chgQData(oldp+676,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line2_ram__q_b),34);
        bufp->chgQData(oldp+678,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_a),34);
        bufp->chgBit(oldp+680,((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                                 >> 2U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                           | (3U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[2U])))));
        bufp->chgQData(oldp+681,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__2__KET____DOT__line3_ram__q_b),34);
        bufp->chgQData(oldp+683,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_a),34);
        bufp->chgSData(oldp+685,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_addr[3U]),10);
        bufp->chgQData(oldp+686,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_data[3U]),34);
        bufp->chgBit(oldp+688,((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                                 >> 3U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                           | (0U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[3U])))));
        bufp->chgQData(oldp+689,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line0_ram__q_b),34);
        bufp->chgQData(oldp+691,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_a),34);
        bufp->chgBit(oldp+693,((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                                 >> 3U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                           | (1U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[3U])))));
        bufp->chgQData(oldp+694,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line1_ram__q_b),34);
        bufp->chgQData(oldp+696,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_a),34);
        bufp->chgBit(oldp+698,((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                                 >> 3U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                           | (2U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[3U])))));
        bufp->chgQData(oldp+699,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line2_ram__q_b),34);
        bufp->chgQData(oldp+701,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_a),34);
        bufp->chgBit(oldp+703,((((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_wren) 
                                 >> 3U) & ((IData)(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__scrub_req) 
                                           | (3U == vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT__line_b_category[3U])))));
        bufp->chgQData(oldp+704,(vlSelfRef.tb_sprite_crkdown_list__DOT__dut__DOT____Vcellout__gen_line_lane__BRA__3__KET____DOT__line3_ram__q_b),34);
    }
    bufp->chgBit(oldp+706,(vlSelfRef.clk));
}

void Vtb_sprite_crkdown_list___024root__trace_chg_dtype____0(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_chg_dtype____0\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+4,(__VdtypeVar[4]),8);
    bufp->chgCData(oldp+5,(__VdtypeVar[5]),8);
    bufp->chgCData(oldp+6,(__VdtypeVar[6]),8);
    bufp->chgCData(oldp+7,(__VdtypeVar[7]),8);
}

void Vtb_sprite_crkdown_list___024root__trace_chg_dtype____1(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*8:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_chg_dtype____1\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[0]),9);
    bufp->chgSData(oldp+1,(__VdtypeVar[1]),9);
    bufp->chgSData(oldp+2,(__VdtypeVar[2]),9);
    bufp->chgSData(oldp+3,(__VdtypeVar[3]),9);
    bufp->chgSData(oldp+4,(__VdtypeVar[4]),9);
    bufp->chgSData(oldp+5,(__VdtypeVar[5]),9);
    bufp->chgSData(oldp+6,(__VdtypeVar[6]),9);
    bufp->chgSData(oldp+7,(__VdtypeVar[7]),9);
}

void Vtb_sprite_crkdown_list___024root__trace_chg_dtype____2(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<4>/*127:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_chg_dtype____2\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgWData(oldp+0,(__VdtypeVar[0]),128);
    bufp->chgWData(oldp+4,(__VdtypeVar[1]),128);
    bufp->chgWData(oldp+8,(__VdtypeVar[2]),128);
    bufp->chgWData(oldp+12,(__VdtypeVar[3]),128);
    bufp->chgWData(oldp+16,(__VdtypeVar[4]),128);
    bufp->chgWData(oldp+20,(__VdtypeVar[5]),128);
    bufp->chgWData(oldp+24,(__VdtypeVar[6]),128);
    bufp->chgWData(oldp+28,(__VdtypeVar[7]),128);
}

void Vtb_sprite_crkdown_list___024root__trace_chg_dtype____3(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*13:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_chg_dtype____3\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[0]),14);
    bufp->chgSData(oldp+1,(__VdtypeVar[1]),14);
    bufp->chgSData(oldp+2,(__VdtypeVar[2]),14);
    bufp->chgSData(oldp+3,(__VdtypeVar[3]),14);
    bufp->chgSData(oldp+4,(__VdtypeVar[4]),14);
    bufp->chgSData(oldp+5,(__VdtypeVar[5]),14);
    bufp->chgSData(oldp+6,(__VdtypeVar[6]),14);
    bufp->chgSData(oldp+7,(__VdtypeVar[7]),14);
}

void Vtb_sprite_crkdown_list___024root__trace_chg_dtype____4(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<4>/*127:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_chg_dtype____4\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgWData(oldp+0,(__VdtypeVar[0]),128);
    bufp->chgWData(oldp+4,(__VdtypeVar[1]),128);
    bufp->chgWData(oldp+8,(__VdtypeVar[2]),128);
}

void Vtb_sprite_crkdown_list___024root__trace_chg_dtype____5(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<3>/*80:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_chg_dtype____5\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgWData(oldp+0,(__VdtypeVar[0]),81);
    bufp->chgWData(oldp+3,(__VdtypeVar[1]),81);
    bufp->chgWData(oldp+6,(__VdtypeVar[2]),81);
}

void Vtb_sprite_crkdown_list___024root__trace_chg_dtype____6(Vtb_sprite_crkdown_list___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_chg_dtype____6\n"); );
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),7);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),7);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),7);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),7);
    bufp->chgCData(oldp+4,(__VdtypeVar[4]),7);
    bufp->chgCData(oldp+5,(__VdtypeVar[5]),7);
    bufp->chgCData(oldp+6,(__VdtypeVar[6]),7);
    bufp->chgCData(oldp+7,(__VdtypeVar[7]),7);
}

void Vtb_sprite_crkdown_list___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_crkdown_list___024root__trace_cleanup\n"); );
    // Body
    Vtb_sprite_crkdown_list___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_sprite_crkdown_list___024root*>(voidSelf);
    Vtb_sprite_crkdown_list__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
