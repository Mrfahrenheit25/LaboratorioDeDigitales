// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrvfpgasim__Syms.h"


void Vrvfpgasim___024root__trace_chg_sub_3(Vrvfpgasim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvfpgasim___024root__trace_chg_sub_3\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 10013);
    VlWide<4>/*127:0*/ __Vtemp_h4487ee46__0;
    VlWide<12>/*383:0*/ __Vtemp_ha8ea3f06__0;
    VlWide<12>/*383:0*/ __Vtemp_h02dc55ff__0;
    VlWide<8>/*255:0*/ __Vtemp_hac90d32b__0;
    VlWide<12>/*383:0*/ __Vtemp_ha514ca69__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x24U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_reg),32);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg),32);
        bufp->chgBit(oldp+3,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout));
        bufp->chgCData(oldp+4,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout),3);
        bufp->chgSData(oldp+5,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout),16);
        bufp->chgSData(oldp+6,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout),16);
        bufp->chgCData(oldp+7,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout),4);
        bufp->chgCData(oldp+8,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout),3);
        bufp->chgBit(oldp+9,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout));
        bufp->chgBit(oldp+10,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout));
        bufp->chgCData(oldp+12,((3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg)),2);
        bufp->chgCData(oldp+13,((0x1fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr)),5);
        bufp->chgSData(oldp+14,((0xfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr)),12);
        bufp->chgIData(oldp+15,((((- (IData)((0U == 
                                              (3U & 
                                               ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                >> 4U))))) 
                                  & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg 
                                      << 0x18U) | (
                                                   (0xff0000U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg))))) 
                                 | (((- (IData)((1U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                     >> 4U))))) 
                                     & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg))) 
                                    | ((- (IData)((2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                       >> 4U))))) 
                                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg)))),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x24U] 
                     | vlSelf->__Vm_traceActivity[0x36U]))) {
        bufp->chgIData(oldp+16,((((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                              & (0U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type))))) 
                                  & (0x6033U | (0xf8000U 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr 
                                                   << 0xfU)))) 
                                 | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_gpr))) 
                                     & (0x6033U | (0xf80U 
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
                                                << 0x14U))))))),32);
        bufp->chgBit(oldp+17,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_read) 
                               & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type)))));
        bufp->chgBit(oldp+18,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_read) 
                               & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type)))));
        bufp->chgBit(oldp+19,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_csr) 
                               & (0x7c4U == (0xfffU 
                                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_addr)))));
        bufp->chgBit(oldp+20,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dbg_in) 
                               & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type)) 
                                  & ((~ ((0xf004U == 
                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                           >> 0x10U)) 
                                         | (0x1e018U 
                                            == (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                                >> 0xfU)))) 
                                     | ((0x1e018U == 
                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                          >> 0xfU)) 
                                        & (2U != (3U 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                     >> 4U)))))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x25U])) {
        bufp->chgCData(oldp+21,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir),5);
        bufp->chgCData(oldp+22,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en),2);
        bufp->chgBit(oldp+23,((1U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x26U])) {
        bufp->chgCData(oldp+24,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout),4);
        bufp->chgBit(oldp+25,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_din));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_in));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_in));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_pending));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x27U])) {
        bufp->chgCData(oldp+29,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__per0__DOT__PS2__DOT__datacur),8);
        bufp->chgCData(oldp+30,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__per0__DOT__PS2__DOT__cnt),4);
        bufp->chgBit(oldp+31,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__per0__DOT__PS2__DOT__flag));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x28U])) {
        bufp->chgBit(oldp+32,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__o_flash_sclk));
        bufp->chgBit(oldp+33,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__treg) 
                                     >> 7U))));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__o_accel_sclk));
        bufp->chgBit(oldp+35,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__treg) 
                                     >> 7U))));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_irq));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi0_irq));
        bufp->chgBit(oldp+38,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4) 
                               ^ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4_pol))));
        bufp->chgBit(oldp+39,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3) 
                               ^ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3_pol))));
        bufp->chgBit(oldp+40,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__nmi_int) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__nmi_int_r))));
        bufp->chgIData(oldp+41,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__nmi_vec),32);
        bufp->chgIData(oldp+42,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_dat),32);
        bufp->chgBit(oldp+43,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_ack));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__per0__DOT__PS2__DOT__kdataf));
        bufp->chgCData(oldp+45,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__per0__DOT__PS2__DOT__debounce__DOT__cnt1),5);
        bufp->chgBit(oldp+46,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__per0__DOT__PS2__DOT__debounce__DOT__Iv1));
        bufp->chgCData(oldp+47,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__treg),8);
        bufp->chgBit(oldp+48,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfwe));
        bufp->chgCData(oldp+49,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__state),2);
        bufp->chgCData(oldp+50,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__bcnt),3);
        bufp->chgBit(oldp+51,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spif));
        bufp->chgSData(oldp+52,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__clkcnt),12);
        bufp->chgBit(oldp+53,((1U & (~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__clkcnt)))))));
        bufp->chgCData(oldp+54,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__mem[0]),8);
        bufp->chgCData(oldp+55,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__mem[1]),8);
        bufp->chgCData(oldp+56,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__mem[2]),8);
        bufp->chgCData(oldp+57,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__mem[3]),8);
        bufp->chgCData(oldp+58,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__treg),8);
        bufp->chgBit(oldp+59,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfwe));
        bufp->chgCData(oldp+60,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__state),2);
        bufp->chgCData(oldp+61,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__bcnt),3);
        bufp->chgSData(oldp+62,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__clkcnt),12);
        bufp->chgBit(oldp+63,((1U & (~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__clkcnt)))))));
        bufp->chgCData(oldp+64,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__mem[0]),8);
        bufp->chgCData(oldp+65,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__mem[1]),8);
        bufp->chgCData(oldp+66,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__mem[2]),8);
        bufp->chgCData(oldp+67,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__mem[3]),8);
        bufp->chgIData(oldp+68,((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__nmi_vec 
                                 >> 1U)),31);
        bufp->chgCData(oldp+69,(((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__nmi_int) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__nmi_int_r)) 
                                  << 5U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_irq) 
                                            << 4U))),6);
        bufp->chgQData(oldp+70,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__mtime),64);
        bufp->chgQData(oldp+72,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__mtimecmp),64);
        bufp->chgBit(oldp+74,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3_edge));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3_pol));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3_timer));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4_edge));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4_pol));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4_timer));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__irq_timer_en));
        bufp->chgIData(oldp+83,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__irq_timer_cnt),32);
        bufp->chgBit(oldp+84,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__irq_gpio_enable));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__irq_ptc_enable));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__nmi_int));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__nmi_int_r));
        bufp->chgCData(oldp+88,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Enables_Reg),8);
        bufp->chgIData(oldp+89,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Digits_Reg),32);
        bufp->chgQData(oldp+90,((((QData)((IData)((0x7fU 
                                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Enables_Reg)))) 
                                  << 0x38U) | (((QData)((IData)(
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
                                                                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Enables_Reg)))))))))))),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x29U])) {
        bufp->chgCData(oldp+92,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__Digits_Bits),7);
        bufp->chgCData(oldp+93,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__wb_dat8_o),8);
        bufp->chgCData(oldp+94,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__transmitter__DOT__tf_data_out),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2cU])) {
        bufp->chgQData(oldp+95,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_rd_data_lo),39);
        bufp->chgQData(oldp+97,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_rd_data_hi),39);
        bufp->chgCData(oldp+99,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_hit),4);
        bufp->chgWData(oldp+100,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data),136);
        bufp->chgCData(oldp+105,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q),4);
        bufp->chgCData(oldp+106,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_fetch_val),8);
        bufp->chgBit(oldp+107,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ic_hit_f2));
        bufp->chgWData(oldp+108,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data),128);
        bufp->chgCData(oldp+112,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__q0parityff__din),8);
        bufp->chgBit(oldp+113,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__ifvalid));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f0));
        bufp->chgBit(oldp+115,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f1));
        bufp->chgBit(oldp+116,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f2));
        bufp->chgCData(oldp+117,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__brdata2ff__en) 
                                   << 2U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__brdata1ff__en) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__brdata0ff__en)))),3);
        bufp->chgQData(oldp+118,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in),51);
        bufp->chgBit(oldp+120,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__brdata0ff__en));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__brdata1ff__en));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellinp__brdata2ff__en));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right3));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f2));
        bufp->chgBit(oldp+129,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_hit_f2));
        bufp->chgBit(oldp+130,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_beat_cnt));
        __Vtemp_h4487ee46__0[0U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[0U];
        __Vtemp_h4487ee46__0[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[2U] 
                                     << 0x1eU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[1U] 
                                                  >> 2U));
        __Vtemp_h4487ee46__0[2U] = (IData)((((QData)((IData)(
                                                             ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[4U] 
                                                               << 0x1aU) 
                                                              | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[3U] 
                                                                 >> 6U)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[3U] 
                                                                << 0x1cU) 
                                                               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[2U] 
                                                                  >> 4U))))));
        __Vtemp_h4487ee46__0[3U] = (IData)(((((QData)((IData)(
                                                              ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[4U] 
                                                                << 0x1aU) 
                                                               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[3U] 
                                                                  >> 6U)))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[3U] 
                                                                 << 0x1cU) 
                                                                | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_data[2U] 
                                                                   >> 4U))))) 
                                            >> 0x20U));
        bufp->chgWData(oldp+131,(__Vtemp_h4487ee46__0),128);
        bufp->chgBit(oldp+135,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en));
        bufp->chgCData(oldp+136,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate),3);
        bufp->chgBit(oldp+137,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb));
        bufp->chgBit(oldp+138,(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in)) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
        bufp->chgBit(oldp+139,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in))));
        bufp->chgQData(oldp+140,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_ic_debug_rd_data_in),34);
        bufp->chgIData(oldp+142,((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_rd_data_hi)),32);
        bufp->chgIData(oldp+143,((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_rd_data_lo)),32);
        bufp->chgCData(oldp+144,((0x7fU & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_rd_data_hi 
                                                   >> 0x20U)))),7);
        bufp->chgCData(oldp+145,((0x7fU & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__dccm_rd_data_lo 
                                                   >> 0x20U)))),7);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2dU])) {
        bufp->chgBit(oldp+146,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en));
        bufp->chgBit(oldp+147,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart_irq));
        bufp->chgBit(oldp+148,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_irq));
        bufp->chgBit(oldp+149,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                      >> 6U))));
        bufp->chgCData(oldp+150,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__en_ptc2),3);
        bufp->chgBit(oldp+151,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__rptc_ctrl) 
                                      >> 6U))));
        bufp->chgBit(oldp+152,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__rptc_ctrl) 
                                      >> 6U))));
        bufp->chgBit(oldp+153,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__rptc_ctrl) 
                                      >> 6U))));
        bufp->chgBit(oldp+154,((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__rptc_ctrl) 
                                         >> 3U)))));
        bufp->chgBit(oldp+155,((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__rptc_ctrl) 
                                         >> 3U)))));
        bufp->chgBit(oldp+156,((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__rptc_ctrl) 
                                         >> 3U)))));
        bufp->chgCData(oldp+157,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ctrl),2);
        bufp->chgIData(oldp+158,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ints),32);
        bufp->chgBit(oldp+159,(((0U != vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ints) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__rgpio_ctrl))));
        bufp->chgSData(oldp+160,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__rptc_ctrl),9);
        bufp->chgBit(oldp+161,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__eclk_gate));
        bufp->chgBit(oldp+162,(((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__rptc_ctrl) 
                                    >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__eclk_gate))));
        bufp->chgSData(oldp+163,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__rptc_ctrl),9);
        bufp->chgBit(oldp+164,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__eclk_gate));
        bufp->chgBit(oldp+165,(((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__rptc_ctrl) 
                                    >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__eclk_gate))));
        bufp->chgSData(oldp+166,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__rptc_ctrl),9);
        bufp->chgBit(oldp+167,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__eclk_gate));
        bufp->chgBit(oldp+168,(((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__rptc_ctrl) 
                                    >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__eclk_gate))));
        bufp->chgCData(oldp+169,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__rp),2);
        bufp->chgCData(oldp+170,((3U & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__rp)))),2);
        bufp->chgCData(oldp+171,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__rp),2);
        bufp->chgCData(oldp+172,((3U & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__rp)))),2);
        bufp->chgBit(oldp+173,((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                         >> 3U)))));
        bufp->chgSData(oldp+174,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl),9);
        bufp->chgBit(oldp+175,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__eclk_gate));
        bufp->chgBit(oldp+176,(((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                                    >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__eclk_gate))));
        bufp->chgBit(oldp+177,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__lsr_mask));
        bufp->chgBit(oldp+178,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__iir_read));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__msr_read));
        bufp->chgBit(oldp+180,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__fifo_read));
        bufp->chgBit(oldp+181,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__fifo_write));
        bufp->chgBit(oldp+182,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rls_int_pnd));
        bufp->chgBit(oldp+183,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__rda_int_pnd));
        bufp->chgBit(oldp+184,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__thre_int_pnd));
        bufp->chgBit(oldp+185,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ms_int_pnd));
        bufp->chgBit(oldp+186,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart16550_0__DOT__regs__DOT__ti_int_pnd));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x2fU])) {
        bufp->chgCData(oldp+187,((0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                   >> 0x22U)))),7);
        bufp->chgIData(oldp+188,((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                          >> 2U))),32);
        bufp->chgBit(oldp+189,(((4U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state)) 
                                | (0xbU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state)))));
        bufp->chgBit(oldp+190,((1U & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))));
        bufp->chgBit(oldp+191,((1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                              >> 1U)))));
        bufp->chgQData(oldp+192,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr),41);
        bufp->chgQData(oldp+194,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr),41);
        bufp->chgCData(oldp+196,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state),4);
        bufp->chgBit(oldp+197,((0U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
        bufp->chgBit(oldp+198,((4U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
        bufp->chgBit(oldp+199,((6U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
        bufp->chgBit(oldp+200,((8U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
        bufp->chgBit(oldp+201,((3U == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
        bufp->chgBit(oldp+202,((0xbU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
        bufp->chgBit(oldp+203,((0xdU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
        bufp->chgBit(oldp+204,((0xfU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
        bufp->chgBit(oldp+205,((0xaU == (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state))));
        bufp->chgBit(oldp+206,((IData)((0x80000ULL 
                                        == (0x3fc080000ULL 
                                            & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)))));
        bufp->chgBit(oldp+207,((IData)((0x100000ULL 
                                        == (0x3fc100000ULL 
                                            & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)))));
        bufp->chgCData(oldp+208,((3U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                >> 2U)))),2);
        bufp->chgSData(oldp+209,(((0xff00U & ((IData)(
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
                                         << 2U) | (
                                                   ((IData)(
                                                            (0x80000ULL 
                                                             == 
                                                             (0x3fc080000ULL 
                                                              & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                 >> 0x12U)))))))),16);
        bufp->chgBit(oldp+210,((1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                              >> 2U)))));
        bufp->chgCData(oldp+211,(((0xcU & ((IData)(
                                                   (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 0x20U)) 
                                           << 2U)) 
                                  | ((2U & ((IData)(
                                                    (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                     >> 0x1eU)) 
                                            << 1U)) 
                                     | (1U & (IData)(
                                                     (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                      >> 3U)))))),4);
        bufp->chgCData(oldp+212,(((0x10U & ((IData)(
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
        bufp->chgBit(oldp+213,((1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                              >> 0x16U)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x30U])) {
        bufp->chgBit(oldp+214,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                      >> 5U))));
        bufp->chgBit(oldp+215,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                      >> 4U))));
        bufp->chgBit(oldp+216,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                      >> 6U))));
        bufp->chgBit(oldp+217,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__ic_rd_en));
        bufp->chgBit(oldp+218,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_b_rden));
        bufp->chgCData(oldp+219,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_haf41de50__0) 
                                   << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hcdb0d4b4__0) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_h37e19409__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____VdfgTmp_hceec723e__0))))),4);
        bufp->chgBit(oldp+220,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_noredir_wb));
        bufp->chgBit(oldp+221,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__core_dbg_cmd_done));
        bufp->chgBit(oldp+222,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                      >> 0xfU))));
        bufp->chgBit(oldp+223,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout))));
        bufp->chgBit(oldp+224,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                      >> 0x11U))));
        bufp->chgBit(oldp+225,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                      >> 0x10U))));
        bufp->chgBit(oldp+226,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)) 
                                      & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+227,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                      >> 0xeU))));
        bufp->chgBit(oldp+228,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_tlu_flush_pause_wb));
        bufp->chgBit(oldp+229,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal));
        bufp->chgBit(oldp+230,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write));
        bufp->chgBit(oldp+231,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_mp_e4));
        bufp->chgBit(oldp+232,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_mp_e4));
        bufp->chgBit(oldp+233,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_npc_wb));
        bufp->chgBit(oldp+234,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                      >> 3U))));
        bufp->chgBit(oldp+235,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__perfcnt_halted));
        bufp->chgBit(oldp+236,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dcsr_wb));
        bufp->chgBit(oldp+237,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dpc_wb));
        bufp->chgIData(oldp+238,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tdata_wrdata_wb),28);
        bufp->chgBit(oldp+239,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4) 
                                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4) 
                                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4) 
                                      | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5d31a63a__0) 
                                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4)))))));
        bufp->chgBit(oldp+240,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus_mie_ns));
        bufp->chgBit(oldp+241,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                      >> 4U))));
        bufp->chgBit(oldp+242,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                      >> 5U))));
        bufp->chgBit(oldp+243,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pause_expired_e4));
        bufp->chgBit(oldp+244,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad0_wb));
        bufp->chgBit(oldp+245,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dicad1_wb));
        bufp->chgBit(oldp+246,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_e4));
        bufp->chgBit(oldp+247,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_e4));
        bufp->chgBit(oldp+248,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ecall_e4));
        bufp->chgBit(oldp+249,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4));
        bufp->chgBit(oldp+250,(((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                    >> 0x11U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))));
        bufp->chgBit(oldp+251,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4));
        bufp->chgBit(oldp+252,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4));
        bufp->chgBit(oldp+253,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__fence_i_e4));
        bufp->chgBit(oldp+254,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ic_perr_e4));
        bufp->chgBit(oldp+255,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__iccm_sbecc_e4));
        bufp->chgBit(oldp+256,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready));
        bufp->chgBit(oldp+257,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready));
        bufp->chgBit(oldp+258,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready));
        bufp->chgBit(oldp+259,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready));
        bufp->chgBit(oldp+260,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready));
        bufp->chgBit(oldp+261,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible));
        bufp->chgBit(oldp+262,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible));
        bufp->chgBit(oldp+263,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4));
        bufp->chgIData(oldp+264,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__npwbc_ff__din),31);
        bufp->chgBit(oldp+265,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4));
        bufp->chgBit(oldp+266,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4));
        bufp->chgBit(oldp+267,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4));
        bufp->chgBit(oldp+268,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_rfnpc_dc4));
        bufp->chgBit(oldp+269,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4));
        bufp->chgBit(oldp+270,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_exc_dc4));
        bufp->chgBit(oldp+271,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_dc4));
        bufp->chgBit(oldp+272,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_dc4));
        bufp->chgBit(oldp+273,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4));
        bufp->chgBit(oldp+274,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4));
        bufp->chgBit(oldp+275,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4_raw));
        bufp->chgBit(oldp+276,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt));
        bufp->chgBit(oldp+277,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt));
        bufp->chgBit(oldp+278,((IData)(((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                            >> 0x11U)) 
                                        & (0U != (0xcU 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout))))));
        bufp->chgBit(oldp+279,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                      >> 2U))));
        bufp->chgBit(oldp+280,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                      >> 0x14U))));
        bufp->chgBit(oldp+281,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__halt_taken));
        bufp->chgBit(oldp+282,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                      >> 0x15U))));
        bufp->chgBit(oldp+283,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                      >> 0x13U))));
        bufp->chgBit(oldp+284,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                      >> 0x12U))));
        bufp->chgBit(oldp+285,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                      >> 0xdU))));
        bufp->chgBit(oldp+286,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                      >> 0xbU))));
        bufp->chgBit(oldp+287,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                      >> 0xaU))));
        bufp->chgBit(oldp+288,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                      >> 1U))));
        bufp->chgBit(oldp+289,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4));
        bufp->chgBit(oldp+290,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4));
        bufp->chgBit(oldp+291,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_e4));
        bufp->chgBit(oldp+292,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_hit_e4));
        bufp->chgCData(oldp+293,((0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                          >> 6U))),4);
        bufp->chgBit(oldp+294,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1));
        bufp->chgBit(oldp+295,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_e4));
        bufp->chgBit(oldp+296,((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                      >> 0xcU))));
        bufp->chgBit(oldp+297,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb));
        bufp->chgBit(oldp+298,((1U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)));
        bufp->chgBit(oldp+299,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns));
        bufp->chgBit(oldp+300,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                      >> 3U))));
        bufp->chgBit(oldp+301,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+302,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                      >> 9U))));
        bufp->chgBit(oldp+303,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                      >> 8U))));
        bufp->chgBit(oldp+304,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns));
        bufp->chgBit(oldp+305,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                      >> 7U))));
        bufp->chgBit(oldp+306,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                      >> 2U))));
        bufp->chgBit(oldp+307,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                      >> 1U))));
        bufp->chgBit(oldp+308,((IData)((0x100U == (0x108U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout))))));
        bufp->chgBit(oldp+309,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcyclel_cout_in));
        bufp->chgBit(oldp+310,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_exu_npc_e4));
        bufp->chgBit(oldp+311,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_flush_npc_e4));
        bufp->chgBit(oldp+312,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_i0_npc_e4));
        bufp->chgBit(oldp+313,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_exu_npc_e4)) 
                                      & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_flush_npc_e4) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_i0_npc_e4)))))));
        bufp->chgBit(oldp+314,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc0_valid_e4));
        bufp->chgBit(oldp+315,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc1_valid_e4));
        bufp->chgBit(oldp+316,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc3_wr_en1));
        bufp->chgBit(oldp+317,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc4_wr_en1));
        bufp->chgBit(oldp+318,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc5_wr_en1));
        bufp->chgBit(oldp+319,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc6_wr_en1));
        bufp->chgCData(oldp+320,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual),4);
        bufp->chgCData(oldp+321,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual),4);
        bufp->chgIData(oldp+322,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout),22);
        bufp->chgSData(oldp+323,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout),11);
        bufp->chgBit(oldp+324,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc0_valid_e4) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pc1_valid_e4))));
        bufp->chgBit(oldp+325,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1));
        bufp->chgIData(oldp+326,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellinp__faddrf1_ff__din),31);
        bufp->chgIData(oldp+327,((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellinp__faddrf1_ff__din 
                                  << 1U)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x31U])) {
        bufp->chgBit(oldp+328,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall));
        bufp->chgBit(oldp+329,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_alu_decode_d));
        bufp->chgBit(oldp+330,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_alu_decode_d));
        bufp->chgIData(oldp+331,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu_p),19);
        bufp->chgBit(oldp+332,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_read));
        bufp->chgBit(oldp+333,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_lsu_decode_d));
        bufp->chgBit(oldp+334,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dccm_req));
        bufp->chgWData(oldp+335,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i0_predict_p_d),74);
        bufp->chgWData(oldp+338,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__i1_predict_p_d),74);
        bufp->chgBit(oldp+341,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dec_tlu_stall_dma_ff__DOT__dffs__DOT____Vcellinp__dffs__din));
        bufp->chgBit(oldp+342,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_nonblock_load_freeze_dc2));
        bufp->chgCData(oldp+343,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded),2);
        bufp->chgBit(oldp+344,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall));
        bufp->chgBit(oldp+345,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d));
        bufp->chgBit(oldp+346,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d));
        bufp->chgBit(oldp+347,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__lsu_decode_d));
        bufp->chgBit(oldp+348,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_presync));
        bufp->chgBit(oldp+349,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_postsync));
        bufp->chgBit(oldp+350,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT____Vcellinp__valid_e1_ff__din));
        bufp->chgBit(oldp+351,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellinp__miscf__en));
        bufp->chgBit(oldp+352,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__shift_illegal));
        bufp->chgBit(oldp+353,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d));
        bufp->chgBit(oldp+354,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_div_decode_d));
        bufp->chgCData(oldp+355,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h8835561c__0) 
                                   << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_hab9cd470__0) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h1ba61645__0) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____VdfgTmp_h9e7ab066__0))))),4);
        bufp->chgBit(oldp+356,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en));
        bufp->chgBit(oldp+357,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_data_en));
        bufp->chgBit(oldp+358,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e1_ctl_en));
        bufp->chgBit(oldp+359,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e1_data_en));
        bufp->chgBit(oldp+360,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i));
        bufp->chgBit(oldp+361,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence));
        bufp->chgBit(oldp+362,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_block_d));
        bufp->chgBit(oldp+363,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_block_d));
        bufp->chgCData(oldp+364,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype),4);
        bufp->chgCData(oldp+365,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype),4);
        bufp->chgBit(oldp+366,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_raw));
        bufp->chgWData(oldp+367,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellinp__e1ff__din),67);
        bufp->chgBit(oldp+370,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3));
        bufp->chgBit(oldp+371,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3));
        bufp->chgBit(oldp+372,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2));
        bufp->chgBit(oldp+373,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2));
        bufp->chgBit(oldp+374,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1));
        bufp->chgBit(oldp+375,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1));
        bufp->chgBit(oldp+376,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift2));
        bufp->chgBit(oldp+377,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift1));
        bufp->chgBit(oldp+378,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d)))));
        bufp->chgBit(oldp+379,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0));
        bufp->chgBit(oldp+380,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1));
        bufp->chgBit(oldp+381,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2));
        bufp->chgBit(oldp+382,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0));
        bufp->chgBit(oldp+383,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1));
        bufp->chgCData(oldp+384,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval),4);
        bufp->chgBit(oldp+385,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT____Vcellinp__bp1ff__en));
        bufp->chgBit(oldp+386,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT____Vcellinp__genblk2__DOT__cinst2ff__en));
        bufp->chgBit(oldp+387,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT____Vcellinp__genblk2__DOT__cinst3ff__en));
        bufp->chgCData(oldp+388,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_done_bus_dff__en) 
                                   << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_done_bus_dff__en) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_done_bus_dff__en) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_done_bus_dff__en))))),4);
        bufp->chgBit(oldp+389,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_done_bus_dff__en));
        bufp->chgBit(oldp+390,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_done_bus_dff__en));
        bufp->chgBit(oldp+391,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_done_bus_dff__en));
        bufp->chgBit(oldp+392,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_done_bus_dff__en));
        bufp->chgIData(oldp+393,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs1_d),32);
        bufp->chgIData(oldp+394,(((- (IData)((1U & 
                                              (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_read))))) 
                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_rs1_d)),32);
        bufp->chgWData(oldp+395,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d),74);
        bufp->chgWData(oldp+398,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d),74);
        bufp->chgCData(oldp+401,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i0_alu_decode_d) 
                                   << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_i1_alu_decode_d))),2);
        bufp->chgBit(oldp+402,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellinp__aff__en));
        bufp->chgBit(oldp+403,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellinp__aff__en));
        bufp->chgBit(oldp+404,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__mul_c1_e1_clken));
        bufp->chgBit(oldp+405,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc1_clken));
        bufp->chgBit(oldp+406,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc1_clken));
        bufp->chgBit(oldp+407,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc1_clken));
        bufp->chgBit(oldp+408,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_free_c1_clken));
        bufp->chgIData(oldp+409,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in),19);
        bufp->chgIData(oldp+410,((0x3ffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in 
                                              >> 1U))),18);
        bufp->chgBit(oldp+411,((1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in)));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x32U])) {
        bufp->chgIData(oldp+412,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr),32);
        bufp->chgCData(oldp+413,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size),3);
        bufp->chgCData(oldp+414,((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                  >> 0x1cU)),4);
        bufp->chgBit(oldp+415,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_awvalid_ff__DOT____Vcellinp__dffs__din));
        bufp->chgBit(oldp+416,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_arvalid_ff__DOT____Vcellinp__dffs__din));
        bufp->chgQData(oldp+417,((((- (QData)((IData)(
                                                      (0U 
                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                   & (((QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                       << 0x38U) | 
                                      (((QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                        << 0x30U) | 
                                       (((QData)((IData)(
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
        bufp->chgCData(oldp+419,((0xffU & (((- (IData)(
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
        bufp->chgBit(oldp+420,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT__axi_wvalid_ff__DOT____Vcellinp__dffs__din));
        bufp->chgBit(oldp+421,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dbg_dma_bubble_ff__DOT__dffs__DOT____Vcellinp__dffs__din));
        bufp->chgBit(oldp+422,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1));
        bufp->chgBit(oldp+423,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_arvalid));
        bufp->chgBit(oldp+424,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_awvalid));
        bufp->chgBit(oldp+425,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_wvalid));
        bufp->chgQData(oldp+426,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x33U])) {
        bufp->chgBit(oldp+428,(vlSymsp->TOP__rvfpgasim.__Vtriunconn7));
        bufp->chgBit(oldp+429,(vlSymsp->TOP__rvfpgasim.__Vtriunconn9));
        bufp->chgBit(oldp+430,(vlSymsp->TOP__rvfpgasim.__Vtriunconn11));
        bufp->chgCData(oldp+431,((((IData)(vlSymsp->TOP__rvfpgasim.__Vtriunconn11) 
                                   << 2U) | (((IData)(vlSymsp->TOP__rvfpgasim.__Vtriunconn9) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim.__Vtriunconn7)))),3);
        bufp->chgBit(oldp+432,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wffull));
        bufp->chgBit(oldp+433,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfempty));
        bufp->chgBit(oldp+434,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wffull));
        bufp->chgBit(oldp+435,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfempty));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x34U])) {
        bufp->chgSData(oldp+436,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr),14);
        bufp->chgBit(oldp+437,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_awready));
        bufp->chgBit(oldp+438,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_arready));
        bufp->chgBit(oldp+439,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_wready));
        bufp->chgBit(oldp+440,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_bvalid));
        bufp->chgQData(oldp+441,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rdata),64);
        bufp->chgBit(oldp+443,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__io_rvalid));
        bufp->chgIData(oldp+444,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                  << 2U)),32);
        bufp->chgIData(oldp+445,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat),32);
        bufp->chgCData(oldp+446,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel),4);
        bufp->chgBit(oldp+447,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we));
        bufp->chgBit(oldp+448,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_cyc));
        bufp->chgBit(oldp+449,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb));
        bufp->chgBit(oldp+450,(((0xbU >= (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)) 
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
        bufp->chgBit(oldp+451,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+452,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                      >> 9U))));
        bufp->chgBit(oldp+453,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+454,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o))));
        bufp->chgBit(oldp+455,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                      >> 3U))));
        bufp->chgBit(oldp+456,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                      >> 2U))));
        bufp->chgBit(oldp+457,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                      >> 7U))));
        bufp->chgBit(oldp+458,(vlSymsp->TOP__rvfpgasim__swervolf.timer_ptc__DOT____VdfgTmp_h61526ae5__0));
        bufp->chgBit(oldp+459,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                      >> 6U))));
        bufp->chgBit(oldp+460,(vlSymsp->TOP__rvfpgasim__swervolf.ptc_b__DOT____VdfgTmp_h61526ae5__0));
        bufp->chgBit(oldp+461,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                      >> 5U))));
        bufp->chgBit(oldp+462,(vlSymsp->TOP__rvfpgasim__swervolf.ptc_g__DOT____VdfgTmp_h61526ae5__0));
        bufp->chgBit(oldp+463,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                      >> 4U))));
        bufp->chgBit(oldp+464,(vlSymsp->TOP__rvfpgasim__swervolf.ptc_r__DOT____VdfgTmp_h61526ae5__0));
        bufp->chgBit(oldp+465,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                      >> 8U))));
        bufp->chgCData(oldp+466,((0x3cU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                           << 2U))),6);
        bufp->chgBit(oldp+467,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                      >> 1U))));
        bufp->chgBit(oldp+468,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__hi_32b_w));
        bufp->chgBit(oldp+469,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__arbiter));
        bufp->chgIData(oldp+470,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__wb_rdt_low),32);
        bufp->chgCData(oldp+471,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi2wb__DOT__cs),4);
        bufp->chgCData(oldp+472,((0x3cU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                           << 2U))),8);
        bufp->chgBit(oldp+473,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module__DOT____VdfgTmp_h6152756d__0) 
                                & (1U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+474,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module__DOT____VdfgTmp_h6152756d__0) 
                                & (2U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+475,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module__DOT____VdfgTmp_h6152756d__0) 
                                & (3U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+476,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module__DOT____VdfgTmp_h6152756d__0) 
                                & (4U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+477,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module__DOT____VdfgTmp_h6152756d__0) 
                                & (5U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+478,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module__DOT____VdfgTmp_h6152756d__0) 
                                & (6U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+479,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module__DOT____VdfgTmp_h6152756d__0) 
                                & (7U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+480,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module__DOT____VdfgTmp_h6152756d__0) 
                                & (8U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+481,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module__DOT____VdfgTmp_h6152756d__0) 
                                & (9U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+482,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module2__DOT____VdfgTmp_h6152756d__0) 
                                & (1U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+483,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module2__DOT____VdfgTmp_h6152756d__0) 
                                & (2U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+484,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module2__DOT____VdfgTmp_h6152756d__0) 
                                & (3U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+485,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module2__DOT____VdfgTmp_h6152756d__0) 
                                & (4U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+486,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module2__DOT____VdfgTmp_h6152756d__0) 
                                & (5U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+487,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module2__DOT____VdfgTmp_h6152756d__0) 
                                & (6U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+488,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module2__DOT____VdfgTmp_h6152756d__0) 
                                & (7U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+489,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module2__DOT____VdfgTmp_h6152756d__0) 
                                & (8U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+490,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module2__DOT____VdfgTmp_h6152756d__0) 
                                & (9U == (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+491,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__per0__DOT__reg_we));
        bufp->chgSData(oldp+492,((0x3cU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                           << 2U))),16);
        bufp->chgBit(oldp+493,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_b__DOT____VdfgTmp_h61526ae5__0) 
                                & (0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+494,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_b__DOT____VdfgTmp_h61526ae5__0) 
                                & (1U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+495,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_b__DOT____VdfgTmp_h61526ae5__0) 
                                & (2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+496,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_b__DOT____VdfgTmp_h61526ae5__0) 
                                & (3U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+497,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_g__DOT____VdfgTmp_h61526ae5__0) 
                                & (0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+498,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_g__DOT____VdfgTmp_h61526ae5__0) 
                                & (1U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+499,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_g__DOT____VdfgTmp_h61526ae5__0) 
                                & (2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+500,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_g__DOT____VdfgTmp_h61526ae5__0) 
                                & (3U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+501,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_r__DOT____VdfgTmp_h61526ae5__0) 
                                & (0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+502,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_r__DOT____VdfgTmp_h61526ae5__0) 
                                & (1U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+503,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_r__DOT____VdfgTmp_h61526ae5__0) 
                                & (2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+504,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.ptc_r__DOT____VdfgTmp_h61526ae5__0) 
                                & (3U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgCData(oldp+505,(vlSymsp->TOP__rvfpgasim__swervolf.__Vcellinp__spi2__adr_i),3);
        bufp->chgCData(oldp+506,((0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat)),8);
        bufp->chgCData(oldp+507,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr),8);
        bufp->chgBit(oldp+508,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfre));
        bufp->chgBit(oldp+509,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfre));
        bufp->chgBit(oldp+510,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfwe));
        bufp->chgBit(oldp+511,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wb_acc));
        bufp->chgBit(oldp+512,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wb_wr));
        bufp->chgBit(oldp+513,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr) 
                                      >> 7U))));
        bufp->chgBit(oldp+514,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr) 
                                      >> 6U))));
        bufp->chgBit(oldp+515,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr) 
                                      >> 5U))));
        bufp->chgBit(oldp+516,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr) 
                                      >> 4U))));
        bufp->chgBit(oldp+517,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr) 
                                      >> 3U))));
        bufp->chgBit(oldp+518,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr) 
                                      >> 2U))));
        bufp->chgCData(oldp+519,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr))),2);
        bufp->chgCData(oldp+520,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__espr),4);
        bufp->chgBit(oldp+521,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wr_spsr));
        bufp->chgBit(oldp+522,((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spcr) 
                                         >> 6U)))));
        bufp->chgCData(oldp+523,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr),8);
        bufp->chgBit(oldp+524,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfre));
        bufp->chgBit(oldp+525,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfre));
        bufp->chgBit(oldp+526,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfwe));
        bufp->chgBit(oldp+527,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wb_acc));
        bufp->chgBit(oldp+528,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wb_wr));
        bufp->chgBit(oldp+529,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr) 
                                      >> 7U))));
        bufp->chgBit(oldp+530,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr) 
                                      >> 6U))));
        bufp->chgBit(oldp+531,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr) 
                                      >> 5U))));
        bufp->chgBit(oldp+532,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr) 
                                      >> 4U))));
        bufp->chgBit(oldp+533,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr) 
                                      >> 3U))));
        bufp->chgBit(oldp+534,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr) 
                                      >> 2U))));
        bufp->chgCData(oldp+535,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr))),2);
        bufp->chgCData(oldp+536,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__espr),4);
        bufp->chgBit(oldp+537,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wr_spsr));
        bufp->chgBit(oldp+538,((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spcr) 
                                         >> 6U)))));
        bufp->chgBit(oldp+539,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.timer_ptc__DOT____VdfgTmp_h61526ae5__0) 
                                & (0U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+540,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.timer_ptc__DOT____VdfgTmp_h61526ae5__0) 
                                & (1U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+541,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.timer_ptc__DOT____VdfgTmp_h61526ae5__0) 
                                & (2U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgBit(oldp+542,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.timer_ptc__DOT____VdfgTmp_h61526ae5__0) 
                                & (3U == (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))))));
        bufp->chgCData(oldp+543,((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))),3);
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
        bufp->chgWData(oldp+544,(__Vtemp_ha8ea3f06__0),384);
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
        bufp->chgWData(oldp+556,(__Vtemp_h02dc55ff__0),384);
        bufp->chgQData(oldp+568,((0xffffffffffffULL 
                                  & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel)) 
                                      << 0x2cU) | (
                                                   ((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel)) 
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
        bufp->chgSData(oldp+570,((0xfffU & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we))))),12);
        bufp->chgSData(oldp+571,(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o),12);
        bufp->chgSData(oldp+572,((0xfffU & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb))))),12);
        bufp->chgCData(oldp+573,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel),4);
        bufp->chgSData(oldp+574,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match),12);
        bufp->chgSData(oldp+575,((0x3ffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))),10);
        bufp->chgQData(oldp+576,((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat)))),64);
        bufp->chgCData(oldp+578,((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__VdfgTmp_h4716a6a3__0) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr))
                                     ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel)
                                     : 0U) << 4U) | 
                                  (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr)) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__VdfgTmp_h4716a6a3__0))
                                    ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_sel)
                                    : 0U))),8);
        bufp->chgSData(oldp+579,((0xff8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                            << 2U))),12);
        bufp->chgSData(oldp+580,((0x1ffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                                            >> 1U))),9);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x35U])) {
        bufp->chgBit(oldp+581,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren));
        bufp->chgBit(oldp+582,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren));
        bufp->chgBit(oldp+583,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0));
        bufp->chgBit(oldp+584,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg_wren0));
        bufp->chgBit(oldp+585,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x36U])) {
        bufp->chgBit(oldp+586,(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__idx_o));
        bufp->chgBit(oldp+587,(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__idx_o));
        bufp->chgCData(oldp+588,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error)
                                   ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__idx_o))),2);
        bufp->chgCData(oldp+589,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error)
                                   ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__idx_o))),2);
        bufp->chgBit(oldp+590,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_valid));
        bufp->chgBit(oldp+591,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error));
        bufp->chgBit(oldp+592,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_valid));
        bufp->chgBit(oldp+593,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error));
        bufp->chgCData(oldp+594,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__DOT__matched_rules),2);
        bufp->chgCData(oldp+595,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__DOT__matched_rules),2);
        bufp->chgBit(oldp+596,(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__idx_o));
        bufp->chgBit(oldp+597,(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__idx_o));
        bufp->chgCData(oldp+598,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error)
                                   ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__idx_o))),2);
        bufp->chgCData(oldp+599,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error)
                                   ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__idx_o))),2);
        bufp->chgBit(oldp+600,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_valid));
        bufp->chgBit(oldp+601,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error));
        bufp->chgBit(oldp+602,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_valid));
        bufp->chgBit(oldp+603,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error));
        bufp->chgCData(oldp+604,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__DOT__matched_rules),2);
        bufp->chgCData(oldp+605,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__DOT__matched_rules),2);
        bufp->chgBit(oldp+606,(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__idx_o));
        bufp->chgBit(oldp+607,(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__idx_o));
        bufp->chgCData(oldp+608,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error)
                                   ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__idx_o))),2);
        bufp->chgCData(oldp+609,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error)
                                   ? 2U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__idx_o))),2);
        bufp->chgBit(oldp+610,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_valid));
        bufp->chgBit(oldp+611,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error));
        bufp->chgBit(oldp+612,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_valid));
        bufp->chgBit(oldp+613,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error));
        bufp->chgCData(oldp+614,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__DOT__matched_rules),2);
        bufp->chgCData(oldp+615,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__DOT__matched_rules),2);
        bufp->chgBit(oldp+616,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dbg_in));
        bufp->chgBit(oldp+617,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren1));
        bufp->chgBit(oldp+618,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0));
        bufp->chgBit(oldp+619,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid));
        bufp->chgBit(oldp+620,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_read));
        bufp->chgBit(oldp+621,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write));
        bufp->chgBit(oldp+622,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_gpr));
        bufp->chgBit(oldp+623,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_csr));
        bufp->chgCData(oldp+624,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibvalid),4);
        bufp->chgBit(oldp+625,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT____Vcellinp__bp0ff__en));
        bufp->chgBit(oldp+626,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_gpr) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_csr))));
        bufp->chgCData(oldp+627,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__en) 
                                   << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__en) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__en) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__en))))),4);
        bufp->chgCData(oldp+628,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_valid_dff__en) 
                                   << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_valid_dff__en) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_valid_dff__en) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_valid_dff__en))))),4);
        bufp->chgCData(oldp+629,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_bus_valid_dff__en) 
                                   << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_bus_valid_dff__en) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_bus_valid_dff__en) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_bus_valid_dff__en))))),4);
        bufp->chgCData(oldp+630,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__en) 
                                   << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__en) 
                                              << 2U) 
                                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__en) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__en))))),4);
        bufp->chgCData(oldp+631,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__din) 
                                   << 6U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__din) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__din) 
                                                 << 2U) 
                                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__din))))),8);
        bufp->chgBit(oldp+632,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in));
        bufp->chgIData(oldp+633,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in),32);
        bufp->chgCData(oldp+634,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in),3);
        bufp->chgBit(oldp+635,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__en) 
                                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__en) 
                                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__en) 
                                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__en))))));
        bufp->chgBit(oldp+636,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error));
        bufp->chgBit(oldp+637,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error));
        bufp->chgBit(oldp+638,((0xf004U == (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                            >> 0x10U))));
        bufp->chgBit(oldp+639,((0x1e018U == (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                             >> 0xfU))));
        bufp->chgBit(oldp+640,((0xfU == (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                         >> 0x1cU))));
        bufp->chgBit(oldp+641,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__en));
        bufp->chgBit(oldp+642,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_bus_valid_dff__en));
        bufp->chgBit(oldp+643,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_data_valid_dff__en));
        bufp->chgBit(oldp+644,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_dccm_valid_dff__din));
        bufp->chgCData(oldp+645,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__din),2);
        bufp->chgBit(oldp+646,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__en));
        bufp->chgBit(oldp+647,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__en));
        bufp->chgBit(oldp+648,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_bus_valid_dff__en));
        bufp->chgBit(oldp+649,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_data_valid_dff__en));
        bufp->chgCData(oldp+650,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__din),2);
        bufp->chgBit(oldp+651,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__en));
        bufp->chgBit(oldp+652,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__en));
        bufp->chgBit(oldp+653,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_bus_valid_dff__en));
        bufp->chgBit(oldp+654,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_data_valid_dff__en));
        bufp->chgCData(oldp+655,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__din),2);
        bufp->chgBit(oldp+656,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__en));
        bufp->chgBit(oldp+657,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__en));
        bufp->chgBit(oldp+658,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_bus_valid_dff__en));
        bufp->chgBit(oldp+659,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_data_valid_dff__en));
        bufp->chgCData(oldp+660,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__din),2);
        bufp->chgBit(oldp+661,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__en));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x37U])) {
        bufp->chgCData(oldp+662,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_write_ns),4);
        bufp->chgBit(oldp+663,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__ifc_fetch_req_bf));
        bufp->chgBit(oldp+664,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_write_ns) 
                                      >> 3U))));
        bufp->chgBit(oldp+665,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right));
        bufp->chgBit(oldp+666,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right2));
        bufp->chgBit(oldp+667,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_left));
        bufp->chgBit(oldp+668,((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellinp__fsm_ff__din))));
        bufp->chgBit(oldp+669,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_req_f2_ns));
        bufp->chgBit(oldp+670,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1));
        bufp->chgCData(oldp+671,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellinp__fsm_ff__din),2);
        bufp->chgCData(oldp+672,(((0x10U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_write_ns) 
                                            << 1U)) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_write_ns))),5);
        bufp->chgCData(oldp+673,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__ifc_fetch_req_bf) 
                                   << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_req_f2_ns))),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x38U])) {
        bufp->chgBit(oldp+674,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_ack));
        bufp->chgBit(oldp+675,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_err));
        bufp->chgIData(oldp+676,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module__DOT__wb_dat),32);
        bufp->chgIData(oldp+677,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_module2__DOT__wb_dat),32);
        bufp->chgCData(oldp+678,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies),3);
        bufp->chgBit(oldp+679,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies))));
        bufp->chgBit(oldp+680,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies) 
                                      >> 1U))));
        bufp->chgBit(oldp+681,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies) 
                                      >> 2U))));
        bufp->chgBit(oldp+682,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill));
        bufp->chgBit(oldp+683,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill));
        bufp->chgCData(oldp+684,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies),3);
        bufp->chgBit(oldp+685,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies))));
        bufp->chgBit(oldp+686,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies) 
                                      >> 1U))));
        bufp->chgBit(oldp+687,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__slv_w_readies) 
                                      >> 2U))));
        bufp->chgBit(oldp+688,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill));
        bufp->chgBit(oldp+689,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x39U])) {
        bufp->chgBit(oldp+690,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec_tlu_flush_leak_one_wb));
        bufp->chgBit(oldp+691,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc));
        bufp->chgSData(oldp+692,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__dcsr_ff__din),14);
        bufp->chgBit(oldp+693,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4));
        bufp->chgCData(oldp+694,((0x3fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_cause_e4) 
                                           << 1U))),6);
        bufp->chgBit(oldp+695,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int));
        bufp->chgBit(oldp+696,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ce_int));
        bufp->chgBit(oldp+697,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int));
        bufp->chgBit(oldp+698,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int));
        bufp->chgBit(oldp+699,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int));
        bufp->chgBit(oldp+700,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi));
        bufp->chgBit(oldp+701,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid));
        bufp->chgBit(oldp+702,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4));
        bufp->chgCData(oldp+703,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_cause_e4),5);
        bufp->chgBit(oldp+704,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts));
        bufp->chgBit(oldp+705,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_halt));
        bufp->chgBit(oldp+706,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode));
        bufp->chgBit(oldp+707,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted));
        bufp->chgBit(oldp+708,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__core_empty));
        bufp->chgBit(oldp+709,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f));
        bufp->chgBit(oldp+710,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req));
        bufp->chgBit(oldp+711,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns));
        bufp->chgBit(oldp+712,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running));
        bufp->chgBit(oldp+713,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers));
        bufp->chgBit(oldp+714,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns));
        bufp->chgBit(oldp+715,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted));
        bufp->chgBit(oldp+716,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode));
        bufp->chgBit(oldp+717,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req));
        bufp->chgBit(oldp+718,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le));
        bufp->chgCData(oldp+719,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu3inc_ff__din) 
                                   << 6U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu2inc_ff__din) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu1inc_ff__din) 
                                                 << 2U) 
                                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu0inc_ff__din))))),8);
        bufp->chgCData(oldp+720,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu0inc_ff__din),2);
        bufp->chgCData(oldp+721,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu1inc_ff__din),2);
        bufp->chgCData(oldp+722,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu2inc_ff__din),2);
        bufp->chgCData(oldp+723,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__pmu3inc_ff__din),2);
        bufp->chgBit(oldp+724,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
        bufp->chgBit(oldp+725,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
        bufp->chgBit(oldp+726,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
        bufp->chgBit(oldp+727,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
        bufp->chgBit(oldp+728,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
        bufp->chgBit(oldp+729,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
    }
    bufp->chgBit(oldp+730,(vlSelf->clk));
    bufp->chgBit(oldp+731,(vlSelf->rst));
    bufp->chgBit(oldp+732,(vlSelf->i_jtag_tck));
    bufp->chgBit(oldp+733,(vlSelf->i_jtag_tms));
    bufp->chgBit(oldp+734,(vlSelf->i_jtag_tdi));
    bufp->chgBit(oldp+735,(vlSelf->i_jtag_trst_n));
    bufp->chgBit(oldp+736,(vlSelf->o_jtag_tdo));
    bufp->chgBit(oldp+737,(vlSelf->o_uart_tx));
    bufp->chgBit(oldp+738,(vlSelf->o_gpio));
    bufp->chgBit(oldp+739,(vlSelf->i_sw0));
    bufp->chgBit(oldp+740,(vlSymsp->TOP__rvfpgasim.o_jtag_tdo));
    bufp->chgBit(oldp+741,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_hard_reset));
    bufp->chgBit(oldp+742,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__dmireset));
    bufp->chgQData(oldp+743,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr),41);
    bufp->chgCData(oldp+745,(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate),4);
    bufp->chgCData(oldp+746,((0xffU & (IData)(((((QData)((IData)(
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
                                               >> (0x38U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter20__DOT__i_counter__DOT__counter_q 
                                                      >> 0xeU)))))),8);
    bufp->chgIData(oldp+747,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_io_dat),32);
    bufp->chgIData(oldp+748,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_ptc_dat),32);
    bufp->chgIData(oldp+749,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_ptc_dat_B),32);
    bufp->chgIData(oldp+750,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_ptc_dat_G),32);
    bufp->chgIData(oldp+751,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_ptc_dat_R),32);
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
    bufp->chgWData(oldp+752,(__Vtemp_hac90d32b__0),252);
    bufp->chgWData(oldp+760,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_err_slv__DOT__err_resp),84);
    bufp->chgWData(oldp+763,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_err_slv__DOT__err_resp),84);
    bufp->chgWData(oldp+766,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_err_slv__DOT__err_resp),84);
    bufp->chgBit(oldp+769,(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_err)) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module__DOT____VdfgTmp_h6152756d__0))));
    bufp->chgBit(oldp+770,(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_gpio_err)) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.gpio_module2__DOT____VdfgTmp_h6152756d__0))));
    bufp->chgIData(oldp+771,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__per0__DOT__PS2__DOT__keycode),32);
    bufp->chgCData(oldp+772,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__per0__DOT__PS2__DOT__dataprev),8);
    bufp->chgIData(oldp+773,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__rptc_cntr),32);
    bufp->chgIData(oldp+774,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__rptc_hrc),32);
    bufp->chgIData(oldp+775,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__rptc_lrc),32);
    bufp->chgBit(oldp+776,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__hrc_match));
    bufp->chgBit(oldp+777,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__lrc_match));
    bufp->chgBit(oldp+778,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__restart));
    bufp->chgBit(oldp+779,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__lrc_match) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__rptc_ctrl) 
                               >> 4U))));
    bufp->chgBit(oldp+780,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__lrc_match)))));
    bufp->chgBit(oldp+781,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_b__DOT__int_match));
    bufp->chgIData(oldp+782,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__rptc_cntr),32);
    bufp->chgIData(oldp+783,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__rptc_hrc),32);
    bufp->chgIData(oldp+784,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__rptc_lrc),32);
    bufp->chgBit(oldp+785,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__hrc_match));
    bufp->chgBit(oldp+786,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__lrc_match));
    bufp->chgBit(oldp+787,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__restart));
    bufp->chgBit(oldp+788,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__lrc_match) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__rptc_ctrl) 
                               >> 4U))));
    bufp->chgBit(oldp+789,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__lrc_match)))));
    bufp->chgBit(oldp+790,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_g__DOT__int_match));
    bufp->chgIData(oldp+791,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__rptc_cntr),32);
    bufp->chgIData(oldp+792,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__rptc_hrc),32);
    bufp->chgIData(oldp+793,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__rptc_lrc),32);
    bufp->chgBit(oldp+794,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__hrc_match));
    bufp->chgBit(oldp+795,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__lrc_match));
    bufp->chgBit(oldp+796,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__restart));
    bufp->chgBit(oldp+797,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__lrc_match) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__rptc_ctrl) 
                               >> 4U))));
    bufp->chgBit(oldp+798,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__lrc_match)))));
    bufp->chgBit(oldp+799,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__ptc_r__DOT__int_match));
    bufp->chgCData(oldp+800,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__spif) 
                               << 7U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wcol) 
                                          << 6U) | 
                                         (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wffull) 
                                           << 3U) | 
                                          (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfempty) 
                                            << 2U) 
                                           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.spi__DOT__rfifo__DOT____VdfgTmp_hbf3f7ff0__0) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__gb)) 
                                               << 1U) 
                                              | ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfifo__DOT__gb)) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.spi__DOT__rfifo__DOT____VdfgTmp_hbf3f7ff0__0)))))))),8);
    bufp->chgCData(oldp+801,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__mem
                             [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfifo__DOT__rp]),8);
    bufp->chgBit(oldp+802,(((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__tcnt)))) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__rfwe))));
    bufp->chgBit(oldp+803,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wfwe) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi__DOT__wffull))));
    bufp->chgCData(oldp+804,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__spif) 
                               << 7U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wcol) 
                                          << 6U) | 
                                         (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wffull) 
                                           << 3U) | 
                                          (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfempty) 
                                            << 2U) 
                                           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.spi2__DOT__rfifo__DOT____VdfgTmp_hbf3f7ff0__0) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__gb)) 
                                               << 1U) 
                                              | ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfifo__DOT__gb)) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.spi2__DOT__rfifo__DOT____VdfgTmp_hbf3f7ff0__0)))))))),8);
    bufp->chgCData(oldp+805,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__mem
                             [vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfifo__DOT__rp]),8);
    bufp->chgBit(oldp+806,(((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__tcnt)))) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__rfwe))));
    bufp->chgBit(oldp+807,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wfwe) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi2__DOT__wffull))));
    bufp->chgCData(oldp+808,(((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4) 
                                ^ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4_pol)) 
                               << 3U) | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3) 
                                           ^ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3_pol)) 
                                          << 2U) | 
                                         (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi0_irq) 
                                           << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart_irq))))),8);
    bufp->chgBit(oldp+809,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__core_rst_l));
    bufp->chgCData(oldp+810,((0xffU & (- (IData)((IData)(vlSelf->clk))))),8);
    bufp->chgSData(oldp+811,((0xffffU & (- (IData)((IData)(vlSelf->clk))))),16);
    bufp->chgCData(oldp+812,((0xfU & (- (IData)((IData)(vlSelf->clk))))),4);
    bufp->chgBit(oldp+813,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_halt_req));
    bufp->chgBit(oldp+814,(((~ ((0U != ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid_en) 
                                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid))) 
                                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_validff__DOT__dffs__DOT____Vcellinp__dffs__din) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__axi_slv_sent_q)))) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__dbg_dma_bubble_ff__DOT__dffs__DOT____Vcellinp__dffs__din))));
    bufp->chgIData(oldp+815,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_reg),32);
    bufp->chgIData(oldp+816,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg),32);
    bufp->chgIData(oldp+817,((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0))) 
                               & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                          >> 2U))) 
                              | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren1))) 
                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_ctrl__DOT__RspPtrEn)
                                      ? ((0xffU & (
                                                   (- (IData)(
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
    bufp->chgBit(oldp+818,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0) 
                            | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren1) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2)))));
    bufp->chgBit(oldp+819,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0));
    bufp->chgIData(oldp+820,((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0))) 
                               & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                          >> 2U))) 
                              | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1))) 
                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_cmd_next_addr))),32);
    bufp->chgBit(oldp+821,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0) 
                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1))));
    bufp->chgBit(oldp+822,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0));
    bufp->chgCData(oldp+823,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout) 
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
                                                             >> 0x22U))))))))))
                               ? 1U : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command) 
                                        & ((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                           & ((~ ((0U 
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
                                        ? 2U : (((~ (IData)(
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
    bufp->chgBit(oldp+824,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout) 
                            & ((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                  & (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en) 
                                      & ((0x16U == 
                                          (0x7fU & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))) 
                                         | (0x17U == 
                                            (0x7fU 
                                             & (IData)(
                                                       (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                        >> 0x22U)))))) 
                                     | ((0x18U == (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))) 
                                        | ((4U == (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))) 
                                           | (5U == 
                                              (0x7fU 
                                               & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                          >> 0x22U))))))))))));
    bufp->chgBit(oldp+825,(((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                            & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__core_dbg_cmd_done) 
                                & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                     >> 5U) & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                               >> 0xfU)) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_dbg_cmd_fail))) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command) 
                                  & (IData)(((0U == 
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
    bufp->chgBit(oldp+826,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command) 
                            & ((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                               & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))))));
    bufp->chgBit(oldp+827,(((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_sb_bus_error))));
    bufp->chgBit(oldp+828,((IData)(((0x5800000000ULL 
                                     == (0x1fc00000000ULL 
                                         & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0)))));
    bufp->chgBit(oldp+829,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0) 
                            & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout)) 
                               & (0x6000000000ULL == 
                                  (0x1fc00000000ULL 
                                   & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))))));
    bufp->chgBit(oldp+830,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack_din) 
                            | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__resumereq) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_halted))))));
    bufp->chgBit(oldp+831,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack_din));
    bufp->chgBit(oldp+832,((IData)(((0x4000000008ULL 
                                     == (0x1fc00000008ULL 
                                         & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0)))));
    bufp->chgBit(oldp+833,((IData)(((0x4040000000ULL 
                                     == (0x1fc40000000ULL 
                                         & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0)))));
    bufp->chgBit(oldp+834,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_unavail));
    bufp->chgBit(oldp+835,((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_unavail) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_halted))))));
    bufp->chgBit(oldp+836,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren) 
                            | ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                               & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout)) 
                                  & ((IData)(((0x1000000000ULL 
                                               == (0x1fc00000000ULL 
                                                   & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractauto_reg))) 
                                     | (IData)(((0x1400000000ULL 
                                                 == 
                                                 (0x1fc00000000ULL 
                                                  & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractauto_reg) 
                                                   >> 1U)))))))));
    bufp->chgBit(oldp+837,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren) 
                            | (IData)((((8U == (0xff08U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                        & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))))))));
    bufp->chgIData(oldp+838,((((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
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
    bufp->chgIData(oldp+839,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmi_reg_rdata_din),32);
    bufp->chgBit(oldp+840,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_wren));
    bufp->chgBit(oldp+841,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h3068a052__0) 
                            | ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                  & ((0x39U == (0x7fU 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                           >> 0x22U)))) 
                                     | ((0x3cU == (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))) 
                                        | (0x3dU == 
                                           (0x7fU & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                             >> 0x22U)))))))))));
    bufp->chgBit(oldp+842,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h3068a052__0)))));
    bufp->chgCData(oldp+843,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din),3);
    bufp->chgBit(oldp+844,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0) 
                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))));
    bufp->chgIData(oldp+845,((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0))) 
                               & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                          >> 2U))) 
                              | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata)))),32);
    bufp->chgBit(oldp+846,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg_wren0) 
                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))));
    bufp->chgIData(oldp+847,((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg_wren0))) 
                               & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                          >> 2U))) 
                              | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                 & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata 
                                            >> 0x20U))))),32);
    bufp->chgBit(oldp+848,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0) 
                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1))));
    bufp->chgIData(oldp+849,((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0))) 
                               & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                          >> 2U))) 
                              | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1))) 
                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg 
                                    + ((1U & (- (IData)(
                                                        (0U 
                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size))))) 
                                       | ((2U & (- (IData)(
                                                           (1U 
                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size))))) 
                                          | ((4U & 
                                              (- (IData)(
                                                         (2U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size))))) 
                                             | (8U 
                                                & (- (IData)(
                                                             (3U 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size)))))))))))),32);
    bufp->chgBit(oldp+850,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout))));
    bufp->chgBit(oldp+851,(((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                            & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                               & (IData)(((0xf000000000ULL 
                                           == (0x1fc00000000ULL 
                                               & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout)))))));
    bufp->chgBit(oldp+852,(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)) 
                            & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)))));
    bufp->chgBit(oldp+853,((1U & (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command)) 
                                  | ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
                                     | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en) 
                                        | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                            >> 8U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                              >> 0x11U))))))));
    bufp->chgBit(oldp+854,((((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__execute_command)) 
                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en)) 
                             | (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                            | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                               >> 8U))));
    bufp->chgCData(oldp+855,((3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__bus_clken)
                                     ? ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                         << 0x16U) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                           >> 0xaU))
                                     : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_bresp_q)))),2);
    bufp->chgCData(oldp+856,((3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__bus_clken)
                                     ? ((vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                         << 0x1eU) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                           >> 2U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_axi_rresp_q)))),2);
    bufp->chgCData(oldp+857,((3U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0) 
                                     & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout)) 
                                        & (0x6000000000ULL 
                                           == (0x1fc00000000ULL 
                                               & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))))
                                     ? (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                >> 2U))
                                     : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractauto_reg)))),2);
    bufp->chgIData(oldp+858,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0) 
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
    bufp->chgIData(oldp+859,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1))
                               ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0))) 
                                   & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                              >> 2U))) 
                                  | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1))) 
                                     & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_cmd_next_addr))
                               : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__data1_reg)),32);
    bufp->chgIData(oldp+860,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1))
                               ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0))) 
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
                                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_cmd_size)))))))))))
                               : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg)),32);
    bufp->chgIData(oldp+861,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))
                               ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0))) 
                                   & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                              >> 2U))) 
                                  | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata)))
                               : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg)),32);
    bufp->chgIData(oldp+862,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg_wren0) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))
                               ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg_wren0))) 
                                   & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                              >> 2U))) 
                                  | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                     & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata 
                                                >> 0x20U))))
                               : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbdata1_reg)),32);
    bufp->chgCData(oldp+863,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_state_en)
                               ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate)
                               : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))),4);
    bufp->chgBit(oldp+864,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren)
                             ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_din)
                             : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout))));
    bufp->chgSData(oldp+865,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren)
                               ? ((0xff00U & ((IData)(
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
                                         << 2U) | (
                                                   ((IData)(
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
    bufp->chgSData(oldp+866,((0xffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren)
                                          ? (IData)(
                                                    (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                     >> 2U))
                                          : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_cmd_next_addr))),16);
    bufp->chgSData(oldp+867,((0xffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__command_wren) 
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
    bufp->chgBit(oldp+868,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren)
                                   ? (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                              >> 2U))
                                   : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout)))));
    bufp->chgCData(oldp+869,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren)
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
    bufp->chgIData(oldp+870,(((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)
                               ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmi_reg_rdata_din
                               : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__dmi_reg_rdata)),32);
    bufp->chgBit(oldp+871,(((~ (IData)(((0x4040000000ULL 
                                         == (0x1fc40000000ULL 
                                             & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0)))) 
                            & ((IData)(((0x4000000008ULL 
                                         == (0x1fc00000008ULL 
                                             & vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h47440a59__0))) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset)))));
    bufp->chgBit(oldp+872,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack_din) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack) 
                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__resumereq) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_halted))))
                             ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack_din)
                             : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack))));
    bufp->chgBit(oldp+873,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en)
                             ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_in)
                             : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done))));
    bufp->chgBit(oldp+874,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en)
                             ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_in)
                             : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done))));
    bufp->chgCData(oldp+875,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_state_en)
                               ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sb_nxtstate)
                               : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))),4);
    bufp->chgCData(oldp+876,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren)
                               ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din)
                               : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout))),3);
    bufp->chgCData(oldp+877,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_wren)
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
    bufp->chgBit(oldp+878,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren)
                             ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din)
                             : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout))));
    bufp->chgBit(oldp+879,((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____VdfgTmp_h3068a052__0) 
                                   | ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                      & ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                         & ((0x39U 
                                             == (0x7fU 
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
    bufp->chgBit(oldp+880,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__sbcs_wren)
                                   ? (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                              >> 0x16U))
                                   : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout)))));
    bufp->chgBit(oldp+881,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_jal) 
                                | ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal)) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_postsync)))) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_jal)) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__ps_stall) 
                                  & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__div_wen_wb)) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__prior_inflight_e1e4)))))));
    bufp->chgBit(oldp+882,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__freeze)
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
    bufp->chgIData(oldp+883,((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid)
                                   ? (((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                                   & (0U 
                                                      == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dbg_cmd_type))))) 
                                       & (0x6033U | 
                                          (0xf8000U 
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
    bufp->chgCData(oldp+884,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT____Vcellinp__genblk2__DOT__cinst3ff__en) 
                               << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT____Vcellinp__genblk2__DOT__cinst2ff__en) 
                                          << 2U) | 
                                         (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT____Vcellinp__bp1ff__en) 
                                           << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT____Vcellinp__bp0ff__en))))),4);
    bufp->chgIData(oldp+885,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT____Vcellinp__bp0ff__en)
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
    bufp->chgBit(oldp+886,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4) 
                            | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_rfnpc_dc4) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt)) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__fence_i_e4) 
                                  | ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid)) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)))))));
    bufp->chgIData(oldp+887,(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__flush_lower_ff__din),31);
    bufp->chgIData(oldp+888,((0x7fffffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)
                                              ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__nmi_vec 
                                                 >> 1U)
                                              : ((1U 
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
    bufp->chgBit(oldp+889,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4) 
                            | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mepc_trigger_hit_sel_pc_e4))))));
    bufp->chgBit(oldp+890,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                            & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                >> 0x11U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns)))));
    bufp->chgBit(oldp+891,((1U & ((IData)(((1U == (3U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout))) 
                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns)))) 
                                  | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                      >> 4U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout))))));
    bufp->chgBit(oldp+892,(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)) 
                            & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns)) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns)) 
                               | ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns)) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns))))));
    bufp->chgBit(oldp+893,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__any_csr_d) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
                                  & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_write)) 
                                     & (0x7cbU == (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                                   >> 0x14U))))))));
    bufp->chgCData(oldp+894,(((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write) 
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
    bufp->chgBit(oldp+895,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dpc_wb) 
                                  | ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                      >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc))))));
    bufp->chgSData(oldp+896,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid) 
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
    bufp->chgSData(oldp+897,(((0x600U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                         << 9U)) | 
                              (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns) 
                                << 8U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns) 
                                           << 7U) | 
                                          (((((0x7fffffc0U 
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
    bufp->chgIData(oldp+898,((vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____VdfgTmp_h867ec75a__0 
                              | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2))) 
                                  & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                 | (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1))) 
                                     & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellinp__faddrf2_ff__din) 
                                    | ((- (IData)((1U 
                                                   & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2)) 
                                                      & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1)) 
                                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush))))))) 
                                       & vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellinp__faddrf1_ff__din))))),31);
    bufp->chgBit(oldp+899,((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__flush_fb) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
                                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2)) 
                                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout) 
                                      >> 1U)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
                                                 & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)) 
                                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout))))))));
    bufp->chgBit(oldp+900,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2)) 
                                  & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1)) 
                                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush)))))));
    bufp->chgIData(oldp+901,(((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__flush_fb) 
                                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2)) 
                                      | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout) 
                                         >> 1U)) | 
                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
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
    bufp->chgIData(oldp+902,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__ifc_fetch_req_bf)
                               ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellinp__faddrf1_ff__din
                               : vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)),31);
    bufp->chgCData(oldp+903,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dma_iccm_stall_any) 
                               << 2U) | ((2U & ((0xfffeU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                    >> 0x10U)) 
                                                | (0x7ffffffeU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                      >> 1U)))) 
                                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)))),3);
    bufp->chgBit(oldp+904,(((~ ((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_beat_count)) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in))) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hbcc887ba__0) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_axi_ic_req_ff2)))));
    bufp->chgBit(oldp+905,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in)) 
                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))))));
    bufp->chgCData(oldp+906,((7U & ((6U & (- (IData)(
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
    bufp->chgCData(oldp+907,((7U & ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                                     ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count) 
                                        + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in))
                                     : (6U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                                              >> 2U))))),3);
    bufp->chgBit(oldp+908,(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in)) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____VdfgTmp_hbcc887ba__0))));
    bufp->chgCData(oldp+909,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
                               << 4U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_hit_f2) 
                                          << 3U) | 
                                         (((IData)(
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_bus_acc_fault_f2))) 
                                           << 2U) | 
                                          ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_arvalid_ff) 
                                             & ((~ 
                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_bus_clk_en_ff) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_axi_arready_unq_ff))) 
                                                & (0U 
                                                   != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)))) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_pmu_bus_trxn_in)))))),5);
    bufp->chgSData(oldp+910,(((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4) 
                                ^ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq4_pol)) 
                               << 4U) | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3) 
                                           ^ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__sw_irq3_pol)) 
                                          << 3U) | 
                                         (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__spi0_irq) 
                                           << 2U) | 
                                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__uart_irq) 
                                           << 1U))))),9);
    bufp->chgBit(oldp+911,((((0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
                                      >> 0x10U)) > 
                             (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                                       ? (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__meipt))
                                       : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__meipt)))) 
                            & ((0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[5U] 
                                        >> 0x10U)) 
                               > (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                                           ? (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__meicurpl))
                                           : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__dec__DOT__tlu__DOT__meicurpl)))))));
    bufp->chgBit(oldp+912,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__pl_in_q) 
                            == ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__config_reg)
                                 ? 0U : 0xfU))));
    bufp->chgCData(oldp+913,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                        ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                            << 0x18U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                              >> 8U))
                                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U]))),8);
    bufp->chgCData(oldp+914,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                       ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                           << 0x1cU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                             >> 4U))
                                       : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U]))),4);
    bufp->chgCData(oldp+915,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                        ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                            << 8U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                              >> 0x18U))
                                        : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                            << 0x10U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[0U] 
                                              >> 0x10U))))),8);
    bufp->chgCData(oldp+916,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                       ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                           << 0x14U) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                             >> 0xcU))
                                       : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                           << 0x18U) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                             >> 8U))))),4);
    bufp->chgCData(oldp+917,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                        ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                            << 0x18U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                              >> 8U))
                                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U]))),8);
    bufp->chgCData(oldp+918,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                       ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                           << 0xcU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                             >> 0x14U))
                                       : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                           << 0x10U) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                             >> 0x10U))))),4);
    bufp->chgCData(oldp+919,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                        ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                            << 8U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                              >> 0x18U))
                                        : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                            << 0x10U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[1U] 
                                              >> 0x10U))))),8);
    bufp->chgCData(oldp+920,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                       ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                           >> 0x1cU))
                                       : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                           << 8U) | 
                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[0U] 
                                           >> 0x18U))))),4);
    bufp->chgCData(oldp+921,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                        ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                                            << 0x18U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                                              >> 8U))
                                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U]))),8);
    bufp->chgCData(oldp+922,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                       ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                           << 0x1cU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                             >> 4U))
                                       : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U]))),4);
    bufp->chgCData(oldp+923,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U]
                                        : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                                            << 8U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[2U] 
                                              >> 0x18U))))),8);
    bufp->chgCData(oldp+924,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                       ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                           << 0x10U) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                             >> 0x10U))
                                       : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                           << 0x14U) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                             >> 0xcU))))),4);
    bufp->chgCData(oldp+925,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                        ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                            << 0x10U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                              >> 0x10U))
                                        : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                            << 0x18U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                              >> 8U))))),8);
    bufp->chgCData(oldp+926,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                       ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                           << 8U) | 
                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                           >> 0x18U))
                                       : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                           << 0xcU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                             >> 0x14U))))),4);
    bufp->chgCData(oldp+927,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[4U]
                                        : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                            << 8U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[3U] 
                                              >> 0x18U))))),8);
    bufp->chgCData(oldp+928,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                       ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U]
                                       : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[1U] 
                                           >> 0x1cU))))),4);
    bufp->chgCData(oldp+929,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                        ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                                            << 8U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                                              >> 0x18U))
                                        : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                                            << 0x10U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[5U] 
                                              >> 0x10U))))),8);
    bufp->chgCData(oldp+930,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                       ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                           << 4U) | 
                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                           >> 0x1cU))
                                       : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                           << 8U) | 
                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[2U] 
                                           >> 0x18U))))),4);
    bufp->chgCData(oldp+931,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                        ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U] 
                                            << 0x18U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U] 
                                              >> 8U))
                                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[6U]))),8);
    bufp->chgCData(oldp+932,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                       ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U] 
                                           << 0x1cU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U] 
                                             >> 4U))
                                       : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[3U]))),4);
    bufp->chgCData(oldp+933,((0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                        ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                                            << 0x10U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                                              >> 0x10U))
                                        : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                                            << 0x18U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_id[8U] 
                                              >> 8U))))),8);
    bufp->chgCData(oldp+934,((0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__DOT__a_is_lt_b)
                                       ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                           << 0x18U) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                             >> 8U))
                                       : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                           << 0x1cU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT__level_intpend_w_prior_en[4U] 
                                             >> 4U))))),4);
    bufp->chgBit(oldp+935,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                             >> 0xaU) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_stb) 
                                         & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_s2m_sys_ack)) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_we))))));
    bufp->chgCData(oldp+936,((0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__Digits_Reg 
                                      >> (0x1cU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon__DOT__SegDispl_Ctr__DOT__counter20__DOT__i_counter__DOT__counter_q 
                                                   >> 0xfU))))),4);
    bufp->chgIData(oldp+937,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_cntr),32);
    bufp->chgIData(oldp+938,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_hrc),32);
    bufp->chgIData(oldp+939,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_lrc),32);
    bufp->chgBit(oldp+940,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__hrc_match));
    bufp->chgBit(oldp+941,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__lrc_match));
    bufp->chgBit(oldp+942,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__restart));
    bufp->chgBit(oldp+943,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__lrc_match) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__rptc_ctrl) 
                               >> 4U))));
    bufp->chgBit(oldp+944,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__dmi_wrapper__core_rst_n)) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__lrc_match)))));
    bufp->chgBit(oldp+945,(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__timer_ptc__DOT__int_match));
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
    bufp->chgWData(oldp+946,(__Vtemp_ha514ca69__0),384);
    bufp->chgSData(oldp+958,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__o_wb_ack) 
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
    bufp->chgCData(oldp+959,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__mst_b_readies),3);
    bufp->chgBit(oldp+960,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->chgCData(oldp+961,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__mst_r_readies),3);
    bufp->chgBit(oldp+962,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->chgBit(oldp+963,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_ready))));
    bufp->chgBit(oldp+964,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_ready))));
    bufp->chgCData(oldp+965,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->chgCData(oldp+966,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->chgCData(oldp+967,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+968,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->chgCData(oldp+969,((3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i)
                                     ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                         ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                         : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                     : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+970,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+971,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+972,((3U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                     ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                     : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+973,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+974,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+975,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+976,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgCData(oldp+977,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+978,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgBit(oldp+979,((1U & ((~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[2U] 
                                      >> 4U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+980,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->chgCData(oldp+981,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->chgCData(oldp+982,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->chgCData(oldp+983,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+984,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->chgCData(oldp+985,((3U & ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U] 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                     ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                         ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                         : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                     : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+986,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+987,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+988,((3U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                     ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                     : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+989,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+990,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+991,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+992,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgCData(oldp+993,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+994,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgBit(oldp+995,((1U & ((~ vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U]) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+996,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->chgCData(oldp+997,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__mst_b_readies),3);
    bufp->chgBit(oldp+998,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->chgCData(oldp+999,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__mst_r_readies),3);
    bufp->chgBit(oldp+1000,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->chgBit(oldp+1001,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_ready))));
    bufp->chgBit(oldp+1002,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_ready))));
    bufp->chgCData(oldp+1003,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->chgCData(oldp+1004,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->chgCData(oldp+1005,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+1006,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->chgCData(oldp+1007,((3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i)
                                      ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                          ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                          : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+1008,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+1009,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+1010,((3U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                      ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+1011,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+1012,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+1013,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+1014,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgCData(oldp+1015,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+1016,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgBit(oldp+1017,((1U & ((~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[8U] 
                                       >> 0x1dU)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+1018,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->chgCData(oldp+1019,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->chgCData(oldp+1020,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->chgCData(oldp+1021,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+1022,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->chgCData(oldp+1023,((3U & ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                             >> 0x19U) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                      ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                          ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                          : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+1024,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+1025,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+1026,((3U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                      ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+1027,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+1028,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+1029,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+1030,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgCData(oldp+1031,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+1032,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgBit(oldp+1033,((1U & ((~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                       >> 0x19U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+1034,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->chgCData(oldp+1035,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__mst_b_readies),3);
    bufp->chgBit(oldp+1036,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->chgCData(oldp+1037,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__mst_r_readies),3);
    bufp->chgBit(oldp+1038,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->chgBit(oldp+1039,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_ar_ready))));
    bufp->chgBit(oldp+1040,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__slv_aw_ready))));
    bufp->chgCData(oldp+1041,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->chgCData(oldp+1042,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->chgCData(oldp+1043,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+1044,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->chgCData(oldp+1045,((3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i)
                                      ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                          ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                          : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+1046,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+1047,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+1048,((3U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                      ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+1049,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+1050,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+1051,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+1052,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgCData(oldp+1053,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+1054,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgBit(oldp+1055,((1U & ((~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xfU] 
                                       >> 0x16U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+1056,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->chgCData(oldp+1057,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->chgCData(oldp+1058,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->chgCData(oldp+1059,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+1060,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->chgCData(oldp+1061,((3U & ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                             >> 0x12U) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))
                                      ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                          ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                          : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+1062,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+1063,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+1064,((3U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                      ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+1065,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+1066,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+1067,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+1068,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgCData(oldp+1069,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+1070,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgBit(oldp+1071,((1U & ((~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                       >> 0x12U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+1072,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->chgCData(oldp+1073,(((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
                               | ((0xfffffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                     << 1U))) 
                                  | (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                              >> 1U)))))),3);
    bufp->chgCData(oldp+1074,(((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
                               | ((0xfffffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                     << 1U))) 
                                  | (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                              >> 1U)))))),3);
    bufp->chgBit(oldp+1075,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->chgBit(oldp+1076,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->chgBit(oldp+1077,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                      >> 1U)))));
    bufp->chgBit(oldp+1078,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                      >> 1U)))));
    bufp->chgBit(oldp+1079,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                              >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    bufp->chgBit(oldp+1080,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                              >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    bufp->chgBit(oldp+1081,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                   >> 2U))));
    bufp->chgBit(oldp+1082,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                   >> 2U))));
    bufp->chgCData(oldp+1083,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->chgCData(oldp+1084,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->chgCData(oldp+1085,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+1086,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->chgCData(oldp+1087,((3U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__ar_ready) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                                      ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                          ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                          : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+1088,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+1089,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+1090,((3U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                      ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+1091,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+1092,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+1093,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+1094,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgCData(oldp+1095,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+1096,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgBit(oldp+1097,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__ar_ready)) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+1098,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->chgBit(oldp+1099,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
    bufp->chgBit(oldp+1100,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                >> 0x16U))));
    bufp->chgCData(oldp+1101,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->chgCData(oldp+1102,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->chgCData(oldp+1103,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+1104,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->chgCData(oldp+1105,((3U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__aw_ready) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                                      ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                          ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                          : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+1106,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+1107,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+1108,((3U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                      ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+1109,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+1110,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+1111,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+1112,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgCData(oldp+1113,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+1114,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgBit(oldp+1115,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__aw_ready)) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+1116,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                >> 0x17U))));
    bufp->chgBit(oldp+1117,(((2U >= (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                           >> 0x12U))) 
                             & (((4U & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                        >> 0x14U)) 
                                 | ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                           >> 0x1cU)) 
                                    | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                             >> 4U)))) 
                                >> (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                          >> 0x12U))))));
    bufp->chgBit(oldp+1118,(((2U >= (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                           >> 8U))) 
                             & (((4U & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                                        >> 0x10U)) 
                                 | ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                                           >> 0x18U)) 
                                    | (1U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__slv_reqs_i[0U]))) 
                                >> (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[2U] 
                                          >> 8U))))));
    bufp->chgCData(oldp+1119,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n),4);
    bufp->chgCData(oldp+1120,(((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
                               | ((0xfffffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                     << 1U))) 
                                  | (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                              >> 1U)))))),3);
    bufp->chgCData(oldp+1121,(((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
                               | ((0xfffffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                     << 1U))) 
                                  | (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                              >> 1U)))))),3);
    bufp->chgBit(oldp+1122,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->chgBit(oldp+1123,((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->chgBit(oldp+1124,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                      >> 1U)))));
    bufp->chgBit(oldp+1125,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                      >> 1U)))));
    bufp->chgBit(oldp+1126,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                              >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    bufp->chgBit(oldp+1127,((((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                              >> 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    bufp->chgBit(oldp+1128,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                   >> 2U))));
    bufp->chgBit(oldp+1129,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                   >> 2U))));
    bufp->chgCData(oldp+1130,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->chgCData(oldp+1131,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->chgCData(oldp+1132,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+1133,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->chgCData(oldp+1134,((3U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__ar_ready) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                                      ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                          ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                          : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+1135,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+1136,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+1137,((3U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                      ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+1138,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+1139,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+1140,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+1141,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgCData(oldp+1142,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+1143,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgBit(oldp+1144,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__ar_ready)) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+1145,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->chgBit(oldp+1146,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill));
    bufp->chgBit(oldp+1147,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                >> 0xeU))));
    bufp->chgCData(oldp+1148,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->chgCData(oldp+1149,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes),6);
    bufp->chgCData(oldp+1150,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+1151,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->chgCData(oldp+1152,((3U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__aw_ready) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                                      ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                          ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                          : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+1153,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+1154,((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+1155,((3U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                      ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+1156,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+1157,((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+1158,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+1159,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgCData(oldp+1160,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+1161,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes),8);
    bufp->chgBit(oldp+1162,((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__aw_ready)) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+1163,(((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                >> 0xfU))));
    bufp->chgBit(oldp+1164,(((2U >= (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                           >> 0xaU))) 
                             & (((4U & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xfU] 
                                        >> 0x14U)) 
                                 | ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[8U] 
                                           >> 0x1cU)) 
                                    | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[2U] 
                                             >> 4U)))) 
                                >> (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U] 
                                          >> 0xaU))))));
    bufp->chgBit(oldp+1165,(((2U >= (3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U])) 
                             & (((4U & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0xdU] 
                                        >> 0x10U)) 
                                 | ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[6U] 
                                           >> 0x18U)) 
                                    | (1U & vlSymsp->TOP__rvfpgasim__swervolf.axi_intercon__DOT__axi_xbar__DOT____Vcellinp__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__slv_reqs_i[0U]))) 
                                >> (3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__slaves_resp[5U])))));
    bufp->chgCData(oldp+1166,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n),4);
    bufp->chgBit(oldp+1167,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i));
    bufp->chgBit(oldp+1168,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0U] 
                                      & (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                         >> 1U))))));
    bufp->chgBit(oldp+1169,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i));
    bufp->chgBit(oldp+1170,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[6U] 
                                       >> 0x19U) & 
                                      (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                       >> 1U))))));
    bufp->chgBit(oldp+1171,(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__Vcellinp__gen_demux__DOT__i_aw_id_counter__pop_i));
    bufp->chgBit(oldp+1172,((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes) 
                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__axi_intercon__DOT__masters_req[0xdU] 
                                       >> 0x12U) & 
                                      (vlSymsp->TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                       >> 1U))))));
}

void Vrvfpgasim___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvfpgasim___024root__trace_cleanup\n"); );
    // Init
    Vrvfpgasim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrvfpgasim___024root*>(voidSelf);
    Vrvfpgasim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    IData/*31:0*/ __Vilp;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vilp = 0U;
    while ((__Vilp <= 0x4fU)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
}
