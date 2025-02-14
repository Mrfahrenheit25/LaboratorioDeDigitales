// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrvfpgasim__Syms.h"


extern const VlWide<10>/*319:0*/ Vrvfpgasim__ConstPool__CONST_h1f339c14_0;
extern const VlWide<12>/*383:0*/ Vrvfpgasim__ConstPool__CONST_had8d8c88_0;
extern const VlWide<12>/*383:0*/ Vrvfpgasim__ConstPool__CONST_he7ad2b3d_0;

VL_ATTR_COLD void Vrvfpgasim___024root__trace_full_sub_3(Vrvfpgasim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvfpgasim___024root__trace_full_sub_3\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<12>/*383:0*/ __Vtemp_ha8ea3f06__0;
    VlWide<12>/*383:0*/ __Vtemp_h02dc55ff__0;
    VlWide<8>/*255:0*/ __Vtemp_hac90d32b__0;
    VlWide<12>/*383:0*/ __Vtemp_ha514ca69__0;
    VlWide<6>/*191:0*/ __Vtemp_h35377cc2__0;
    VlWide<6>/*191:0*/ __Vtemp_h7ef35fdf__0;
    VlWide<6>/*191:0*/ __Vtemp_h52b39430__0;
    VlWide<3>/*95:0*/ __Vtemp_h5c0dd0b1__0;
    // Body
    bufp->fullCData(oldp+10182,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__rp),2);
    bufp->fullCData(oldp+10183,((3U & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__rp)))),2);
    bufp->fullCData(oldp+10184,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__rp),2);
    bufp->fullCData(oldp+10185,((3U & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__rp)))),2);
    bufp->fullBit(oldp+10186,((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                        >> 3U)))));
    bufp->fullSData(oldp+10187,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl),9);
    bufp->fullBit(oldp+10188,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__eclk_gate));
    bufp->fullBit(oldp+10189,(((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                   >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__eclk_gate))));
    bufp->fullBit(oldp+10190,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask));
    bufp->fullBit(oldp+10191,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir_read));
    bufp->fullBit(oldp+10192,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__msr_read));
    bufp->fullBit(oldp+10193,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__fifo_read));
    bufp->fullBit(oldp+10194,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__fifo_write));
    bufp->fullBit(oldp+10195,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+10196,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+10197,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+10198,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+10199,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ti_int_pnd));
    bufp->fullCData(oldp+10200,((0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                  >> 0x22U)))),7);
    bufp->fullIData(oldp+10201,((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                         >> 2U))),32);
    bufp->fullBit(oldp+10202,(((4U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state)) 
                               | (0xbU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state)))));
    bufp->fullBit(oldp+10203,((1U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))));
    bufp->fullBit(oldp+10204,((1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 1U)))));
    bufp->fullQData(oldp+10205,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr),41);
    bufp->fullQData(oldp+10207,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr),41);
    bufp->fullCData(oldp+10209,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state),4);
    bufp->fullBit(oldp+10210,((0U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
    bufp->fullBit(oldp+10211,((4U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
    bufp->fullBit(oldp+10212,((6U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
    bufp->fullBit(oldp+10213,((8U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
    bufp->fullBit(oldp+10214,((3U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
    bufp->fullBit(oldp+10215,((0xbU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
    bufp->fullBit(oldp+10216,((0xdU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
    bufp->fullBit(oldp+10217,((0xfU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
    bufp->fullBit(oldp+10218,((0xaU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
    bufp->fullBit(oldp+10219,((IData)((0x80000ULL == 
                                       (0x3fc080000ULL 
                                        & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)))));
    bufp->fullBit(oldp+10220,((IData)((0x100000ULL 
                                       == (0x3fc100000ULL 
                                           & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)))));
    bufp->fullCData(oldp+10221,((3U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                               >> 2U)))),2);
    bufp->fullSData(oldp+10222,(((0xff00U & ((IData)(
                                                     (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                      >> 0x1aU)) 
                                             << 8U)) 
                                 | ((0x78U & ((IData)(
                                                      (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                       >> 0x15U)) 
                                              << 3U)) 
                                    | (((IData)((0x100000ULL 
                                                 == 
                                                 (0x3fc100000ULL 
                                                  & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                                        << 2U) | (((IData)(
                                                           (0x80000ULL 
                                                            == 
                                                            (0x3fc080000ULL 
                                                             & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                >> 0x12U)))))))),16);
    bufp->fullBit(oldp+10223,((1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 2U)))));
    bufp->fullCData(oldp+10224,(((0xcU & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                   >> 0x20U)) 
                                          << 2U)) | 
                                 ((2U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                  >> 0x1eU)) 
                                         << 1U)) | 
                                  (1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 3U)))))),4);
    bufp->fullCData(oldp+10225,(((0x10U & ((IData)(
                                                   (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 0x15U)) 
                                           << 4U)) 
                                 | ((8U & ((~ (IData)(
                                                      (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                       >> 0x14U))) 
                                           << 3U)) 
                                    | (7U & (IData)(
                                                    (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                     >> 0x11U)))))),5);
    bufp->fullBit(oldp+10226,((1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 0x16U)))));
    bufp->fullBit(oldp+10227,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                     >> 5U))));
    bufp->fullBit(oldp+10228,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                     >> 4U))));
    bufp->fullBit(oldp+10229,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                     >> 6U))));
    bufp->fullBit(oldp+10230,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_en));
    bufp->fullBit(oldp+10231,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden));
    bufp->fullCData(oldp+10232,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_haf41de50__0) 
                                  << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hcdb0d4b4__0) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h37e19409__0) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hceec723e__0))))),4);
    bufp->fullBit(oldp+10233,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_noredir_wb));
    bufp->fullBit(oldp+10234,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__core_dbg_cmd_done));
    bufp->fullBit(oldp+10235,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 0xfU))));
    bufp->fullBit(oldp+10236,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout))));
    bufp->fullBit(oldp+10237,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 0x11U))));
    bufp->fullBit(oldp+10238,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 0x10U))));
    bufp->fullBit(oldp+10239,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)) 
                                     & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                        >> 0x11U)))));
    bufp->fullBit(oldp+10240,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 0xeU))));
    bufp->fullBit(oldp+10241,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_flush_pause_wb));
    bufp->fullBit(oldp+10242,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal));
    bufp->fullBit(oldp+10243,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write));
    bufp->fullBit(oldp+10244,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_mp_e4));
    bufp->fullBit(oldp+10245,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_mp_e4));
    bufp->fullBit(oldp+10246,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_npc_wb));
    bufp->fullBit(oldp+10247,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 3U))));
    bufp->fullBit(oldp+10248,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__perfcnt_halted));
    bufp->fullBit(oldp+10249,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dcsr_wb));
    bufp->fullBit(oldp+10250,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dpc_wb));
    bufp->fullIData(oldp+10251,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tdata_wrdata_wb),28);
    bufp->fullBit(oldp+10252,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4) 
                                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4) 
                                     | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5d31a63a__0) 
                                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)))))));
    bufp->fullBit(oldp+10253,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns));
    bufp->fullBit(oldp+10254,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 4U))));
    bufp->fullBit(oldp+10255,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 5U))));
    bufp->fullBit(oldp+10256,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pause_expired_e4));
    bufp->fullBit(oldp+10257,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad0_wb));
    bufp->fullBit(oldp+10258,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad1_wb));
    bufp->fullBit(oldp+10259,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_e4));
    bufp->fullBit(oldp+10260,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_e4));
    bufp->fullBit(oldp+10261,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ecall_e4));
    bufp->fullBit(oldp+10262,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4));
    bufp->fullBit(oldp+10263,(((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                   >> 0x11U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))));
    bufp->fullBit(oldp+10264,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4));
    bufp->fullBit(oldp+10265,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4));
    bufp->fullBit(oldp+10266,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__fence_i_e4));
    bufp->fullBit(oldp+10267,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ic_perr_e4));
    bufp->fullBit(oldp+10268,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__iccm_sbecc_e4));
    bufp->fullBit(oldp+10269,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready));
    bufp->fullBit(oldp+10270,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready));
    bufp->fullBit(oldp+10271,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready));
    bufp->fullBit(oldp+10272,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready));
    bufp->fullBit(oldp+10273,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready));
    bufp->fullBit(oldp+10274,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible));
    bufp->fullBit(oldp+10275,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible));
    bufp->fullBit(oldp+10276,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4));
    bufp->fullIData(oldp+10277,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__npwbc_ff__din),31);
    bufp->fullBit(oldp+10278,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4));
    bufp->fullBit(oldp+10279,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4));
    bufp->fullBit(oldp+10280,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4));
    bufp->fullBit(oldp+10281,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_rfnpc_dc4));
    bufp->fullBit(oldp+10282,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4));
    bufp->fullBit(oldp+10283,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4));
    bufp->fullBit(oldp+10284,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_dc4));
    bufp->fullBit(oldp+10285,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_dc4));
    bufp->fullBit(oldp+10286,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4));
    bufp->fullBit(oldp+10287,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4));
    bufp->fullBit(oldp+10288,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4_raw));
    bufp->fullBit(oldp+10289,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt));
    bufp->fullBit(oldp+10290,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt));
    bufp->fullBit(oldp+10291,((IData)(((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                           >> 0x11U)) 
                                       & (0U != (0xcU 
                                                 & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout))))));
    bufp->fullBit(oldp+10292,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 2U))));
    bufp->fullBit(oldp+10293,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 0x14U))));
    bufp->fullBit(oldp+10294,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__halt_taken));
    bufp->fullBit(oldp+10295,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 0x15U))));
    bufp->fullBit(oldp+10296,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 0x13U))));
    bufp->fullBit(oldp+10297,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 0x12U))));
    bufp->fullBit(oldp+10298,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 0xdU))));
    bufp->fullBit(oldp+10299,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 0xbU))));
    bufp->fullBit(oldp+10300,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 0xaU))));
    bufp->fullBit(oldp+10301,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 1U))));
    bufp->fullBit(oldp+10302,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4));
    bufp->fullBit(oldp+10303,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4));
    bufp->fullBit(oldp+10304,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_e4));
    bufp->fullBit(oldp+10305,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_hit_e4));
    bufp->fullCData(oldp+10306,((0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                         >> 6U))),4);
    bufp->fullBit(oldp+10307,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1));
    bufp->fullBit(oldp+10308,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_e4));
    bufp->fullBit(oldp+10309,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 0xcU))));
    bufp->fullBit(oldp+10310,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb));
    bufp->fullBit(oldp+10311,((1U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)));
    bufp->fullBit(oldp+10312,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns));
    bufp->fullBit(oldp+10313,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                     >> 3U))));
    bufp->fullBit(oldp+10314,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+10315,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                     >> 9U))));
    bufp->fullBit(oldp+10316,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                     >> 8U))));
    bufp->fullBit(oldp+10317,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns));
    bufp->fullBit(oldp+10318,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                     >> 7U))));
    bufp->fullBit(oldp+10319,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                     >> 2U))));
    bufp->fullBit(oldp+10320,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                     >> 1U))));
    bufp->fullBit(oldp+10321,((IData)((0x100U == (0x108U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout))))));
    bufp->fullBit(oldp+10322,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in));
    bufp->fullBit(oldp+10323,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_exu_npc_e4));
    bufp->fullBit(oldp+10324,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_flush_npc_e4));
    bufp->fullBit(oldp+10325,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_i0_npc_e4));
    bufp->fullBit(oldp+10326,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_exu_npc_e4)) 
                                     & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_flush_npc_e4) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_i0_npc_e4)))))));
    bufp->fullBit(oldp+10327,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc0_valid_e4));
    bufp->fullBit(oldp+10328,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc1_valid_e4));
    bufp->fullBit(oldp+10329,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en1));
    bufp->fullBit(oldp+10330,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en1));
    bufp->fullBit(oldp+10331,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en1));
    bufp->fullBit(oldp+10332,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en1));
    bufp->fullCData(oldp+10333,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual),4);
    bufp->fullCData(oldp+10334,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual),4);
    bufp->fullIData(oldp+10335,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout),22);
    bufp->fullSData(oldp+10336,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout),11);
    bufp->fullBit(oldp+10337,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc0_valid_e4) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc1_valid_e4))));
    bufp->fullBit(oldp+10338,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1));
    bufp->fullIData(oldp+10339,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellinp__faddrf1_ff__din),31);
    bufp->fullIData(oldp+10340,((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellinp__faddrf1_ff__din 
                                 << 1U)),32);
    bufp->fullBit(oldp+10341,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall));
    bufp->fullBit(oldp+10342,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_alu_decode_d));
    bufp->fullBit(oldp+10343,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_alu_decode_d));
    bufp->fullIData(oldp+10344,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p),19);
    bufp->fullBit(oldp+10345,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_read));
    bufp->fullBit(oldp+10346,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_lsu_decode_d));
    bufp->fullBit(oldp+10347,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req));
    bufp->fullWData(oldp+10348,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d),74);
    bufp->fullWData(oldp+10351,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d),74);
    bufp->fullBit(oldp+10354,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dec_tlu_stall_dma_ff__DOT__dffs__DOT____Vcellinp__dffs__din));
    bufp->fullBit(oldp+10355,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_nonblock_load_freeze_dc2));
    bufp->fullCData(oldp+10356,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded),2);
    bufp->fullBit(oldp+10357,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall));
    bufp->fullBit(oldp+10358,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d));
    bufp->fullBit(oldp+10359,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d));
    bufp->fullBit(oldp+10360,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__lsu_decode_d));
    bufp->fullBit(oldp+10361,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_presync));
    bufp->fullBit(oldp+10362,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_postsync));
    bufp->fullBit(oldp+10363,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT____Vcellinp__valid_e1_ff__din));
    bufp->fullBit(oldp+10364,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellinp__miscf__en));
    bufp->fullBit(oldp+10365,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__shift_illegal));
    bufp->fullBit(oldp+10366,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d));
    bufp->fullBit(oldp+10367,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_div_decode_d));
    bufp->fullCData(oldp+10368,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h8835561c__0) 
                                  << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_hab9cd470__0) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h1ba61645__0) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h9e7ab066__0))))),4);
    bufp->fullBit(oldp+10369,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en));
    bufp->fullBit(oldp+10370,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_data_en));
    bufp->fullBit(oldp+10371,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e1_ctl_en));
    bufp->fullBit(oldp+10372,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e1_data_en));
    bufp->fullBit(oldp+10373,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i));
    bufp->fullBit(oldp+10374,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence));
    bufp->fullBit(oldp+10375,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_block_d));
    bufp->fullBit(oldp+10376,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_block_d));
    bufp->fullCData(oldp+10377,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype),4);
    bufp->fullCData(oldp+10378,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype),4);
    bufp->fullBit(oldp+10379,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_raw));
    bufp->fullWData(oldp+10380,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellinp__e1ff__din),67);
    bufp->fullBit(oldp+10383,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3));
    bufp->fullBit(oldp+10384,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3));
    bufp->fullBit(oldp+10385,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2));
    bufp->fullBit(oldp+10386,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2));
    bufp->fullBit(oldp+10387,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1));
    bufp->fullBit(oldp+10388,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1));
    bufp->fullBit(oldp+10389,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift2));
    bufp->fullBit(oldp+10390,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift1));
    bufp->fullBit(oldp+10391,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d)))));
    bufp->fullBit(oldp+10392,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0));
    bufp->fullBit(oldp+10393,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1));
    bufp->fullBit(oldp+10394,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2));
    bufp->fullBit(oldp+10395,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0));
    bufp->fullBit(oldp+10396,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1));
    bufp->fullCData(oldp+10397,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval),4);
    bufp->fullBit(oldp+10398,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT____Vcellinp__bp1ff__en));
    bufp->fullBit(oldp+10399,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT____Vcellinp__genblk2__DOT__cinst2ff__en));
    bufp->fullBit(oldp+10400,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT____Vcellinp__genblk2__DOT__cinst3ff__en));
    bufp->fullCData(oldp+10401,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_done_bus_dff__en) 
                                  << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_done_bus_dff__en) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_done_bus_dff__en) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_done_bus_dff__en))))),4);
    bufp->fullBit(oldp+10402,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_done_bus_dff__en));
    bufp->fullBit(oldp+10403,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_done_bus_dff__en));
    bufp->fullBit(oldp+10404,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_done_bus_dff__en));
    bufp->fullBit(oldp+10405,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_done_bus_dff__en));
    bufp->fullIData(oldp+10406,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs1_d),32);
    bufp->fullIData(oldp+10407,(((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_read))))) 
                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs1_d)),32);
    bufp->fullWData(oldp+10408,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d),74);
    bufp->fullWData(oldp+10411,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d),74);
    bufp->fullCData(oldp+10414,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_alu_decode_d) 
                                  << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_alu_decode_d))),2);
    bufp->fullBit(oldp+10415,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellinp__aff__en));
    bufp->fullBit(oldp+10416,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellinp__aff__en));
    bufp->fullBit(oldp+10417,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__mul_c1_e1_clken));
    bufp->fullBit(oldp+10418,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc1_clken));
    bufp->fullBit(oldp+10419,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc1_clken));
    bufp->fullBit(oldp+10420,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc1_clken));
    bufp->fullBit(oldp+10421,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_free_c1_clken));
    bufp->fullIData(oldp+10422,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in),19);
    bufp->fullIData(oldp+10423,((0x3ffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in 
                                             >> 1U))),18);
    bufp->fullBit(oldp+10424,((1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in)));
    bufp->fullIData(oldp+10425,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr),32);
    bufp->fullCData(oldp+10426,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size),3);
    bufp->fullCData(oldp+10427,((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                 >> 0x1cU)),4);
    bufp->fullBit(oldp+10428,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_awvalid_ff__DOT____Vcellinp__dffs__din));
    bufp->fullBit(oldp+10429,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_arvalid_ff__DOT____Vcellinp__dffs__din));
    bufp->fullQData(oldp+10430,((((- (QData)((IData)(
                                                     (0U 
                                                      == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                  & (((QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                      << 0x38U) | (
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                       << 0x28U) 
                                                      | (((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                          << 0x20U) 
                                                         | (((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                             << 0x18U) 
                                                            | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                << 0x10U) 
                                                               | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                   << 8U) 
                                                                  | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))))))))))) 
                                 | (((- (QData)((IData)(
                                                        (1U 
                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                     & (((QData)((IData)(
                                                         (0xffffU 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                            << 0x20U) 
                                           | (((QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))))))) 
                                    | (((- (QData)((IData)(
                                                           (2U 
                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                        & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                       | ((- (QData)((IData)(
                                                             (3U 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))),64);
    bufp->fullCData(oldp+10432,((0xffU & (((- (IData)(
                                                      (0U 
                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size)))) 
                                           & ((IData)(1U) 
                                              << (7U 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr))) 
                                          | (((- (IData)(
                                                         (1U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size)))) 
                                              & ((IData)(3U) 
                                                 << 
                                                 (6U 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr))) 
                                             | (((- (IData)(
                                                            (2U 
                                                             == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size)))) 
                                                 & ((IData)(0xfU) 
                                                    << 
                                                    (4U 
                                                     & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr))) 
                                                | (- (IData)(
                                                             (3U 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))))))),8);
    bufp->fullBit(oldp+10433,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_wvalid_ff__DOT____Vcellinp__dffs__din));
    bufp->fullBit(oldp+10434,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dbg_dma_bubble_ff__DOT__dffs__DOT____Vcellinp__dffs__din));
    bufp->fullBit(oldp+10435,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1));
    bufp->fullBit(oldp+10436,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_arvalid));
    bufp->fullBit(oldp+10437,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_awvalid));
    bufp->fullBit(oldp+10438,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_wvalid));
    bufp->fullQData(oldp+10439,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata),64);
    bufp->fullBit(oldp+10441,(vlSymsp->TOP__rvfpgasim.__Vtriunconn7));
    bufp->fullBit(oldp+10442,(vlSymsp->TOP__rvfpgasim.__Vtriunconn9));
    bufp->fullBit(oldp+10443,(vlSymsp->TOP__rvfpgasim.__Vtriunconn11));
    bufp->fullCData(oldp+10444,((((IData)(vlSymsp->TOP__rvfpgasim.__Vtriunconn11) 
                                  << 2U) | (((IData)(vlSymsp->TOP__rvfpgasim.__Vtriunconn9) 
                                             << 1U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim.__Vtriunconn7)))),3);
    bufp->fullBit(oldp+10445,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wffull));
    bufp->fullBit(oldp+10446,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfempty));
    bufp->fullBit(oldp+10447,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wffull));
    bufp->fullBit(oldp+10448,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfempty));
    bufp->fullSData(oldp+10449,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr),14);
    bufp->fullBit(oldp+10450,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_awready));
    bufp->fullBit(oldp+10451,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_arready));
    bufp->fullBit(oldp+10452,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_wready));
    bufp->fullBit(oldp+10453,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_bvalid));
    bufp->fullQData(oldp+10454,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rdata),64);
    bufp->fullBit(oldp+10456,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rvalid));
    bufp->fullIData(oldp+10457,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                 << 2U)),32);
    bufp->fullIData(oldp+10458,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat),32);
    bufp->fullCData(oldp+10459,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel),4);
    bufp->fullBit(oldp+10460,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we));
    bufp->fullBit(oldp+10461,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_cyc));
    bufp->fullBit(oldp+10462,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb));
    bufp->fullBit(oldp+10463,(((0xbU >= (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)) 
                               & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_spi_accel_rty) 
                                    << 8U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_ptc_rty) 
                                               << 7U) 
                                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_ptc_rty_B) 
                                                  << 6U) 
                                                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_ptc_rty_G) 
                                                     << 5U) 
                                                    | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_ptc_rty_R) 
                                                        << 4U) 
                                                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_rty) 
                                                           << 3U) 
                                                          | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_rty2) 
                                                              << 2U) 
                                                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_per_rty_i) 
                                                                << 1U)))))))) 
                                  >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)))));
    bufp->fullBit(oldp+10464,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                     >> 0xbU))));
    bufp->fullBit(oldp+10465,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                     >> 9U))));
    bufp->fullBit(oldp+10466,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                     >> 0xaU))));
    bufp->fullBit(oldp+10467,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o))));
    bufp->fullBit(oldp+10468,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                     >> 3U))));
    bufp->fullBit(oldp+10469,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                     >> 2U))));
    bufp->fullBit(oldp+10470,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                     >> 7U))));
    bufp->fullBit(oldp+10471,(vlSymsp->TOP__rvfpgasim__swervolf.timer_ptc__DOT____VdfgTmp_h61526ae5__0));
    bufp->fullBit(oldp+10472,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                     >> 6U))));
    bufp->fullBit(oldp+10473,(vlSymsp->TOP__rvfpgasim__swervolf.ptc_b__DOT____VdfgTmp_h61526ae5__0));
    bufp->fullBit(oldp+10474,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                     >> 5U))));
    bufp->fullBit(oldp+10475,(vlSymsp->TOP__rvfpgasim__swervolf.ptc_g__DOT____VdfgTmp_h61526ae5__0));
    bufp->fullBit(oldp+10476,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                     >> 4U))));
    bufp->fullBit(oldp+10477,(vlSymsp->TOP__rvfpgasim__swervolf.ptc_r__DOT____VdfgTmp_h61526ae5__0));
    bufp->fullBit(oldp+10478,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                     >> 8U))));
    bufp->fullCData(oldp+10479,((0x3cU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          << 2U))),6);
    bufp->fullBit(oldp+10480,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                     >> 1U))));
    bufp->fullBit(oldp+10481,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__hi_32b_w));
    bufp->fullBit(oldp+10482,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__arbiter));
    bufp->fullIData(oldp+10483,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__wb_rdt_low),32);
    bufp->fullCData(oldp+10484,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__cs),4);
    bufp->fullCData(oldp+10485,((0x3cU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          << 2U))),8);
    bufp->fullBit(oldp+10486,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module__DOT____VdfgTmp_h6152756d__0) 
                               & (1U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10487,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module__DOT____VdfgTmp_h6152756d__0) 
                               & (2U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10488,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module__DOT____VdfgTmp_h6152756d__0) 
                               & (3U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10489,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module__DOT____VdfgTmp_h6152756d__0) 
                               & (4U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10490,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module__DOT____VdfgTmp_h6152756d__0) 
                               & (5U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10491,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module__DOT____VdfgTmp_h6152756d__0) 
                               & (6U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10492,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module__DOT____VdfgTmp_h6152756d__0) 
                               & (7U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10493,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module__DOT____VdfgTmp_h6152756d__0) 
                               & (8U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10494,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module__DOT____VdfgTmp_h6152756d__0) 
                               & (9U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10495,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module2__DOT____VdfgTmp_h6152756d__0) 
                               & (1U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10496,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module2__DOT____VdfgTmp_h6152756d__0) 
                               & (2U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10497,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module2__DOT____VdfgTmp_h6152756d__0) 
                               & (3U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10498,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module2__DOT____VdfgTmp_h6152756d__0) 
                               & (4U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10499,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module2__DOT____VdfgTmp_h6152756d__0) 
                               & (5U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10500,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module2__DOT____VdfgTmp_h6152756d__0) 
                               & (6U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10501,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module2__DOT____VdfgTmp_h6152756d__0) 
                               & (7U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10502,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module2__DOT____VdfgTmp_h6152756d__0) 
                               & (8U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10503,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module2__DOT____VdfgTmp_h6152756d__0) 
                               & (9U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10504,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__per0__DOT__reg_we));
    bufp->fullSData(oldp+10505,((0x3cU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                          << 2U))),16);
    bufp->fullBit(oldp+10506,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_b__DOT____VdfgTmp_h61526ae5__0) 
                               & (0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10507,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_b__DOT____VdfgTmp_h61526ae5__0) 
                               & (1U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10508,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_b__DOT____VdfgTmp_h61526ae5__0) 
                               & (2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10509,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_b__DOT____VdfgTmp_h61526ae5__0) 
                               & (3U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10510,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_g__DOT____VdfgTmp_h61526ae5__0) 
                               & (0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10511,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_g__DOT____VdfgTmp_h61526ae5__0) 
                               & (1U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10512,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_g__DOT____VdfgTmp_h61526ae5__0) 
                               & (2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10513,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_g__DOT____VdfgTmp_h61526ae5__0) 
                               & (3U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10514,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_r__DOT____VdfgTmp_h61526ae5__0) 
                               & (0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10515,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_r__DOT____VdfgTmp_h61526ae5__0) 
                               & (1U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10516,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_r__DOT____VdfgTmp_h61526ae5__0) 
                               & (2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10517,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_r__DOT____VdfgTmp_h61526ae5__0) 
                               & (3U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullCData(oldp+10518,(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi2__adr_i),3);
    bufp->fullCData(oldp+10519,((0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat)),8);
    bufp->fullCData(oldp+10520,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr),8);
    bufp->fullBit(oldp+10521,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfre));
    bufp->fullBit(oldp+10522,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfre));
    bufp->fullBit(oldp+10523,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfwe));
    bufp->fullBit(oldp+10524,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wb_acc));
    bufp->fullBit(oldp+10525,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wb_wr));
    bufp->fullBit(oldp+10526,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr) 
                                     >> 7U))));
    bufp->fullBit(oldp+10527,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr) 
                                     >> 6U))));
    bufp->fullBit(oldp+10528,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr) 
                                     >> 5U))));
    bufp->fullBit(oldp+10529,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr) 
                                     >> 4U))));
    bufp->fullBit(oldp+10530,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr) 
                                     >> 3U))));
    bufp->fullBit(oldp+10531,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr) 
                                     >> 2U))));
    bufp->fullCData(oldp+10532,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr))),2);
    bufp->fullCData(oldp+10533,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__espr),4);
    bufp->fullBit(oldp+10534,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wr_spsr));
    bufp->fullBit(oldp+10535,((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr) 
                                        >> 6U)))));
    bufp->fullCData(oldp+10536,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr),8);
    bufp->fullBit(oldp+10537,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfre));
    bufp->fullBit(oldp+10538,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfre));
    bufp->fullBit(oldp+10539,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfwe));
    bufp->fullBit(oldp+10540,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wb_acc));
    bufp->fullBit(oldp+10541,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wb_wr));
    bufp->fullBit(oldp+10542,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr) 
                                     >> 7U))));
    bufp->fullBit(oldp+10543,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr) 
                                     >> 6U))));
    bufp->fullBit(oldp+10544,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr) 
                                     >> 5U))));
    bufp->fullBit(oldp+10545,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr) 
                                     >> 4U))));
    bufp->fullBit(oldp+10546,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr) 
                                     >> 3U))));
    bufp->fullBit(oldp+10547,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr) 
                                     >> 2U))));
    bufp->fullCData(oldp+10548,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr))),2);
    bufp->fullCData(oldp+10549,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__espr),4);
    bufp->fullBit(oldp+10550,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wr_spsr));
    bufp->fullBit(oldp+10551,((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr) 
                                        >> 6U)))));
    bufp->fullBit(oldp+10552,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.timer_ptc__DOT____VdfgTmp_h61526ae5__0) 
                               & (0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10553,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.timer_ptc__DOT____VdfgTmp_h61526ae5__0) 
                               & (1U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10554,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.timer_ptc__DOT____VdfgTmp_h61526ae5__0) 
                               & (2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullBit(oldp+10555,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.timer_ptc__DOT____VdfgTmp_h61526ae5__0) 
                               & (3U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
    bufp->fullCData(oldp+10556,((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))),3);
    __Vtemp_ha8ea3f06__0[0U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                << 2U);
    __Vtemp_ha8ea3f06__0[1U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                << 2U);
    __Vtemp_ha8ea3f06__0[2U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                << 2U);
    __Vtemp_ha8ea3f06__0[3U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                << 2U);
    __Vtemp_ha8ea3f06__0[4U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                << 2U);
    __Vtemp_ha8ea3f06__0[5U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                << 2U);
    __Vtemp_ha8ea3f06__0[6U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                << 2U);
    __Vtemp_ha8ea3f06__0[7U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                << 2U);
    __Vtemp_ha8ea3f06__0[8U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                << 2U);
    __Vtemp_ha8ea3f06__0[9U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                << 2U);
    __Vtemp_ha8ea3f06__0[0xaU] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                  << 2U);
    __Vtemp_ha8ea3f06__0[0xbU] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                  << 2U);
    bufp->fullWData(oldp+10557,(__Vtemp_ha8ea3f06__0),384);
    __Vtemp_h02dc55ff__0[0U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
    __Vtemp_h02dc55ff__0[1U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
    __Vtemp_h02dc55ff__0[2U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
    __Vtemp_h02dc55ff__0[3U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
    __Vtemp_h02dc55ff__0[4U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
    __Vtemp_h02dc55ff__0[5U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
    __Vtemp_h02dc55ff__0[6U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
    __Vtemp_h02dc55ff__0[7U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
    __Vtemp_h02dc55ff__0[8U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
    __Vtemp_h02dc55ff__0[9U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
    __Vtemp_h02dc55ff__0[0xaU] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
    __Vtemp_h02dc55ff__0[0xbU] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
    bufp->fullWData(oldp+10569,(__Vtemp_h02dc55ff__0),384);
    bufp->fullQData(oldp+10581,((0xffffffffffffULL 
                                 & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel)) 
                                     << 0x2cU) | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel)) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel)) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel)) 
                                                         << 0x20U) 
                                                        | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel)) 
                                                            << 0x1cU) 
                                                           | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel)) 
                                                               << 0x18U) 
                                                              | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel)) 
                                                                  << 0x14U) 
                                                                 | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel)) 
                                                                     << 0x10U) 
                                                                    | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel)) 
                                                                        << 0xcU) 
                                                                       | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel)) 
                                                                           << 8U) 
                                                                          | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel)) 
                                                                              << 4U) 
                                                                             | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel))))))))))))))),48);
    bufp->fullSData(oldp+10583,((0xfffU & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we))))),12);
    bufp->fullSData(oldp+10584,(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o),12);
    bufp->fullSData(oldp+10585,((0xfffU & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb))))),12);
    bufp->fullCData(oldp+10586,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel),4);
    bufp->fullSData(oldp+10587,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match),12);
    bufp->fullSData(oldp+10588,((0x3ffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))),10);
    bufp->fullQData(oldp+10589,((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat)) 
                                  << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat)))),64);
    bufp->fullCData(oldp+10591,((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__VdfgTmp_h4716a6a3__0) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel)
                                    : 0U) << 4U) | 
                                 (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__VdfgTmp_h4716a6a3__0))
                                   ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel)
                                   : 0U))),8);
    bufp->fullSData(oldp+10592,((0xff8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                           << 2U))),12);
    bufp->fullSData(oldp+10593,((0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                           >> 1U))),9);
    bufp->fullBit(oldp+10594,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren));
    bufp->fullBit(oldp+10595,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren));
    bufp->fullBit(oldp+10596,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0));
    bufp->fullBit(oldp+10597,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg_wren0));
    bufp->fullBit(oldp+10598,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0));
    bufp->fullBit(oldp+10599,(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__idx_o));
    bufp->fullBit(oldp+10600,(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__idx_o));
    bufp->fullCData(oldp+10601,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error)
                                  ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__idx_o))),2);
    bufp->fullCData(oldp+10602,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error)
                                  ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__idx_o))),2);
    bufp->fullBit(oldp+10603,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_valid));
    bufp->fullBit(oldp+10604,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error));
    bufp->fullBit(oldp+10605,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_valid));
    bufp->fullBit(oldp+10606,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error));
    bufp->fullCData(oldp+10607,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__DOT__matched_rules),2);
    bufp->fullCData(oldp+10608,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__DOT__matched_rules),2);
    bufp->fullBit(oldp+10609,(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__idx_o));
    bufp->fullBit(oldp+10610,(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__idx_o));
    bufp->fullCData(oldp+10611,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error)
                                  ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__idx_o))),2);
    bufp->fullCData(oldp+10612,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error)
                                  ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__idx_o))),2);
    bufp->fullBit(oldp+10613,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_valid));
    bufp->fullBit(oldp+10614,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error));
    bufp->fullBit(oldp+10615,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_valid));
    bufp->fullBit(oldp+10616,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error));
    bufp->fullCData(oldp+10617,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__DOT__matched_rules),2);
    bufp->fullCData(oldp+10618,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__DOT__matched_rules),2);
    bufp->fullBit(oldp+10619,(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__idx_o));
    bufp->fullBit(oldp+10620,(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__idx_o));
    bufp->fullCData(oldp+10621,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error)
                                  ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__idx_o))),2);
    bufp->fullCData(oldp+10622,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error)
                                  ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__idx_o))),2);
    bufp->fullBit(oldp+10623,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_valid));
    bufp->fullBit(oldp+10624,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error));
    bufp->fullBit(oldp+10625,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_valid));
    bufp->fullBit(oldp+10626,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error));
    bufp->fullCData(oldp+10627,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__DOT__matched_rules),2);
    bufp->fullCData(oldp+10628,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__DOT__matched_rules),2);
    bufp->fullBit(oldp+10629,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dbg_in));
    bufp->fullBit(oldp+10630,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren1));
    bufp->fullBit(oldp+10631,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0));
    bufp->fullBit(oldp+10632,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid));
    bufp->fullBit(oldp+10633,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_read));
    bufp->fullBit(oldp+10634,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write));
    bufp->fullBit(oldp+10635,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_gpr));
    bufp->fullBit(oldp+10636,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_csr));
    bufp->fullCData(oldp+10637,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibvalid),4);
    bufp->fullBit(oldp+10638,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT____Vcellinp__bp0ff__en));
    bufp->fullBit(oldp+10639,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_gpr) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_csr))));
    bufp->fullCData(oldp+10640,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__en) 
                                  << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__en) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__en) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__en))))),4);
    bufp->fullCData(oldp+10641,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_valid_dff__en) 
                                  << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_valid_dff__en) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_valid_dff__en) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_valid_dff__en))))),4);
    bufp->fullCData(oldp+10642,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_bus_valid_dff__en) 
                                  << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_bus_valid_dff__en) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_bus_valid_dff__en) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_bus_valid_dff__en))))),4);
    bufp->fullCData(oldp+10643,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__en) 
                                  << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__en) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__en) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__en))))),4);
    bufp->fullCData(oldp+10644,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__din) 
                                  << 6U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__din) 
                                             << 4U) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__din) 
                                                << 2U) 
                                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__din))))),8);
    bufp->fullBit(oldp+10645,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in));
    bufp->fullIData(oldp+10646,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in),32);
    bufp->fullCData(oldp+10647,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in),3);
    bufp->fullBit(oldp+10648,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__en) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__en) 
                                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__en) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__en))))));
    bufp->fullBit(oldp+10649,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error));
    bufp->fullBit(oldp+10650,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error));
    bufp->fullBit(oldp+10651,((0xf004U == (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                           >> 0x10U))));
    bufp->fullBit(oldp+10652,((0x1e018U == (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                            >> 0xfU))));
    bufp->fullBit(oldp+10653,((0xfU == (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                        >> 0x1cU))));
    bufp->fullBit(oldp+10654,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__en));
    bufp->fullBit(oldp+10655,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_bus_valid_dff__en));
    bufp->fullBit(oldp+10656,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_valid_dff__en));
    bufp->fullBit(oldp+10657,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dccm_valid_dff__din));
    bufp->fullCData(oldp+10658,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__din),2);
    bufp->fullBit(oldp+10659,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__en));
    bufp->fullBit(oldp+10660,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__en));
    bufp->fullBit(oldp+10661,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_bus_valid_dff__en));
    bufp->fullBit(oldp+10662,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_valid_dff__en));
    bufp->fullCData(oldp+10663,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__din),2);
    bufp->fullBit(oldp+10664,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__en));
    bufp->fullBit(oldp+10665,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__en));
    bufp->fullBit(oldp+10666,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_bus_valid_dff__en));
    bufp->fullBit(oldp+10667,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_valid_dff__en));
    bufp->fullCData(oldp+10668,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__din),2);
    bufp->fullBit(oldp+10669,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__en));
    bufp->fullBit(oldp+10670,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__en));
    bufp->fullBit(oldp+10671,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_bus_valid_dff__en));
    bufp->fullBit(oldp+10672,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_valid_dff__en));
    bufp->fullCData(oldp+10673,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__din),2);
    bufp->fullBit(oldp+10674,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__en));
    bufp->fullCData(oldp+10675,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_write_ns),4);
    bufp->fullBit(oldp+10676,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__ifc_fetch_req_bf));
    bufp->fullBit(oldp+10677,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_write_ns) 
                                     >> 3U))));
    bufp->fullBit(oldp+10678,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right));
    bufp->fullBit(oldp+10679,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right2));
    bufp->fullBit(oldp+10680,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_left));
    bufp->fullBit(oldp+10681,((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellinp__fsm_ff__din))));
    bufp->fullBit(oldp+10682,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_req_f2_ns));
    bufp->fullBit(oldp+10683,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1));
    bufp->fullCData(oldp+10684,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellinp__fsm_ff__din),2);
    bufp->fullCData(oldp+10685,(((0x10U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_write_ns) 
                                           << 1U)) 
                                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_write_ns))),5);
    bufp->fullCData(oldp+10686,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__ifc_fetch_req_bf) 
                                  << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_req_f2_ns))),2);
    bufp->fullBit(oldp+10687,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_ack));
    bufp->fullBit(oldp+10688,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_err));
    bufp->fullIData(oldp+10689,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__wb_dat),32);
    bufp->fullIData(oldp+10690,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module2__DOT__wb_dat),32);
    bufp->fullCData(oldp+10691,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies),3);
    bufp->fullBit(oldp+10692,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies))));
    bufp->fullBit(oldp+10693,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies) 
                                     >> 1U))));
    bufp->fullBit(oldp+10694,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies) 
                                     >> 2U))));
    bufp->fullBit(oldp+10695,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill));
    bufp->fullBit(oldp+10696,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill));
    bufp->fullCData(oldp+10697,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies),3);
    bufp->fullBit(oldp+10698,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies))));
    bufp->fullBit(oldp+10699,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies) 
                                     >> 1U))));
    bufp->fullBit(oldp+10700,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies) 
                                     >> 2U))));
    bufp->fullBit(oldp+10701,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill));
    bufp->fullBit(oldp+10702,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill));
    bufp->fullBit(oldp+10703,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_leak_one_wb));
    bufp->fullBit(oldp+10704,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc));
    bufp->fullSData(oldp+10705,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__dcsr_ff__din),14);
    bufp->fullBit(oldp+10706,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4));
    bufp->fullCData(oldp+10707,((0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_cause_e4) 
                                          << 1U))),6);
    bufp->fullBit(oldp+10708,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int));
    bufp->fullBit(oldp+10709,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ce_int));
    bufp->fullBit(oldp+10710,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int));
    bufp->fullBit(oldp+10711,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int));
    bufp->fullBit(oldp+10712,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int));
    bufp->fullBit(oldp+10713,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi));
    bufp->fullBit(oldp+10714,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid));
    bufp->fullBit(oldp+10715,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4));
    bufp->fullCData(oldp+10716,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_cause_e4),5);
    bufp->fullBit(oldp+10717,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts));
    bufp->fullBit(oldp+10718,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_halt));
    bufp->fullBit(oldp+10719,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode));
    bufp->fullBit(oldp+10720,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted));
    bufp->fullBit(oldp+10721,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__core_empty));
    bufp->fullBit(oldp+10722,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f));
    bufp->fullBit(oldp+10723,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req));
    bufp->fullBit(oldp+10724,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns));
    bufp->fullBit(oldp+10725,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running));
    bufp->fullBit(oldp+10726,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers));
    bufp->fullBit(oldp+10727,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns));
    bufp->fullBit(oldp+10728,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted));
    bufp->fullBit(oldp+10729,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode));
    bufp->fullBit(oldp+10730,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req));
    bufp->fullBit(oldp+10731,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le));
    bufp->fullCData(oldp+10732,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu3inc_ff__din) 
                                  << 6U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu2inc_ff__din) 
                                             << 4U) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu1inc_ff__din) 
                                                << 2U) 
                                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu0inc_ff__din))))),8);
    bufp->fullCData(oldp+10733,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu0inc_ff__din),2);
    bufp->fullCData(oldp+10734,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu1inc_ff__din),2);
    bufp->fullCData(oldp+10735,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu2inc_ff__din),2);
    bufp->fullCData(oldp+10736,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu3inc_ff__din),2);
    bufp->fullBit(oldp+10737,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
    bufp->fullBit(oldp+10738,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
    bufp->fullBit(oldp+10739,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
    bufp->fullBit(oldp+10740,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
    bufp->fullBit(oldp+10741,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
    bufp->fullBit(oldp+10742,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
    bufp->fullBit(oldp+10743,(vlSelf->clk));
    bufp->fullBit(oldp+10744,(vlSelf->rst));
    bufp->fullBit(oldp+10745,(vlSelf->i_jtag_tck));
    bufp->fullBit(oldp+10746,(vlSelf->i_jtag_tms));
    bufp->fullBit(oldp+10747,(vlSelf->i_jtag_tdi));
    bufp->fullBit(oldp+10748,(vlSelf->i_jtag_trst_n));
    bufp->fullBit(oldp+10749,(vlSelf->o_jtag_tdo));
    bufp->fullBit(oldp+10750,(vlSelf->o_uart_tx));
    bufp->fullBit(oldp+10751,(vlSelf->o_gpio));
    bufp->fullBit(oldp+10752,(vlSelf->i_sw0));
    bufp->fullBit(oldp+10753,(vlSymsp->TOP__rvfpgasim.o_jtag_tdo));
    bufp->fullBit(oldp+10754,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_hard_reset));
    bufp->fullBit(oldp+10755,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__dmireset));
    bufp->fullQData(oldp+10756,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr),41);
    bufp->fullCData(oldp+10758,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate),4);
    bufp->fullCData(oldp+10759,((0xffU & (IData)(((
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Enables_Reg)))) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       (0xbfU 
                                                                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Enables_Reg)))) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(
                                                                          (0xdfU 
                                                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Enables_Reg)))) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(
                                                                             (0xefU 
                                                                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Enables_Reg)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              (0xf7fbfdfeU 
                                                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Enables_Reg) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Enables_Reg) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Enables_Reg) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Enables_Reg))))))))))) 
                                                  >> 
                                                  (0x38U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter20__DOT__i_counter__DOT__counter_q 
                                                      >> 0xeU)))))),8);
    bufp->fullIData(oldp+10760,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_dat),32);
    bufp->fullIData(oldp+10761,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_ptc_dat),32);
    bufp->fullIData(oldp+10762,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_ptc_dat_B),32);
    bufp->fullIData(oldp+10763,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_ptc_dat_G),32);
    bufp->fullIData(oldp+10764,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_ptc_dat_R),32);
    __Vtemp_hac90d32b__0[0U] = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U];
    __Vtemp_hac90d32b__0[1U] = vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U];
    __Vtemp_hac90d32b__0[2U] = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                 << 0x14U) | vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U]);
    __Vtemp_hac90d32b__0[3U] = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                 >> 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                             << 0x14U));
    __Vtemp_hac90d32b__0[4U] = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                 >> 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                             << 0x14U));
    __Vtemp_hac90d32b__0[5U] = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                 << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                           >> 0xcU));
    __Vtemp_hac90d32b__0[6U] = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                 >> 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                              << 8U));
    __Vtemp_hac90d32b__0[7U] = ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                 >> 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                              << 8U));
    bufp->fullWData(oldp+10765,(__Vtemp_hac90d32b__0),252);
    bufp->fullWData(oldp+10773,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp),84);
    bufp->fullWData(oldp+10776,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp),84);
    bufp->fullWData(oldp+10779,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp),84);
    bufp->fullBit(oldp+10782,(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_err)) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module__DOT____VdfgTmp_h6152756d__0))));
    bufp->fullBit(oldp+10783,(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_err)) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module2__DOT____VdfgTmp_h6152756d__0))));
    bufp->fullIData(oldp+10784,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__per0__DOT__PS2__DOT__keycode),32);
    bufp->fullCData(oldp+10785,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__per0__DOT__PS2__DOT__dataprev),8);
    bufp->fullIData(oldp+10786,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__rptc_cntr),32);
    bufp->fullIData(oldp+10787,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__rptc_hrc),32);
    bufp->fullIData(oldp+10788,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__rptc_lrc),32);
    bufp->fullBit(oldp+10789,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__hrc_match));
    bufp->fullBit(oldp+10790,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__lrc_match));
    bufp->fullBit(oldp+10791,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__restart));
    bufp->fullBit(oldp+10792,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__lrc_match) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__rptc_ctrl) 
                                  >> 4U))));
    bufp->fullBit(oldp+10793,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__lrc_match)))));
    bufp->fullBit(oldp+10794,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__int_match));
    bufp->fullIData(oldp+10795,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__rptc_cntr),32);
    bufp->fullIData(oldp+10796,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__rptc_hrc),32);
    bufp->fullIData(oldp+10797,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__rptc_lrc),32);
    bufp->fullBit(oldp+10798,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__hrc_match));
    bufp->fullBit(oldp+10799,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__lrc_match));
    bufp->fullBit(oldp+10800,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__restart));
    bufp->fullBit(oldp+10801,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__lrc_match) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__rptc_ctrl) 
                                  >> 4U))));
    bufp->fullBit(oldp+10802,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__lrc_match)))));
    bufp->fullBit(oldp+10803,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__int_match));
    bufp->fullIData(oldp+10804,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__rptc_cntr),32);
    bufp->fullIData(oldp+10805,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__rptc_hrc),32);
    bufp->fullIData(oldp+10806,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__rptc_lrc),32);
    bufp->fullBit(oldp+10807,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__hrc_match));
    bufp->fullBit(oldp+10808,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__lrc_match));
    bufp->fullBit(oldp+10809,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__restart));
    bufp->fullBit(oldp+10810,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__lrc_match) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__rptc_ctrl) 
                                  >> 4U))));
    bufp->fullBit(oldp+10811,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__lrc_match)))));
    bufp->fullBit(oldp+10812,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__int_match));
    bufp->fullCData(oldp+10813,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spif) 
                                  << 7U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wcol) 
                                             << 6U) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wffull) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfempty) 
                                                   << 2U) 
                                                  | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.spi__DOT__rfifo__DOT____VdfgTmp_hbf3f7ff0__0) 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__gb)) 
                                                      << 1U) 
                                                     | ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__gb)) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.spi__DOT__rfifo__DOT____VdfgTmp_hbf3f7ff0__0)))))))),8);
    bufp->fullCData(oldp+10814,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__mem
                                [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__rp]),8);
    bufp->fullBit(oldp+10815,(((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__tcnt)))) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfwe))));
    bufp->fullBit(oldp+10816,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfwe) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wffull))));
    bufp->fullCData(oldp+10817,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spif) 
                                  << 7U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wcol) 
                                             << 6U) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wffull) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfempty) 
                                                   << 2U) 
                                                  | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.spi2__DOT__rfifo__DOT____VdfgTmp_hbf3f7ff0__0) 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__gb)) 
                                                      << 1U) 
                                                     | ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__gb)) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.spi2__DOT__rfifo__DOT____VdfgTmp_hbf3f7ff0__0)))))))),8);
    bufp->fullCData(oldp+10818,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__mem
                                [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__rp]),8);
    bufp->fullBit(oldp+10819,(((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__tcnt)))) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfwe))));
    bufp->fullBit(oldp+10820,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfwe) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wffull))));
    bufp->fullCData(oldp+10821,(((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4) 
                                   ^ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4_pol)) 
                                  << 3U) | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3) 
                                              ^ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3_pol)) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi0_irq) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart_irq))))),8);
    bufp->fullBit(oldp+10822,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__core_rst_l));
    bufp->fullCData(oldp+10823,((0xffU & (- (IData)((IData)(vlSelf->clk))))),8);
    bufp->fullSData(oldp+10824,((0xffffU & (- (IData)((IData)(vlSelf->clk))))),16);
    bufp->fullCData(oldp+10825,((0xfU & (- (IData)((IData)(vlSelf->clk))))),4);
    bufp->fullBit(oldp+10826,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_halt_req));
    bufp->fullBit(oldp+10827,(((~ ((0U != ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid_en) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid))) 
                                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_validff__DOT__dffs__DOT____Vcellinp__dffs__din) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_slv_sent_q)))) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dbg_dma_bubble_ff__DOT__dffs__DOT____Vcellinp__dffs__din))));
    bufp->fullIData(oldp+10828,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg),32);
    bufp->fullIData(oldp+10829,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg),32);
    bufp->fullIData(oldp+10830,((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0))) 
                                  & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 2U))) 
                                 | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren1))) 
                                     & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtrEn)
                                         ? ((0xffU 
                                             & ((- (IData)(
                                                           (0U 
                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                & ((0x1fU 
                                                    >= 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                     << 3U))
                                                    ? 
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata 
                                                    >> 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                     << 3U))
                                                    : 0U))) 
                                            | ((0xffffU 
                                                & ((- (IData)(
                                                              (1U 
                                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                   & ((0x1fU 
                                                       >= 
                                                       (0x10U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                           << 3U)))
                                                       ? 
                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata 
                                                       >> 
                                                       (0x10U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                           << 3U)))
                                                       : 0U))) 
                                               | ((- (IData)(
                                                             (2U 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata)))
                                         : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb)) 
                                    | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2))) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata))))),32);
    bufp->fullBit(oldp+10831,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren1) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2)))));
    bufp->fullBit(oldp+10832,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0));
    bufp->fullIData(oldp+10833,((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0))) 
                                  & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 2U))) 
                                 | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1))) 
                                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_cmd_next_addr))),32);
    bufp->fullBit(oldp+10834,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1))));
    bufp->fullBit(oldp+10835,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0));
    bufp->fullCData(oldp+10836,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout) 
                                  & ((~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                     & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                        & (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en) 
                                            & ((0x16U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))) 
                                               | (0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))))) 
                                           | ((0x18U 
                                               == (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))) 
                                              | ((4U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))) 
                                                 | (5U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                >> 0x22U))))))))))
                                  ? 1U : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command) 
                                           & ((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                              & ((~ 
                                                  ((0U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                        >> 8U))) 
                                                   | (2U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                          >> 8U))))) 
                                                 | ((IData)(
                                                            ((0x200U 
                                                              == 
                                                              (0xff00U 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                             & ((3U 
                                                                 == 
                                                                 (7U 
                                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                                     >> 4U))) 
                                                                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                                   >> 6U)))) 
                                                    | (((2U 
                                                         != 
                                                         (7U 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                             >> 4U))) 
                                                        & (IData)(
                                                                  (2U 
                                                                   == 
                                                                   (0xff02U 
                                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))))) 
                                                       | (IData)(
                                                                 (4U 
                                                                  == 
                                                                  (0xff04U 
                                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)))))))))
                                           ? 2U : (
                                                   ((~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                                    & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__core_dbg_cmd_done) 
                                                        & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                             >> 5U) 
                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                               >> 0xfU)) 
                                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dbg_cmd_fail))) 
                                                       | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command) 
                                                          & (IData)(
                                                                    ((0U 
                                                                      == 
                                                                      (0xff00U 
                                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                                     & ((IData)(
                                                                                ((0x1000U 
                                                                                == 
                                                                                (0xf000U 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout) 
                                                                                >> 5U))))) 
                                                                        | (0U 
                                                                           != 
                                                                           (7U 
                                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout) 
                                                                               >> 0xdU)))))))))
                                                    ? 3U
                                                    : 
                                                   (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command) 
                                                     & ((~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                                        & (2U 
                                                           != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))))
                                                     ? 4U
                                                     : 
                                                    (((~ (IData)(
                                                                 (0U 
                                                                  != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sb_bus_error))
                                                      ? 5U
                                                      : 
                                                     (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command) 
                                                       & (IData)(
                                                                 ((0x200U 
                                                                   == 
                                                                   (0xff00U 
                                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                                  & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                                                     & ((IData)(
                                                                                ((0x10U 
                                                                                == 
                                                                                (0x70U 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg)) 
                                                                        | (IData)(
                                                                                ((0x20U 
                                                                                == 
                                                                                (0x70U 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                                                & (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg)))))))))
                                                       ? 7U
                                                       : 
                                                      ((IData)(
                                                               ((0x5800000000ULL 
                                                                 == 
                                                                 (0x1fc00000000ULL 
                                                                  & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0)))
                                                        ? 
                                                       ((~ (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                    >> 0xaU))) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout))
                                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout))))))))),3);
    bufp->fullBit(oldp+10837,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout) 
                               & ((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                  & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                     & (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en) 
                                         & ((0x16U 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))) 
                                            | (0x17U 
                                               == (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))))) 
                                        | ((0x18U == 
                                            (0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                        >> 0x22U)))) 
                                           | ((4U == 
                                               (0x7fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                           >> 0x22U)))) 
                                              | (5U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                             >> 0x22U))))))))))));
    bufp->fullBit(oldp+10838,(((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                               & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__core_dbg_cmd_done) 
                                   & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                        >> 5U) & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                  >> 0xfU)) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dbg_cmd_fail))) 
                                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command) 
                                     & (IData)(((0U 
                                                 == 
                                                 (0xff00U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                & ((IData)(
                                                           ((0x1000U 
                                                             == 
                                                             (0xf000U 
                                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout))) 
                                                            & (0U 
                                                               != 
                                                               (0x7fU 
                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout) 
                                                                   >> 5U))))) 
                                                   | (0U 
                                                      != 
                                                      (7U 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout) 
                                                          >> 0xdU)))))))))));
    bufp->fullBit(oldp+10839,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command) 
                               & ((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                  & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))))));
    bufp->fullBit(oldp+10840,(((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sb_bus_error))));
    bufp->fullBit(oldp+10841,((IData)(((0x5800000000ULL 
                                        == (0x1fc00000000ULL 
                                            & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0)))));
    bufp->fullBit(oldp+10842,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0) 
                               & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout)) 
                                  & (0x6000000000ULL 
                                     == (0x1fc00000000ULL 
                                         & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))))));
    bufp->fullBit(oldp+10843,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack_din) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack) 
                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__resumereq) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_halted))))));
    bufp->fullBit(oldp+10844,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack_din));
    bufp->fullBit(oldp+10845,((IData)(((0x4000000008ULL 
                                        == (0x1fc00000008ULL 
                                            & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0)))));
    bufp->fullBit(oldp+10846,((IData)(((0x4040000000ULL 
                                        == (0x1fc40000000ULL 
                                            & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0)))));
    bufp->fullBit(oldp+10847,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_unavail));
    bufp->fullBit(oldp+10848,((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_unavail) 
                                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_halted))))));
    bufp->fullBit(oldp+10849,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                  & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout)) 
                                     & ((IData)(((0x1000000000ULL 
                                                  == 
                                                  (0x1fc00000000ULL 
                                                   & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractauto_reg))) 
                                        | (IData)((
                                                   (0x1400000000ULL 
                                                    == 
                                                    (0x1fc00000000ULL 
                                                     & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractauto_reg) 
                                                      >> 1U)))))))));
    bufp->fullBit(oldp+10850,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren) 
                               | (IData)((((8U == (0xff08U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                           & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))))))));
    bufp->fullIData(oldp+10851,((((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                           >> 0x1aU)) 
                                  << 0x18U) | (((0x780000U 
                                                 & ((IData)(
                                                            (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                             >> 0x15U)) 
                                                    << 0x13U)) 
                                                | (((IData)(
                                                            (0x100000ULL 
                                                             == 
                                                             (0x3fc100000ULL 
                                                              & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                                                    << 0x12U) 
                                                   | (((IData)(
                                                               (0x80000ULL 
                                                                == 
                                                                (0x3fc080000ULL 
                                                                 & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                                                       << 0x11U) 
                                                      | (0x10000U 
                                                         & ((IData)(
                                                                    (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                     >> 0x12U)) 
                                                            << 0x10U))))) 
                                               | (0xffffU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren)
                                                      ? (IData)(
                                                                (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                 >> 2U))
                                                      : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_cmd_next_addr))))),32);
    bufp->fullIData(oldp+10852,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmi_reg_rdata_din),32);
    bufp->fullBit(oldp+10853,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_wren));
    bufp->fullBit(oldp+10854,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h3068a052__0) 
                               | ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                  & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                     & ((0x39U == (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))) 
                                        | ((0x3cU == 
                                            (0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                        >> 0x22U)))) 
                                           | (0x3dU 
                                              == (0x7fU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                             >> 0x22U)))))))))));
    bufp->fullBit(oldp+10855,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h3068a052__0)))));
    bufp->fullCData(oldp+10856,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din),3);
    bufp->fullBit(oldp+10857,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))));
    bufp->fullIData(oldp+10858,((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0))) 
                                  & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 2U))) 
                                 | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata)))),32);
    bufp->fullBit(oldp+10859,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg_wren0) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))));
    bufp->fullIData(oldp+10860,((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg_wren0))) 
                                  & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 2U))) 
                                 | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                    & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata 
                                               >> 0x20U))))),32);
    bufp->fullBit(oldp+10861,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1))));
    bufp->fullIData(oldp+10862,((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0))) 
                                  & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 2U))) 
                                 | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1))) 
                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg 
                                       + ((1U & (- (IData)(
                                                           (0U 
                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size))))) 
                                          | ((2U & 
                                              (- (IData)(
                                                         (1U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size))))) 
                                             | ((4U 
                                                 & (- (IData)(
                                                              (2U 
                                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size))))) 
                                                | (8U 
                                                   & (- (IData)(
                                                                (3U 
                                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size)))))))))))),32);
    bufp->fullBit(oldp+10863,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout))));
    bufp->fullBit(oldp+10864,(((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                               & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                                  & (IData)(((0xf000000000ULL 
                                              == (0x1fc00000000ULL 
                                                  & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout)))))));
    bufp->fullBit(oldp+10865,(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)) 
                               & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)))));
    bufp->fullBit(oldp+10866,((1U & (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command)) 
                                     | ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
                                        | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en) 
                                           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                               >> 8U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                 >> 0x11U))))))));
    bufp->fullBit(oldp+10867,((((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command)) 
                                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en)) 
                                | (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                  >> 8U))));
    bufp->fullCData(oldp+10868,((3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__bus_clken)
                                        ? ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                            << 0x16U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                              >> 0xaU))
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_bresp_q)))),2);
    bufp->fullCData(oldp+10869,((3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__bus_clken)
                                        ? ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                            << 0x1eU) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                              >> 2U))
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_rresp_q)))),2);
    bufp->fullCData(oldp+10870,((3U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0) 
                                        & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout)) 
                                           & (0x6000000000ULL 
                                              == (0x1fc00000000ULL 
                                                  & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))))
                                        ? (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                   >> 2U))
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractauto_reg)))),2);
    bufp->fullIData(oldp+10871,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0) 
                                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren1) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2)))
                                  ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0))) 
                                      & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 2U))) 
                                     | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren1))) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtrEn)
                                             ? ((0xffU 
                                                 & ((- (IData)(
                                                               (0U 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                    & ((0x1fU 
                                                        >= 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                         << 3U))
                                                        ? 
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata 
                                                        >> 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                         << 3U))
                                                        : 0U))) 
                                                | ((0xffffU 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                       & ((0x1fU 
                                                           >= 
                                                           (0x10U 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                               << 3U)))
                                                           ? 
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata 
                                                           >> 
                                                           (0x10U 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                               << 3U)))
                                                           : 0U))) 
                                                   | ((- (IData)(
                                                                 (2U 
                                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata)))
                                             : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb)) 
                                        | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2))) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata))))
                                  : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg)),32);
    bufp->fullIData(oldp+10872,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1))
                                  ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0))) 
                                      & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 2U))) 
                                     | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1))) 
                                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_cmd_next_addr))
                                  : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg)),32);
    bufp->fullIData(oldp+10873,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1))
                                  ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0))) 
                                      & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 2U))) 
                                     | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1))) 
                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg 
                                           + ((1U & 
                                               (- (IData)(
                                                          (0U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size))))) 
                                              | ((2U 
                                                  & (- (IData)(
                                                               (1U 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size))))) 
                                                 | ((4U 
                                                     & (- (IData)(
                                                                  (2U 
                                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size))))) 
                                                    | (8U 
                                                       & (- (IData)(
                                                                    (3U 
                                                                     == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size)))))))))))
                                  : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg)),32);
    bufp->fullIData(oldp+10874,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))
                                  ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0))) 
                                      & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 2U))) 
                                     | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata)))
                                  : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg)),32);
    bufp->fullIData(oldp+10875,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg_wren0) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))
                                  ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg_wren0))) 
                                      & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 2U))) 
                                     | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                        & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata 
                                                   >> 0x20U))))
                                  : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg)),32);
    bufp->fullCData(oldp+10876,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en)
                                  ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate)
                                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))),4);
    bufp->fullBit(oldp+10877,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren)
                                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_din)
                                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout))));
    bufp->fullSData(oldp+10878,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren)
                                  ? ((0xff00U & ((IData)(
                                                         (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                          >> 0x1aU)) 
                                                 << 8U)) 
                                     | ((0x78U & ((IData)(
                                                          (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                           >> 0x15U)) 
                                                  << 3U)) 
                                        | (((IData)(
                                                    (0x100000ULL 
                                                     == 
                                                     (0x3fc100000ULL 
                                                      & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                                            << 2U) 
                                           | (((IData)(
                                                       (0x80000ULL 
                                                        == 
                                                        (0x3fc080000ULL 
                                                         & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                                               << 1U) 
                                              | (1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x12U)))))))
                                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))),16);
    bufp->fullSData(oldp+10879,((0xffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren)
                                             ? (IData)(
                                                       (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                        >> 2U))
                                             : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_cmd_next_addr))),16);
    bufp->fullSData(oldp+10880,((0xffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren) 
                                             | (IData)(
                                                       (((8U 
                                                          == 
                                                          (0xff08U 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                         & (8U 
                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))))))
                                             ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren)
                                                 ? (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 2U))
                                                 : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_cmd_next_addr)
                                             : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout)))),16);
    bufp->fullBit(oldp+10881,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren)
                                      ? (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 2U))
                                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout)))));
    bufp->fullCData(oldp+10882,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren)
                                  ? ((0xcU & ((IData)(
                                                      (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                       >> 0x20U)) 
                                              << 2U)) 
                                     | ((2U & ((IData)(
                                                       (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                        >> 0x1eU)) 
                                               << 1U)) 
                                        | (1U & (IData)(
                                                        (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                         >> 3U)))))
                                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout))),4);
    bufp->fullIData(oldp+10883,(((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)
                                  ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmi_reg_rdata_din
                                  : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__dmi_reg_rdata)),32);
    bufp->fullBit(oldp+10884,(((~ (IData)(((0x4040000000ULL 
                                            == (0x1fc40000000ULL 
                                                & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0)))) 
                               & ((IData)(((0x4000000008ULL 
                                            == (0x1fc00000008ULL 
                                                & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0))) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset)))));
    bufp->fullBit(oldp+10885,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack_din) 
                                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack) 
                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__resumereq) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_halted))))
                                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack_din)
                                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack))));
    bufp->fullBit(oldp+10886,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en)
                                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_in)
                                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done))));
    bufp->fullBit(oldp+10887,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en)
                                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_in)
                                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done))));
    bufp->fullCData(oldp+10888,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en)
                                  ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_nxtstate)
                                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))),4);
    bufp->fullCData(oldp+10889,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren)
                                  ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din)
                                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout))),3);
    bufp->fullCData(oldp+10890,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_wren)
                                  ? ((0x10U & ((IData)(
                                                       (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                        >> 0x15U)) 
                                               << 4U)) 
                                     | ((8U & ((~ (IData)(
                                                          (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                           >> 0x14U))) 
                                               << 3U)) 
                                        | (7U & (IData)(
                                                        (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                         >> 0x11U)))))
                                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout))),5);
    bufp->fullBit(oldp+10891,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren)
                                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din)
                                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout))));
    bufp->fullBit(oldp+10892,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h3068a052__0) 
                                      | ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                            & ((0x39U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))) 
                                               | ((0x3cU 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                               >> 0x22U)))) 
                                                  | (0x3dU 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                 >> 0x22U)))))))))
                                      ? (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h3068a052__0))
                                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout)))));
    bufp->fullBit(oldp+10893,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_wren)
                                      ? (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 0x16U))
                                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout)))));
    bufp->fullBit(oldp+10894,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_jal) 
                                   | ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal)) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_postsync)))) 
                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_jal)) 
                                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__ps_stall) 
                                     & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__div_wen_wb)) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__prior_inflight_e1e4)))))));
    bufp->fullBit(oldp+10895,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze)
                                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__ps_stall)
                                : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_jal) 
                                       | ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal)) 
                                          | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_postsync)))) 
                                   | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_jal)) 
                                      | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__ps_stall) 
                                         & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__div_wen_wb)) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__prior_inflight_e1e4))))))));
    bufp->fullIData(oldp+10896,((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid)
                                      ? (((- (IData)(
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                                      & (0U 
                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type))))) 
                                          & (0x6033U 
                                             | (0xf8000U 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
                                                   << 0xfU)))) 
                                         | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_gpr))) 
                                             & (0x6033U 
                                                | (0xf80U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
                                                      << 7U)))) 
                                            | (((- (IData)(
                                                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                                            & (1U 
                                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type))))) 
                                                & (0x2073U 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
                                                      << 0x14U))) 
                                               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_csr))) 
                                                  & (0x1073U 
                                                     | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
                                                        << 0x14U))))))
                                      : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_instr)) 
                                 | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                                     & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1) 
                                    | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib2)))),32);
    bufp->fullCData(oldp+10897,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT____Vcellinp__genblk2__DOT__cinst3ff__en) 
                                  << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT____Vcellinp__genblk2__DOT__cinst2ff__en) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT____Vcellinp__bp1ff__en) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT____Vcellinp__bp0ff__en))))),4);
    bufp->fullIData(oldp+10898,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT____Vcellinp__bp0ff__en)
                                  ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid)
                                          ? (((- (IData)(
                                                         ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                                          & (0U 
                                                             == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type))))) 
                                              & (0x6033U 
                                                 | (0xf8000U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
                                                       << 0xfU)))) 
                                             | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_gpr))) 
                                                 & (0x6033U 
                                                    | (0xf80U 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
                                                          << 7U)))) 
                                                | (((- (IData)(
                                                               ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                                                & (1U 
                                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type))))) 
                                                    & (0x2073U 
                                                       | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
                                                          << 0x14U))) 
                                                   | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_csr))) 
                                                      & (0x1073U 
                                                         | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
                                                            << 0x14U))))))
                                          : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu_i0_instr)) 
                                     | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1) 
                                        | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib2)))
                                  : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0)),32);
    bufp->fullBit(oldp+10899,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4) 
                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_rfnpc_dc4) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt)) 
                                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__fence_i_e4) 
                                     | ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid)) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)))))));
    bufp->fullIData(oldp+10900,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__flush_lower_ff__din),31);
    bufp->fullIData(oldp+10901,((0x7fffffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)
                                                 ? 
                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__nmi_vec 
                                                 >> 1U)
                                                 : 
                                                ((1U 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec)
                                                  ? 
                                                 ((0x7ffffffeU 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec) 
                                                  + 
                                                  (0x3fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_cause_e4) 
                                                      << 1U)))
                                                  : 
                                                 (0x7ffffffeU 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec))))),31);
    bufp->fullBit(oldp+10902,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_e4))))));
    bufp->fullBit(oldp+10903,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                               & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                   >> 0x11U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns)))));
    bufp->fullBit(oldp+10904,((1U & ((IData)(((1U == 
                                               (3U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout))) 
                                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns)))) 
                                     | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                         >> 4U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout))))));
    bufp->fullBit(oldp+10905,(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)) 
                               & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns)) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns)) 
                                  | ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns)) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns))))));
    bufp->fullBit(oldp+10906,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__any_csr_d) 
                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
                                     & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_write)) 
                                        & (0x7cbU == 
                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                            >> 0x14U))))))));
    bufp->fullCData(oldp+10907,(((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__any_csr_d) 
                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
                                         & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_write)) 
                                            & (0x7cbU 
                                               == (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                   >> 0x14U)))))) 
                                  << 1U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hf814cb96__0) 
                                            & (0x3e580000U 
                                               == (0x7ff80000U 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U]))))),2);
    bufp->fullBit(oldp+10908,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dpc_wb) 
                                     | ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                         >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc))))));
    bufp->fullSData(oldp+10909,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid) 
                                  << 0xeU) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                               << 0xdU) 
                                              | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4) 
                                                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid) 
                                                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_e4)))) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_cause_e4) 
                                                     << 7U) 
                                                    | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_hc53149b1__0) 
                                                        << 6U) 
                                                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                           << 5U) 
                                                          | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_e4) 
                                                              << 4U) 
                                                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4) 
                                                                 << 3U) 
                                                                | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4) 
                                                                    << 2U) 
                                                                   | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi) 
                                                                       << 1U) 
                                                                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pause_expired_e4)))))))))))),15);
    bufp->fullSData(oldp+10910,(((0x600U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                            << 9U)) 
                                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns) 
                                     << 8U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns) 
                                                << 7U) 
                                               | (((((0x7fffffc0U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                         >> 1U)) 
                                                     | (0x3ffffc0U 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                           >> 6U))) 
                                                    | (0xffffffc0U 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout))) 
                                                   & (((~ 
                                                        (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                         >> 1U)) 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
                                                      << 6U)) 
                                                  | ((0x1fffffe0U 
                                                      & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                          >> 3U) 
                                                         & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                             << 2U) 
                                                            & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                << 4U) 
                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__core_empty) 
                                                                  << 5U))))) 
                                                     | ((0x10U 
                                                         & (((IData)(
                                                                     ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout))) 
                                                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns)))) 
                                                             << 4U) 
                                                            | (0xfffffff0U 
                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                     << 4U))))) 
                                                        | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns) 
                                                            << 3U) 
                                                           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                                                               << 2U) 
                                                              | ((2U 
                                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                                     >> 2U)) 
                                                                 | (IData)(
                                                                           (0x100U 
                                                                            == 
                                                                            (0x108U 
                                                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))))))))))))),11);
    bufp->fullIData(oldp+10911,((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____VdfgTmp_h867ec75a__0 
                                 | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2))) 
                                     & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                    | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1))) 
                                        & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellinp__faddrf2_ff__din) 
                                       | ((- (IData)(
                                                     (1U 
                                                      & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2)) 
                                                         & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1)) 
                                                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush))))))) 
                                          & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellinp__faddrf1_ff__din))))),31);
    bufp->fullBit(oldp+10912,((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__flush_fb) 
                                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2)) 
                                      | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout) 
                                         >> 1U)) | 
                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
                                      & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)) 
                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout))))))));
    bufp->fullBit(oldp+10913,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2)) 
                                     & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1)) 
                                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush)))))));
    bufp->fullIData(oldp+10914,(((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__flush_fb) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
                                          | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2)) 
                                         | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout) 
                                            >> 1U)) 
                                        | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
                                           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)) 
                                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout))))))
                                  ? (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____VdfgTmp_h867ec75a__0 
                                     | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2))) 
                                         & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                        | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1))) 
                                            & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellinp__faddrf2_ff__din) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2)) 
                                                             & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1)) 
                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush))))))) 
                                              & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellinp__faddrf1_ff__din))))
                                  : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddmiss_ff__dout)),31);
    bufp->fullIData(oldp+10915,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__ifc_fetch_req_bf)
                                  ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellinp__faddrf1_ff__din
                                  : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)),31);
    bufp->fullCData(oldp+10916,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_iccm_stall_any) 
                                  << 2U) | ((2U & (
                                                   (0xfffeU 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                       >> 0x10U)) 
                                                   | (0x7ffffffeU 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                         >> 1U)))) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)))),3);
    bufp->fullBit(oldp+10917,(((~ ((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_beat_count)) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in))) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hbcc887ba__0) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_axi_ic_req_ff2)))));
    bufp->fullBit(oldp+10918,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in)) 
                                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))))));
    bufp->fullCData(oldp+10919,((7U & ((6U & (- (IData)(
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in))))) 
                                       | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in))) 
                                           & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_beat_count))) 
                                          | ((- (IData)(
                                                        (1U 
                                                         & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in)) 
                                                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2)))))) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_beat_count)))))),3);
    bufp->fullCData(oldp+10920,((7U & ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                                        ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count) 
                                           + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in))
                                        : (6U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                                                 >> 2U))))),3);
    bufp->fullBit(oldp+10921,(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in)) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hbcc887ba__0))));
    bufp->fullCData(oldp+10922,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
                                  << 4U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_hit_f2) 
                                             << 3U) 
                                            | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_bus_acc_fault_f2))) 
                                                << 2U) 
                                               | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_arvalid_ff) 
                                                    & ((~ 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_bus_clk_en_ff) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_arready_unq_ff))) 
                                                       & (0U 
                                                          != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)))) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in)))))),5);
    bufp->fullSData(oldp+10923,(((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4) 
                                   ^ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4_pol)) 
                                  << 4U) | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3) 
                                              ^ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3_pol)) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi0_irq) 
                                                << 2U) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart_irq) 
                                                  << 1U))))),9);
    bufp->fullBit(oldp+10924,((((0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
                                         >> 0x10U)) 
                                > (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                                            ? (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__meipt))
                                            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__meipt)))) 
                               & ((0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
                                           >> 0x10U)) 
                                  > (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                                              ? (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__meicurpl))
                                              : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__meicurpl)))))));
    bufp->fullBit(oldp+10925,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__pl_in_q) 
                               == ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                                    ? 0U : 0xfU))));
    bufp->fullCData(oldp+10926,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                           ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                               << 0x18U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                                 >> 8U))
                                           : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U]))),8);
    bufp->fullCData(oldp+10927,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                          ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                              << 0x1cU) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                                >> 4U))
                                          : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U]))),4);
    bufp->fullCData(oldp+10928,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                           ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                               << 8U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                                 >> 0x18U))
                                           : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+10929,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                          ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                                >> 0xcU))
                                          : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                                >> 8U))))),4);
    bufp->fullCData(oldp+10930,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                           ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                               << 0x18U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                                 >> 8U))
                                           : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U]))),8);
    bufp->fullCData(oldp+10931,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                          ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                              << 0xcU) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                                >> 0x14U))
                                          : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                                >> 0x10U))))),4);
    bufp->fullCData(oldp+10932,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                           ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                               << 8U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                                 >> 0x18U))
                                           : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+10933,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                          ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                              << 4U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                                >> 0x1cU))
                                          : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                                >> 0x18U))))),4);
    bufp->fullCData(oldp+10934,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                           ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                                               << 0x18U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                                                 >> 8U))
                                           : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U]))),8);
    bufp->fullCData(oldp+10935,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                          ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                              << 0x1cU) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                                >> 4U))
                                          : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U]))),4);
    bufp->fullCData(oldp+10936,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                           ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U]
                                           : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                                               << 8U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+10937,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                          ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                                >> 0x10U))
                                          : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                                >> 0xcU))))),4);
    bufp->fullCData(oldp+10938,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                           ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                                 >> 0x10U))
                                           : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                               << 0x18U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+10939,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                          ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                                >> 0x18U))
                                          : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                              << 0xcU) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                                >> 0x14U))))),4);
    bufp->fullCData(oldp+10940,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                           ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[4U]
                                           : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                               << 8U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                                 >> 0x18U))))),8);
    bufp->fullCData(oldp+10941,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                          ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U]
                                          : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                              << 4U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                                >> 0x1cU))))),4);
    bufp->fullCData(oldp+10942,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                           ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                                               << 8U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                                                 >> 0x18U))
                                           : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                                                 >> 0x10U))))),8);
    bufp->fullCData(oldp+10943,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                          ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                              << 4U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                                >> 0x1cU))
                                          : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                                >> 0x18U))))),4);
    bufp->fullCData(oldp+10944,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                           ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U] 
                                               << 0x18U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U] 
                                                 >> 8U))
                                           : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U]))),8);
    bufp->fullCData(oldp+10945,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                          ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U] 
                                              << 0x1cU) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U] 
                                                >> 4U))
                                          : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U]))),4);
    bufp->fullCData(oldp+10946,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                           ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                                                 >> 0x10U))
                                           : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                                               << 0x18U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                                                 >> 8U))))),8);
    bufp->fullCData(oldp+10947,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                          ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                                >> 8U))
                                          : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                              << 0x1cU) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                                >> 4U))))),4);
    bufp->fullBit(oldp+10948,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                >> 0xaU) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb) 
                                            & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_ack)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we))))));
    bufp->fullCData(oldp+10949,((0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Digits_Reg 
                                         >> (0x1cU 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter20__DOT__i_counter__DOT__counter_q 
                                                >> 0xfU))))),4);
    bufp->fullIData(oldp+10950,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_cntr),32);
    bufp->fullIData(oldp+10951,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_hrc),32);
    bufp->fullIData(oldp+10952,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_lrc),32);
    bufp->fullBit(oldp+10953,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__hrc_match));
    bufp->fullBit(oldp+10954,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__lrc_match));
    bufp->fullBit(oldp+10955,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__restart));
    bufp->fullBit(oldp+10956,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__lrc_match) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                  >> 4U))));
    bufp->fullBit(oldp+10957,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__lrc_match)))));
    bufp->fullBit(oldp+10958,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__int_match));
    __Vtemp_ha514ca69__0[0U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart_rdt;
    __Vtemp_ha514ca69__0[1U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_per_rdt;
    __Vtemp_ha514ca69__0[2U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_dat2;
    __Vtemp_ha514ca69__0[3U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_dat;
    __Vtemp_ha514ca69__0[4U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_ptc_dat_R;
    __Vtemp_ha514ca69__0[5U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_ptc_dat_G;
    __Vtemp_ha514ca69__0[6U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_ptc_dat_B;
    __Vtemp_ha514ca69__0[7U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_ptc_dat;
    __Vtemp_ha514ca69__0[8U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2_rdt;
    __Vtemp_ha514ca69__0[9U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi_rdt;
    __Vtemp_ha514ca69__0[0xaU] = (IData)((((QData)((IData)(
                                                           ((1U 
                                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                                                             ? (IData)(
                                                                       (vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.__PVT__dout 
                                                                        >> 0x20U))
                                                             : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.__PVT__dout)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_dat))));
    __Vtemp_ha514ca69__0[0xbU] = (IData)(((((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                                                              ? (IData)(
                                                                        (vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.__PVT__dout 
                                                                         >> 0x20U))
                                                              : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.__PVT__dout)))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_dat))) 
                                          >> 0x20U));
    bufp->fullWData(oldp+10959,(__Vtemp_ha514ca69__0),384);
    bufp->fullSData(oldp+10971,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__o_wb_ack) 
                                  << 0xbU) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_ack) 
                                               << 0xaU) 
                                              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_spi_flash_ack) 
                                                  << 9U) 
                                                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_spi_accel_ack) 
                                                     << 8U) 
                                                    | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.timer_ptc__DOT____VdfgTmp_h61526ae5__0) 
                                                        << 7U) 
                                                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_b__DOT____VdfgTmp_h61526ae5__0) 
                                                           << 6U) 
                                                          | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_g__DOT____VdfgTmp_h61526ae5__0) 
                                                              << 5U) 
                                                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_r__DOT____VdfgTmp_h61526ae5__0) 
                                                                 << 4U) 
                                                                | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_ack) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_ack2) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_per_ack) 
                                                                          << 1U) 
                                                                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_uart_ack))))))))))))),12);
    bufp->fullCData(oldp+10972,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__mst_b_readies),3);
    bufp->fullBit(oldp+10973,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->fullCData(oldp+10974,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__mst_r_readies),3);
    bufp->fullBit(oldp+10975,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->fullBit(oldp+10976,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_ready))));
    bufp->fullBit(oldp+10977,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_ready))));
    bufp->fullCData(oldp+10978,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10979,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->fullCData(oldp+10980,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->fullCData(oldp+10981,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->fullCData(oldp+10982,((3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i)
                                        ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->fullCData(oldp+10983,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10984,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10985,((3U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                        ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->fullBit(oldp+10986,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullBit(oldp+10987,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullCData(oldp+10988,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+10989,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullCData(oldp+10990,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+10991,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullBit(oldp+10992,((1U & ((~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                         >> 4U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->fullBit(oldp+10993,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullCData(oldp+10994,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->fullCData(oldp+10995,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->fullCData(oldp+10996,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->fullCData(oldp+10997,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->fullCData(oldp+10998,((3U & ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U] 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                        ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->fullCData(oldp+10999,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11000,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11001,((3U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                        ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->fullBit(oldp+11002,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullBit(oldp+11003,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullCData(oldp+11004,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+11005,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullCData(oldp+11006,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+11007,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullBit(oldp+11008,((1U & ((~ vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U]) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->fullBit(oldp+11009,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullCData(oldp+11010,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__mst_b_readies),3);
    bufp->fullBit(oldp+11011,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->fullCData(oldp+11012,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__mst_r_readies),3);
    bufp->fullBit(oldp+11013,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->fullBit(oldp+11014,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_ready))));
    bufp->fullBit(oldp+11015,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_ready))));
    bufp->fullCData(oldp+11016,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11017,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->fullCData(oldp+11018,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->fullCData(oldp+11019,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->fullCData(oldp+11020,((3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i)
                                        ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->fullCData(oldp+11021,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11022,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11023,((3U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                        ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->fullBit(oldp+11024,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullBit(oldp+11025,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullCData(oldp+11026,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+11027,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullCData(oldp+11028,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+11029,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullBit(oldp+11030,((1U & ((~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                         >> 0x1dU)) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->fullBit(oldp+11031,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullCData(oldp+11032,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11033,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->fullCData(oldp+11034,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->fullCData(oldp+11035,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->fullCData(oldp+11036,((3U & ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                               >> 0x19U) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                        ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->fullCData(oldp+11037,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11038,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11039,((3U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                        ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->fullBit(oldp+11040,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullBit(oldp+11041,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullCData(oldp+11042,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+11043,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullCData(oldp+11044,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+11045,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullBit(oldp+11046,((1U & ((~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                         >> 0x19U)) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->fullBit(oldp+11047,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullCData(oldp+11048,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__mst_b_readies),3);
    bufp->fullBit(oldp+11049,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->fullCData(oldp+11050,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__mst_r_readies),3);
    bufp->fullBit(oldp+11051,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->fullBit(oldp+11052,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_ready))));
    bufp->fullBit(oldp+11053,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_ready))));
    bufp->fullCData(oldp+11054,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11055,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->fullCData(oldp+11056,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->fullCData(oldp+11057,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->fullCData(oldp+11058,((3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i)
                                        ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->fullCData(oldp+11059,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11060,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11061,((3U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                        ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->fullBit(oldp+11062,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullBit(oldp+11063,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullCData(oldp+11064,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+11065,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullCData(oldp+11066,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+11067,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullBit(oldp+11068,((1U & ((~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                         >> 0x16U)) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->fullBit(oldp+11069,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullCData(oldp+11070,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11071,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->fullCData(oldp+11072,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->fullCData(oldp+11073,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->fullCData(oldp+11074,((3U & ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                               >> 0x12U) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                        ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->fullCData(oldp+11075,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11076,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11077,((3U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                        ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->fullBit(oldp+11078,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullBit(oldp+11079,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullCData(oldp+11080,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+11081,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullCData(oldp+11082,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+11083,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullBit(oldp+11084,((1U & ((~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                         >> 0x12U)) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->fullBit(oldp+11085,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullCData(oldp+11086,(((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
                                 | ((0xfffffffeU & 
                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                         << 1U))) | 
                                    (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                              >> 1U)))))),3);
    bufp->fullCData(oldp+11087,(((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
                                 | ((0xfffffffeU & 
                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                         << 1U))) | 
                                    (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                              >> 1U)))))),3);
    bufp->fullBit(oldp+11088,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->fullBit(oldp+11089,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->fullBit(oldp+11090,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                     & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                        >> 1U)))));
    bufp->fullBit(oldp+11091,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                     & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                        >> 1U)))));
    bufp->fullBit(oldp+11092,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    bufp->fullBit(oldp+11093,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    bufp->fullBit(oldp+11094,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                     >> 2U))));
    bufp->fullBit(oldp+11095,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                     >> 2U))));
    bufp->fullCData(oldp+11096,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11097,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->fullCData(oldp+11098,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->fullCData(oldp+11099,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->fullCData(oldp+11100,((3U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__ar_ready) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                                        ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->fullCData(oldp+11101,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11102,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11103,((3U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                        ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->fullBit(oldp+11104,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullBit(oldp+11105,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullCData(oldp+11106,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+11107,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullCData(oldp+11108,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+11109,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullBit(oldp+11110,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__ar_ready)) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->fullBit(oldp+11111,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullBit(oldp+11112,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
    bufp->fullBit(oldp+11113,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                  >> 0x16U))));
    bufp->fullCData(oldp+11114,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11115,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->fullCData(oldp+11116,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->fullCData(oldp+11117,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->fullCData(oldp+11118,((3U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__aw_ready) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                                        ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->fullCData(oldp+11119,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11120,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11121,((3U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                        ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->fullBit(oldp+11122,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullBit(oldp+11123,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullCData(oldp+11124,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+11125,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullCData(oldp+11126,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+11127,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullBit(oldp+11128,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__aw_ready)) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->fullBit(oldp+11129,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                  >> 0x17U))));
    bufp->fullBit(oldp+11130,(((2U >= (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                             >> 0x12U))) 
                               & (((4U & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                          >> 0x14U)) 
                                   | ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                             >> 0x1cU)) 
                                      | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                               >> 4U)))) 
                                  >> (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                            >> 0x12U))))));
    bufp->fullBit(oldp+11131,(((2U >= (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                             >> 8U))) 
                               & (((4U & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                                          >> 0x10U)) 
                                   | ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                                             >> 0x18U)) 
                                      | (1U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0U]))) 
                                  >> (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                            >> 8U))))));
    bufp->fullCData(oldp+11132,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n),4);
    bufp->fullCData(oldp+11133,(((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
                                 | ((0xfffffffeU & 
                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                         << 1U))) | 
                                    (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                              >> 1U)))))),3);
    bufp->fullCData(oldp+11134,(((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
                                 | ((0xfffffffeU & 
                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                         << 1U))) | 
                                    (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                              >> 1U)))))),3);
    bufp->fullBit(oldp+11135,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->fullBit(oldp+11136,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->fullBit(oldp+11137,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                     & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                        >> 1U)))));
    bufp->fullBit(oldp+11138,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                     & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                        >> 1U)))));
    bufp->fullBit(oldp+11139,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    bufp->fullBit(oldp+11140,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    bufp->fullBit(oldp+11141,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                     >> 2U))));
    bufp->fullBit(oldp+11142,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                     >> 2U))));
    bufp->fullCData(oldp+11143,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11144,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->fullCData(oldp+11145,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->fullCData(oldp+11146,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->fullCData(oldp+11147,((3U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__ar_ready) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                                        ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->fullCData(oldp+11148,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11149,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11150,((3U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                        ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->fullBit(oldp+11151,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullBit(oldp+11152,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullCData(oldp+11153,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+11154,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullCData(oldp+11155,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+11156,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullBit(oldp+11157,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__ar_ready)) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->fullBit(oldp+11158,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->fullBit(oldp+11159,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
    bufp->fullBit(oldp+11160,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                  >> 0xeU))));
    bufp->fullCData(oldp+11161,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11162,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->fullCData(oldp+11163,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->fullCData(oldp+11164,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->fullCData(oldp+11165,((3U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__aw_ready) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                                        ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->fullCData(oldp+11166,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11167,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->fullCData(oldp+11168,((3U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                        ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->fullBit(oldp+11169,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullBit(oldp+11170,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->fullCData(oldp+11171,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+11172,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullCData(oldp+11173,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->fullCData(oldp+11174,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->fullBit(oldp+11175,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__aw_ready)) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->fullBit(oldp+11176,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                  >> 0xfU))));
    bufp->fullBit(oldp+11177,(((2U >= (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                             >> 0xaU))) 
                               & (((4U & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                          >> 0x14U)) 
                                   | ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                             >> 0x1cU)) 
                                      | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                               >> 4U)))) 
                                  >> (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                            >> 0xaU))))));
    bufp->fullBit(oldp+11178,(((2U >= (3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U])) 
                               & (((4U & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                                          >> 0x10U)) 
                                   | ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                                             >> 0x18U)) 
                                      | (1U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0U]))) 
                                  >> (3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U])))));
    bufp->fullCData(oldp+11179,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n),4);
    bufp->fullBit(oldp+11180,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i));
    bufp->fullBit(oldp+11181,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U] 
                                        & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 1U))))));
    bufp->fullBit(oldp+11182,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i));
    bufp->fullBit(oldp+11183,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                     & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                         >> 0x19U) 
                                        & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 1U))))));
    bufp->fullBit(oldp+11184,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i));
    bufp->fullBit(oldp+11185,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                     & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                         >> 0x12U) 
                                        & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                           >> 1U))))));
    bufp->fullCData(oldp+11186,(0U),8);
    bufp->fullBit(oldp+11187,(vlSymsp->TOP__rvfpgasim.o_gpio));
    bufp->fullIData(oldp+11188,(0x10000U),32);
    bufp->fullCData(oldp+11189,(0U),2);
    bufp->fullBit(oldp+11190,(1U));
    bufp->fullBit(oldp+11191,(0U));
    bufp->fullIData(oldp+11192,(0U),31);
    bufp->fullIData(oldp+11193,(7U),32);
    bufp->fullCData(oldp+11194,(0U),3);
    bufp->fullCData(oldp+11195,(1U),4);
    bufp->fullIData(oldp+11196,(0x29U),32);
    bufp->fullCData(oldp+11197,(7U),6);
    bufp->fullIData(oldp+11198,(0U),32);
    bufp->fullIData(oldp+11199,(1U),32);
    bufp->fullIData(oldp+11200,(2U),32);
    bufp->fullIData(oldp+11201,(3U),32);
    bufp->fullIData(oldp+11202,(4U),32);
    bufp->fullIData(oldp+11203,(5U),32);
    bufp->fullIData(oldp+11204,(6U),32);
    bufp->fullIData(oldp+11205,(8U),32);
    bufp->fullIData(oldp+11206,(9U),32);
    bufp->fullIData(oldp+11207,(0xaU),32);
    bufp->fullIData(oldp+11208,(0xbU),32);
    bufp->fullIData(oldp+11209,(0xcU),32);
    bufp->fullIData(oldp+11210,(0xdU),32);
    bufp->fullIData(oldp+11211,(0xeU),32);
    bufp->fullIData(oldp+11212,(0xfU),32);
    bufp->fullIData(oldp+11213,(0x14U),32);
    __Vtemp_h35377cc2__0[0U] = 0x3e20e8fU;
    __Vtemp_h35377cc2__0[1U] = 0x47df4U;
    __Vtemp_h35377cc2__0[2U] = 0xf3181U;
    __Vtemp_h35377cc2__0[3U] = 0x12ff886U;
    __Vtemp_h35377cc2__0[4U] = 0x3e7b72U;
    __Vtemp_h35377cc2__0[5U] = 0x11d2e881U;
    bufp->fullWData(oldp+11214,(__Vtemp_h35377cc2__0),192);
    bufp->fullBit(oldp+11220,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__en_per) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__o_per)))));
    bufp->fullBit(oldp+11221,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__i_accel_miso));
    bufp->fullIData(oldp+11222,(0x1000U),32);
    bufp->fullCData(oldp+11223,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__o_per),2);
    bufp->fullCData(oldp+11224,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__en_per),2);
    bufp->fullCData(oldp+11225,(3U),3);
    bufp->fullCData(oldp+11226,(1U),2);
    bufp->fullCData(oldp+11227,(0xfU),4);
    bufp->fullCData(oldp+11228,(4U),3);
    bufp->fullCData(oldp+11229,(0U),4);
    bufp->fullBit(oldp+11230,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_rty));
    bufp->fullBit(oldp+11231,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_rty2));
    bufp->fullBit(oldp+11232,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_ptc_rty));
    bufp->fullBit(oldp+11233,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_ptc_rty_B));
    bufp->fullBit(oldp+11234,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_ptc_rty_G));
    bufp->fullBit(oldp+11235,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_ptc_rty_R));
    bufp->fullBit(oldp+11236,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_spi_accel_err));
    bufp->fullBit(oldp+11237,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_spi_accel_rty));
    bufp->fullBit(oldp+11238,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__en_per))));
    bufp->fullBit(oldp+11239,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__o_per))));
    bufp->fullBit(oldp+11240,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__en_per) 
                                     >> 1U))));
    bufp->fullBit(oldp+11241,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__o_per) 
                                     >> 1U))));
    bufp->fullIData(oldp+11242,(0x10U),32);
    bufp->fullCData(oldp+11243,(2U),4);
    bufp->fullCData(oldp+11244,(3U),4);
    bufp->fullCData(oldp+11245,(4U),4);
    bufp->fullCData(oldp+11246,(5U),4);
    bufp->fullCData(oldp+11247,(6U),4);
    bufp->fullCData(oldp+11248,(7U),4);
    bufp->fullIData(oldp+11249,(3U),32);
    bufp->fullIData(oldp+11250,(2U),32);
    bufp->fullIData(oldp+11251,(4U),32);
    bufp->fullIData(oldp+11252,(6U),32);
    bufp->fullIData(oldp+11253,(0x20U),32);
    bufp->fullIData(oldp+11254,(0x40U),32);
    bufp->fullIData(oldp+11255,(8U),32);
    bufp->fullIData(oldp+11256,(1U),32);
    bufp->fullWData(oldp+11257,(Vrvfpgasim__ConstPool__CONST_h1f339c14_0),299);
    __Vtemp_h7ef35fdf__0[0U] = 0x8000000U;
    __Vtemp_h7ef35fdf__0[1U] = 0U;
    __Vtemp_h7ef35fdf__0[2U] = 1U;
    __Vtemp_h7ef35fdf__0[3U] = 0x80004000U;
    __Vtemp_h7ef35fdf__0[4U] = 0x80000000U;
    __Vtemp_h7ef35fdf__0[5U] = 0U;
    bufp->fullWData(oldp+11267,(__Vtemp_h7ef35fdf__0),192);
    bufp->fullWData(oldp+11273,(Vrvfpgasim__ConstPool__CONST_h1f339c14_0),299);
    bufp->fullBit(oldp+11283,(0U));
    __Vtemp_h52b39430__0[0U] = 0x8000000U;
    __Vtemp_h52b39430__0[1U] = 0U;
    __Vtemp_h52b39430__0[2U] = 1U;
    __Vtemp_h52b39430__0[3U] = 0x80004000U;
    __Vtemp_h52b39430__0[4U] = 0x80000000U;
    __Vtemp_h52b39430__0[5U] = 0U;
    bufp->fullWData(oldp+11284,(__Vtemp_h52b39430__0),192);
    bufp->fullCData(oldp+11290,(3U),2);
    bufp->fullQData(oldp+11291,(0xca11ab1ebadcab1eULL),64);
    bufp->fullCData(oldp+11293,(1U),8);
    bufp->fullBit(oldp+11294,(1U));
    bufp->fullIData(oldp+11295,(0x20U),32);
    bufp->fullIData(oldp+11296,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__aux_i),32);
    bufp->fullBit(oldp+11297,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__clk_pad_i));
    bufp->fullIData(oldp+11298,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__pext_clk),32);
    bufp->fullIData(oldp+11299,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__nextc_sampled),32);
    bufp->fullIData(oldp+11300,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module2__DOT__aux_i),32);
    bufp->fullBit(oldp+11301,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module2__DOT__clk_pad_i));
    bufp->fullIData(oldp+11302,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module2__DOT__pext_clk),32);
    bufp->fullIData(oldp+11303,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module2__DOT__nextc_sampled),32);
    bufp->fullIData(oldp+11304,(0U),32);
    bufp->fullBit(oldp+11305,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__per0__DOT__PS2__DOT__debounce__DOT__out0));
    bufp->fullBit(oldp+11306,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__per0__DOT__PS2__DOT__debounce__DOT__out1));
    bufp->fullBit(oldp+11307,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__gate_clk_pad_i));
    bufp->fullBit(oldp+11308,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__capt_pad_i));
    bufp->fullBit(oldp+11309,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__gate_clk_pad_i));
    bufp->fullBit(oldp+11310,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__capt_pad_i));
    bufp->fullBit(oldp+11311,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__gate_clk_pad_i));
    bufp->fullBit(oldp+11312,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__capt_pad_i));
    bufp->fullIData(oldp+11313,(0x27U),32);
    bufp->fullIData(oldp+11314,(0x200U),32);
    bufp->fullIData(oldp+11315,(0x13U),32);
    bufp->fullIData(oldp+11316,(0x40U),32);
    bufp->fullIData(oldp+11317,(0x40000000U),31);
    bufp->fullQData(oldp+11318,(0ULL),64);
    bufp->fullBit(oldp+11320,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__jtag_tdoEn));
    bufp->fullBit(oldp+11321,(1U));
    bufp->fullSData(oldp+11322,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_addr_even),11);
    bufp->fullSData(oldp+11323,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rd_addr_odd),11);
    bufp->fullQData(oldp+11324,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wrdata),39);
    bufp->fullCData(oldp+11326,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__wren_bank_q),8);
    bufp->fullCData(oldp+11327,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank_q),8);
    bufp->fullWData(oldp+11328,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__addr_bank_q),88);
    bufp->fullQData(oldp+11331,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_wr_data_q),39);
    bufp->fullBit(oldp+11333,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_hiff__DOT__l1clk));
    bufp->fullBit(oldp+11334,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_loff__DOT__l1clk));
    bufp->fullWData(oldp+11335,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__bank_set_dout),544);
    bufp->fullBit(oldp+11352,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_claim_ack_wb));
    bufp->fullBit(oldp+11353,(0U));
    bufp->fullBit(oldp+11354,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_dmerr_wren));
    bufp->fullBit(oldp+11355,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__bus_clk));
    bufp->fullBit(oldp+11356,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_data0_reg__DOT__l1clk));
    bufp->fullBit(oldp+11357,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_data1_reg__DOT__l1clk));
    bufp->fullBit(oldp+11358,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sbaddress0_reg__DOT__l1clk));
    bufp->fullBit(oldp+11359,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sbdata0_reg__DOT__l1clk));
    bufp->fullBit(oldp+11360,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sbdata1_reg__DOT__l1clk));
    bufp->fullBit(oldp+11361,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcommand_reg__DOT__l1clk));
    bufp->fullBit(oldp+11362,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcommand_regno_reg__DOT__l1clk));
    bufp->fullBit(oldp+11363,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__10__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11364,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__11__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11365,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__12__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11366,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__13__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11367,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__14__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11368,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__15__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11369,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__16__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11370,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__17__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11371,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__18__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11372,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__19__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11373,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__1__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11374,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__20__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11375,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__21__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11376,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__22__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11377,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__23__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11378,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__24__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11379,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__25__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11380,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__26__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11381,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__27__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11382,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__28__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11383,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__29__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11384,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__2__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11385,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__30__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11386,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__31__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11387,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__3__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11388,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__4__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11389,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__5__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11390,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__6__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11391,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__7__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11392,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__8__KET____DOT__gprff__DOT__l1clk));
    bufp->fullBit(oldp+11393,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__9__KET____DOT__gprff__DOT__l1clk));
    bufp->fullIData(oldp+11394,(1U),32);
    bufp->fullIData(oldp+11395,(0x20U),32);
    bufp->fullIData(oldp+11396,(0x25U),32);
    bufp->fullBit(oldp+11397,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_data_e1ff__DOT__l1clk));
    bufp->fullBit(oldp+11398,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__divinstff__DOT__l1clk));
    bufp->fullIData(oldp+11399,(0x1fU),32);
    bufp->fullBit(oldp+11400,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__divpcff__DOT__l1clk));
    bufp->fullBit(oldp+11401,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1brpcff__DOT__l1clk));
    bufp->fullIData(oldp+11402,(0x43U),32);
    bufp->fullBit(oldp+11403,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e1ff__DOT__l1clk));
    bufp->fullBit(oldp+11404,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2brpcff__DOT__l1clk));
    bufp->fullBit(oldp+11405,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e2ff__DOT__l1clk));
    bufp->fullBit(oldp+11406,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e3ff__DOT__l1clk));
    bufp->fullBit(oldp+11407,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4_trigger_ff__DOT__l1clk));
    bufp->fullBit(oldp+11408,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__e4ff__DOT__l1clk));
    bufp->fullBit(oldp+11409,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_i0_e4ff__DOT__l1clk));
    bufp->fullBit(oldp+11410,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_i0_wbff__DOT__l1clk));
    bufp->fullBit(oldp+11411,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_i1_e4ff__DOT__l1clk));
    bufp->fullBit(oldp+11412,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze_i1_wbff__DOT__l1clk));
    bufp->fullBit(oldp+11413,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e1instff__DOT__l1clk));
    bufp->fullBit(oldp+11414,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e2instff__DOT__l1clk));
    bufp->fullBit(oldp+11415,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e2pcff__DOT__l1clk));
    bufp->fullBit(oldp+11416,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e2resultff__DOT__l1clk));
    bufp->fullBit(oldp+11417,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e3instff__DOT__l1clk));
    bufp->fullBit(oldp+11418,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e3pcff__DOT__l1clk));
    bufp->fullBit(oldp+11419,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e3resultff__DOT__l1clk));
    bufp->fullBit(oldp+11420,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e4instff__DOT__l1clk));
    bufp->fullBit(oldp+11421,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e4pcff__DOT__l1clk));
    bufp->fullBit(oldp+11422,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e4resultff__DOT__l1clk));
    bufp->fullBit(oldp+11423,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wb1instff__DOT__l1clk));
    bufp->fullBit(oldp+11424,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wb1pcff__DOT__l1clk));
    bufp->fullBit(oldp+11425,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wbinstff__DOT__l1clk));
    bufp->fullBit(oldp+11426,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wbpcff__DOT__l1clk));
    bufp->fullBit(oldp+11427,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wbresultff__DOT__l1clk));
    bufp->fullBit(oldp+11428,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e1instff__DOT__l1clk));
    bufp->fullBit(oldp+11429,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e2instff__DOT__l1clk));
    bufp->fullBit(oldp+11430,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e2pcff__DOT__l1clk));
    bufp->fullBit(oldp+11431,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e2resultff__DOT__l1clk));
    bufp->fullBit(oldp+11432,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e3instff__DOT__l1clk));
    bufp->fullBit(oldp+11433,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e3pcff__DOT__l1clk));
    bufp->fullBit(oldp+11434,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e3resultff__DOT__l1clk));
    bufp->fullBit(oldp+11435,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e4instff__DOT__l1clk));
    bufp->fullBit(oldp+11436,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e4pcff__DOT__l1clk));
    bufp->fullBit(oldp+11437,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e4resultff__DOT__l1clk));
    bufp->fullBit(oldp+11438,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wb1instff__DOT__l1clk));
    bufp->fullBit(oldp+11439,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wb1pcff__DOT__l1clk));
    bufp->fullBit(oldp+11440,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wbinstff__DOT__l1clk));
    bufp->fullBit(oldp+11441,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wbpcff__DOT__l1clk));
    bufp->fullBit(oldp+11442,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wbresultff__DOT__l1clk));
    bufp->fullBit(oldp+11443,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__illegal_any_ff__DOT__l1clk));
    bufp->fullIData(oldp+11444,(0x1aU),32);
    bufp->fullBit(oldp+11445,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e1ff__DOT__l1clk));
    bufp->fullBit(oldp+11446,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e2ff__DOT__l1clk));
    bufp->fullBit(oldp+11447,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e3ff__DOT__l1clk));
    bufp->fullBit(oldp+11448,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e4ff__DOT__l1clk));
    bufp->fullIData(oldp+11449,(8U),32);
    bufp->fullBit(oldp+11450,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__wbff__DOT__l1clk));
    bufp->fullBit(oldp+11451,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__write_csr_ff__DOT__l1clk));
    bufp->fullIData(oldp+11452,(0x44U),32);
    bufp->fullBit(oldp+11453,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__l1clk));
    bufp->fullBit(oldp+11454,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__l1clk));
    bufp->fullBit(oldp+11455,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst0ff__DOT__l1clk));
    bufp->fullBit(oldp+11456,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst1ff__DOT__l1clk));
    bufp->fullBit(oldp+11457,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk2__DOT__cinst2ff__DOT__l1clk));
    bufp->fullBit(oldp+11458,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk2__DOT__cinst3ff__DOT__l1clk));
    bufp->fullBit(oldp+11459,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk3__DOT__pc2ff__DOT__l1clk));
    bufp->fullBit(oldp+11460,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk3__DOT__pc3ff__DOT__l1clk));
    bufp->fullBit(oldp+11461,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp2ff__DOT__l1clk));
    bufp->fullBit(oldp+11462,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk4__DOT__bp3ff__DOT__l1clk));
    bufp->fullBit(oldp+11463,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk5__DOT__ib2ff__DOT__l1clk));
    bufp->fullBit(oldp+11464,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk5__DOT__ib3ff__DOT__l1clk));
    bufp->fullBit(oldp+11465,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0ff__DOT__l1clk));
    bufp->fullBit(oldp+11466,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1ff__DOT__l1clk));
    bufp->fullBit(oldp+11467,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0ff__DOT__l1clk));
    bufp->fullBit(oldp+11468,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1ff__DOT__l1clk));
    bufp->fullIData(oldp+11469,(0x12U),32);
    bufp->fullBit(oldp+11470,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_ff__DOT__l1clk));
    bufp->fullBit(oldp+11471,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicad0_ff__DOT__l1clk));
    bufp->fullIData(oldp+11472,(0x11U),32);
    bufp->fullBit(oldp+11473,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dicawics_ff__DOT__l1clk));
    bufp->fullBit(oldp+11474,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_ff__DOT__l1clk));
    bufp->fullIData(oldp+11475,(0x16U),32);
    bufp->fullBit(oldp+11476,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb0_ff__DOT__l1clk));
    bufp->fullBit(oldp+11477,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitb1_ff__DOT__l1clk));
    bufp->fullBit(oldp+11478,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ff__DOT__l1clk));
    bufp->fullBit(oldp+11479,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ff__DOT__l1clk));
    bufp->fullIData(oldp+11480,(0x22U),32);
    bufp->fullBit(oldp+11481,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc_ff__DOT__l1clk));
    bufp->fullBit(oldp+11482,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcycleh_ff__DOT__l1clk));
    bufp->fullBit(oldp+11483,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_ff__DOT__l1clk));
    bufp->fullBit(oldp+11484,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdccmect_ff__DOT__l1clk));
    bufp->fullBit(oldp+11485,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdseac_ff__DOT__l1clk));
    bufp->fullBit(oldp+11486,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__meihap_ff__DOT__l1clk));
    bufp->fullBit(oldp+11487,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__meivt_ff__DOT__l1clk));
    bufp->fullBit(oldp+11488,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc_ff__DOT__l1clk));
    bufp->fullBit(oldp+11489,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_ff__DOT__l1clk));
    bufp->fullBit(oldp+11490,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3h_ff__DOT__l1clk));
    bufp->fullBit(oldp+11491,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_ff__DOT__l1clk));
    bufp->fullBit(oldp+11492,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4h_ff__DOT__l1clk));
    bufp->fullBit(oldp+11493,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_ff__DOT__l1clk));
    bufp->fullBit(oldp+11494,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5h_ff__DOT__l1clk));
    bufp->fullBit(oldp+11495,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_ff__DOT__l1clk));
    bufp->fullBit(oldp+11496,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6h_ff__DOT__l1clk));
    bufp->fullBit(oldp+11497,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__miccmect_ff__DOT__l1clk));
    bufp->fullBit(oldp+11498,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__micect_ff__DOT__l1clk));
    bufp->fullBit(oldp+11499,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstreth_ff__DOT__l1clk));
    bufp->fullBit(oldp+11500,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__minstretl_ff__DOT__l1clk));
    bufp->fullBit(oldp+11501,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mrac_ff__DOT__l1clk));
    bufp->fullBit(oldp+11502,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mscratch_ff__DOT__l1clk));
    bufp->fullBit(oldp+11503,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t0_ff__DOT__l1clk));
    bufp->fullBit(oldp+11504,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t1_ff__DOT__l1clk));
    bufp->fullBit(oldp+11505,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t2_ff__DOT__l1clk));
    bufp->fullBit(oldp+11506,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtdata2_t3_ff__DOT__l1clk));
    bufp->fullBit(oldp+11507,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec_ff__DOT__l1clk));
    bufp->fullBit(oldp+11508,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__npwbc_ff__DOT__l1clk));
    bufp->fullBit(oldp+11509,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pwbc_ff__DOT__l1clk));
    bufp->fullCData(oldp+11510,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_rsp_done),4);
    bufp->fullCData(oldp+11511,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__PrevRspPtr),2);
    bufp->fullBit(oldp+11512,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_bus_clk));
    bufp->fullBit(oldp+11513,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__DOT__l1clk));
    bufp->fullBit(oldp+11514,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_data_dff__DOT__l1clk));
    bufp->fullBit(oldp+11515,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_addr_dff__DOT__l1clk));
    bufp->fullBit(oldp+11516,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_data_dff__DOT__l1clk));
    bufp->fullBit(oldp+11517,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_addr_dff__DOT__l1clk));
    bufp->fullBit(oldp+11518,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_data_dff__DOT__l1clk));
    bufp->fullBit(oldp+11519,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_addr_dff__DOT__l1clk));
    bufp->fullBit(oldp+11520,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_data_dff__DOT__l1clk));
    bufp->fullIData(oldp+11521,(0xf0040000U),32);
    bufp->fullIData(oldp+11522,(0xf00c0000U),32);
    bufp->fullBit(oldp+11523,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__rdbuf_addrff__DOT__l1clk));
    bufp->fullIData(oldp+11524,(4U),32);
    bufp->fullBit(oldp+11525,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_addrff__DOT__l1clk));
    bufp->fullBit(oldp+11526,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_dataff__DOT__l1clk));
    bufp->fullIData(oldp+11527,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__exu_flush_path_e1),31);
    bufp->fullBit(oldp+11528,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__csr_rs1_ff__DOT__l1clk));
    bufp->fullCData(oldp+11529,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__shortq),6);
    bufp->fullIData(oldp+11530,(0x21U),32);
    bufp->fullBit(oldp+11531,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__aff__DOT__l1clk));
    bufp->fullBit(oldp+11532,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__mff__DOT__l1clk));
    bufp->fullBit(oldp+11533,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT__qff__DOT__l1clk));
    bufp->fullBit(oldp+11534,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__aff__DOT__l1clk));
    bufp->fullBit(oldp+11535,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__bff__DOT__l1clk));
    bufp->fullBit(oldp+11536,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__brimmff__DOT__l1clk));
    bufp->fullBit(oldp+11537,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__pcff__DOT__l1clk));
    bufp->fullIData(oldp+11538,(0x4aU),32);
    bufp->fullBit(oldp+11539,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__l1clk));
    bufp->fullBit(oldp+11540,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__aff__DOT__l1clk));
    bufp->fullBit(oldp+11541,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__bff__DOT__l1clk));
    bufp->fullBit(oldp+11542,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__brimmff__DOT__l1clk));
    bufp->fullBit(oldp+11543,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__pcff__DOT__l1clk));
    bufp->fullBit(oldp+11544,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__l1clk));
    bufp->fullBit(oldp+11545,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_ap_e1_ff__DOT__l1clk));
    bufp->fullBit(oldp+11546,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_ap_e2_ff__DOT__l1clk));
    bufp->fullBit(oldp+11547,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_ap_e3_ff__DOT__l1clk));
    bufp->fullBit(oldp+11548,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_ap_e4_ff__DOT__l1clk));
    bufp->fullBit(oldp+11549,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e2_ff__DOT__l1clk));
    bufp->fullBit(oldp+11550,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_pp_e3_ff__DOT__l1clk));
    bufp->fullIData(oldp+11551,(0x4cU),32);
    bufp->fullBit(oldp+11552,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e1_ff__DOT__l1clk));
    bufp->fullBit(oldp+11553,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e2_ff__DOT__l1clk));
    bufp->fullBit(oldp+11554,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_src_e3_ff__DOT__l1clk));
    bufp->fullBit(oldp+11555,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_upper_flush_e2_ff__DOT__l1clk));
    bufp->fullIData(oldp+11556,(0x3fU),32);
    bufp->fullBit(oldp+11557,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_upper_flush_e3_ff__DOT__l1clk));
    bufp->fullBit(oldp+11558,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_upper_flush_e4_ff__DOT__l1clk));
    bufp->fullBit(oldp+11559,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__aff__DOT__l1clk));
    bufp->fullBit(oldp+11560,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__bff__DOT__l1clk));
    bufp->fullBit(oldp+11561,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__brimmff__DOT__l1clk));
    bufp->fullBit(oldp+11562,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__pcff__DOT__l1clk));
    bufp->fullBit(oldp+11563,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__l1clk));
    bufp->fullBit(oldp+11564,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__aff__DOT__l1clk));
    bufp->fullBit(oldp+11565,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__bff__DOT__l1clk));
    bufp->fullBit(oldp+11566,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__brimmff__DOT__l1clk));
    bufp->fullBit(oldp+11567,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__pcff__DOT__l1clk));
    bufp->fullBit(oldp+11568,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__l1clk));
    bufp->fullBit(oldp+11569,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_ap_e1_ff__DOT__l1clk));
    bufp->fullBit(oldp+11570,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_ap_e2_ff__DOT__l1clk));
    bufp->fullBit(oldp+11571,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_ap_e3_ff__DOT__l1clk));
    bufp->fullBit(oldp+11572,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_ap_e4_ff__DOT__l1clk));
    bufp->fullBit(oldp+11573,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e2_ff__DOT__l1clk));
    bufp->fullBit(oldp+11574,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_pp_e3_ff__DOT__l1clk));
    bufp->fullBit(oldp+11575,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e1_ff__DOT__l1clk));
    bufp->fullBit(oldp+11576,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e2_ff__DOT__l1clk));
    bufp->fullBit(oldp+11577,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_src_e3_ff__DOT__l1clk));
    bufp->fullBit(oldp+11578,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_upper_flush_e2_ff__DOT__l1clk));
    bufp->fullBit(oldp+11579,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_upper_flush_e3_ff__DOT__l1clk));
    bufp->fullBit(oldp+11580,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_upper_flush_e4_ff__DOT__l1clk));
    bufp->fullBit(oldp+11581,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__exu_mul_c1_e1_clk));
    bufp->fullBit(oldp+11582,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__exu_mul_c1_e2_clk));
    bufp->fullBit(oldp+11583,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__exu_mul_c1_e3_clk));
    bufp->fullBit(oldp+11584,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_e1_ff__DOT__l1clk));
    bufp->fullBit(oldp+11585,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_e2_ff__DOT__l1clk));
    bufp->fullBit(oldp+11586,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_e1_ff__DOT__l1clk));
    bufp->fullBit(oldp+11587,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_e2_ff__DOT__l1clk));
    bufp->fullBit(oldp+11588,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__prod_e3_ff__DOT__l1clk));
    bufp->fullBit(oldp+11589,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__npc_any_ff__DOT__l1clk));
    bufp->fullBit(oldp+11590,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__predict_mp_ff__DOT__l1clk));
    bufp->fullIData(oldp+11591,(0x32U),32);
    bufp->fullIData(oldp+11592,(0x33U),32);
    bufp->fullBit(oldp+11593,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0ff__DOT__l1clk));
    bufp->fullBit(oldp+11594,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1ff__DOT__l1clk));
    bufp->fullBit(oldp+11595,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata2ff__DOT__l1clk));
    bufp->fullBit(oldp+11596,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0pcff__DOT__l1clk));
    bufp->fullBit(oldp+11597,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1pcff__DOT__l1clk));
    bufp->fullBit(oldp+11598,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2pcff__DOT__l1clk));
    bufp->fullBit(oldp+11599,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__illegal_any_ff__DOT__l1clk));
    bufp->fullBit(oldp+11600,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0ff__DOT__l1clk));
    bufp->fullBit(oldp+11601,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1ff__DOT__l1clk));
    bufp->fullBit(oldp+11602,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2ff__DOT__l1clk));
    bufp->fullIData(oldp+11603,(0x80U),32);
    bufp->fullBit(oldp+11604,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__l1clk));
    bufp->fullBit(oldp+11605,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parityff__DOT__l1clk));
    bufp->fullBit(oldp+11606,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__l1clk));
    bufp->fullBit(oldp+11607,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parityff__DOT__l1clk));
    bufp->fullBit(oldp+11608,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__l1clk));
    bufp->fullBit(oldp+11609,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2parityff__DOT__l1clk));
    bufp->fullWData(oldp+11610,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__e1_rets_out),124);
    bufp->fullWData(oldp+11614,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__e1_rets_in),124);
    bufp->fullWData(oldp+11618,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__e4_rets_out),124);
    bufp->fullWData(oldp+11622,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__e4_rets_in),124);
    bufp->fullBit(oldp+11626,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsoverpop_valid_ns));
    bufp->fullBit(oldp+11627,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsoverpop_valid_f));
    bufp->fullIData(oldp+11628,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsoverpop_ns),31);
    bufp->fullBit(oldp+11629,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsunderpop_valid_ns));
    bufp->fullBit(oldp+11630,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsunderpop_valid_f));
    bufp->fullIData(oldp+11631,(0x10U),32);
    bufp->fullBit(oldp+11632,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank0_way0__DOT__l1clk));
    bufp->fullBit(oldp+11633,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank0_way1__DOT__l1clk));
    bufp->fullBit(oldp+11634,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank1_way0__DOT__l1clk));
    bufp->fullBit(oldp+11635,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank1_way1__DOT__l1clk));
    bufp->fullBit(oldp+11636,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank2_way0__DOT__l1clk));
    bufp->fullBit(oldp+11637,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank2_way1__DOT__l1clk));
    bufp->fullBit(oldp+11638,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank3_way0__DOT__l1clk));
    bufp->fullBit(oldp+11639,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__0__KET____DOT__btb_bank3_way1__DOT__l1clk));
    bufp->fullBit(oldp+11640,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank0_way0__DOT__l1clk));
    bufp->fullBit(oldp+11641,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank0_way1__DOT__l1clk));
    bufp->fullBit(oldp+11642,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank1_way0__DOT__l1clk));
    bufp->fullBit(oldp+11643,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank1_way1__DOT__l1clk));
    bufp->fullBit(oldp+11644,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank2_way0__DOT__l1clk));
    bufp->fullBit(oldp+11645,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank2_way1__DOT__l1clk));
    bufp->fullBit(oldp+11646,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank3_way0__DOT__l1clk));
    bufp->fullBit(oldp+11647,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__1__KET____DOT__btb_bank3_way1__DOT__l1clk));
    bufp->fullBit(oldp+11648,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank0_way0__DOT__l1clk));
    bufp->fullBit(oldp+11649,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank0_way1__DOT__l1clk));
    bufp->fullBit(oldp+11650,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank1_way0__DOT__l1clk));
    bufp->fullBit(oldp+11651,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank1_way1__DOT__l1clk));
    bufp->fullBit(oldp+11652,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank2_way0__DOT__l1clk));
    bufp->fullBit(oldp+11653,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank2_way1__DOT__l1clk));
    bufp->fullBit(oldp+11654,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank3_way0__DOT__l1clk));
    bufp->fullBit(oldp+11655,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__2__KET____DOT__btb_bank3_way1__DOT__l1clk));
    bufp->fullBit(oldp+11656,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank0_way0__DOT__l1clk));
    bufp->fullBit(oldp+11657,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank0_way1__DOT__l1clk));
    bufp->fullBit(oldp+11658,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank1_way0__DOT__l1clk));
    bufp->fullBit(oldp+11659,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank1_way1__DOT__l1clk));
    bufp->fullBit(oldp+11660,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank2_way0__DOT__l1clk));
    bufp->fullBit(oldp+11661,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank2_way1__DOT__l1clk));
    bufp->fullBit(oldp+11662,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank3_way0__DOT__l1clk));
    bufp->fullBit(oldp+11663,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__BTB_FLOPS__BRA__3__KET____DOT__btb_bank3_way1__DOT__l1clk));
    bufp->fullBit(oldp+11664,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__bht_dataoutf__DOT__l1clk));
    bufp->fullBit(oldp+11665,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_way0_data_out__DOT__l1clk));
    bufp->fullBit(oldp+11666,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0_way1_data_out__DOT__l1clk));
    bufp->fullBit(oldp+11667,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_way0_data_out__DOT__l1clk));
    bufp->fullBit(oldp+11668,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1_way1_data_out__DOT__l1clk));
    bufp->fullBit(oldp+11669,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_way0_data_out__DOT__l1clk));
    bufp->fullBit(oldp+11670,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2_way1_data_out__DOT__l1clk));
    bufp->fullBit(oldp+11671,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_way0_data_out__DOT__l1clk));
    bufp->fullBit(oldp+11672,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3_way1_data_out__DOT__l1clk));
    bufp->fullBit(oldp+11673,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_ff__DOT__l1clk));
    bufp->fullIData(oldp+11674,(0x1cU),32);
    bufp->fullBit(oldp+11675,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__faddrf2_ff__DOT__l1clk));
    bufp->fullBit(oldp+11676,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__retstack__BRA__0__KET____DOT__rets_ff__DOT__l1clk));
    bufp->fullBit(oldp+11677,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__retstack__BRA__1__KET____DOT__rets_ff__DOT__l1clk));
    bufp->fullBit(oldp+11678,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__retstack__BRA__2__KET____DOT__rets_ff__DOT__l1clk));
    bufp->fullBit(oldp+11679,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__bp__DOT__retstack__BRA__3__KET____DOT__rets_ff__DOT__l1clk));
    bufp->fullBit(oldp+11680,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__faddmiss_ff__DOT__l1clk));
    bufp->fullBit(oldp+11681,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__faddrf1_ff__DOT__l1clk));
    bufp->fullBit(oldp+11682,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_even_beat));
    bufp->fullBit(oldp+11683,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_bypass_data));
    bufp->fullBit(oldp+11684,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_f1_f2_c1_clk));
    bufp->fullBit(oldp+11685,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__debug_c1_clk));
    bufp->fullBit(oldp+11686,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_iccm_data));
    bufp->fullBit(oldp+11687,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__debug_data_clk));
    bufp->fullIData(oldp+11688,(0U),17);
    bufp->fullQData(oldp+11689,(0ULL),39);
    bufp->fullBit(oldp+11691,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__byp_data_first_c1_clk));
    bufp->fullBit(oldp+11692,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__byp_data_second_c1_clk));
    bufp->fullBit(oldp+11693,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axiclk));
    bufp->fullBit(oldp+11694,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axiclk_reset));
    bufp->fullBit(oldp+11695,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_reset_rd_addr_cnt));
    bufp->fullCData(oldp+11696,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clk),8);
    bufp->fullCData(oldp+11697,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clk),2);
    bufp->fullCData(oldp+11698,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clk),2);
    bufp->fullCData(oldp+11699,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clk),2);
    bufp->fullCData(oldp+11700,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clk),2);
    bufp->fullBit(oldp+11701,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clk))));
    bufp->fullBit(oldp+11702,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clk))));
    bufp->fullBit(oldp+11703,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clk))));
    bufp->fullBit(oldp+11704,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clk))));
    bufp->fullBit(oldp+11705,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w0_clk) 
                                     >> 1U))));
    bufp->fullBit(oldp+11706,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w1_clk) 
                                     >> 1U))));
    bufp->fullBit(oldp+11707,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w2_clk) 
                                     >> 1U))));
    bufp->fullBit(oldp+11708,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__tag_valid_w3_clk) 
                                     >> 1U))));
    bufp->fullBit(oldp+11709,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clk))));
    bufp->fullBit(oldp+11710,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clk) 
                                     >> 1U))));
    bufp->fullBit(oldp+11711,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clk) 
                                     >> 2U))));
    bufp->fullBit(oldp+11712,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clk) 
                                     >> 3U))));
    bufp->fullBit(oldp+11713,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clk) 
                                     >> 4U))));
    bufp->fullBit(oldp+11714,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clk) 
                                     >> 5U))));
    bufp->fullBit(oldp+11715,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clk) 
                                     >> 6U))));
    bufp->fullBit(oldp+11716,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_clk) 
                                     >> 7U))));
    bufp->fullBit(oldp+11717,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__byp_data_first_half__DOT__l1clk));
    bufp->fullBit(oldp+11718,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__byp_data_second_half__DOT__l1clk));
    bufp->fullBit(oldp+11719,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_debug_data_ff__DOT__l1clk));
    bufp->fullBit(oldp+11720,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_debug_sel_ff__DOT__l1clk));
    bufp->fullBit(oldp+11721,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_fetch_addr_f2_ff__DOT__l1clk));
    bufp->fullBit(oldp+11722,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__imb_f2_ff__DOT__l1clk));
    bufp->fullIData(oldp+11723,(0x40U),32);
    bufp->fullBit(oldp+11724,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__ldst_stbuf_reqvld_dc3));
    bufp->fullBit(oldp+11725,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_hit_rdbuf_hi));
    bufp->fullBit(oldp+11726,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_hit_rdbuf_lo));
    bufp->fullIData(oldp+11727,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rdbuf_hi),32);
    bufp->fullIData(oldp+11728,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_rdbuf_lo),32);
    bufp->fullCData(oldp+11729,(7U),3);
    bufp->fullCData(oldp+11730,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_ext_dc5),8);
    bufp->fullCData(oldp+11731,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_load_tag),3);
    bufp->fullBit(oldp+11732,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__0__KET____DOT__buf_addrff__DOT__l1clk));
    bufp->fullBit(oldp+11733,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__0__KET____DOT__buf_dataff__DOT__l1clk));
    bufp->fullBit(oldp+11734,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__1__KET____DOT__buf_addrff__DOT__l1clk));
    bufp->fullBit(oldp+11735,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__1__KET____DOT__buf_dataff__DOT__l1clk));
    bufp->fullBit(oldp+11736,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__2__KET____DOT__buf_addrff__DOT__l1clk));
    bufp->fullBit(oldp+11737,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__2__KET____DOT__buf_dataff__DOT__l1clk));
    bufp->fullBit(oldp+11738,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__3__KET____DOT__buf_addrff__DOT__l1clk));
    bufp->fullBit(oldp+11739,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__3__KET____DOT__buf_dataff__DOT__l1clk));
    bufp->fullBit(oldp+11740,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__4__KET____DOT__buf_addrff__DOT__l1clk));
    bufp->fullBit(oldp+11741,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__4__KET____DOT__buf_dataff__DOT__l1clk));
    bufp->fullBit(oldp+11742,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__5__KET____DOT__buf_addrff__DOT__l1clk));
    bufp->fullBit(oldp+11743,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__5__KET____DOT__buf_dataff__DOT__l1clk));
    bufp->fullBit(oldp+11744,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__6__KET____DOT__buf_addrff__DOT__l1clk));
    bufp->fullBit(oldp+11745,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__6__KET____DOT__buf_dataff__DOT__l1clk));
    bufp->fullBit(oldp+11746,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__7__KET____DOT__buf_addrff__DOT__l1clk));
    bufp->fullBit(oldp+11747,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__genblk9__BRA__7__KET____DOT__buf_dataff__DOT__l1clk));
    bufp->fullBit(oldp+11748,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addrff__DOT__l1clk));
    bufp->fullBit(oldp+11749,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dataff__DOT__l1clk));
    bufp->fullBit(oldp+11750,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_ff__DOT__l1clk));
    bufp->fullBit(oldp+11751,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addrff__DOT__l1clk));
    bufp->fullBit(oldp+11752,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_dataff__DOT__l1clk));
    bufp->fullBit(oldp+11753,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_bus_valid_clken));
    bufp->fullBit(oldp+11754,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_data_ff__DOT__l1clk));
    bufp->fullCData(oldp+11755,(0xeU),4);
    bufp->fullBit(oldp+11756,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_dc2ff__DOT__l1clk));
    bufp->fullBit(oldp+11757,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__end_addr_dc3ff__DOT__l1clk));
    bufp->fullBit(oldp+11758,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1ff__DOT__l1clk));
    bufp->fullBit(oldp+11759,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc2ff__DOT__l1clk));
    bufp->fullBit(oldp+11760,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc3ff__DOT__l1clk));
    bufp->fullBit(oldp+11761,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offsetff__DOT__l1clk));
    bufp->fullBit(oldp+11762,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1ff__DOT__l1clk));
    bufp->fullBit(oldp+11763,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__sadc2ff__DOT__l1clk));
    bufp->fullBit(oldp+11764,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__sadc3ff__DOT__l1clk));
    bufp->fullBit(oldp+11765,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__sddc1ff__DOT__l1clk));
    bufp->fullBit(oldp+11766,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__sddc2ff__DOT__l1clk));
    bufp->fullBit(oldp+11767,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__sddc3ff__DOT__l1clk));
    bufp->fullBit(oldp+11768,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_addrff__DOT__l1clk));
    bufp->fullBit(oldp+11769,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__DOT__l1clk));
    bufp->fullBit(oldp+11770,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_addrff__DOT__l1clk));
    bufp->fullBit(oldp+11771,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__DOT__l1clk));
    bufp->fullBit(oldp+11772,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_addrff__DOT__l1clk));
    bufp->fullBit(oldp+11773,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_dataff__DOT__l1clk));
    bufp->fullBit(oldp+11774,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_addrff__DOT__l1clk));
    bufp->fullBit(oldp+11775,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_dataff__DOT__l1clk));
    bufp->fullBit(oldp+11776,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__4__KET____DOT__stbuf_addrff__DOT__l1clk));
    bufp->fullBit(oldp+11777,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__4__KET____DOT__stbuf_dataff__DOT__l1clk));
    bufp->fullBit(oldp+11778,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__5__KET____DOT__stbuf_addrff__DOT__l1clk));
    bufp->fullBit(oldp+11779,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__5__KET____DOT__stbuf_dataff__DOT__l1clk));
    bufp->fullBit(oldp+11780,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__6__KET____DOT__stbuf_addrff__DOT__l1clk));
    bufp->fullBit(oldp+11781,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__6__KET____DOT__stbuf_dataff__DOT__l1clk));
    bufp->fullBit(oldp+11782,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__7__KET____DOT__stbuf_addrff__DOT__l1clk));
    bufp->fullBit(oldp+11783,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__7__KET____DOT__stbuf_dataff__DOT__l1clk));
    bufp->fullBit(oldp+11784,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_dc3ff__DOT__l1clk));
    bufp->fullBit(oldp+11785,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_dc3ff__DOT__l1clk));
    bufp->fullIData(oldp+11786,(0xf00c1000U),32);
    bufp->fullIData(oldp+11787,(0xf00c2000U),32);
    bufp->fullIData(oldp+11788,(0xf00c3000U),32);
    bufp->fullIData(oldp+11789,(0xf00c4000U),32);
    bufp->fullIData(oldp+11790,(0xf00c5000U),32);
    bufp->fullIData(oldp+11791,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__GW_CONFIG[0]),32);
    bufp->fullIData(oldp+11792,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__GW_CONFIG[1]),32);
    bufp->fullIData(oldp+11793,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__GW_CONFIG[2]),32);
    bufp->fullIData(oldp+11794,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__GW_CONFIG[3]),32);
    bufp->fullIData(oldp+11795,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__GW_CONFIG[4]),32);
    bufp->fullIData(oldp+11796,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__GW_CONFIG[5]),32);
    bufp->fullIData(oldp+11797,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__GW_CONFIG[6]),32);
    bufp->fullIData(oldp+11798,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__GW_CONFIG[7]),32);
    bufp->fullIData(oldp+11799,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__GW_CONFIG[8]),32);
    __Vtemp_h5c0dd0b1__0[0U] = 0x3020100U;
    __Vtemp_h5c0dd0b1__0[1U] = 0x7060504U;
    __Vtemp_h5c0dd0b1__0[2U] = 8U;
    bufp->fullWData(oldp+11800,(__Vtemp_h5c0dd0b1__0),72);
    bufp->fullBit(oldp+11803,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__prithresh_reg_write));
    bufp->fullBit(oldp+11804,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__prithresh_reg_read));
    bufp->fullIData(oldp+11805,(9U),32);
    bufp->fullIData(oldp+11806,(0x14U),32);
    bufp->fullIData(oldp+11807,(0U),20);
    bufp->fullIData(oldp+11808,(1U),20);
    bufp->fullBit(oldp+11809,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__gate_clk_pad_i));
    bufp->fullBit(oldp+11810,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__capt_pad_i));
    bufp->fullIData(oldp+11811,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_dat32_o),32);
    bufp->fullCData(oldp+11812,(8U),4);
    bufp->fullCData(oldp+11813,(9U),4);
    bufp->fullCData(oldp+11814,(0xaU),4);
    bufp->fullCData(oldp+11815,(1U),3);
    bufp->fullCData(oldp+11816,(2U),3);
    bufp->fullCData(oldp+11817,(5U),3);
    bufp->fullBit(oldp+11818,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_per_err_i));
    bufp->fullBit(oldp+11819,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_per_rty_i));
    bufp->fullWData(oldp+11820,(Vrvfpgasim__ConstPool__CONST_had8d8c88_0),384);
    bufp->fullWData(oldp+11832,(Vrvfpgasim__ConstPool__CONST_he7ad2b3d_0),384);
    bufp->fullQData(oldp+11844,(0ULL),36);
    bufp->fullIData(oldp+11846,(0U),24);
    bufp->fullSData(oldp+11847,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_spi_accel_rty) 
                                  << 8U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_ptc_rty) 
                                             << 7U) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_ptc_rty_B) 
                                                << 6U) 
                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_ptc_rty_G) 
                                                   << 5U) 
                                                  | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_ptc_rty_R) 
                                                      << 4U) 
                                                     | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_rty) 
                                                         << 3U) 
                                                        | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_rty2) 
                                                            << 2U) 
                                                           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_per_rty_i) 
                                                              << 1U))))))))),12);
    bufp->fullIData(oldp+11848,(vlSymsp->TOP__rvfpgasim__ram.__PVT__mem_addr),32);
    bufp->fullIData(oldp+11849,(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_addr),32);
    bufp->fullIData(oldp+11850,(vlSymsp->TOP__rvfpgasim__ram__ram.__PVT__i),32);
    bufp->fullIData(oldp+11851,(vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.__PVT__i),32);
    bufp->fullCData(oldp+11852,(2U),2);
    bufp->fullCData(oldp+11853,(3U),2);
    bufp->fullCData(oldp+11854,(0x30U),6);
    bufp->fullCData(oldp+11855,(0x31U),6);
    bufp->fullCData(oldp+11856,(6U),3);
    bufp->fullCData(oldp+11857,(7U),3);
    bufp->fullIData(oldp+11858,(5U),32);
    bufp->fullSData(oldp+11859,(0x200U),10);
    bufp->fullSData(oldp+11860,(0x100U),10);
    bufp->fullSData(oldp+11861,(0x80U),10);
    bufp->fullSData(oldp+11862,(0x40U),10);
    bufp->fullSData(oldp+11863,(0x20U),10);
    bufp->fullSData(oldp+11864,(0x10U),10);
    bufp->fullSData(oldp+11865,(8U),10);
    bufp->fullSData(oldp+11866,(4U),10);
    bufp->fullSData(oldp+11867,(2U),10);
    bufp->fullSData(oldp+11868,(1U),10);
    bufp->fullIData(oldp+11869,(0xaU),32);
    bufp->fullBit(oldp+11870,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_en));
    bufp->fullBit(oldp+11871,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_en_data));
    bufp->fullBit(oldp+11872,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_en));
    bufp->fullBit(oldp+11873,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_en_data));
    bufp->fullBit(oldp+11874,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullCData(oldp+11875,(0x24U),6);
    bufp->fullIData(oldp+11876,(0U),32);
    bufp->fullBit(oldp+11877,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    bufp->fullIData(oldp+11878,(5U),32);
    bufp->fullBit(oldp+11879,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullBit(oldp+11880,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+11881,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_en));
    bufp->fullBit(oldp+11882,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_en_data));
    bufp->fullBit(oldp+11883,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_en));
    bufp->fullBit(oldp+11884,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_en_data));
    bufp->fullBit(oldp+11885,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullBit(oldp+11886,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+11887,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullBit(oldp+11888,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+11889,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_en));
    bufp->fullBit(oldp+11890,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_en_data));
    bufp->fullBit(oldp+11891,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_en));
    bufp->fullBit(oldp+11892,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_en_data));
    bufp->fullBit(oldp+11893,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullBit(oldp+11894,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+11895,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullBit(oldp+11896,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+11897,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullBit(oldp+11898,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+11899,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_en));
    bufp->fullBit(oldp+11900,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_en_data));
    bufp->fullBit(oldp+11901,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullBit(oldp+11902,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+11903,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_en));
    bufp->fullBit(oldp+11904,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_en_data));
    bufp->fullBit(oldp+11905,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullBit(oldp+11906,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+11907,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_en));
    bufp->fullBit(oldp+11908,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_en_data));
    bufp->fullBit(oldp+11909,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_empty));
    bufp->fullBit(oldp+11910,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
    bufp->fullBit(oldp+11911,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_en));
    bufp->fullBit(oldp+11912,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_en_data));
    bufp->fullIData(oldp+11913,(0x10U),32);
    bufp->fullSData(oldp+11914,(0U),16);
}
