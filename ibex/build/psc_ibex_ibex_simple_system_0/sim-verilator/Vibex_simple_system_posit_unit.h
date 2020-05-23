// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vibex_simple_system.h for the primary calling header

#ifndef _VIBEX_SIMPLE_SYSTEM_POSIT_UNIT_H_
#define _VIBEX_SIMPLE_SYSTEM_POSIT_UNIT_H_  // guard

#include "verilated_heavy.h"
#include "Vibex_simple_system__Dpi.h"

//==========

class Vibex_simple_system__Syms;
class Vibex_simple_system_VerilatedFst;
class Vibex_simple_system_data_extract_v1;


//----------

VL_MODULE(Vibex_simple_system_posit_unit) {
  public:
    // CELLS
    Vibex_simple_system_data_extract_v1* __PVT__PADD__DOT__uut_de1;
    Vibex_simple_system_data_extract_v1* __PVT__PADD__DOT__uut_de2;
    Vibex_simple_system_data_extract_v1* __PVT__PMULT__DOT__uut_de1;
    Vibex_simple_system_data_extract_v1* __PVT__PMULT__DOT__uut_de2;
    Vibex_simple_system_data_extract_v1* __PVT__PDIV__DOT__uut_de1;
    Vibex_simple_system_data_extract_v1* __PVT__PDIV__DOT__uut_de2;
    
    // PORTS
    VL_IN8(start,0,0);
    VL_IN8(op_sel,1,0);
    VL_OUT8(done,0,0);
    VL_OUT8(inf,0,0);
    VL_OUT8(zero,0,0);
    VL_IN16(in1,15,0);
    VL_IN16(in2,15,0);
    VL_OUT16(out,15,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__q_done;
        CData/*0:0*/ __PVT__add_start;
        CData/*0:0*/ __PVT__add_inf;
        CData/*0:0*/ __PVT__mult_start;
        CData/*0:0*/ __PVT__mult_inf;
        CData/*0:0*/ __PVT__div_start;
        CData/*0:0*/ __PVT__div_inf;
        CData/*0:0*/ __PVT__PADD__DOT__in1_gt_in2;
        CData/*0:0*/ __PVT__PADD__DOT__ls;
        CData/*3:0*/ __PVT__PADD__DOT__lr;
        CData/*3:0*/ __PVT__PADD__DOT__sr;
        CData/*1:0*/ __PVT__PADD__DOT__le;
        CData/*7:0*/ __PVT__PADD__DOT__diff;
        CData/*4:0*/ __PVT__PADD__DOT__lr_N;
        CData/*3:0*/ __PVT__PADD__DOT__exp_diff;
        CData/*3:0*/ __PVT__PADD__DOT__left_shift;
        CData/*7:0*/ __PVT__PADD__DOT__le_o;
        CData/*3:0*/ __PVT__PADD__DOT__r_o;
        CData/*0:0*/ __PVT__PADD__DOT__l2__DOT__l1__DOT__genblk2__DOT__genblk2__DOT__l__DOT__genblk2__DOT__genblk2__DOT__out_vl;
        CData/*0:0*/ __PVT__PADD__DOT__l2__DOT__l1__DOT__genblk2__DOT__genblk2__DOT__l__DOT__genblk2__DOT__genblk2__DOT__out_vh;
        CData/*0:0*/ __PVT__PADD__DOT__l2__DOT__l1__DOT__genblk2__DOT__genblk2__DOT__h__DOT__genblk2__DOT__genblk2__DOT__out_vl;
        CData/*0:0*/ __PVT__PADD__DOT__l2__DOT__l1__DOT__genblk2__DOT__genblk2__DOT__h__DOT__genblk2__DOT__genblk2__DOT__out_vh;
        CData/*6:0*/ __PVT__PADD__DOT__uut_reg_ro__DOT__exp_oN;
        CData/*0:0*/ __PVT__PMULT__DOT__mult_s;
        CData/*7:0*/ __PVT__PMULT__DOT__mult_e;
        CData/*6:0*/ __PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN;
        CData/*0:0*/ __PVT__PDIV__DOT__div_s;
        CData/*7:0*/ __PVT__PDIV__DOT__div_e;
        CData/*6:0*/ __PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN;
        CData/*0:0*/ __PVT__PDIV__DOT__genblk1__DOT__genblk2__DOT__i_uut__DOT__clk;
        SData/*15:0*/ __PVT__q_out;
        SData/*15:0*/ __PVT__add_in1;
        SData/*15:0*/ __PVT__add_in2;
        SData/*15:0*/ __PVT__mult_in1;
        SData/*15:0*/ __PVT__mult_in2;
        SData/*15:0*/ __PVT__div_in1;
        SData/*15:0*/ __PVT__div_in2;
        SData/*15:0*/ __PVT__PADD__DOT__xin1;
        SData/*15:0*/ __PVT__PADD__DOT__xin2;
        SData/*14:0*/ __PVT__PADD__DOT__m1;
        SData/*14:0*/ __PVT__PADD__DOT__m2;
        SData/*14:0*/ __PVT__PADD__DOT__lm;
        SData/*15:0*/ __PVT__PADD__DOT__LOD_in;
        SData/*15:0*/ __PVT__PADD__DOT__DSR_left_out;
        SData/*15:0*/ __PVT__PADD__DOT__tmp1_o_rnd;
        SData/*15:0*/ __PVT__PMULT__DOT__xin1;
        SData/*15:0*/ __PVT__PMULT__DOT__xin2;
        SData/*15:0*/ __PVT__PMULT__DOT__tmp1_o_rnd;
        SData/*15:0*/ __PVT__PDIV__DOT__xin1;
        SData/*15:0*/ __PVT__PDIV__DOT__xin2;
        SData/*14:0*/ __PVT__PDIV__DOT__m1;
        SData/*14:0*/ __PVT__PDIV__DOT__m2;
        SData/*8:0*/ __PVT__PDIV__DOT__m2_inv0_tmp;
        SData/*15:0*/ __PVT__PDIV__DOT__tmp1_o_rnd;
        IData/*16:0*/ __PVT__PADD__DOT__add_m;
        IData/*29:0*/ __PVT__PMULT__DOT__mult_m;
        IData/*29:0*/ __PVT__PMULT__DOT__mult_mN;
        IData/*29:0*/ __PVT__PDIV__DOT__div_m;
        IData/*29:0*/ __PVT__PDIV__DOT__div_mN;
        SData/*15:0*/ __PVT__PADD__DOT__dsr1__DOT__tmp[4];
        SData/*15:0*/ __PVT__PADD__DOT__dsl1__DOT__tmp[4];
        QData/*50:0*/ __PVT__PADD__DOT__dsr2__DOT__tmp[4];
        QData/*50:0*/ __PVT__PMULT__DOT__dsr2__DOT__tmp[5];
        IData/*29:0*/ __PVT__PDIV__DOT__m2_inv[3];
    };
    struct {
        IData/*29:0*/ __PVT__PDIV__DOT__genblk3__DOT__m2_inv_X_m2[2];
        SData/*15:0*/ __PVT__PDIV__DOT__genblk3__DOT__two_m2_inv_X_m2[2];
        QData/*50:0*/ __PVT__PDIV__DOT__dsr2__DOT__tmp[5];
        SData/*8:0*/ __PVT__PDIV__DOT__genblk1__DOT__genblk2__DOT__i_uut__DOT__a1_inv_rom[256];
    };
    
    // LOCAL VARIABLES
    CData/*3:0*/ PMULT__DOT____Vcellout__uut_reg_ro____pinNumber3;
    CData/*4:0*/ PMULT__DOT____Vcellinp__dsr2__b;
    CData/*3:0*/ PDIV__DOT____Vcellout__uut_reg_ro____pinNumber3;
    CData/*4:0*/ PDIV__DOT____Vcellinp__dsr2__b;
    CData/*7:0*/ __Vtableidx1;
    CData/*7:0*/ __Vtableidx2;
    CData/*7:0*/ __Vtableidx3;
    CData/*7:0*/ __Vtableidx4;
    static SData/*8:0*/ __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[256];
    static SData/*8:0*/ __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[256];
    static SData/*8:0*/ __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[256];
    static SData/*8:0*/ __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[256];
    
    // INTERNAL VARIABLES
  private:
    Vibex_simple_system__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vibex_simple_system_posit_unit);  ///< Copying not allowed
  public:
    Vibex_simple_system_posit_unit(const char* name = "TOP");
    ~Vibex_simple_system_posit_unit();
    
    // INTERNAL METHODS
    void __Vconfigure(Vibex_simple_system__Syms* symsp, bool first);
    void _combo__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__17(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _combo__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__18(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _combo__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__19(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _combo__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__20(Vibex_simple_system__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__13(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__1(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__5(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__2(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__6(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__3(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__7(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__4(Vibex_simple_system__Syms* __restrict vlSymsp);
    void _settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__8(Vibex_simple_system__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceInit(VerilatedFst* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedFst* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedFst* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
