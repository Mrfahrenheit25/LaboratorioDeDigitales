// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvfpgasim.h for the primary calling header

#ifndef VERILATED_VRVFPGASIM_DPRAM64__S10000_H_
#define VERILATED_VRVFPGASIM_DPRAM64__S10000_H_  // guard

#include "verilated.h"

class Vrvfpgasim__Syms;

class Vrvfpgasim_dpram64__S10000 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__we,7,0);
    VL_IN16(__PVT__waddr,15,0);
    VL_IN16(__PVT__raddr,15,0);
    IData/*31:0*/ __PVT__i;
    VL_IN64(__PVT__din,63,0);
    VL_OUT64(__PVT__dout,63,0);
    VlUnpacked<QData/*63:0*/, 8192> mem;

    // INTERNAL VARIABLES
    Vrvfpgasim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrvfpgasim_dpram64__S10000(Vrvfpgasim__Syms* symsp, const char* v__name);
    ~Vrvfpgasim_dpram64__S10000();
    VL_UNCOPYABLE(Vrvfpgasim_dpram64__S10000);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
