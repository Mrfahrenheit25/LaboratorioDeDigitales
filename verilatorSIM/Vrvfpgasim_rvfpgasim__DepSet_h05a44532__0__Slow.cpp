// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_rvfpgasim.h"

VL_ATTR_COLD void Vrvfpgasim_rvfpgasim___eval_initial__TOP__rvfpgasim(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___eval_initial__TOP__rvfpgasim\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h698b2181__0;
    VlWide<4>/*127:0*/ __Vtemp_ha54bf069__0;
    VlWide<4>/*127:0*/ __Vtemp_hb7eb7069__0;
    // Body
    __Vtemp_h698b2181__0[0U] = 0x61626c65U;
    __Vtemp_h698b2181__0[1U] = 0x695f656eU;
    __Vtemp_h698b2181__0[2U] = 0x675f7670U;
    __Vtemp_h698b2181__0[3U] = 0x6a7461U;
    if (VL_UNLIKELY((0U != VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(4, __Vtemp_h698b2181__0))))) {
        VL_WRITEF("JTAG VPI enabled. Not loading RAM\n");
    } else {
        __Vtemp_ha54bf069__0[0U] = 0x653d2573U;
        __Vtemp_ha54bf069__0[1U] = 0x5f66696cU;
        __Vtemp_ha54bf069__0[2U] = 0x696e6974U;
        __Vtemp_ha54bf069__0[3U] = 0x72616d5fU;
        if (VL_UNLIKELY(VL_VALUEPLUSARGS_INW(1024, 
                                             VL_CVT_PACK_STR_NW(4, __Vtemp_ha54bf069__0), 
                                             vlSelf->__PVT__ram_init_file))) {
            VL_WRITEF("Loading RAM contents from %0s\n",
                      1024,vlSelf->__PVT__ram_init_file.data());
            VL_READMEM_N(true, 64, 8192, 0, VL_CVT_PACK_STR_NW(32, vlSelf->__PVT__ram_init_file)
                         ,  &(vlSymsp->TOP__rvfpgasim__ram__ram.mem)
                         , 0, ~0ULL);
        }
    }
    __Vtemp_hb7eb7069__0[0U] = 0x653d2573U;
    __Vtemp_hb7eb7069__0[1U] = 0x5f66696cU;
    __Vtemp_hb7eb7069__0[2U] = 0x696e6974U;
    __Vtemp_hb7eb7069__0[3U] = 0x726f6d5fU;
    if (VL_UNLIKELY(VL_VALUEPLUSARGS_INW(1024, VL_CVT_PACK_STR_NW(4, __Vtemp_hb7eb7069__0), 
                                         vlSelf->__PVT__rom_init_file))) {
        VL_WRITEF("Loading ROM contents from %0s\n",
                  1024,vlSelf->__PVT__rom_init_file.data());
        VL_READMEM_N(true, 64, 512, 0, VL_CVT_PACK_STR_NW(32, vlSelf->__PVT__rom_init_file)
                     ,  &(vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem)
                     , 0, ~0ULL);
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem[0U] = 0x67ULL;
    }
}

extern const VlUnpacked<CData/*3:0*/, 32> Vrvfpgasim__ConstPool__TABLE_h34f31d2e_0;

VL_ATTR_COLD void Vrvfpgasim_rvfpgasim___stl_sequent__TOP__rvfpgasim__0(Vrvfpgasim_rvfpgasim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrvfpgasim_rvfpgasim___stl_sequent__TOP__rvfpgasim__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->__Vtriunconn7 = ((IData)(((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__rptc_ctrl) 
                                          >> 3U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellout__ptc_b__pwm_pad_o))) 
                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__rptc_ctrl) 
                                   >> 3U)));
    vlSelf->__Vtriunconn9 = ((IData)(((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__rptc_ctrl) 
                                          >> 3U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellout__ptc_g__pwm_pad_o))) 
                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__rptc_ctrl) 
                                   >> 3U)));
    vlSelf->__Vtriunconn11 = ((IData)(((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__rptc_ctrl) 
                                           >> 3U)) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellout__ptc_r__pwm_pad_o))) 
                              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__rptc_ctrl) 
                                    >> 3U)));
    vlSelf->__PVT__i_sw = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__en_per) 
                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__o_per) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__en_per))) 
                                  >> 1U) | (IData)(vlSymsp->TOP.i_sw0)));
    __Vtableidx1 = (((IData)(vlSymsp->TOP.i_jtag_tms) 
                     << 4U) | (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state));
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate 
        = Vrvfpgasim__ConstPool__TABLE_h34f31d2e_0[__Vtableidx1];
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en 
        = (((0x11U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)) 
            << 1U) | (0x10U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir)));
    vlSelf->__Vcellinp__dmi_wrapper__core_rst_n = (1U 
                                                   & (~ (IData)(vlSymsp->TOP.rst)));
    vlSelf->__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en 
        = (IData)((2U == (6U & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren))));
    vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
        = vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr;
    if ((4U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = ((2U & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))
                ? (((QData)((IData)(vlSymsp->TOP.i_jtag_tdi)) 
                    << 0x28U) | (0xffffffffffULL & 
                                 (vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                  >> 1U))) : ((1U & 
                                               ((IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en) 
                                                | (1U 
                                                   == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir))))
                                               ? (((QData)((IData)(vlSymsp->TOP.i_jtag_tdi)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                                                >> 1U))))))
                                               : (QData)((IData)(vlSymsp->TOP.i_jtag_tdi))));
    } else if ((3U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = (0x1fffffffffeULL & vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr);
        if ((1U & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
            vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 0x71ULL;
        } else if ((2U & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en))) {
            vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
                = ((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__dmi_reg_rdata)) 
                   << 2U);
        } else if ((1U == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir))) {
            vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 1ULL;
        }
    } else if ((0xbU == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr 
            = (((QData)((IData)(vlSymsp->TOP.i_jtag_tdi)) 
                << 4U) | (QData)((IData)((0xfU & (IData)(
                                                         (vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr 
                                                          >> 1U))))));
    } else if ((0xaU == (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))) {
        vlSelf->__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr = 1ULL;
    }
    vlSelf->__PVT__dmi_reg_en = ((IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en) 
                                 | (2U == (6U & (IData)(vlSelf->__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden))));
}
