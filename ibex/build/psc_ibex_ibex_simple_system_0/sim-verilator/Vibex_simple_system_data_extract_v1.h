// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vibex_simple_system.h for the primary calling header

#ifndef _VIBEX_SIMPLE_SYSTEM_DATA_EXTRACT_V1_H_
#define _VIBEX_SIMPLE_SYSTEM_DATA_EXTRACT_V1_H_  // guard

#include "verilated_heavy.h"
#include "Vibex_simple_system__Dpi.h"

//==========

class Vibex_simple_system__Syms;
class Vibex_simple_system_VerilatedFst;


//----------

VL_MODULE(Vibex_simple_system_data_extract_v1) {
  public:
    
    // PORTS
    VL_OUT8(__PVT__rc,0,0);
    VL_OUT8(__PVT__regime,3,0);
    VL_OUT8(__PVT__exp,1,0);
    VL_IN16(__PVT__in,15,0);
    VL_OUT16(__PVT__mant,13,0);
    
    // LOCAL SIGNALS
    CData/*3:0*/ __PVT__k;
    CData/*0:0*/ __PVT__xinst_k__DOT__l1__DOT__genblk2__DOT__genblk2__DOT__l__DOT__genblk2__DOT__genblk2__DOT__out_vl;
    CData/*0:0*/ __PVT__xinst_k__DOT__l1__DOT__genblk2__DOT__genblk2__DOT__l__DOT__genblk2__DOT__genblk2__DOT__out_vh;
    CData/*0:0*/ __PVT__xinst_k__DOT__l1__DOT__genblk2__DOT__genblk2__DOT__h__DOT__genblk2__DOT__genblk2__DOT__out_vl;
    CData/*0:0*/ __PVT__xinst_k__DOT__l1__DOT__genblk2__DOT__genblk2__DOT__h__DOT__genblk2__DOT__genblk2__DOT__out_vh;
    SData/*15:0*/ __PVT__ls__DOT__tmp[4];
    
    // LOCAL VARIABLES
    SData/*15:0*/ __Vcellinp__xinst_k__in;
    
    // INTERNAL VARIABLES
  private:
    Vibex_simple_system__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vibex_simple_system_data_extract_v1);  ///< Copying not allowed
  public:
    Vibex_simple_system_data_extract_v1(const char* name = "TOP");
    ~Vibex_simple_system_data_extract_v1();
    
    // INTERNAL METHODS
    void __Vconfigure(Vibex_simple_system__Syms* symsp, bool first);
    void _combo__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PADD__DOT__uut_de1__53(Vibex_simple_system__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PADD__DOT__uut_de1__29(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PADD__DOT__uut_de2__30(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PDIV__DOT__uut_de1__27(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PDIV__DOT__uut_de2__28(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PMULT__DOT__uut_de1__26(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PMULT__DOT__uut_de2__25(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PADD__DOT__uut_de1__35(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PADD__DOT__uut_de2__36(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PDIV__DOT__uut_de1__33(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PDIV__DOT__uut_de2__34(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PMULT__DOT__uut_de1__32(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PMULT__DOT__uut_de2__31(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PADD__DOT__uut_de1__41(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PADD__DOT__uut_de2__42(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PDIV__DOT__uut_de1__39(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PDIV__DOT__uut_de2__40(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PMULT__DOT__uut_de1__38(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PMULT__DOT__uut_de2__37(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PADD__DOT__uut_de1__47(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PADD__DOT__uut_de2__48(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PDIV__DOT__uut_de1__45(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PDIV__DOT__uut_de2__46(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PMULT__DOT__uut_de1__44(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PMULT__DOT__uut_de2__43(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PADD__DOT__uut_de1__5(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PADD__DOT__uut_de2__6(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PDIV__DOT__uut_de1__3(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PDIV__DOT__uut_de2__4(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PMULT__DOT__uut_de1__2(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PMULT__DOT__uut_de2__1(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PADD__DOT__uut_de1__11(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PADD__DOT__uut_de2__12(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PDIV__DOT__uut_de1__9(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PDIV__DOT__uut_de2__10(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PMULT__DOT__uut_de1__8(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PMULT__DOT__uut_de2__7(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PADD__DOT__uut_de1__17(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PADD__DOT__uut_de2__18(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PDIV__DOT__uut_de1__15(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PDIV__DOT__uut_de2__16(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PMULT__DOT__uut_de1__14(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PMULT__DOT__uut_de2__13(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PADD__DOT__uut_de1__23(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PADD__DOT__uut_de2__24(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PDIV__DOT__uut_de1__21(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PDIV__DOT__uut_de2__22(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PMULT__DOT__uut_de1__20(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PMULT__DOT__uut_de2__19(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceInit(VerilatedFst* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedFst* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedFst* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
