// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrvfpgasim__Syms.h"
#include "Vrvfpgasim_wb_mem_wrapper__M1000.h"

VL_INLINE_OPT void Vrvfpgasim_wb_mem_wrapper__M1000___nba_sequent__TOP__rvfpgasim__swervolf__bootrom__0(Vrvfpgasim_wb_mem_wrapper__M1000* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrvfpgasim_wb_mem_wrapper__M1000___nba_sequent__TOP__rvfpgasim__swervolf__bootrom__0\n"); );
    // Body
    vlSelf->__PVT__o_wb_ack = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                 >> 0xbU) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb)) 
                               & (~ (IData)(vlSelf->__PVT__o_wb_ack)));
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)))) {
        vlSelf->__PVT__o_wb_ack = 0U;
    }
}

VL_INLINE_OPT void Vrvfpgasim_wb_mem_wrapper__M1000___nba_sequent__TOP__rvfpgasim__swervolf__bootrom__1(Vrvfpgasim_wb_mem_wrapper__M1000* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrvfpgasim_wb_mem_wrapper__M1000___nba_sequent__TOP__rvfpgasim__swervolf__bootrom__1\n"); );
    // Body
    vlSelf->__VdfgTmp_h4716a6a3__0 = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                       >> 0xbU) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we)));
}
