// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sprite_ydiv.h for the primary calling header

#include "Vtb_sprite_ydiv__pch.h"

bool Vtb_sprite_ydiv___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_ydiv___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void Vtb_sprite_ydiv___024root___ico_comb__TOP__1(Vtb_sprite_ydiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_ydiv___024root___ico_comb__TOP__1\n"); );
    Vtb_sprite_ydiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    __VdfgRegularize_h6e95ff9d_0_6 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_8;
    __VdfgRegularize_h6e95ff9d_0_8 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_9;
    __VdfgRegularize_h6e95ff9d_0_9 = 0;
    IData/*18:0*/ __VdfgRegularize_h6e95ff9d_0_10;
    __VdfgRegularize_h6e95ff9d_0_10 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_12;
    __VdfgRegularize_h6e95ff9d_0_12 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_14;
    __VdfgRegularize_h6e95ff9d_0_14 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_15;
    __VdfgRegularize_h6e95ff9d_0_15 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_17;
    __VdfgRegularize_h6e95ff9d_0_17 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_19;
    __VdfgRegularize_h6e95ff9d_0_19 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_20;
    __VdfgRegularize_h6e95ff9d_0_20 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_22;
    __VdfgRegularize_h6e95ff9d_0_22 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_24;
    __VdfgRegularize_h6e95ff9d_0_24 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_25;
    __VdfgRegularize_h6e95ff9d_0_25 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_27;
    __VdfgRegularize_h6e95ff9d_0_27 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_28;
    __VdfgRegularize_h6e95ff9d_0_28 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_29;
    __VdfgRegularize_h6e95ff9d_0_29 = 0;
    SData/*14:0*/ __VdfgRegularize_h6e95ff9d_0_30;
    __VdfgRegularize_h6e95ff9d_0_30 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_31;
    __VdfgRegularize_h6e95ff9d_0_31 = 0;
    SData/*14:0*/ __VdfgRegularize_h6e95ff9d_0_32;
    __VdfgRegularize_h6e95ff9d_0_32 = 0;
    SData/*12:0*/ __VdfgRegularize_h6e95ff9d_0_33;
    __VdfgRegularize_h6e95ff9d_0_33 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_34;
    __VdfgRegularize_h6e95ff9d_0_34 = 0;
    SData/*14:0*/ __VdfgRegularize_h6e95ff9d_0_35;
    __VdfgRegularize_h6e95ff9d_0_35 = 0;
    SData/*12:0*/ __VdfgRegularize_h6e95ff9d_0_36;
    __VdfgRegularize_h6e95ff9d_0_36 = 0;
    SData/*10:0*/ __VdfgRegularize_h6e95ff9d_0_37;
    __VdfgRegularize_h6e95ff9d_0_37 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_38;
    __VdfgRegularize_h6e95ff9d_0_38 = 0;
    SData/*14:0*/ __VdfgRegularize_h6e95ff9d_0_39;
    __VdfgRegularize_h6e95ff9d_0_39 = 0;
    SData/*12:0*/ __VdfgRegularize_h6e95ff9d_0_40;
    __VdfgRegularize_h6e95ff9d_0_40 = 0;
    SData/*10:0*/ __VdfgRegularize_h6e95ff9d_0_41;
    __VdfgRegularize_h6e95ff9d_0_41 = 0;
    SData/*8:0*/ __VdfgRegularize_h6e95ff9d_0_42;
    __VdfgRegularize_h6e95ff9d_0_42 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_43;
    __VdfgRegularize_h6e95ff9d_0_43 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_44;
    __VdfgRegularize_h6e95ff9d_0_44 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_45;
    __VdfgRegularize_h6e95ff9d_0_45 = 0;
    SData/*14:0*/ __VdfgRegularize_h6e95ff9d_0_46;
    __VdfgRegularize_h6e95ff9d_0_46 = 0;
    SData/*12:0*/ __VdfgRegularize_h6e95ff9d_0_47;
    __VdfgRegularize_h6e95ff9d_0_47 = 0;
    SData/*10:0*/ __VdfgRegularize_h6e95ff9d_0_48;
    __VdfgRegularize_h6e95ff9d_0_48 = 0;
    SData/*8:0*/ __VdfgRegularize_h6e95ff9d_0_49;
    __VdfgRegularize_h6e95ff9d_0_49 = 0;
    CData/*6:0*/ __VdfgRegularize_h6e95ff9d_0_50;
    __VdfgRegularize_h6e95ff9d_0_50 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_51;
    __VdfgRegularize_h6e95ff9d_0_51 = 0;
    SData/*14:0*/ __VdfgRegularize_h6e95ff9d_0_52;
    __VdfgRegularize_h6e95ff9d_0_52 = 0;
    SData/*12:0*/ __VdfgRegularize_h6e95ff9d_0_53;
    __VdfgRegularize_h6e95ff9d_0_53 = 0;
    SData/*10:0*/ __VdfgRegularize_h6e95ff9d_0_54;
    __VdfgRegularize_h6e95ff9d_0_54 = 0;
    SData/*8:0*/ __VdfgRegularize_h6e95ff9d_0_55;
    __VdfgRegularize_h6e95ff9d_0_55 = 0;
    CData/*6:0*/ __VdfgRegularize_h6e95ff9d_0_56;
    __VdfgRegularize_h6e95ff9d_0_56 = 0;
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_57;
    __VdfgRegularize_h6e95ff9d_0_57 = 0;
    IData/*18:0*/ __VdfgRegularize_h6e95ff9d_0_59;
    __VdfgRegularize_h6e95ff9d_0_59 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_60;
    __VdfgRegularize_h6e95ff9d_0_60 = 0;
    IData/*18:0*/ __VdfgRegularize_h6e95ff9d_0_61;
    __VdfgRegularize_h6e95ff9d_0_61 = 0;
    IData/*18:0*/ __VdfgRegularize_h6e95ff9d_0_62;
    __VdfgRegularize_h6e95ff9d_0_62 = 0;
    IData/*18:0*/ __VdfgRegularize_h6e95ff9d_0_63;
    __VdfgRegularize_h6e95ff9d_0_63 = 0;
    IData/*18:0*/ __VdfgRegularize_h6e95ff9d_0_64;
    __VdfgRegularize_h6e95ff9d_0_64 = 0;
    IData/*18:0*/ __VdfgRegularize_h6e95ff9d_0_65;
    __VdfgRegularize_h6e95ff9d_0_65 = 0;
    IData/*18:0*/ __VdfgRegularize_h6e95ff9d_0_66;
    __VdfgRegularize_h6e95ff9d_0_66 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_67;
    __VdfgRegularize_h6e95ff9d_0_67 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_68;
    __VdfgRegularize_h6e95ff9d_0_68 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_69;
    __VdfgRegularize_h6e95ff9d_0_69 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_70;
    __VdfgRegularize_h6e95ff9d_0_70 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_71;
    __VdfgRegularize_h6e95ff9d_0_71 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_73;
    __VdfgRegularize_h6e95ff9d_0_73 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_74;
    __VdfgRegularize_h6e95ff9d_0_74 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_75;
    __VdfgRegularize_h6e95ff9d_0_75 = 0;
    // Body
    __VdfgRegularize_h6e95ff9d_0_2 = ((3U & (vlSelfRef.dividend 
                                             >> 0x00000010U)) 
                                      >= vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1);
    __VdfgRegularize_h6e95ff9d_0_57 = ((0x0000001cU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_2)
                                             ? ((3U 
                                                 & (vlSelfRef.dividend 
                                                    >> 0x00000010U)) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)
                                                 ? 
                                                ((3U 
                                                  & (vlSelfRef.dividend 
                                                     >> 0x00000010U)) 
                                                 - 
                                                 (6U 
                                                  & ((IData)(vlSelfRef.divisor) 
                                                     << 1U)))
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                                                  ? 
                                                 ((3U 
                                                   & (vlSelfRef.dividend 
                                                      >> 0x00000010U)) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : 
                                                 (3U 
                                                  & (vlSelfRef.dividend 
                                                     >> 0x00000010U))))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 0x0000000eU)));
    __VdfgRegularize_h6e95ff9d_0_50 = ((0x0000007cU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_2)
                                             ? ((3U 
                                                 & (vlSelfRef.dividend 
                                                    >> 0x00000010U)) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)
                                                 ? 
                                                ((3U 
                                                  & (vlSelfRef.dividend 
                                                     >> 0x00000010U)) 
                                                 - 
                                                 (0x0000001eU 
                                                  & ((IData)(vlSelfRef.divisor) 
                                                     << 1U)))
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                                                  ? 
                                                 ((3U 
                                                   & (vlSelfRef.dividend 
                                                      >> 0x00000010U)) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : 
                                                 (3U 
                                                  & (vlSelfRef.dividend 
                                                     >> 0x00000010U))))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 0x0000000eU)));
    __VdfgRegularize_h6e95ff9d_0_42 = ((0x000001fcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_2)
                                             ? ((3U 
                                                 & (vlSelfRef.dividend 
                                                    >> 0x00000010U)) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)
                                                 ? 
                                                ((3U 
                                                  & (vlSelfRef.dividend 
                                                     >> 0x00000010U)) 
                                                 - 
                                                 (0x0000007eU 
                                                  & ((IData)(vlSelfRef.divisor) 
                                                     << 1U)))
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                                                  ? 
                                                 ((3U 
                                                   & (vlSelfRef.dividend 
                                                      >> 0x00000010U)) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : 
                                                 (3U 
                                                  & (vlSelfRef.dividend 
                                                     >> 0x00000010U))))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 0x0000000eU)));
    __VdfgRegularize_h6e95ff9d_0_37 = ((0x000007fcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_2)
                                             ? ((3U 
                                                 & (vlSelfRef.dividend 
                                                    >> 0x00000010U)) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)
                                                 ? 
                                                ((3U 
                                                  & (vlSelfRef.dividend 
                                                     >> 0x00000010U)) 
                                                 - 
                                                 (0x000001feU 
                                                  & ((IData)(vlSelfRef.divisor) 
                                                     << 1U)))
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                                                  ? 
                                                 ((3U 
                                                   & (vlSelfRef.dividend 
                                                      >> 0x00000010U)) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : 
                                                 (3U 
                                                  & (vlSelfRef.dividend 
                                                     >> 0x00000010U))))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 0x0000000eU)));
    __VdfgRegularize_h6e95ff9d_0_33 = ((0x00001ffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_2)
                                             ? ((3U 
                                                 & (vlSelfRef.dividend 
                                                    >> 0x00000010U)) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)
                                                 ? 
                                                ((3U 
                                                  & (vlSelfRef.dividend 
                                                     >> 0x00000010U)) 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                                                  ? 
                                                 ((3U 
                                                   & (vlSelfRef.dividend 
                                                      >> 0x00000010U)) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : 
                                                 (3U 
                                                  & (vlSelfRef.dividend 
                                                     >> 0x00000010U))))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 0x0000000eU)));
    __VdfgRegularize_h6e95ff9d_0_30 = ((0x00007ffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_2)
                                             ? ((3U 
                                                 & (vlSelfRef.dividend 
                                                    >> 0x00000010U)) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)
                                                 ? 
                                                ((3U 
                                                  & (vlSelfRef.dividend 
                                                     >> 0x00000010U)) 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                                                  ? 
                                                 ((3U 
                                                   & (vlSelfRef.dividend 
                                                      >> 0x00000010U)) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : 
                                                 (3U 
                                                  & (vlSelfRef.dividend 
                                                     >> 0x00000010U))))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 0x0000000eU)));
    __VdfgRegularize_h6e95ff9d_0_28 = ((0x0001fffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_2)
                                             ? ((3U 
                                                 & (vlSelfRef.dividend 
                                                    >> 0x00000010U)) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)
                                                 ? 
                                                ((3U 
                                                  & (vlSelfRef.dividend 
                                                     >> 0x00000010U)) 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                                                  ? 
                                                 ((3U 
                                                   & (vlSelfRef.dividend 
                                                      >> 0x00000010U)) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : 
                                                 (3U 
                                                  & (vlSelfRef.dividend 
                                                     >> 0x00000010U))))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 0x0000000eU)));
    __VdfgRegularize_h6e95ff9d_0_66 = ((0x0007fffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_2)
                                             ? ((3U 
                                                 & (vlSelfRef.dividend 
                                                    >> 0x00000010U)) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)
                                                 ? 
                                                ((3U 
                                                  & (vlSelfRef.dividend 
                                                     >> 0x00000010U)) 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                                                  ? 
                                                 ((3U 
                                                   & (vlSelfRef.dividend 
                                                      >> 0x00000010U)) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : 
                                                 (3U 
                                                  & (vlSelfRef.dividend 
                                                     >> 0x00000010U))))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 0x0000000eU)));
    __VdfgRegularize_h6e95ff9d_0_6 = (__VdfgRegularize_h6e95ff9d_0_66 
                                      >= vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1);
    __VdfgRegularize_h6e95ff9d_0_8 = (__VdfgRegularize_h6e95ff9d_0_66 
                                      >= ((IData)(vlSelfRef.divisor) 
                                          << 1U));
    __VdfgRegularize_h6e95ff9d_0_9 = (__VdfgRegularize_h6e95ff9d_0_66 
                                      >= (IData)(vlSelfRef.divisor));
    __VdfgRegularize_h6e95ff9d_0_56 = ((0x0000007cU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_6)
                                             ? ((IData)(__VdfgRegularize_h6e95ff9d_0_57) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_8)
                                                 ? 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_57) 
                                                 - 
                                                 (0x0000001eU 
                                                  & ((IData)(vlSelfRef.divisor) 
                                                     << 1U)))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_9)
                                                  ? 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_57) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : (IData)(__VdfgRegularize_h6e95ff9d_0_57)))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 0x0000000cU)));
    __VdfgRegularize_h6e95ff9d_0_49 = ((0x000001fcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_6)
                                             ? ((IData)(__VdfgRegularize_h6e95ff9d_0_50) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_8)
                                                 ? 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_50) 
                                                 - 
                                                 (0x0000007eU 
                                                  & ((IData)(vlSelfRef.divisor) 
                                                     << 1U)))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_9)
                                                  ? 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_50) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : (IData)(__VdfgRegularize_h6e95ff9d_0_50)))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 0x0000000cU)));
    __VdfgRegularize_h6e95ff9d_0_41 = ((0x000007fcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_6)
                                             ? ((IData)(__VdfgRegularize_h6e95ff9d_0_42) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_8)
                                                 ? 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_42) 
                                                 - 
                                                 (0x000001feU 
                                                  & ((IData)(vlSelfRef.divisor) 
                                                     << 1U)))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_9)
                                                  ? 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_42) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : (IData)(__VdfgRegularize_h6e95ff9d_0_42)))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 0x0000000cU)));
    __VdfgRegularize_h6e95ff9d_0_36 = ((0x00001ffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_6)
                                             ? ((IData)(__VdfgRegularize_h6e95ff9d_0_37) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_8)
                                                 ? 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_37) 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_9)
                                                  ? 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_37) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : (IData)(__VdfgRegularize_h6e95ff9d_0_37)))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 0x0000000cU)));
    __VdfgRegularize_h6e95ff9d_0_32 = ((0x00007ffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_6)
                                             ? ((IData)(__VdfgRegularize_h6e95ff9d_0_33) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_8)
                                                 ? 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_33) 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_9)
                                                  ? 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_33) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : (IData)(__VdfgRegularize_h6e95ff9d_0_33)))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 0x0000000cU)));
    __VdfgRegularize_h6e95ff9d_0_29 = ((0x0001fffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_6)
                                             ? ((IData)(__VdfgRegularize_h6e95ff9d_0_30) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_8)
                                                 ? 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_30) 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_9)
                                                  ? 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_30) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : (IData)(__VdfgRegularize_h6e95ff9d_0_30)))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 0x0000000cU)));
    __VdfgRegularize_h6e95ff9d_0_65 = ((0x0007fffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_6)
                                             ? (__VdfgRegularize_h6e95ff9d_0_28 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_8)
                                                 ? 
                                                (__VdfgRegularize_h6e95ff9d_0_28 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_9)
                                                  ? 
                                                 (__VdfgRegularize_h6e95ff9d_0_28 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : __VdfgRegularize_h6e95ff9d_0_28))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 0x0000000cU)));
    __VdfgRegularize_h6e95ff9d_0_12 = (__VdfgRegularize_h6e95ff9d_0_65 
                                       >= vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1);
    __VdfgRegularize_h6e95ff9d_0_14 = (__VdfgRegularize_h6e95ff9d_0_65 
                                       >= ((IData)(vlSelfRef.divisor) 
                                           << 1U));
    __VdfgRegularize_h6e95ff9d_0_15 = (__VdfgRegularize_h6e95ff9d_0_65 
                                       >= (IData)(vlSelfRef.divisor));
    __VdfgRegularize_h6e95ff9d_0_55 = ((0x000001fcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_12)
                                             ? ((IData)(__VdfgRegularize_h6e95ff9d_0_56) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_14)
                                                 ? 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_56) 
                                                 - 
                                                 (0x0000007eU 
                                                  & ((IData)(vlSelfRef.divisor) 
                                                     << 1U)))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_15)
                                                  ? 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_56) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : (IData)(__VdfgRegularize_h6e95ff9d_0_56)))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 0x0000000aU)));
    __VdfgRegularize_h6e95ff9d_0_48 = ((0x000007fcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_12)
                                             ? ((IData)(__VdfgRegularize_h6e95ff9d_0_49) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_14)
                                                 ? 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_49) 
                                                 - 
                                                 (0x000001feU 
                                                  & ((IData)(vlSelfRef.divisor) 
                                                     << 1U)))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_15)
                                                  ? 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_49) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : (IData)(__VdfgRegularize_h6e95ff9d_0_49)))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 0x0000000aU)));
    __VdfgRegularize_h6e95ff9d_0_40 = ((0x00001ffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_12)
                                             ? ((IData)(__VdfgRegularize_h6e95ff9d_0_41) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_14)
                                                 ? 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_41) 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_15)
                                                  ? 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_41) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : (IData)(__VdfgRegularize_h6e95ff9d_0_41)))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 0x0000000aU)));
    __VdfgRegularize_h6e95ff9d_0_35 = ((0x00007ffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_12)
                                             ? ((IData)(__VdfgRegularize_h6e95ff9d_0_36) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_14)
                                                 ? 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_36) 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_15)
                                                  ? 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_36) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : (IData)(__VdfgRegularize_h6e95ff9d_0_36)))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 0x0000000aU)));
    __VdfgRegularize_h6e95ff9d_0_31 = ((0x0001fffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_12)
                                             ? ((IData)(__VdfgRegularize_h6e95ff9d_0_32) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_14)
                                                 ? 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_32) 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_15)
                                                  ? 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_32) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : (IData)(__VdfgRegularize_h6e95ff9d_0_32)))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 0x0000000aU)));
    __VdfgRegularize_h6e95ff9d_0_64 = ((0x0007fffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_12)
                                             ? (__VdfgRegularize_h6e95ff9d_0_29 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_14)
                                                 ? 
                                                (__VdfgRegularize_h6e95ff9d_0_29 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_15)
                                                  ? 
                                                 (__VdfgRegularize_h6e95ff9d_0_29 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : __VdfgRegularize_h6e95ff9d_0_29))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 0x0000000aU)));
    __VdfgRegularize_h6e95ff9d_0_17 = (__VdfgRegularize_h6e95ff9d_0_64 
                                       >= vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1);
    __VdfgRegularize_h6e95ff9d_0_19 = (__VdfgRegularize_h6e95ff9d_0_64 
                                       >= ((IData)(vlSelfRef.divisor) 
                                           << 1U));
    __VdfgRegularize_h6e95ff9d_0_20 = (__VdfgRegularize_h6e95ff9d_0_64 
                                       >= (IData)(vlSelfRef.divisor));
    __VdfgRegularize_h6e95ff9d_0_54 = ((0x000007fcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_17)
                                             ? ((IData)(__VdfgRegularize_h6e95ff9d_0_55) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_19)
                                                 ? 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_55) 
                                                 - 
                                                 (0x000001feU 
                                                  & ((IData)(vlSelfRef.divisor) 
                                                     << 1U)))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_20)
                                                  ? 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_55) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : (IData)(__VdfgRegularize_h6e95ff9d_0_55)))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 8U)));
    __VdfgRegularize_h6e95ff9d_0_47 = ((0x00001ffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_17)
                                             ? ((IData)(__VdfgRegularize_h6e95ff9d_0_48) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_19)
                                                 ? 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_48) 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_20)
                                                  ? 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_48) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : (IData)(__VdfgRegularize_h6e95ff9d_0_48)))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 8U)));
    __VdfgRegularize_h6e95ff9d_0_39 = ((0x00007ffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_17)
                                             ? ((IData)(__VdfgRegularize_h6e95ff9d_0_40) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_19)
                                                 ? 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_40) 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_20)
                                                  ? 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_40) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : (IData)(__VdfgRegularize_h6e95ff9d_0_40)))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 8U)));
    __VdfgRegularize_h6e95ff9d_0_34 = ((0x0001fffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_17)
                                             ? ((IData)(__VdfgRegularize_h6e95ff9d_0_35) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_19)
                                                 ? 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_35) 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_20)
                                                  ? 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_35) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : (IData)(__VdfgRegularize_h6e95ff9d_0_35)))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 8U)));
    __VdfgRegularize_h6e95ff9d_0_63 = ((0x0007fffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_17)
                                             ? (__VdfgRegularize_h6e95ff9d_0_31 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_19)
                                                 ? 
                                                (__VdfgRegularize_h6e95ff9d_0_31 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_20)
                                                  ? 
                                                 (__VdfgRegularize_h6e95ff9d_0_31 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : __VdfgRegularize_h6e95ff9d_0_31))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 8U)));
    __VdfgRegularize_h6e95ff9d_0_22 = (__VdfgRegularize_h6e95ff9d_0_63 
                                       >= vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1);
    __VdfgRegularize_h6e95ff9d_0_24 = (__VdfgRegularize_h6e95ff9d_0_63 
                                       >= ((IData)(vlSelfRef.divisor) 
                                           << 1U));
    __VdfgRegularize_h6e95ff9d_0_25 = (__VdfgRegularize_h6e95ff9d_0_63 
                                       >= (IData)(vlSelfRef.divisor));
    __VdfgRegularize_h6e95ff9d_0_53 = ((0x00001ffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_22)
                                             ? ((IData)(__VdfgRegularize_h6e95ff9d_0_54) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_24)
                                                 ? 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_54) 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_25)
                                                  ? 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_54) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : (IData)(__VdfgRegularize_h6e95ff9d_0_54)))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 6U)));
    __VdfgRegularize_h6e95ff9d_0_46 = ((0x00007ffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_22)
                                             ? ((IData)(__VdfgRegularize_h6e95ff9d_0_47) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_24)
                                                 ? 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_47) 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_25)
                                                  ? 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_47) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : (IData)(__VdfgRegularize_h6e95ff9d_0_47)))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 6U)));
    __VdfgRegularize_h6e95ff9d_0_38 = ((0x0001fffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_22)
                                             ? ((IData)(__VdfgRegularize_h6e95ff9d_0_39) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_24)
                                                 ? 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_39) 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_25)
                                                  ? 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_39) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : (IData)(__VdfgRegularize_h6e95ff9d_0_39)))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 6U)));
    __VdfgRegularize_h6e95ff9d_0_62 = ((0x0007fffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_22)
                                             ? (__VdfgRegularize_h6e95ff9d_0_34 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_24)
                                                 ? 
                                                (__VdfgRegularize_h6e95ff9d_0_34 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_25)
                                                  ? 
                                                 (__VdfgRegularize_h6e95ff9d_0_34 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : __VdfgRegularize_h6e95ff9d_0_34))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 6U)));
    __VdfgRegularize_h6e95ff9d_0_27 = (__VdfgRegularize_h6e95ff9d_0_62 
                                       >= vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1);
    __VdfgRegularize_h6e95ff9d_0_43 = (__VdfgRegularize_h6e95ff9d_0_62 
                                       >= ((IData)(vlSelfRef.divisor) 
                                           << 1U));
    __VdfgRegularize_h6e95ff9d_0_44 = (__VdfgRegularize_h6e95ff9d_0_62 
                                       >= (IData)(vlSelfRef.divisor));
    __VdfgRegularize_h6e95ff9d_0_52 = ((0x00007ffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_27)
                                             ? ((IData)(__VdfgRegularize_h6e95ff9d_0_53) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_43)
                                                 ? 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_53) 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_44)
                                                  ? 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_53) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : (IData)(__VdfgRegularize_h6e95ff9d_0_53)))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 4U)));
    __VdfgRegularize_h6e95ff9d_0_45 = ((0x0001fffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_27)
                                             ? ((IData)(__VdfgRegularize_h6e95ff9d_0_46) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_43)
                                                 ? 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_46) 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_44)
                                                  ? 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_46) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : (IData)(__VdfgRegularize_h6e95ff9d_0_46)))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 4U)));
    __VdfgRegularize_h6e95ff9d_0_61 = ((0x0007fffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_27)
                                             ? (__VdfgRegularize_h6e95ff9d_0_38 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_43)
                                                 ? 
                                                (__VdfgRegularize_h6e95ff9d_0_38 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_44)
                                                  ? 
                                                 (__VdfgRegularize_h6e95ff9d_0_38 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : __VdfgRegularize_h6e95ff9d_0_38))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 4U)));
    __VdfgRegularize_h6e95ff9d_0_60 = (__VdfgRegularize_h6e95ff9d_0_61 
                                       >= vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1);
    __VdfgRegularize_h6e95ff9d_0_67 = (__VdfgRegularize_h6e95ff9d_0_61 
                                       >= ((IData)(vlSelfRef.divisor) 
                                           << 1U));
    __VdfgRegularize_h6e95ff9d_0_68 = (__VdfgRegularize_h6e95ff9d_0_61 
                                       >= (IData)(vlSelfRef.divisor));
    __VdfgRegularize_h6e95ff9d_0_51 = ((0x0001fffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_60)
                                             ? ((IData)(__VdfgRegularize_h6e95ff9d_0_52) 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_67)
                                                 ? 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_52) 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_68)
                                                  ? 
                                                 ((IData)(__VdfgRegularize_h6e95ff9d_0_52) 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : (IData)(__VdfgRegularize_h6e95ff9d_0_52)))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 2U)));
    __VdfgRegularize_h6e95ff9d_0_59 = ((0x0007fffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_60)
                                             ? (__VdfgRegularize_h6e95ff9d_0_45 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_67)
                                                 ? 
                                                (__VdfgRegularize_h6e95ff9d_0_45 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_68)
                                                  ? 
                                                 (__VdfgRegularize_h6e95ff9d_0_45 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : __VdfgRegularize_h6e95ff9d_0_45))) 
                                           << 2U)) 
                                       | (3U & (vlSelfRef.dividend 
                                                >> 2U)));
    __VdfgRegularize_h6e95ff9d_0_73 = (__VdfgRegularize_h6e95ff9d_0_59 
                                       >= vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1);
    __VdfgRegularize_h6e95ff9d_0_74 = (__VdfgRegularize_h6e95ff9d_0_59 
                                       >= ((IData)(vlSelfRef.divisor) 
                                           << 1U));
    __VdfgRegularize_h6e95ff9d_0_75 = (__VdfgRegularize_h6e95ff9d_0_59 
                                       >= (IData)(vlSelfRef.divisor));
    __VdfgRegularize_h6e95ff9d_0_10 = ((0x0007fffcU 
                                        & (((IData)(__VdfgRegularize_h6e95ff9d_0_73)
                                             ? (__VdfgRegularize_h6e95ff9d_0_51 
                                                - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_74)
                                                 ? 
                                                (__VdfgRegularize_h6e95ff9d_0_51 
                                                 - 
                                                 ((IData)(vlSelfRef.divisor) 
                                                  << 1U))
                                                 : 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_75)
                                                  ? 
                                                 (__VdfgRegularize_h6e95ff9d_0_51 
                                                  - (IData)(vlSelfRef.divisor))
                                                  : __VdfgRegularize_h6e95ff9d_0_51))) 
                                           << 2U)) 
                                       | (3U & vlSelfRef.dividend));
    __VdfgRegularize_h6e95ff9d_0_69 = (__VdfgRegularize_h6e95ff9d_0_10 
                                       >= vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1);
    __VdfgRegularize_h6e95ff9d_0_70 = (__VdfgRegularize_h6e95ff9d_0_10 
                                       >= ((IData)(vlSelfRef.divisor) 
                                           << 1U));
    __VdfgRegularize_h6e95ff9d_0_71 = (__VdfgRegularize_h6e95ff9d_0_10 
                                       >= (IData)(vlSelfRef.divisor));
    vlSelfRef.remainder = (0x0007ffffU & ((IData)(__VdfgRegularize_h6e95ff9d_0_69)
                                           ? (__VdfgRegularize_h6e95ff9d_0_10 
                                              - vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                           : ((IData)(__VdfgRegularize_h6e95ff9d_0_70)
                                               ? (__VdfgRegularize_h6e95ff9d_0_10 
                                                  - 
                                                  ((IData)(vlSelfRef.divisor) 
                                                   << 1U))
                                               : ((IData)(__VdfgRegularize_h6e95ff9d_0_71)
                                                   ? 
                                                  (__VdfgRegularize_h6e95ff9d_0_10 
                                                   - (IData)(vlSelfRef.divisor))
                                                   : __VdfgRegularize_h6e95ff9d_0_10))));
    vlSelfRef.quotient = (((((0x0000000cU & ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)
                                                ? 2U
                                                : (1U 
                                                   & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4))))) 
                                              | (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_2)))) 
                                             << 2U)) 
                             | (3U & (((IData)(__VdfgRegularize_h6e95ff9d_0_8)
                                        ? 2U : (1U 
                                                & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_9))))) 
                                      | (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_6)))))) 
                            << 0x0000000eU) | (((0x0000000cU 
                                                 & ((((IData)(__VdfgRegularize_h6e95ff9d_0_14)
                                                       ? 2U
                                                       : 
                                                      (1U 
                                                       & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_15))))) 
                                                     | (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_12)))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (((IData)(__VdfgRegularize_h6e95ff9d_0_19)
                                                        ? 2U
                                                        : 
                                                       (1U 
                                                        & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_20))))) 
                                                      | (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_17)))))) 
                                               << 0x0000000aU)) 
                          | ((((0x0000000cU & ((((IData)(__VdfgRegularize_h6e95ff9d_0_24)
                                                  ? 2U
                                                  : 
                                                 (1U 
                                                  & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_25))))) 
                                                | (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_22)))) 
                                               << 2U)) 
                               | (3U & (((IData)(__VdfgRegularize_h6e95ff9d_0_43)
                                          ? 2U : (1U 
                                                  & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_44))))) 
                                        | (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_27)))))) 
                              << 6U) | ((0x00000030U 
                                         & ((((IData)(__VdfgRegularize_h6e95ff9d_0_67)
                                               ? 2U
                                               : (1U 
                                                  & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_68))))) 
                                             | (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_60)))) 
                                            << 4U)) 
                                        | ((0x0000000cU 
                                            & ((((IData)(__VdfgRegularize_h6e95ff9d_0_74)
                                                  ? 2U
                                                  : 
                                                 (1U 
                                                  & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_75))))) 
                                                | (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_73)))) 
                                               << 2U)) 
                                           | (3U & 
                                              (((IData)(__VdfgRegularize_h6e95ff9d_0_70)
                                                 ? 2U
                                                 : 
                                                (1U 
                                                 & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_71))))) 
                                               | (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_69)))))))));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sprite_ydiv___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_sprite_ydiv___024root___eval_phase__ico(Vtb_sprite_ydiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_ydiv___024root___eval_phase__ico\n"); );
    Vtb_sprite_ydiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSelfRef.divisor) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__divisor__0)) 
                                                          << 1U) 
                                                         | (vlSelfRef.dividend 
                                                            != vlSelfRef.__Vtrigprevexpr___TOP__dividend__0))));
        vlSelfRef.__Vtrigprevexpr___TOP__dividend__0 
            = vlSelfRef.dividend;
        vlSelfRef.__Vtrigprevexpr___TOP__divisor__0 
            = vlSelfRef.divisor;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_sprite_ydiv___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtb_sprite_ydiv___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_ico
            if ((3ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__0
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 
                        = ((3U & (vlSelfRef.dividend 
                                  >> 0x00000010U)) 
                           >= ((IData)(vlSelfRef.divisor) 
                               << 1U));
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                        = ((3U & (vlSelfRef.dividend 
                                  >> 0x00000010U)) 
                           >= (IData)(vlSelfRef.divisor));
                }
            }
            if ((2ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__0
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 
                        = (0x0007ffffU & ((IData)(vlSelfRef.divisor) 
                                          + ((IData)(vlSelfRef.divisor) 
                                             << 1U)));
                }
            }
            if ((3ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vtb_sprite_ydiv___024root___ico_comb__TOP__1(vlSelf);
            }
        }
    }
    return (__VicoExecute);
}

void Vtb_sprite_ydiv___024root___eval(Vtb_sprite_ydiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_ydiv___024root___eval\n"); );
    Vtb_sprite_ydiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtb_sprite_ydiv___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("C:/Users/meath/OneDrive/Documents/Sega System 24/.codex-mister-build/opt-baseline-ydiv\\tb_sprite_ydiv.sv", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtb_sprite_ydiv___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_sprite_ydiv___024root___eval_debug_assertions(Vtb_sprite_ydiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sprite_ydiv___024root___eval_debug_assertions\n"); );
    Vtb_sprite_ydiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.dividend & 0xfffc0000U)))) {
        Verilated::overWidthError("dividend");
    }
    if (VL_UNLIKELY(((vlSelfRef.divisor & 0xfe00U)))) {
        Verilated::overWidthError("divisor");
    }
}
#endif  // VL_DEBUG
