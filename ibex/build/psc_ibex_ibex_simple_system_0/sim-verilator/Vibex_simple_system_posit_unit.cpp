// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_simple_system.h for the primary calling header

#include "Vibex_simple_system_posit_unit.h"
#include "Vibex_simple_system__Syms.h"

#include "verilated_dpi.h"

//==========
SData/*8:0*/ Vibex_simple_system_posit_unit::__Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[256];
SData/*8:0*/ Vibex_simple_system_posit_unit::__Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[256];
SData/*8:0*/ Vibex_simple_system_posit_unit::__Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[256];
SData/*8:0*/ Vibex_simple_system_posit_unit::__Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[256];

VL_CTOR_IMP(Vibex_simple_system_posit_unit) {
    VL_CELL(__PVT__PADD__DOT__uut_de1, Vibex_simple_system_data_extract_v1);
    VL_CELL(__PVT__PADD__DOT__uut_de2, Vibex_simple_system_data_extract_v1);
    VL_CELL(__PVT__PMULT__DOT__uut_de1, Vibex_simple_system_data_extract_v1);
    VL_CELL(__PVT__PMULT__DOT__uut_de2, Vibex_simple_system_data_extract_v1);
    VL_CELL(__PVT__PDIV__DOT__uut_de1, Vibex_simple_system_data_extract_v1);
    VL_CELL(__PVT__PDIV__DOT__uut_de2, Vibex_simple_system_data_extract_v1);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vibex_simple_system_posit_unit::__Vconfigure(Vibex_simple_system__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vibex_simple_system_posit_unit::~Vibex_simple_system_posit_unit() {
}

VL_INLINE_OPT void Vibex_simple_system_posit_unit::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__1(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vibex_simple_system_posit_unit::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__1\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_start) {
        if ((0U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
            this->__PVT__add_start = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_start;
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_start) {
        if ((0U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
            if ((1U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
                this->__PVT__mult_start = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_start;
            }
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_start) {
        if ((0U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
            if ((1U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
                if ((2U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
                    this->__PVT__div_start = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_start;
                }
            }
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_start) {
        if ((0U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
            if ((1U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
                this->__PVT__mult_in2 = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_in2;
            }
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_start) {
        if ((0U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
            if ((1U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
                this->__PVT__mult_in1 = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_in1;
            }
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_start) {
        if ((0U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
            if ((1U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
                if ((2U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
                    this->__PVT__div_in1 = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_in1;
                }
            }
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_start) {
        if ((0U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
            if ((1U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
                if ((2U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
                    this->__PVT__div_in2 = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_in2;
                }
            }
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_start) {
        if ((0U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
            this->__PVT__add_in1 = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_in1;
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_start) {
        if ((0U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
            this->__PVT__add_in2 = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_in2;
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_start) {
        if ((0U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
            this->__PVT__q_done = this->__PVT__add_start;
        } else {
            if ((1U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
                this->__PVT__q_done = this->__PVT__mult_start;
            } else {
                if ((2U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
                    this->__PVT__q_done = this->__PVT__div_start;
                }
            }
        }
    }
    this->__PVT__PMULT__DOT__xin2 = (0xffffU & ((0x8000U 
                                                 & (IData)(this->__PVT__mult_in2))
                                                 ? 
                                                (- (IData)(this->__PVT__mult_in2))
                                                 : (IData)(this->__PVT__mult_in2)));
    this->__PVT__mult_inf = (1U & ((((IData)(this->__PVT__mult_in1) 
                                     >> 0xfU) & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x7fffU 
                                                             & (IData)(this->__PVT__mult_in1)))))) 
                                   | (((IData)(this->__PVT__mult_in2) 
                                       >> 0xfU) & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x7fffU 
                                                               & (IData)(this->__PVT__mult_in2))))))));
    this->__PVT__PMULT__DOT__mult_s = (1U & (((IData)(this->__PVT__mult_in1) 
                                              ^ (IData)(this->__PVT__mult_in2)) 
                                             >> 0xfU));
    this->__PVT__PMULT__DOT__xin1 = (0xffffU & ((0x8000U 
                                                 & (IData)(this->__PVT__mult_in1))
                                                 ? 
                                                (- (IData)(this->__PVT__mult_in1))
                                                 : (IData)(this->__PVT__mult_in1)));
    this->__PVT__PDIV__DOT__xin1 = (0xffffU & ((0x8000U 
                                                & (IData)(this->__PVT__div_in1))
                                                ? (- (IData)(this->__PVT__div_in1))
                                                : (IData)(this->__PVT__div_in1)));
    this->__PVT__div_inf = (1U & ((((IData)(this->__PVT__div_in1) 
                                    >> 0xfU) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffU 
                                                            & (IData)(this->__PVT__div_in1)))))) 
                                  | (~ (((IData)(this->__PVT__div_in2) 
                                         >> 0xfU) | 
                                        (0U != (0x7fffU 
                                                & (IData)(this->__PVT__div_in2)))))));
    this->__PVT__PDIV__DOT__div_s = (1U & (((IData)(this->__PVT__div_in1) 
                                            ^ (IData)(this->__PVT__div_in2)) 
                                           >> 0xfU));
    this->__PVT__PDIV__DOT__xin2 = (0xffffU & ((0x8000U 
                                                & (IData)(this->__PVT__div_in2))
                                                ? (- (IData)(this->__PVT__div_in2))
                                                : (IData)(this->__PVT__div_in2)));
    this->__PVT__PADD__DOT__xin1 = (0xffffU & ((0x8000U 
                                                & (IData)(this->__PVT__add_in1))
                                                ? (- (IData)(this->__PVT__add_in1))
                                                : (IData)(this->__PVT__add_in1)));
    this->__PVT__add_inf = (1U & ((((IData)(this->__PVT__add_in1) 
                                    >> 0xfU) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffU 
                                                            & (IData)(this->__PVT__add_in1)))))) 
                                  | (((IData)(this->__PVT__add_in2) 
                                      >> 0xfU) & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x7fffU 
                                                              & (IData)(this->__PVT__add_in2))))))));
    this->__PVT__PADD__DOT__xin2 = (0xffffU & ((0x8000U 
                                                & (IData)(this->__PVT__add_in2))
                                                ? (- (IData)(this->__PVT__add_in2))
                                                : (IData)(this->__PVT__add_in2)));
    this->__PVT__PADD__DOT__in1_gt_in2 = ((0x7fffU 
                                           & (IData)(this->__PVT__PADD__DOT__xin1)) 
                                          >= (0x7fffU 
                                              & (IData)(this->__PVT__PADD__DOT__xin2)));
    this->__PVT__PADD__DOT__ls = (1U & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                         ? ((IData)(this->__PVT__add_in1) 
                                            >> 0xfU)
                                         : ((IData)(this->__PVT__add_in2) 
                                            >> 0xfU)));
}

void Vibex_simple_system_posit_unit::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__5(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vibex_simple_system_posit_unit::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__5\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__PMULT__DOT__mult_m = (0x3fffffffU 
                                       & ((((IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fffU 
                                                      & (IData)(this->__PVT__mult_in1)))) 
                                            << 0xeU) 
                                           | (0x3fffU 
                                              & __PVT__PMULT__DOT__uut_de1->__PVT__ls__DOT__tmp
                                              [3U])) 
                                          * (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fffU 
                                                        & (IData)(this->__PVT__mult_in2)))) 
                                              << 0xeU) 
                                             | (0x3fffU 
                                                & __PVT__PMULT__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                [3U]))));
    this->__PVT__PDIV__DOT__m1 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__div_in1)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PDIV__DOT__uut_de1->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PDIV__DOT__m2 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__div_in2)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PADD__DOT__m1 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__add_in1)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PADD__DOT__uut_de1->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PADD__DOT__m2 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__add_in2)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PADD__DOT__uut_de2->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PADD__DOT__le = (3U & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                         ? (__PVT__PADD__DOT__uut_de1->__PVT__ls__DOT__tmp
                                            [3U] >> 0xeU)
                                         : (__PVT__PADD__DOT__uut_de2->__PVT__ls__DOT__tmp
                                            [3U] >> 0xeU)));
    this->__PVT__PADD__DOT__sr = ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                   ? (IData)(__PVT__PADD__DOT__uut_de2->regime)
                                   : (IData)(__PVT__PADD__DOT__uut_de1->regime));
    this->__PVT__PADD__DOT__lr = ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                   ? (IData)(__PVT__PADD__DOT__uut_de1->regime)
                                   : (IData)(__PVT__PADD__DOT__uut_de2->regime));
    this->__PVT__PMULT__DOT__mult_mN = (0x3fffffffU 
                                        & ((0x20000000U 
                                            & this->__PVT__PMULT__DOT__mult_m)
                                            ? this->__PVT__PMULT__DOT__mult_m
                                            : (this->__PVT__PMULT__DOT__mult_m 
                                               << 1U)));
    this->__PVT__PMULT__DOT__mult_e = (0xffU & ((((0xfcU 
                                                   & (((0x4000U 
                                                        & (IData)(this->__PVT__PMULT__DOT__xin1))
                                                        ? (IData)(__PVT__PMULT__DOT__uut_de1->regime)
                                                        : 
                                                       (- (IData)(__PVT__PMULT__DOT__uut_de1->regime))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (__PVT__PMULT__DOT__uut_de1->__PVT__ls__DOT__tmp
                                                        [3U] 
                                                        >> 0xeU))) 
                                                 + 
                                                 ((0xfcU 
                                                   & (((0x4000U 
                                                        & (IData)(this->__PVT__PMULT__DOT__xin2))
                                                        ? (IData)(__PVT__PMULT__DOT__uut_de2->regime)
                                                        : 
                                                       (- (IData)(__PVT__PMULT__DOT__uut_de2->regime))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (__PVT__PMULT__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                        [3U] 
                                                        >> 0xeU)))) 
                                                + (1U 
                                                   & (this->__PVT__PMULT__DOT__mult_m 
                                                      >> 0x1dU))));
    this->__Vtableidx1 = (0xfeU & ((IData)(this->__PVT__PDIV__DOT__m2) 
                                   >> 6U));
    this->__PVT__PDIV__DOT__m2_inv0_tmp = this->__Vtable1___PVT__PDIV__DOT__m2_inv0_tmp
        [this->__Vtableidx1];
    this->__PVT__PADD__DOT__lm = ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                   ? (IData)(this->__PVT__PADD__DOT__m1)
                                   : (IData)(this->__PVT__PADD__DOT__m2));
    this->__PVT__PADD__DOT__lr_N = (0x1fU & ((1U & 
                                              ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                ? ((IData)(this->__PVT__PADD__DOT__xin1) 
                                                   >> 0xeU)
                                                : ((IData)(this->__PVT__PADD__DOT__xin2) 
                                                   >> 0xeU)))
                                              ? (IData)(this->__PVT__PADD__DOT__lr)
                                              : (- (IData)(this->__PVT__PADD__DOT__lr))));
    this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN 
        = (0x7fU & ((0x80U & (IData)(this->__PVT__PMULT__DOT__mult_e))
                     ? ((IData)(1U) + (~ (IData)(this->__PVT__PMULT__DOT__mult_e)))
                     : (IData)(this->__PVT__PMULT__DOT__mult_e)));
    this->__PVT__PDIV__DOT__m2_inv[0U] = (0x1fe00000U 
                                          & ((IData)(this->__PVT__PDIV__DOT__m2_inv0_tmp) 
                                             << 0x14U));
    this->__PVT__PADD__DOT__diff = (0xffU & ((((IData)(this->__PVT__PADD__DOT__lr_N) 
                                               << 2U) 
                                              | (IData)(this->__PVT__PADD__DOT__le)) 
                                             - ((0x7cU 
                                                 & (((1U 
                                                      & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                          ? 
                                                         ((IData)(this->__PVT__PADD__DOT__xin2) 
                                                          >> 0xeU)
                                                          : 
                                                         ((IData)(this->__PVT__PADD__DOT__xin1) 
                                                          >> 0xeU)))
                                                      ? (IData)(this->__PVT__PADD__DOT__sr)
                                                      : 
                                                     (- (IData)(this->__PVT__PADD__DOT__sr))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                       ? 
                                                      (__PVT__PADD__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                       [3U] 
                                                       >> 0xeU)
                                                       : 
                                                      (__PVT__PADD__DOT__uut_de1->__PVT__ls__DOT__tmp
                                                       [3U] 
                                                       >> 0xeU))))));
    this->__PVT__PMULT__DOT__r_o = (0x1fU & ((1U & 
                                              ((~ ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                   >> 7U)) 
                                               | (0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN)))))
                                              ? ((IData)(1U) 
                                                 + 
                                                 (0x1fU 
                                                  & ((IData)(this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN) 
                                                     >> 2U)))
                                              : (0x1fU 
                                                 & ((IData)(this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN) 
                                                    >> 2U))));
    this->__PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2[0U] 
        = (0x3fffffffU & ((0x7f80U & (this->__PVT__PDIV__DOT__m2_inv
                                      [0U] >> 0xeU)) 
                          * (IData)(this->__PVT__PDIV__DOT__m2)));
    this->__PVT__PDIV__DOT__div_m = (0x3fffffffU & 
                                     ((0U != (0x3fffU 
                                              & __PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                              [3U]))
                                       ? ((IData)(this->__PVT__PDIV__DOT__m1) 
                                          * (0x7fffU 
                                             & (this->__PVT__PDIV__DOT__m2_inv
                                                [1U] 
                                                >> 0xeU)))
                                       : ((IData)(this->__PVT__PDIV__DOT__m1) 
                                          << 0xeU)));
    this->__PVT__PADD__DOT__exp_diff = ((0U != (7U 
                                                & ((IData)(this->__PVT__PADD__DOT__diff) 
                                                   >> 4U)))
                                         ? 0xfU : (0xfU 
                                                   & (IData)(this->__PVT__PADD__DOT__diff)));
    this->PMULT__DOT____Vcellinp__dsr2__b = ((0x10U 
                                              & (IData)(this->__PVT__PMULT__DOT__r_o))
                                              ? 0xfU
                                              : (IData)(this->__PVT__PMULT__DOT__r_o));
    this->__PVT__PDIV__DOT__genblk4__DOT__two_m2_inv_X_m2[0U] 
        = (0xffffU & ((IData)(0x4000U) - ((0x3ffeU 
                                           & (this->__PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2
                                              [0U] 
                                              >> 0x10U)) 
                                          | (0U != 
                                             (0x1ffffU 
                                              & this->__PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2
                                              [0U])))));
    this->__PVT__PDIV__DOT__div_mN = (0x3fffffffU & 
                                      ((0x20000000U 
                                        & this->__PVT__PDIV__DOT__div_m)
                                        ? this->__PVT__PDIV__DOT__div_m
                                        : (this->__PVT__PDIV__DOT__div_m 
                                           << 1U)));
    this->__PVT__PDIV__DOT__div_e = (0xffU & ((((0xfcU 
                                                 & (((0x4000U 
                                                      & (IData)(this->__PVT__PDIV__DOT__xin1))
                                                      ? (IData)(__PVT__PDIV__DOT__uut_de1->regime)
                                                      : 
                                                     (- (IData)(__PVT__PDIV__DOT__uut_de1->regime))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (__PVT__PDIV__DOT__uut_de1->__PVT__ls__DOT__tmp
                                                      [3U] 
                                                      >> 0xeU))) 
                                               - ((0xfcU 
                                                   & (((0x4000U 
                                                        & (IData)(this->__PVT__PDIV__DOT__xin2))
                                                        ? (IData)(__PVT__PDIV__DOT__uut_de2->regime)
                                                        : 
                                                       (- (IData)(__PVT__PDIV__DOT__uut_de2->regime))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (__PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                        [3U] 
                                                        >> 0xeU)))) 
                                              - ((1U 
                                                  & ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffU 
                                                                  & __PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                                  [3U])))) 
                                                     | (this->__PVT__PDIV__DOT__div_m 
                                                        >> 0x1dU)))
                                                  ? 0U
                                                  : 1U)));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[0U] = (0xffffU 
                                                  & ((1U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (0x7fffffffU 
                                                      & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                          ? (IData)(this->__PVT__PADD__DOT__m2)
                                                          : (IData)(this->__PVT__PADD__DOT__m1)))
                                                      : 
                                                     (((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                        ? (IData)(this->__PVT__PADD__DOT__m2)
                                                        : (IData)(this->__PVT__PADD__DOT__m1)) 
                                                      << 1U)));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[0U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((1U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      ((VL_ULL(0x7ffffffffffc0000) 
                                                        & ((QData)((IData)(
                                                                           ((0xffff0000U 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                >> 7U))))) 
                                                                                << 0x10U)) 
                                                                            | ((0x8000U 
                                                                                & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 8U)) 
                                                                               | ((0x6000U 
                                                                                & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 0xdU)) 
                                                                                | (0x1fffU 
                                                                                & (this->__PVT__PMULT__DOT__mult_mN 
                                                                                >> 0x10U))))))) 
                                                           << 0x12U)) 
                                                       | ((QData)((IData)(
                                                                          ((0x60000U 
                                                                            & (this->__PVT__PMULT__DOT__mult_mN 
                                                                               << 3U)) 
                                                                           | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PMULT__DOT__mult_mN))) 
                                                                              << 0x10U)))) 
                                                          >> 1U))
                                                       : 
                                                      (((QData)((IData)(
                                                                        ((0xffff0000U 
                                                                          & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                >> 7U))))) 
                                                                             << 0x10U)) 
                                                                         | ((0x8000U 
                                                                             & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 8U)) 
                                                                            | ((0x6000U 
                                                                                & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 0xdU)) 
                                                                               | (0x1fffU 
                                                                                & (this->__PVT__PMULT__DOT__mult_mN 
                                                                                >> 0x10U))))))) 
                                                        << 0x13U) 
                                                       | (QData)((IData)(
                                                                         ((0x60000U 
                                                                           & (this->__PVT__PMULT__DOT__mult_mN 
                                                                              << 3U)) 
                                                                          | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PMULT__DOT__mult_mN))) 
                                                                             << 0x10U)))))));
    this->__PVT__PDIV__DOT__m2_inv[1U] = (0x3fffffffU 
                                          & ((0x7f80U 
                                              & (this->__PVT__PDIV__DOT__m2_inv
                                                 [0U] 
                                                 >> 0xeU)) 
                                             * (0x7ffeU 
                                                & (this->__PVT__PDIV__DOT__genblk4__DOT__two_m2_inv_X_m2
                                                   [0U] 
                                                   << 1U))));
    this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN 
        = (0x7fU & ((0x80U & (IData)(this->__PVT__PDIV__DOT__div_e))
                     ? ((IData)(1U) + (~ (IData)(this->__PVT__PDIV__DOT__div_e)))
                     : (IData)(this->__PVT__PDIV__DOT__div_e)));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[1U] = (0xffffU 
                                                  & ((2U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                      [0U] 
                                                      >> 2U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                     [0U]));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[2U] = (0xffffU 
                                                  & ((4U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                      [1U] 
                                                      >> 4U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                     [1U]));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[3U] = (0xffffU 
                                                  & ((8U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                      [2U] 
                                                      >> 8U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                     [2U]));
    this->__PVT__PADD__DOT__add_m = (0x1ffffU & ((1U 
                                                  & (((IData)(this->__PVT__add_in1) 
                                                      >> 0xfU) 
                                                     ^ ~ 
                                                     ((IData)(this->__PVT__add_in2) 
                                                      >> 0xfU)))
                                                  ? 
                                                 (((IData)(this->__PVT__PADD__DOT__lm) 
                                                   << 1U) 
                                                  + 
                                                  this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                  [3U])
                                                  : 
                                                 (((IData)(this->__PVT__PADD__DOT__lm) 
                                                   << 1U) 
                                                  - 
                                                  this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                  [3U])));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[1U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((2U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [0U] 
                                                       >> 2U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [0U]));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[2U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((4U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [1U] 
                                                       >> 4U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [1U]));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[3U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((8U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [2U] 
                                                       >> 8U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [2U]));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[4U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((0x10U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [3U] 
                                                       >> 0x10U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [3U]));
    this->__PVT__PMULT__DOT__tmp1_o_rnd = (0xffffU 
                                           & ((0xcU 
                                               > (IData)(this->__PVT__PMULT__DOT__r_o))
                                               ? ((IData)(
                                                          (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                           [4U] 
                                                           >> 0x13U)) 
                                                  + 
                                                  (1U 
                                                   & (((IData)(
                                                               (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                [4U] 
                                                                >> 0x13U)) 
                                                       & ((IData)(
                                                                  (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                   [4U] 
                                                                   >> 0x12U)) 
                                                          | (0U 
                                                             != 
                                                             (0x3ffffU 
                                                              & (IData)(
                                                                        this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                        [4U]))))) 
                                                      | (((IData)(
                                                                  (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                   [4U] 
                                                                   >> 0x14U)) 
                                                          & (IData)(
                                                                    (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                     [4U] 
                                                                     >> 0x13U))) 
                                                         & (~ 
                                                            ((IData)(
                                                                     (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                      [4U] 
                                                                      >> 0x12U)) 
                                                             | (0U 
                                                                != 
                                                                (0x3ffffU 
                                                                 & (IData)(
                                                                           this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                           [4U])))))))))
                                               : (IData)(
                                                         (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                          [4U] 
                                                          >> 0x13U))));
    this->__PVT__PDIV__DOT__r_o = (0x1fU & ((1U & (
                                                   (~ 
                                                    ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                     >> 7U)) 
                                                   | (0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN)))))
                                             ? ((IData)(1U) 
                                                + (0x1fU 
                                                   & ((IData)(this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN) 
                                                      >> 2U)))
                                             : (0x1fU 
                                                & ((IData)(this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN) 
                                                   >> 2U))));
    this->__PVT__PADD__DOT__LOD_in = ((0x8000U & ((0x7fff8000U 
                                                   & (this->__PVT__PADD__DOT__add_m 
                                                      >> 1U)) 
                                                  | (0xffff8000U 
                                                     & this->__PVT__PADD__DOT__add_m))) 
                                      | (0x7fffU & this->__PVT__PADD__DOT__add_m));
    this->PDIV__DOT____Vcellinp__dsr2__b = ((0x10U 
                                             & (IData)(this->__PVT__PDIV__DOT__r_o))
                                             ? 0xfU
                                             : (IData)(this->__PVT__PDIV__DOT__r_o));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__PVT__PADD__DOT__LOD_in))) 
           | (0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                           >> 2U))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                  >> 6U))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                  >> 0xaU))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                               >> 0xeU))));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[0U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((1U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     ((VL_ULL(0x7ffffffffffc0000) 
                                                       & ((QData)((IData)(
                                                                          ((0xffff0000U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                >> 7U))))) 
                                                                               << 0x10U)) 
                                                                           | ((0x8000U 
                                                                               & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                << 8U)) 
                                                                              | ((0x6000U 
                                                                                & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                << 0xdU)) 
                                                                                | (0x1fffU 
                                                                                & (this->__PVT__PDIV__DOT__div_mN 
                                                                                >> 0x10U))))))) 
                                                          << 0x12U)) 
                                                      | ((QData)((IData)(
                                                                         ((0x60000U 
                                                                           & (this->__PVT__PDIV__DOT__div_mN 
                                                                              << 3U)) 
                                                                          | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PDIV__DOT__div_mN))) 
                                                                             << 0x10U)))) 
                                                         >> 1U))
                                                      : 
                                                     (((QData)((IData)(
                                                                       ((0xffff0000U 
                                                                         & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                >> 7U))))) 
                                                                            << 0x10U)) 
                                                                        | ((0x8000U 
                                                                            & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                               << 8U)) 
                                                                           | ((0x6000U 
                                                                               & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                << 0xdU)) 
                                                                              | (0x1fffU 
                                                                                & (this->__PVT__PDIV__DOT__div_mN 
                                                                                >> 0x10U))))))) 
                                                       << 0x13U) 
                                                      | (QData)((IData)(
                                                                        ((0x60000U 
                                                                          & (this->__PVT__PDIV__DOT__div_mN 
                                                                             << 3U)) 
                                                                         | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PDIV__DOT__div_mN))) 
                                                                            << 0x10U)))))));
    this->__PVT__PADD__DOT__left_shift = (((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                                           | (IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                                           ? ((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                                               ? ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                       >> 0xeU)))
                                                   ? 
                                                  (1U 
                                                   & ((~ 
                                                       ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                        >> 0xfU)) 
                                                      & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                         >> 0xeU)))
                                                   : 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                                 >> 0xcU)))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 0xdU)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 0xcU)))))
                                               : (((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                          >> 0xaU)))
                                                      ? 
                                                     (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 0xbU)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 0xaU)))
                                                      : 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                                    >> 8U)))) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((~ 
                                                             ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                              >> 9U)) 
                                                            & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                               >> 8U)))))))
                                           : ((((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                                | (IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                                               << 3U) 
                                              | ((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                                  ? 
                                                 ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                       >> 6U)))
                                                   ? 
                                                  (1U 
                                                   & ((~ 
                                                       ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                        >> 7U)) 
                                                      & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                         >> 6U)))
                                                   : 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                                 >> 4U)))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 5U)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 4U)))))
                                                  : 
                                                 (((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                          >> 2U)))
                                                      ? 
                                                     (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 3U)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 2U)))
                                                      : 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & (IData)(this->__PVT__PADD__DOT__LOD_in)))) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((~ 
                                                             ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                              >> 1U)) 
                                                            & (IData)(this->__PVT__PADD__DOT__LOD_in)))))))));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[1U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((2U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [0U] 
                                                      >> 2U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [0U]));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[2U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((4U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [1U] 
                                                      >> 4U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [1U]));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[3U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((8U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [2U] 
                                                      >> 8U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [2U]));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[4U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((0x10U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [3U] 
                                                      >> 0x10U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [3U]));
    this->__PVT__PDIV__DOT__tmp1_o_rnd = (0xffffU & 
                                          ((0xcU > (IData)(this->__PVT__PDIV__DOT__r_o))
                                            ? ((IData)(
                                                       (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                        [4U] 
                                                        >> 0x13U)) 
                                               + (1U 
                                                  & (((IData)(
                                                              (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                               [4U] 
                                                               >> 0x13U)) 
                                                      & ((IData)(
                                                                 (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                  [4U] 
                                                                  >> 0x12U)) 
                                                         | (0U 
                                                            != 
                                                            (0x3ffffU 
                                                             & (IData)(
                                                                       this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                       [4U]))))) 
                                                     | (((IData)(
                                                                 (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                  [4U] 
                                                                  >> 0x14U)) 
                                                         & (IData)(
                                                                   (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                    [4U] 
                                                                    >> 0x13U))) 
                                                        & (~ 
                                                           ((IData)(
                                                                    (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                     [4U] 
                                                                     >> 0x12U)) 
                                                            | (0U 
                                                               != 
                                                               (0x3ffffU 
                                                                & (IData)(
                                                                          this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                          [4U])))))))))
                                            : (IData)(
                                                      (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                       [4U] 
                                                       >> 0x13U))));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[0U] = (0xffffU 
                                                  & ((1U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (0xfffffffeU 
                                                      & this->__PVT__PADD__DOT__add_m)
                                                      : 
                                                     (this->__PVT__PADD__DOT__add_m 
                                                      >> 1U)));
    this->__PVT__PADD__DOT__le_o = (0xffU & (((((IData)(this->__PVT__PADD__DOT__lr_N) 
                                                << 2U) 
                                               | (IData)(this->__PVT__PADD__DOT__le)) 
                                              - (IData)(this->__PVT__PADD__DOT__left_shift)) 
                                             + (1U 
                                                & (this->__PVT__PADD__DOT__add_m 
                                                   >> 0x10U))));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[1U] = (0xffffU 
                                                  & ((2U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                      [0U] 
                                                      << 2U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                     [0U]));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[2U] = (0xffffU 
                                                  & ((4U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                      [1U] 
                                                      << 4U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                     [1U]));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[3U] = (0xffffU 
                                                  & ((8U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                      [2U] 
                                                      << 8U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                     [2U]));
    this->__PVT__PADD__DOT__DSR_left_out = ((0x8000U 
                                             & this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                             [3U]) ? 
                                            this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                            [3U] : 
                                            (0xfffeU 
                                             & (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                [3U] 
                                                << 1U)));
    this->__PVT__PADD__DOT__uut_reg_ro__DOT__exp_oN 
        = (0x7fU & (IData)(this->__PVT__PADD__DOT__le_o));
    this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3 
        = (0x1fU & ((IData)(1U) + (0x1fU & ((IData)(this->__PVT__PADD__DOT__uut_reg_ro__DOT__exp_oN) 
                                            >> 2U))));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[0U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((1U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     ((VL_ULL(0x7ffffffc00000000) 
                                                       & ((QData)((IData)(
                                                                          (0xffffU 
                                                                           & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                                >> 6U)))))))) 
                                                          << 0x22U)) 
                                                      | ((VL_ULL(0x7ffffffe00000000) 
                                                          & ((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                                >> 6U)))) 
                                                             << 0x21U)) 
                                                         | ((VL_ULL(0x7fffffff80000000) 
                                                             & ((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(this->__PVT__PADD__DOT__le_o)))) 
                                                                << 0x1fU)) 
                                                            | ((QData)((IData)(
                                                                               (0xfffe0000U 
                                                                                & ((IData)(this->__PVT__PADD__DOT__DSR_left_out) 
                                                                                << 0x11U)))) 
                                                               >> 1U))))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                                >> 6U)))))))) 
                                                       << 0x23U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                              >> 6U)))) 
                                                          << 0x22U) 
                                                         | (((QData)((IData)(
                                                                             (3U 
                                                                              & (IData)(this->__PVT__PADD__DOT__le_o)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              (0xfffe0000U 
                                                                               & ((IData)(this->__PVT__PADD__DOT__DSR_left_out) 
                                                                                << 0x11U)))))))));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[1U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((2U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                      [0U] 
                                                      >> 2U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                     [0U]));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[2U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((4U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                      [1U] 
                                                      >> 4U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                     [1U]));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[3U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((8U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                      [2U] 
                                                      >> 8U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                     [2U]));
    this->__PVT__PADD__DOT__tmp1_o_rnd = (0xffffU & 
                                          ((0xcU > 
                                            (0xfU & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3)))
                                            ? ((IData)(
                                                       (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                        [3U] 
                                                        >> 0x13U)) 
                                               + (1U 
                                                  & (((IData)(
                                                              (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                               [3U] 
                                                               >> 0x13U)) 
                                                      & ((IData)(
                                                                 (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                  [3U] 
                                                                  >> 0x12U)) 
                                                         | (0U 
                                                            != 
                                                            (0x3ffffU 
                                                             & (IData)(
                                                                       this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                       [3U]))))) 
                                                     | (((IData)(
                                                                 (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                  [3U] 
                                                                  >> 0x14U)) 
                                                         & (IData)(
                                                                   (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                    [3U] 
                                                                    >> 0x13U))) 
                                                        & (~ 
                                                           ((IData)(
                                                                    (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                     [3U] 
                                                                     >> 0x12U)) 
                                                            | (0U 
                                                               != 
                                                               (0x3ffffU 
                                                                & (IData)(
                                                                          this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                          [3U])))))))))
                                            : (IData)(
                                                      (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                       [3U] 
                                                       >> 0x13U))));
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_start) {
        if ((0U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
            this->__PVT__q_out = ((1U & (((IData)(this->__PVT__add_inf) 
                                          | ((~ (((IData)(this->__PVT__add_in1) 
                                                  >> 0xfU) 
                                                 | (0U 
                                                    != 
                                                    (0x7fffU 
                                                     & (IData)(this->__PVT__add_in1))))) 
                                             & (~ (
                                                   ((IData)(this->__PVT__add_in2) 
                                                    >> 0xfU) 
                                                   | (0U 
                                                      != 
                                                      (0x7fffU 
                                                       & (IData)(this->__PVT__add_in2))))))) 
                                         | (~ ((IData)(this->__PVT__PADD__DOT__DSR_left_out) 
                                               >> 0xfU))))
                                   ? ((IData)(this->__PVT__add_inf) 
                                      << 0xfU) : (((IData)(this->__PVT__PADD__DOT__ls) 
                                                   << 0xfU) 
                                                  | (0x7fffU 
                                                     & (((IData)(this->__PVT__PADD__DOT__ls)
                                                          ? 
                                                         (- (IData)(this->__PVT__PADD__DOT__tmp1_o_rnd))
                                                          : (IData)(this->__PVT__PADD__DOT__tmp1_o_rnd)) 
                                                        >> 1U))));
        } else {
            if ((1U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
                this->__PVT__q_out = ((1U & (((IData)(this->__PVT__mult_inf) 
                                              | ((~ 
                                                  (((IData)(this->__PVT__mult_in1) 
                                                    >> 0xfU) 
                                                   | (0U 
                                                      != 
                                                      (0x7fffU 
                                                       & (IData)(this->__PVT__mult_in1))))) 
                                                 & (~ 
                                                    (((IData)(this->__PVT__mult_in2) 
                                                      >> 0xfU) 
                                                     | (0U 
                                                        != 
                                                        (0x7fffU 
                                                         & (IData)(this->__PVT__mult_in2))))))) 
                                             | (~ (this->__PVT__PMULT__DOT__mult_mN 
                                                   >> 0x1dU))))
                                       ? ((IData)(this->__PVT__mult_inf) 
                                          << 0xfU) : 
                                      (((IData)(this->__PVT__PMULT__DOT__mult_s) 
                                        << 0xfU) | 
                                       (0x7fffU & (
                                                   ((IData)(this->__PVT__PMULT__DOT__mult_s)
                                                     ? 
                                                    (- (IData)(this->__PVT__PMULT__DOT__tmp1_o_rnd))
                                                     : (IData)(this->__PVT__PMULT__DOT__tmp1_o_rnd)) 
                                                   >> 1U))));
            } else {
                if ((2U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
                    this->__PVT__q_out = ((1U & (((IData)(this->__PVT__div_inf) 
                                                  | ((~ 
                                                      (((IData)(this->__PVT__div_in1) 
                                                        >> 0xfU) 
                                                       | (0U 
                                                          != 
                                                          (0x7fffU 
                                                           & (IData)(this->__PVT__div_in1))))) 
                                                     | (((IData)(this->__PVT__div_in2) 
                                                         >> 0xfU) 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x7fffU 
                                                                       & (IData)(this->__PVT__div_in2)))))))) 
                                                 | (~ 
                                                    (this->__PVT__PDIV__DOT__div_mN 
                                                     >> 0x1dU))))
                                           ? ((IData)(this->__PVT__div_inf) 
                                              << 0xfU)
                                           : (((IData)(this->__PVT__PDIV__DOT__div_s) 
                                               << 0xfU) 
                                              | (0x7fffU 
                                                 & (((IData)(this->__PVT__PDIV__DOT__div_s)
                                                      ? 
                                                     (- (IData)(this->__PVT__PDIV__DOT__tmp1_o_rnd))
                                                      : (IData)(this->__PVT__PDIV__DOT__tmp1_o_rnd)) 
                                                    >> 1U))));
                }
            }
        }
    }
}

VL_INLINE_OPT void Vibex_simple_system_posit_unit::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__13(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vibex_simple_system_posit_unit::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__13\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__PADD__DOT__sr = ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                   ? (IData)(__PVT__PADD__DOT__uut_de2->regime)
                                   : (IData)(__PVT__PADD__DOT__uut_de1->regime));
    this->__PVT__PADD__DOT__lr = ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                   ? (IData)(__PVT__PADD__DOT__uut_de1->regime)
                                   : (IData)(__PVT__PADD__DOT__uut_de2->regime));
    this->__PVT__PADD__DOT__lr_N = (0x1fU & ((1U & 
                                              ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                ? ((IData)(this->__PVT__PADD__DOT__xin1) 
                                                   >> 0xeU)
                                                : ((IData)(this->__PVT__PADD__DOT__xin2) 
                                                   >> 0xeU)))
                                              ? (IData)(this->__PVT__PADD__DOT__lr)
                                              : (- (IData)(this->__PVT__PADD__DOT__lr))));
}

VL_INLINE_OPT void Vibex_simple_system_posit_unit::_combo__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__17(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vibex_simple_system_posit_unit::_combo__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__17\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__PMULT__DOT__mult_m = (0x3fffffffU 
                                       & ((((IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fffU 
                                                      & (IData)(this->__PVT__mult_in1)))) 
                                            << 0xeU) 
                                           | (0x3fffU 
                                              & __PVT__PMULT__DOT__uut_de1->__PVT__ls__DOT__tmp
                                              [3U])) 
                                          * (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fffU 
                                                        & (IData)(this->__PVT__mult_in2)))) 
                                              << 0xeU) 
                                             | (0x3fffU 
                                                & __PVT__PMULT__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                [3U]))));
    this->__PVT__PDIV__DOT__m1 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__div_in1)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PDIV__DOT__uut_de1->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PDIV__DOT__m2 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__div_in2)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PADD__DOT__m1 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__add_in1)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PADD__DOT__uut_de1->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PADD__DOT__m2 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__add_in2)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PADD__DOT__uut_de2->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PADD__DOT__le = (3U & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                         ? (__PVT__PADD__DOT__uut_de1->__PVT__ls__DOT__tmp
                                            [3U] >> 0xeU)
                                         : (__PVT__PADD__DOT__uut_de2->__PVT__ls__DOT__tmp
                                            [3U] >> 0xeU)));
    this->__PVT__PMULT__DOT__mult_mN = (0x3fffffffU 
                                        & ((0x20000000U 
                                            & this->__PVT__PMULT__DOT__mult_m)
                                            ? this->__PVT__PMULT__DOT__mult_m
                                            : (this->__PVT__PMULT__DOT__mult_m 
                                               << 1U)));
    this->__PVT__PMULT__DOT__mult_e = (0xffU & ((((0xfcU 
                                                   & (((0x4000U 
                                                        & (IData)(this->__PVT__PMULT__DOT__xin1))
                                                        ? (IData)(__PVT__PMULT__DOT__uut_de1->regime)
                                                        : 
                                                       (- (IData)(__PVT__PMULT__DOT__uut_de1->regime))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (__PVT__PMULT__DOT__uut_de1->__PVT__ls__DOT__tmp
                                                        [3U] 
                                                        >> 0xeU))) 
                                                 + 
                                                 ((0xfcU 
                                                   & (((0x4000U 
                                                        & (IData)(this->__PVT__PMULT__DOT__xin2))
                                                        ? (IData)(__PVT__PMULT__DOT__uut_de2->regime)
                                                        : 
                                                       (- (IData)(__PVT__PMULT__DOT__uut_de2->regime))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (__PVT__PMULT__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                        [3U] 
                                                        >> 0xeU)))) 
                                                + (1U 
                                                   & (this->__PVT__PMULT__DOT__mult_m 
                                                      >> 0x1dU))));
    this->__Vtableidx1 = (0xfeU & ((IData)(this->__PVT__PDIV__DOT__m2) 
                                   >> 6U));
    this->__PVT__PDIV__DOT__m2_inv0_tmp = this->__Vtable1___PVT__PDIV__DOT__m2_inv0_tmp
        [this->__Vtableidx1];
    this->__PVT__PADD__DOT__lm = ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                   ? (IData)(this->__PVT__PADD__DOT__m1)
                                   : (IData)(this->__PVT__PADD__DOT__m2));
    this->__PVT__PADD__DOT__diff = (0xffU & ((((IData)(this->__PVT__PADD__DOT__lr_N) 
                                               << 2U) 
                                              | (IData)(this->__PVT__PADD__DOT__le)) 
                                             - ((0x7cU 
                                                 & (((1U 
                                                      & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                          ? 
                                                         ((IData)(this->__PVT__PADD__DOT__xin2) 
                                                          >> 0xeU)
                                                          : 
                                                         ((IData)(this->__PVT__PADD__DOT__xin1) 
                                                          >> 0xeU)))
                                                      ? (IData)(this->__PVT__PADD__DOT__sr)
                                                      : 
                                                     (- (IData)(this->__PVT__PADD__DOT__sr))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                       ? 
                                                      (__PVT__PADD__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                       [3U] 
                                                       >> 0xeU)
                                                       : 
                                                      (__PVT__PADD__DOT__uut_de1->__PVT__ls__DOT__tmp
                                                       [3U] 
                                                       >> 0xeU))))));
    this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN 
        = (0x7fU & ((0x80U & (IData)(this->__PVT__PMULT__DOT__mult_e))
                     ? ((IData)(1U) + (~ (IData)(this->__PVT__PMULT__DOT__mult_e)))
                     : (IData)(this->__PVT__PMULT__DOT__mult_e)));
    this->__PVT__PDIV__DOT__m2_inv[0U] = (0x1fe00000U 
                                          & ((IData)(this->__PVT__PDIV__DOT__m2_inv0_tmp) 
                                             << 0x14U));
    this->__PVT__PADD__DOT__exp_diff = ((0U != (7U 
                                                & ((IData)(this->__PVT__PADD__DOT__diff) 
                                                   >> 4U)))
                                         ? 0xfU : (0xfU 
                                                   & (IData)(this->__PVT__PADD__DOT__diff)));
    this->__PVT__PMULT__DOT__r_o = (0x1fU & ((1U & 
                                              ((~ ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                   >> 7U)) 
                                               | (0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN)))))
                                              ? ((IData)(1U) 
                                                 + 
                                                 (0x1fU 
                                                  & ((IData)(this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN) 
                                                     >> 2U)))
                                              : (0x1fU 
                                                 & ((IData)(this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN) 
                                                    >> 2U))));
    this->__PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2[0U] 
        = (0x3fffffffU & ((0x7f80U & (this->__PVT__PDIV__DOT__m2_inv
                                      [0U] >> 0xeU)) 
                          * (IData)(this->__PVT__PDIV__DOT__m2)));
    this->__PVT__PDIV__DOT__div_m = (0x3fffffffU & 
                                     ((0U != (0x3fffU 
                                              & __PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                              [3U]))
                                       ? ((IData)(this->__PVT__PDIV__DOT__m1) 
                                          * (0x7fffU 
                                             & (this->__PVT__PDIV__DOT__m2_inv
                                                [1U] 
                                                >> 0xeU)))
                                       : ((IData)(this->__PVT__PDIV__DOT__m1) 
                                          << 0xeU)));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[0U] = (0xffffU 
                                                  & ((1U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (0x7fffffffU 
                                                      & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                          ? (IData)(this->__PVT__PADD__DOT__m2)
                                                          : (IData)(this->__PVT__PADD__DOT__m1)))
                                                      : 
                                                     (((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                        ? (IData)(this->__PVT__PADD__DOT__m2)
                                                        : (IData)(this->__PVT__PADD__DOT__m1)) 
                                                      << 1U)));
    this->PMULT__DOT____Vcellinp__dsr2__b = ((0x10U 
                                              & (IData)(this->__PVT__PMULT__DOT__r_o))
                                              ? 0xfU
                                              : (IData)(this->__PVT__PMULT__DOT__r_o));
    this->__PVT__PDIV__DOT__genblk4__DOT__two_m2_inv_X_m2[0U] 
        = (0xffffU & ((IData)(0x4000U) - ((0x3ffeU 
                                           & (this->__PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2
                                              [0U] 
                                              >> 0x10U)) 
                                          | (0U != 
                                             (0x1ffffU 
                                              & this->__PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2
                                              [0U])))));
    this->__PVT__PDIV__DOT__div_mN = (0x3fffffffU & 
                                      ((0x20000000U 
                                        & this->__PVT__PDIV__DOT__div_m)
                                        ? this->__PVT__PDIV__DOT__div_m
                                        : (this->__PVT__PDIV__DOT__div_m 
                                           << 1U)));
    this->__PVT__PDIV__DOT__div_e = (0xffU & ((((0xfcU 
                                                 & (((0x4000U 
                                                      & (IData)(this->__PVT__PDIV__DOT__xin1))
                                                      ? (IData)(__PVT__PDIV__DOT__uut_de1->regime)
                                                      : 
                                                     (- (IData)(__PVT__PDIV__DOT__uut_de1->regime))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (__PVT__PDIV__DOT__uut_de1->__PVT__ls__DOT__tmp
                                                      [3U] 
                                                      >> 0xeU))) 
                                               - ((0xfcU 
                                                   & (((0x4000U 
                                                        & (IData)(this->__PVT__PDIV__DOT__xin2))
                                                        ? (IData)(__PVT__PDIV__DOT__uut_de2->regime)
                                                        : 
                                                       (- (IData)(__PVT__PDIV__DOT__uut_de2->regime))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (__PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                        [3U] 
                                                        >> 0xeU)))) 
                                              - ((1U 
                                                  & ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffU 
                                                                  & __PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                                  [3U])))) 
                                                     | (this->__PVT__PDIV__DOT__div_m 
                                                        >> 0x1dU)))
                                                  ? 0U
                                                  : 1U)));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[1U] = (0xffffU 
                                                  & ((2U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                      [0U] 
                                                      >> 2U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                     [0U]));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[2U] = (0xffffU 
                                                  & ((4U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                      [1U] 
                                                      >> 4U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                     [1U]));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[3U] = (0xffffU 
                                                  & ((8U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                      [2U] 
                                                      >> 8U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                     [2U]));
    this->__PVT__PADD__DOT__add_m = (0x1ffffU & ((1U 
                                                  & (((IData)(this->__PVT__add_in1) 
                                                      >> 0xfU) 
                                                     ^ ~ 
                                                     ((IData)(this->__PVT__add_in2) 
                                                      >> 0xfU)))
                                                  ? 
                                                 (((IData)(this->__PVT__PADD__DOT__lm) 
                                                   << 1U) 
                                                  + 
                                                  this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                  [3U])
                                                  : 
                                                 (((IData)(this->__PVT__PADD__DOT__lm) 
                                                   << 1U) 
                                                  - 
                                                  this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                  [3U])));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[0U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((1U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      ((VL_ULL(0x7ffffffffffc0000) 
                                                        & ((QData)((IData)(
                                                                           ((0xffff0000U 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                >> 7U))))) 
                                                                                << 0x10U)) 
                                                                            | ((0x8000U 
                                                                                & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 8U)) 
                                                                               | ((0x6000U 
                                                                                & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 0xdU)) 
                                                                                | (0x1fffU 
                                                                                & (this->__PVT__PMULT__DOT__mult_mN 
                                                                                >> 0x10U))))))) 
                                                           << 0x12U)) 
                                                       | ((QData)((IData)(
                                                                          ((0x60000U 
                                                                            & (this->__PVT__PMULT__DOT__mult_mN 
                                                                               << 3U)) 
                                                                           | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PMULT__DOT__mult_mN))) 
                                                                              << 0x10U)))) 
                                                          >> 1U))
                                                       : 
                                                      (((QData)((IData)(
                                                                        ((0xffff0000U 
                                                                          & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                >> 7U))))) 
                                                                             << 0x10U)) 
                                                                         | ((0x8000U 
                                                                             & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 8U)) 
                                                                            | ((0x6000U 
                                                                                & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 0xdU)) 
                                                                               | (0x1fffU 
                                                                                & (this->__PVT__PMULT__DOT__mult_mN 
                                                                                >> 0x10U))))))) 
                                                        << 0x13U) 
                                                       | (QData)((IData)(
                                                                         ((0x60000U 
                                                                           & (this->__PVT__PMULT__DOT__mult_mN 
                                                                              << 3U)) 
                                                                          | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PMULT__DOT__mult_mN))) 
                                                                             << 0x10U)))))));
    this->__PVT__PDIV__DOT__m2_inv[1U] = (0x3fffffffU 
                                          & ((0x7f80U 
                                              & (this->__PVT__PDIV__DOT__m2_inv
                                                 [0U] 
                                                 >> 0xeU)) 
                                             * (0x7ffeU 
                                                & (this->__PVT__PDIV__DOT__genblk4__DOT__two_m2_inv_X_m2
                                                   [0U] 
                                                   << 1U))));
    this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN 
        = (0x7fU & ((0x80U & (IData)(this->__PVT__PDIV__DOT__div_e))
                     ? ((IData)(1U) + (~ (IData)(this->__PVT__PDIV__DOT__div_e)))
                     : (IData)(this->__PVT__PDIV__DOT__div_e)));
    this->__PVT__PADD__DOT__LOD_in = ((0x8000U & ((0x7fff8000U 
                                                   & (this->__PVT__PADD__DOT__add_m 
                                                      >> 1U)) 
                                                  | (0xffff8000U 
                                                     & this->__PVT__PADD__DOT__add_m))) 
                                      | (0x7fffU & this->__PVT__PADD__DOT__add_m));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[1U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((2U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [0U] 
                                                       >> 2U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [0U]));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[2U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((4U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [1U] 
                                                       >> 4U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [1U]));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[3U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((8U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [2U] 
                                                       >> 8U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [2U]));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[4U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((0x10U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [3U] 
                                                       >> 0x10U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [3U]));
    this->__PVT__PMULT__DOT__tmp1_o_rnd = (0xffffU 
                                           & ((0xcU 
                                               > (IData)(this->__PVT__PMULT__DOT__r_o))
                                               ? ((IData)(
                                                          (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                           [4U] 
                                                           >> 0x13U)) 
                                                  + 
                                                  (1U 
                                                   & (((IData)(
                                                               (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                [4U] 
                                                                >> 0x13U)) 
                                                       & ((IData)(
                                                                  (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                   [4U] 
                                                                   >> 0x12U)) 
                                                          | (0U 
                                                             != 
                                                             (0x3ffffU 
                                                              & (IData)(
                                                                        this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                        [4U]))))) 
                                                      | (((IData)(
                                                                  (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                   [4U] 
                                                                   >> 0x14U)) 
                                                          & (IData)(
                                                                    (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                     [4U] 
                                                                     >> 0x13U))) 
                                                         & (~ 
                                                            ((IData)(
                                                                     (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                      [4U] 
                                                                      >> 0x12U)) 
                                                             | (0U 
                                                                != 
                                                                (0x3ffffU 
                                                                 & (IData)(
                                                                           this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                           [4U])))))))))
                                               : (IData)(
                                                         (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                          [4U] 
                                                          >> 0x13U))));
    this->__PVT__PDIV__DOT__r_o = (0x1fU & ((1U & (
                                                   (~ 
                                                    ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                     >> 7U)) 
                                                   | (0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN)))))
                                             ? ((IData)(1U) 
                                                + (0x1fU 
                                                   & ((IData)(this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN) 
                                                      >> 2U)))
                                             : (0x1fU 
                                                & ((IData)(this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN) 
                                                   >> 2U))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__PVT__PADD__DOT__LOD_in))) 
           | (0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                           >> 2U))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                  >> 6U))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                  >> 0xaU))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                               >> 0xeU))));
    this->PDIV__DOT____Vcellinp__dsr2__b = ((0x10U 
                                             & (IData)(this->__PVT__PDIV__DOT__r_o))
                                             ? 0xfU
                                             : (IData)(this->__PVT__PDIV__DOT__r_o));
    this->__PVT__PADD__DOT__left_shift = (((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                                           | (IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                                           ? ((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                                               ? ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                       >> 0xeU)))
                                                   ? 
                                                  (1U 
                                                   & ((~ 
                                                       ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                        >> 0xfU)) 
                                                      & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                         >> 0xeU)))
                                                   : 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                                 >> 0xcU)))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 0xdU)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 0xcU)))))
                                               : (((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                          >> 0xaU)))
                                                      ? 
                                                     (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 0xbU)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 0xaU)))
                                                      : 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                                    >> 8U)))) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((~ 
                                                             ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                              >> 9U)) 
                                                            & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                               >> 8U)))))))
                                           : ((((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                                | (IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                                               << 3U) 
                                              | ((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                                  ? 
                                                 ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                       >> 6U)))
                                                   ? 
                                                  (1U 
                                                   & ((~ 
                                                       ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                        >> 7U)) 
                                                      & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                         >> 6U)))
                                                   : 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                                 >> 4U)))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 5U)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 4U)))))
                                                  : 
                                                 (((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                          >> 2U)))
                                                      ? 
                                                     (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 3U)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 2U)))
                                                      : 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & (IData)(this->__PVT__PADD__DOT__LOD_in)))) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((~ 
                                                             ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                              >> 1U)) 
                                                            & (IData)(this->__PVT__PADD__DOT__LOD_in)))))))));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[0U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((1U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     ((VL_ULL(0x7ffffffffffc0000) 
                                                       & ((QData)((IData)(
                                                                          ((0xffff0000U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                >> 7U))))) 
                                                                               << 0x10U)) 
                                                                           | ((0x8000U 
                                                                               & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                << 8U)) 
                                                                              | ((0x6000U 
                                                                                & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                << 0xdU)) 
                                                                                | (0x1fffU 
                                                                                & (this->__PVT__PDIV__DOT__div_mN 
                                                                                >> 0x10U))))))) 
                                                          << 0x12U)) 
                                                      | ((QData)((IData)(
                                                                         ((0x60000U 
                                                                           & (this->__PVT__PDIV__DOT__div_mN 
                                                                              << 3U)) 
                                                                          | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PDIV__DOT__div_mN))) 
                                                                             << 0x10U)))) 
                                                         >> 1U))
                                                      : 
                                                     (((QData)((IData)(
                                                                       ((0xffff0000U 
                                                                         & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                >> 7U))))) 
                                                                            << 0x10U)) 
                                                                        | ((0x8000U 
                                                                            & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                               << 8U)) 
                                                                           | ((0x6000U 
                                                                               & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                << 0xdU)) 
                                                                              | (0x1fffU 
                                                                                & (this->__PVT__PDIV__DOT__div_mN 
                                                                                >> 0x10U))))))) 
                                                       << 0x13U) 
                                                      | (QData)((IData)(
                                                                        ((0x60000U 
                                                                          & (this->__PVT__PDIV__DOT__div_mN 
                                                                             << 3U)) 
                                                                         | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PDIV__DOT__div_mN))) 
                                                                            << 0x10U)))))));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[0U] = (0xffffU 
                                                  & ((1U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (0xfffffffeU 
                                                      & this->__PVT__PADD__DOT__add_m)
                                                      : 
                                                     (this->__PVT__PADD__DOT__add_m 
                                                      >> 1U)));
    this->__PVT__PADD__DOT__le_o = (0xffU & (((((IData)(this->__PVT__PADD__DOT__lr_N) 
                                                << 2U) 
                                               | (IData)(this->__PVT__PADD__DOT__le)) 
                                              - (IData)(this->__PVT__PADD__DOT__left_shift)) 
                                             + (1U 
                                                & (this->__PVT__PADD__DOT__add_m 
                                                   >> 0x10U))));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[1U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((2U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [0U] 
                                                      >> 2U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [0U]));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[2U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((4U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [1U] 
                                                      >> 4U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [1U]));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[3U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((8U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [2U] 
                                                      >> 8U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [2U]));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[4U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((0x10U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [3U] 
                                                      >> 0x10U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [3U]));
    this->__PVT__PDIV__DOT__tmp1_o_rnd = (0xffffU & 
                                          ((0xcU > (IData)(this->__PVT__PDIV__DOT__r_o))
                                            ? ((IData)(
                                                       (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                        [4U] 
                                                        >> 0x13U)) 
                                               + (1U 
                                                  & (((IData)(
                                                              (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                               [4U] 
                                                               >> 0x13U)) 
                                                      & ((IData)(
                                                                 (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                  [4U] 
                                                                  >> 0x12U)) 
                                                         | (0U 
                                                            != 
                                                            (0x3ffffU 
                                                             & (IData)(
                                                                       this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                       [4U]))))) 
                                                     | (((IData)(
                                                                 (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                  [4U] 
                                                                  >> 0x14U)) 
                                                         & (IData)(
                                                                   (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                    [4U] 
                                                                    >> 0x13U))) 
                                                        & (~ 
                                                           ((IData)(
                                                                    (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                     [4U] 
                                                                     >> 0x12U)) 
                                                            | (0U 
                                                               != 
                                                               (0x3ffffU 
                                                                & (IData)(
                                                                          this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                          [4U])))))))))
                                            : (IData)(
                                                      (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                       [4U] 
                                                       >> 0x13U))));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[1U] = (0xffffU 
                                                  & ((2U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                      [0U] 
                                                      << 2U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                     [0U]));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[2U] = (0xffffU 
                                                  & ((4U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                      [1U] 
                                                      << 4U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                     [1U]));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[3U] = (0xffffU 
                                                  & ((8U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                      [2U] 
                                                      << 8U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                     [2U]));
    this->__PVT__PADD__DOT__DSR_left_out = ((0x8000U 
                                             & this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                             [3U]) ? 
                                            this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                            [3U] : 
                                            (0xfffeU 
                                             & (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                [3U] 
                                                << 1U)));
    this->__PVT__PADD__DOT__uut_reg_ro__DOT__exp_oN 
        = (0x7fU & (IData)(this->__PVT__PADD__DOT__le_o));
    this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3 
        = (0x1fU & ((IData)(1U) + (0x1fU & ((IData)(this->__PVT__PADD__DOT__uut_reg_ro__DOT__exp_oN) 
                                            >> 2U))));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[0U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((1U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     ((VL_ULL(0x7ffffffc00000000) 
                                                       & ((QData)((IData)(
                                                                          (0xffffU 
                                                                           & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                                >> 6U)))))))) 
                                                          << 0x22U)) 
                                                      | ((VL_ULL(0x7ffffffe00000000) 
                                                          & ((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                                >> 6U)))) 
                                                             << 0x21U)) 
                                                         | ((VL_ULL(0x7fffffff80000000) 
                                                             & ((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(this->__PVT__PADD__DOT__le_o)))) 
                                                                << 0x1fU)) 
                                                            | ((QData)((IData)(
                                                                               (0xfffe0000U 
                                                                                & ((IData)(this->__PVT__PADD__DOT__DSR_left_out) 
                                                                                << 0x11U)))) 
                                                               >> 1U))))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                                >> 6U)))))))) 
                                                       << 0x23U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                              >> 6U)))) 
                                                          << 0x22U) 
                                                         | (((QData)((IData)(
                                                                             (3U 
                                                                              & (IData)(this->__PVT__PADD__DOT__le_o)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              (0xfffe0000U 
                                                                               & ((IData)(this->__PVT__PADD__DOT__DSR_left_out) 
                                                                                << 0x11U)))))))));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[1U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((2U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                      [0U] 
                                                      >> 2U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                     [0U]));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[2U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((4U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                      [1U] 
                                                      >> 4U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                     [1U]));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[3U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((8U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                      [2U] 
                                                      >> 8U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                     [2U]));
    this->__PVT__PADD__DOT__tmp1_o_rnd = (0xffffU & 
                                          ((0xcU > 
                                            (0xfU & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3)))
                                            ? ((IData)(
                                                       (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                        [3U] 
                                                        >> 0x13U)) 
                                               + (1U 
                                                  & (((IData)(
                                                              (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                               [3U] 
                                                               >> 0x13U)) 
                                                      & ((IData)(
                                                                 (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                  [3U] 
                                                                  >> 0x12U)) 
                                                         | (0U 
                                                            != 
                                                            (0x3ffffU 
                                                             & (IData)(
                                                                       this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                       [3U]))))) 
                                                     | (((IData)(
                                                                 (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                  [3U] 
                                                                  >> 0x14U)) 
                                                         & (IData)(
                                                                   (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                    [3U] 
                                                                    >> 0x13U))) 
                                                        & (~ 
                                                           ((IData)(
                                                                    (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                     [3U] 
                                                                     >> 0x12U)) 
                                                            | (0U 
                                                               != 
                                                               (0x3ffffU 
                                                                & (IData)(
                                                                          this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                          [3U])))))))))
                                            : (IData)(
                                                      (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                       [3U] 
                                                       >> 0x13U))));
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_start) {
        if ((0U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
            this->__PVT__q_out = ((1U & (((IData)(this->__PVT__add_inf) 
                                          | ((~ (((IData)(this->__PVT__add_in1) 
                                                  >> 0xfU) 
                                                 | (0U 
                                                    != 
                                                    (0x7fffU 
                                                     & (IData)(this->__PVT__add_in1))))) 
                                             & (~ (
                                                   ((IData)(this->__PVT__add_in2) 
                                                    >> 0xfU) 
                                                   | (0U 
                                                      != 
                                                      (0x7fffU 
                                                       & (IData)(this->__PVT__add_in2))))))) 
                                         | (~ ((IData)(this->__PVT__PADD__DOT__DSR_left_out) 
                                               >> 0xfU))))
                                   ? ((IData)(this->__PVT__add_inf) 
                                      << 0xfU) : (((IData)(this->__PVT__PADD__DOT__ls) 
                                                   << 0xfU) 
                                                  | (0x7fffU 
                                                     & (((IData)(this->__PVT__PADD__DOT__ls)
                                                          ? 
                                                         (- (IData)(this->__PVT__PADD__DOT__tmp1_o_rnd))
                                                          : (IData)(this->__PVT__PADD__DOT__tmp1_o_rnd)) 
                                                        >> 1U))));
        } else {
            if ((1U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
                this->__PVT__q_out = ((1U & (((IData)(this->__PVT__mult_inf) 
                                              | ((~ 
                                                  (((IData)(this->__PVT__mult_in1) 
                                                    >> 0xfU) 
                                                   | (0U 
                                                      != 
                                                      (0x7fffU 
                                                       & (IData)(this->__PVT__mult_in1))))) 
                                                 & (~ 
                                                    (((IData)(this->__PVT__mult_in2) 
                                                      >> 0xfU) 
                                                     | (0U 
                                                        != 
                                                        (0x7fffU 
                                                         & (IData)(this->__PVT__mult_in2))))))) 
                                             | (~ (this->__PVT__PMULT__DOT__mult_mN 
                                                   >> 0x1dU))))
                                       ? ((IData)(this->__PVT__mult_inf) 
                                          << 0xfU) : 
                                      (((IData)(this->__PVT__PMULT__DOT__mult_s) 
                                        << 0xfU) | 
                                       (0x7fffU & (
                                                   ((IData)(this->__PVT__PMULT__DOT__mult_s)
                                                     ? 
                                                    (- (IData)(this->__PVT__PMULT__DOT__tmp1_o_rnd))
                                                     : (IData)(this->__PVT__PMULT__DOT__tmp1_o_rnd)) 
                                                   >> 1U))));
            } else {
                if ((2U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit1_op_sel))) {
                    this->__PVT__q_out = ((1U & (((IData)(this->__PVT__div_inf) 
                                                  | ((~ 
                                                      (((IData)(this->__PVT__div_in1) 
                                                        >> 0xfU) 
                                                       | (0U 
                                                          != 
                                                          (0x7fffU 
                                                           & (IData)(this->__PVT__div_in1))))) 
                                                     | (((IData)(this->__PVT__div_in2) 
                                                         >> 0xfU) 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x7fffU 
                                                                       & (IData)(this->__PVT__div_in2)))))))) 
                                                 | (~ 
                                                    (this->__PVT__PDIV__DOT__div_mN 
                                                     >> 0x1dU))))
                                           ? ((IData)(this->__PVT__div_inf) 
                                              << 0xfU)
                                           : (((IData)(this->__PVT__PDIV__DOT__div_s) 
                                               << 0xfU) 
                                              | (0x7fffU 
                                                 & (((IData)(this->__PVT__PDIV__DOT__div_s)
                                                      ? 
                                                     (- (IData)(this->__PVT__PDIV__DOT__tmp1_o_rnd))
                                                      : (IData)(this->__PVT__PDIV__DOT__tmp1_o_rnd)) 
                                                    >> 1U))));
                }
            }
        }
    }
}

VL_INLINE_OPT void Vibex_simple_system_posit_unit::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__2(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vibex_simple_system_posit_unit::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__2\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_start) {
        if ((0U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
            this->__PVT__add_start = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_start;
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_start) {
        if ((0U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
            if ((1U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
                this->__PVT__mult_start = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_start;
            }
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_start) {
        if ((0U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
            if ((1U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
                if ((2U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
                    this->__PVT__div_start = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_start;
                }
            }
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_start) {
        if ((0U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
            if ((1U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
                this->__PVT__mult_in2 = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_in2;
            }
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_start) {
        if ((0U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
            if ((1U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
                this->__PVT__mult_in1 = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_in1;
            }
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_start) {
        if ((0U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
            if ((1U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
                if ((2U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
                    this->__PVT__div_in1 = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_in1;
                }
            }
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_start) {
        if ((0U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
            if ((1U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
                if ((2U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
                    this->__PVT__div_in2 = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_in2;
                }
            }
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_start) {
        if ((0U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
            this->__PVT__add_in1 = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_in1;
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_start) {
        if ((0U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
            this->__PVT__add_in2 = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_in2;
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_start) {
        if ((0U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
            this->__PVT__q_done = this->__PVT__add_start;
        } else {
            if ((1U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
                this->__PVT__q_done = this->__PVT__mult_start;
            } else {
                if ((2U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
                    this->__PVT__q_done = this->__PVT__div_start;
                }
            }
        }
    }
    this->__PVT__PMULT__DOT__xin2 = (0xffffU & ((0x8000U 
                                                 & (IData)(this->__PVT__mult_in2))
                                                 ? 
                                                (- (IData)(this->__PVT__mult_in2))
                                                 : (IData)(this->__PVT__mult_in2)));
    this->__PVT__mult_inf = (1U & ((((IData)(this->__PVT__mult_in1) 
                                     >> 0xfU) & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x7fffU 
                                                             & (IData)(this->__PVT__mult_in1)))))) 
                                   | (((IData)(this->__PVT__mult_in2) 
                                       >> 0xfU) & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x7fffU 
                                                               & (IData)(this->__PVT__mult_in2))))))));
    this->__PVT__PMULT__DOT__mult_s = (1U & (((IData)(this->__PVT__mult_in1) 
                                              ^ (IData)(this->__PVT__mult_in2)) 
                                             >> 0xfU));
    this->__PVT__PMULT__DOT__xin1 = (0xffffU & ((0x8000U 
                                                 & (IData)(this->__PVT__mult_in1))
                                                 ? 
                                                (- (IData)(this->__PVT__mult_in1))
                                                 : (IData)(this->__PVT__mult_in1)));
    this->__PVT__PDIV__DOT__xin1 = (0xffffU & ((0x8000U 
                                                & (IData)(this->__PVT__div_in1))
                                                ? (- (IData)(this->__PVT__div_in1))
                                                : (IData)(this->__PVT__div_in1)));
    this->__PVT__div_inf = (1U & ((((IData)(this->__PVT__div_in1) 
                                    >> 0xfU) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffU 
                                                            & (IData)(this->__PVT__div_in1)))))) 
                                  | (~ (((IData)(this->__PVT__div_in2) 
                                         >> 0xfU) | 
                                        (0U != (0x7fffU 
                                                & (IData)(this->__PVT__div_in2)))))));
    this->__PVT__PDIV__DOT__div_s = (1U & (((IData)(this->__PVT__div_in1) 
                                            ^ (IData)(this->__PVT__div_in2)) 
                                           >> 0xfU));
    this->__PVT__PDIV__DOT__xin2 = (0xffffU & ((0x8000U 
                                                & (IData)(this->__PVT__div_in2))
                                                ? (- (IData)(this->__PVT__div_in2))
                                                : (IData)(this->__PVT__div_in2)));
    this->__PVT__PADD__DOT__xin1 = (0xffffU & ((0x8000U 
                                                & (IData)(this->__PVT__add_in1))
                                                ? (- (IData)(this->__PVT__add_in1))
                                                : (IData)(this->__PVT__add_in1)));
    this->__PVT__add_inf = (1U & ((((IData)(this->__PVT__add_in1) 
                                    >> 0xfU) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffU 
                                                            & (IData)(this->__PVT__add_in1)))))) 
                                  | (((IData)(this->__PVT__add_in2) 
                                      >> 0xfU) & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x7fffU 
                                                              & (IData)(this->__PVT__add_in2))))))));
    this->__PVT__PADD__DOT__xin2 = (0xffffU & ((0x8000U 
                                                & (IData)(this->__PVT__add_in2))
                                                ? (- (IData)(this->__PVT__add_in2))
                                                : (IData)(this->__PVT__add_in2)));
    this->__PVT__PADD__DOT__in1_gt_in2 = ((0x7fffU 
                                           & (IData)(this->__PVT__PADD__DOT__xin1)) 
                                          >= (0x7fffU 
                                              & (IData)(this->__PVT__PADD__DOT__xin2)));
    this->__PVT__PADD__DOT__ls = (1U & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                         ? ((IData)(this->__PVT__add_in1) 
                                            >> 0xfU)
                                         : ((IData)(this->__PVT__add_in2) 
                                            >> 0xfU)));
}

void Vibex_simple_system_posit_unit::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__6(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vibex_simple_system_posit_unit::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__6\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__PMULT__DOT__mult_m = (0x3fffffffU 
                                       & ((((IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fffU 
                                                      & (IData)(this->__PVT__mult_in1)))) 
                                            << 0xeU) 
                                           | (0x3fffU 
                                              & __PVT__PMULT__DOT__uut_de1->__PVT__ls__DOT__tmp
                                              [3U])) 
                                          * (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fffU 
                                                        & (IData)(this->__PVT__mult_in2)))) 
                                              << 0xeU) 
                                             | (0x3fffU 
                                                & __PVT__PMULT__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                [3U]))));
    this->__PVT__PDIV__DOT__m1 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__div_in1)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PDIV__DOT__uut_de1->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PDIV__DOT__m2 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__div_in2)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PADD__DOT__m1 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__add_in1)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PADD__DOT__uut_de1->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PADD__DOT__m2 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__add_in2)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PADD__DOT__uut_de2->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PADD__DOT__le = (3U & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                         ? (__PVT__PADD__DOT__uut_de1->__PVT__ls__DOT__tmp
                                            [3U] >> 0xeU)
                                         : (__PVT__PADD__DOT__uut_de2->__PVT__ls__DOT__tmp
                                            [3U] >> 0xeU)));
    this->__PVT__PADD__DOT__sr = ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                   ? (IData)(__PVT__PADD__DOT__uut_de2->regime)
                                   : (IData)(__PVT__PADD__DOT__uut_de1->regime));
    this->__PVT__PADD__DOT__lr = ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                   ? (IData)(__PVT__PADD__DOT__uut_de1->regime)
                                   : (IData)(__PVT__PADD__DOT__uut_de2->regime));
    this->__PVT__PMULT__DOT__mult_mN = (0x3fffffffU 
                                        & ((0x20000000U 
                                            & this->__PVT__PMULT__DOT__mult_m)
                                            ? this->__PVT__PMULT__DOT__mult_m
                                            : (this->__PVT__PMULT__DOT__mult_m 
                                               << 1U)));
    this->__PVT__PMULT__DOT__mult_e = (0xffU & ((((0xfcU 
                                                   & (((0x4000U 
                                                        & (IData)(this->__PVT__PMULT__DOT__xin1))
                                                        ? (IData)(__PVT__PMULT__DOT__uut_de1->regime)
                                                        : 
                                                       (- (IData)(__PVT__PMULT__DOT__uut_de1->regime))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (__PVT__PMULT__DOT__uut_de1->__PVT__ls__DOT__tmp
                                                        [3U] 
                                                        >> 0xeU))) 
                                                 + 
                                                 ((0xfcU 
                                                   & (((0x4000U 
                                                        & (IData)(this->__PVT__PMULT__DOT__xin2))
                                                        ? (IData)(__PVT__PMULT__DOT__uut_de2->regime)
                                                        : 
                                                       (- (IData)(__PVT__PMULT__DOT__uut_de2->regime))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (__PVT__PMULT__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                        [3U] 
                                                        >> 0xeU)))) 
                                                + (1U 
                                                   & (this->__PVT__PMULT__DOT__mult_m 
                                                      >> 0x1dU))));
    this->__Vtableidx2 = (0xfeU & ((IData)(this->__PVT__PDIV__DOT__m2) 
                                   >> 6U));
    this->__PVT__PDIV__DOT__m2_inv0_tmp = this->__Vtable2___PVT__PDIV__DOT__m2_inv0_tmp
        [this->__Vtableidx2];
    this->__PVT__PADD__DOT__lm = ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                   ? (IData)(this->__PVT__PADD__DOT__m1)
                                   : (IData)(this->__PVT__PADD__DOT__m2));
    this->__PVT__PADD__DOT__lr_N = (0x1fU & ((1U & 
                                              ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                ? ((IData)(this->__PVT__PADD__DOT__xin1) 
                                                   >> 0xeU)
                                                : ((IData)(this->__PVT__PADD__DOT__xin2) 
                                                   >> 0xeU)))
                                              ? (IData)(this->__PVT__PADD__DOT__lr)
                                              : (- (IData)(this->__PVT__PADD__DOT__lr))));
    this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN 
        = (0x7fU & ((0x80U & (IData)(this->__PVT__PMULT__DOT__mult_e))
                     ? ((IData)(1U) + (~ (IData)(this->__PVT__PMULT__DOT__mult_e)))
                     : (IData)(this->__PVT__PMULT__DOT__mult_e)));
    this->__PVT__PDIV__DOT__m2_inv[0U] = (0x1fe00000U 
                                          & ((IData)(this->__PVT__PDIV__DOT__m2_inv0_tmp) 
                                             << 0x14U));
    this->__PVT__PADD__DOT__diff = (0xffU & ((((IData)(this->__PVT__PADD__DOT__lr_N) 
                                               << 2U) 
                                              | (IData)(this->__PVT__PADD__DOT__le)) 
                                             - ((0x7cU 
                                                 & (((1U 
                                                      & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                          ? 
                                                         ((IData)(this->__PVT__PADD__DOT__xin2) 
                                                          >> 0xeU)
                                                          : 
                                                         ((IData)(this->__PVT__PADD__DOT__xin1) 
                                                          >> 0xeU)))
                                                      ? (IData)(this->__PVT__PADD__DOT__sr)
                                                      : 
                                                     (- (IData)(this->__PVT__PADD__DOT__sr))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                       ? 
                                                      (__PVT__PADD__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                       [3U] 
                                                       >> 0xeU)
                                                       : 
                                                      (__PVT__PADD__DOT__uut_de1->__PVT__ls__DOT__tmp
                                                       [3U] 
                                                       >> 0xeU))))));
    this->__PVT__PMULT__DOT__r_o = (0x1fU & ((1U & 
                                              ((~ ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                   >> 7U)) 
                                               | (0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN)))))
                                              ? ((IData)(1U) 
                                                 + 
                                                 (0x1fU 
                                                  & ((IData)(this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN) 
                                                     >> 2U)))
                                              : (0x1fU 
                                                 & ((IData)(this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN) 
                                                    >> 2U))));
    this->__PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2[0U] 
        = (0x3fffffffU & ((0x7f80U & (this->__PVT__PDIV__DOT__m2_inv
                                      [0U] >> 0xeU)) 
                          * (IData)(this->__PVT__PDIV__DOT__m2)));
    this->__PVT__PDIV__DOT__div_m = (0x3fffffffU & 
                                     ((0U != (0x3fffU 
                                              & __PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                              [3U]))
                                       ? ((IData)(this->__PVT__PDIV__DOT__m1) 
                                          * (0x7fffU 
                                             & (this->__PVT__PDIV__DOT__m2_inv
                                                [1U] 
                                                >> 0xeU)))
                                       : ((IData)(this->__PVT__PDIV__DOT__m1) 
                                          << 0xeU)));
    this->__PVT__PADD__DOT__exp_diff = ((0U != (7U 
                                                & ((IData)(this->__PVT__PADD__DOT__diff) 
                                                   >> 4U)))
                                         ? 0xfU : (0xfU 
                                                   & (IData)(this->__PVT__PADD__DOT__diff)));
    this->PMULT__DOT____Vcellinp__dsr2__b = ((0x10U 
                                              & (IData)(this->__PVT__PMULT__DOT__r_o))
                                              ? 0xfU
                                              : (IData)(this->__PVT__PMULT__DOT__r_o));
    this->__PVT__PDIV__DOT__genblk4__DOT__two_m2_inv_X_m2[0U] 
        = (0xffffU & ((IData)(0x4000U) - ((0x3ffeU 
                                           & (this->__PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2
                                              [0U] 
                                              >> 0x10U)) 
                                          | (0U != 
                                             (0x1ffffU 
                                              & this->__PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2
                                              [0U])))));
    this->__PVT__PDIV__DOT__div_mN = (0x3fffffffU & 
                                      ((0x20000000U 
                                        & this->__PVT__PDIV__DOT__div_m)
                                        ? this->__PVT__PDIV__DOT__div_m
                                        : (this->__PVT__PDIV__DOT__div_m 
                                           << 1U)));
    this->__PVT__PDIV__DOT__div_e = (0xffU & ((((0xfcU 
                                                 & (((0x4000U 
                                                      & (IData)(this->__PVT__PDIV__DOT__xin1))
                                                      ? (IData)(__PVT__PDIV__DOT__uut_de1->regime)
                                                      : 
                                                     (- (IData)(__PVT__PDIV__DOT__uut_de1->regime))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (__PVT__PDIV__DOT__uut_de1->__PVT__ls__DOT__tmp
                                                      [3U] 
                                                      >> 0xeU))) 
                                               - ((0xfcU 
                                                   & (((0x4000U 
                                                        & (IData)(this->__PVT__PDIV__DOT__xin2))
                                                        ? (IData)(__PVT__PDIV__DOT__uut_de2->regime)
                                                        : 
                                                       (- (IData)(__PVT__PDIV__DOT__uut_de2->regime))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (__PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                        [3U] 
                                                        >> 0xeU)))) 
                                              - ((1U 
                                                  & ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffU 
                                                                  & __PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                                  [3U])))) 
                                                     | (this->__PVT__PDIV__DOT__div_m 
                                                        >> 0x1dU)))
                                                  ? 0U
                                                  : 1U)));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[0U] = (0xffffU 
                                                  & ((1U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (0x7fffffffU 
                                                      & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                          ? (IData)(this->__PVT__PADD__DOT__m2)
                                                          : (IData)(this->__PVT__PADD__DOT__m1)))
                                                      : 
                                                     (((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                        ? (IData)(this->__PVT__PADD__DOT__m2)
                                                        : (IData)(this->__PVT__PADD__DOT__m1)) 
                                                      << 1U)));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[0U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((1U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      ((VL_ULL(0x7ffffffffffc0000) 
                                                        & ((QData)((IData)(
                                                                           ((0xffff0000U 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                >> 7U))))) 
                                                                                << 0x10U)) 
                                                                            | ((0x8000U 
                                                                                & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 8U)) 
                                                                               | ((0x6000U 
                                                                                & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 0xdU)) 
                                                                                | (0x1fffU 
                                                                                & (this->__PVT__PMULT__DOT__mult_mN 
                                                                                >> 0x10U))))))) 
                                                           << 0x12U)) 
                                                       | ((QData)((IData)(
                                                                          ((0x60000U 
                                                                            & (this->__PVT__PMULT__DOT__mult_mN 
                                                                               << 3U)) 
                                                                           | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PMULT__DOT__mult_mN))) 
                                                                              << 0x10U)))) 
                                                          >> 1U))
                                                       : 
                                                      (((QData)((IData)(
                                                                        ((0xffff0000U 
                                                                          & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                >> 7U))))) 
                                                                             << 0x10U)) 
                                                                         | ((0x8000U 
                                                                             & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 8U)) 
                                                                            | ((0x6000U 
                                                                                & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 0xdU)) 
                                                                               | (0x1fffU 
                                                                                & (this->__PVT__PMULT__DOT__mult_mN 
                                                                                >> 0x10U))))))) 
                                                        << 0x13U) 
                                                       | (QData)((IData)(
                                                                         ((0x60000U 
                                                                           & (this->__PVT__PMULT__DOT__mult_mN 
                                                                              << 3U)) 
                                                                          | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PMULT__DOT__mult_mN))) 
                                                                             << 0x10U)))))));
    this->__PVT__PDIV__DOT__m2_inv[1U] = (0x3fffffffU 
                                          & ((0x7f80U 
                                              & (this->__PVT__PDIV__DOT__m2_inv
                                                 [0U] 
                                                 >> 0xeU)) 
                                             * (0x7ffeU 
                                                & (this->__PVT__PDIV__DOT__genblk4__DOT__two_m2_inv_X_m2
                                                   [0U] 
                                                   << 1U))));
    this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN 
        = (0x7fU & ((0x80U & (IData)(this->__PVT__PDIV__DOT__div_e))
                     ? ((IData)(1U) + (~ (IData)(this->__PVT__PDIV__DOT__div_e)))
                     : (IData)(this->__PVT__PDIV__DOT__div_e)));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[1U] = (0xffffU 
                                                  & ((2U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                      [0U] 
                                                      >> 2U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                     [0U]));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[2U] = (0xffffU 
                                                  & ((4U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                      [1U] 
                                                      >> 4U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                     [1U]));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[3U] = (0xffffU 
                                                  & ((8U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                      [2U] 
                                                      >> 8U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                     [2U]));
    this->__PVT__PADD__DOT__add_m = (0x1ffffU & ((1U 
                                                  & (((IData)(this->__PVT__add_in1) 
                                                      >> 0xfU) 
                                                     ^ ~ 
                                                     ((IData)(this->__PVT__add_in2) 
                                                      >> 0xfU)))
                                                  ? 
                                                 (((IData)(this->__PVT__PADD__DOT__lm) 
                                                   << 1U) 
                                                  + 
                                                  this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                  [3U])
                                                  : 
                                                 (((IData)(this->__PVT__PADD__DOT__lm) 
                                                   << 1U) 
                                                  - 
                                                  this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                  [3U])));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[1U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((2U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [0U] 
                                                       >> 2U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [0U]));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[2U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((4U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [1U] 
                                                       >> 4U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [1U]));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[3U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((8U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [2U] 
                                                       >> 8U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [2U]));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[4U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((0x10U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [3U] 
                                                       >> 0x10U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [3U]));
    this->__PVT__PMULT__DOT__tmp1_o_rnd = (0xffffU 
                                           & ((0xcU 
                                               > (IData)(this->__PVT__PMULT__DOT__r_o))
                                               ? ((IData)(
                                                          (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                           [4U] 
                                                           >> 0x13U)) 
                                                  + 
                                                  (1U 
                                                   & (((IData)(
                                                               (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                [4U] 
                                                                >> 0x13U)) 
                                                       & ((IData)(
                                                                  (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                   [4U] 
                                                                   >> 0x12U)) 
                                                          | (0U 
                                                             != 
                                                             (0x3ffffU 
                                                              & (IData)(
                                                                        this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                        [4U]))))) 
                                                      | (((IData)(
                                                                  (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                   [4U] 
                                                                   >> 0x14U)) 
                                                          & (IData)(
                                                                    (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                     [4U] 
                                                                     >> 0x13U))) 
                                                         & (~ 
                                                            ((IData)(
                                                                     (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                      [4U] 
                                                                      >> 0x12U)) 
                                                             | (0U 
                                                                != 
                                                                (0x3ffffU 
                                                                 & (IData)(
                                                                           this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                           [4U])))))))))
                                               : (IData)(
                                                         (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                          [4U] 
                                                          >> 0x13U))));
    this->__PVT__PDIV__DOT__r_o = (0x1fU & ((1U & (
                                                   (~ 
                                                    ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                     >> 7U)) 
                                                   | (0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN)))))
                                             ? ((IData)(1U) 
                                                + (0x1fU 
                                                   & ((IData)(this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN) 
                                                      >> 2U)))
                                             : (0x1fU 
                                                & ((IData)(this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN) 
                                                   >> 2U))));
    this->__PVT__PADD__DOT__LOD_in = ((0x8000U & ((0x7fff8000U 
                                                   & (this->__PVT__PADD__DOT__add_m 
                                                      >> 1U)) 
                                                  | (0xffff8000U 
                                                     & this->__PVT__PADD__DOT__add_m))) 
                                      | (0x7fffU & this->__PVT__PADD__DOT__add_m));
    this->PDIV__DOT____Vcellinp__dsr2__b = ((0x10U 
                                             & (IData)(this->__PVT__PDIV__DOT__r_o))
                                             ? 0xfU
                                             : (IData)(this->__PVT__PDIV__DOT__r_o));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__PVT__PADD__DOT__LOD_in))) 
           | (0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                           >> 2U))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                  >> 6U))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                  >> 0xaU))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                               >> 0xeU))));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[0U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((1U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     ((VL_ULL(0x7ffffffffffc0000) 
                                                       & ((QData)((IData)(
                                                                          ((0xffff0000U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                >> 7U))))) 
                                                                               << 0x10U)) 
                                                                           | ((0x8000U 
                                                                               & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                << 8U)) 
                                                                              | ((0x6000U 
                                                                                & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                << 0xdU)) 
                                                                                | (0x1fffU 
                                                                                & (this->__PVT__PDIV__DOT__div_mN 
                                                                                >> 0x10U))))))) 
                                                          << 0x12U)) 
                                                      | ((QData)((IData)(
                                                                         ((0x60000U 
                                                                           & (this->__PVT__PDIV__DOT__div_mN 
                                                                              << 3U)) 
                                                                          | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PDIV__DOT__div_mN))) 
                                                                             << 0x10U)))) 
                                                         >> 1U))
                                                      : 
                                                     (((QData)((IData)(
                                                                       ((0xffff0000U 
                                                                         & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                >> 7U))))) 
                                                                            << 0x10U)) 
                                                                        | ((0x8000U 
                                                                            & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                               << 8U)) 
                                                                           | ((0x6000U 
                                                                               & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                << 0xdU)) 
                                                                              | (0x1fffU 
                                                                                & (this->__PVT__PDIV__DOT__div_mN 
                                                                                >> 0x10U))))))) 
                                                       << 0x13U) 
                                                      | (QData)((IData)(
                                                                        ((0x60000U 
                                                                          & (this->__PVT__PDIV__DOT__div_mN 
                                                                             << 3U)) 
                                                                         | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PDIV__DOT__div_mN))) 
                                                                            << 0x10U)))))));
    this->__PVT__PADD__DOT__left_shift = (((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                                           | (IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                                           ? ((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                                               ? ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                       >> 0xeU)))
                                                   ? 
                                                  (1U 
                                                   & ((~ 
                                                       ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                        >> 0xfU)) 
                                                      & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                         >> 0xeU)))
                                                   : 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                                 >> 0xcU)))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 0xdU)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 0xcU)))))
                                               : (((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                          >> 0xaU)))
                                                      ? 
                                                     (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 0xbU)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 0xaU)))
                                                      : 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                                    >> 8U)))) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((~ 
                                                             ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                              >> 9U)) 
                                                            & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                               >> 8U)))))))
                                           : ((((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                                | (IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                                               << 3U) 
                                              | ((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                                  ? 
                                                 ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                       >> 6U)))
                                                   ? 
                                                  (1U 
                                                   & ((~ 
                                                       ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                        >> 7U)) 
                                                      & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                         >> 6U)))
                                                   : 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                                 >> 4U)))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 5U)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 4U)))))
                                                  : 
                                                 (((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                          >> 2U)))
                                                      ? 
                                                     (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 3U)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 2U)))
                                                      : 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & (IData)(this->__PVT__PADD__DOT__LOD_in)))) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((~ 
                                                             ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                              >> 1U)) 
                                                            & (IData)(this->__PVT__PADD__DOT__LOD_in)))))))));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[1U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((2U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [0U] 
                                                      >> 2U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [0U]));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[2U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((4U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [1U] 
                                                      >> 4U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [1U]));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[3U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((8U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [2U] 
                                                      >> 8U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [2U]));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[4U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((0x10U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [3U] 
                                                      >> 0x10U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [3U]));
    this->__PVT__PDIV__DOT__tmp1_o_rnd = (0xffffU & 
                                          ((0xcU > (IData)(this->__PVT__PDIV__DOT__r_o))
                                            ? ((IData)(
                                                       (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                        [4U] 
                                                        >> 0x13U)) 
                                               + (1U 
                                                  & (((IData)(
                                                              (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                               [4U] 
                                                               >> 0x13U)) 
                                                      & ((IData)(
                                                                 (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                  [4U] 
                                                                  >> 0x12U)) 
                                                         | (0U 
                                                            != 
                                                            (0x3ffffU 
                                                             & (IData)(
                                                                       this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                       [4U]))))) 
                                                     | (((IData)(
                                                                 (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                  [4U] 
                                                                  >> 0x14U)) 
                                                         & (IData)(
                                                                   (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                    [4U] 
                                                                    >> 0x13U))) 
                                                        & (~ 
                                                           ((IData)(
                                                                    (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                     [4U] 
                                                                     >> 0x12U)) 
                                                            | (0U 
                                                               != 
                                                               (0x3ffffU 
                                                                & (IData)(
                                                                          this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                          [4U])))))))))
                                            : (IData)(
                                                      (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                       [4U] 
                                                       >> 0x13U))));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[0U] = (0xffffU 
                                                  & ((1U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (0xfffffffeU 
                                                      & this->__PVT__PADD__DOT__add_m)
                                                      : 
                                                     (this->__PVT__PADD__DOT__add_m 
                                                      >> 1U)));
    this->__PVT__PADD__DOT__le_o = (0xffU & (((((IData)(this->__PVT__PADD__DOT__lr_N) 
                                                << 2U) 
                                               | (IData)(this->__PVT__PADD__DOT__le)) 
                                              - (IData)(this->__PVT__PADD__DOT__left_shift)) 
                                             + (1U 
                                                & (this->__PVT__PADD__DOT__add_m 
                                                   >> 0x10U))));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[1U] = (0xffffU 
                                                  & ((2U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                      [0U] 
                                                      << 2U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                     [0U]));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[2U] = (0xffffU 
                                                  & ((4U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                      [1U] 
                                                      << 4U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                     [1U]));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[3U] = (0xffffU 
                                                  & ((8U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                      [2U] 
                                                      << 8U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                     [2U]));
    this->__PVT__PADD__DOT__DSR_left_out = ((0x8000U 
                                             & this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                             [3U]) ? 
                                            this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                            [3U] : 
                                            (0xfffeU 
                                             & (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                [3U] 
                                                << 1U)));
    this->__PVT__PADD__DOT__uut_reg_ro__DOT__exp_oN 
        = (0x7fU & (IData)(this->__PVT__PADD__DOT__le_o));
    this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3 
        = (0x1fU & ((IData)(1U) + (0x1fU & ((IData)(this->__PVT__PADD__DOT__uut_reg_ro__DOT__exp_oN) 
                                            >> 2U))));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[0U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((1U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     ((VL_ULL(0x7ffffffc00000000) 
                                                       & ((QData)((IData)(
                                                                          (0xffffU 
                                                                           & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                                >> 6U)))))))) 
                                                          << 0x22U)) 
                                                      | ((VL_ULL(0x7ffffffe00000000) 
                                                          & ((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                                >> 6U)))) 
                                                             << 0x21U)) 
                                                         | ((VL_ULL(0x7fffffff80000000) 
                                                             & ((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(this->__PVT__PADD__DOT__le_o)))) 
                                                                << 0x1fU)) 
                                                            | ((QData)((IData)(
                                                                               (0xfffe0000U 
                                                                                & ((IData)(this->__PVT__PADD__DOT__DSR_left_out) 
                                                                                << 0x11U)))) 
                                                               >> 1U))))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                                >> 6U)))))))) 
                                                       << 0x23U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                              >> 6U)))) 
                                                          << 0x22U) 
                                                         | (((QData)((IData)(
                                                                             (3U 
                                                                              & (IData)(this->__PVT__PADD__DOT__le_o)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              (0xfffe0000U 
                                                                               & ((IData)(this->__PVT__PADD__DOT__DSR_left_out) 
                                                                                << 0x11U)))))))));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[1U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((2U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                      [0U] 
                                                      >> 2U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                     [0U]));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[2U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((4U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                      [1U] 
                                                      >> 4U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                     [1U]));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[3U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((8U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                      [2U] 
                                                      >> 8U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                     [2U]));
    this->__PVT__PADD__DOT__tmp1_o_rnd = (0xffffU & 
                                          ((0xcU > 
                                            (0xfU & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3)))
                                            ? ((IData)(
                                                       (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                        [3U] 
                                                        >> 0x13U)) 
                                               + (1U 
                                                  & (((IData)(
                                                              (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                               [3U] 
                                                               >> 0x13U)) 
                                                      & ((IData)(
                                                                 (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                  [3U] 
                                                                  >> 0x12U)) 
                                                         | (0U 
                                                            != 
                                                            (0x3ffffU 
                                                             & (IData)(
                                                                       this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                       [3U]))))) 
                                                     | (((IData)(
                                                                 (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                  [3U] 
                                                                  >> 0x14U)) 
                                                         & (IData)(
                                                                   (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                    [3U] 
                                                                    >> 0x13U))) 
                                                        & (~ 
                                                           ((IData)(
                                                                    (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                     [3U] 
                                                                     >> 0x12U)) 
                                                            | (0U 
                                                               != 
                                                               (0x3ffffU 
                                                                & (IData)(
                                                                          this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                          [3U])))))))))
                                            : (IData)(
                                                      (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                       [3U] 
                                                       >> 0x13U))));
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_start) {
        if ((0U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
            this->__PVT__q_out = ((1U & (((IData)(this->__PVT__add_inf) 
                                          | ((~ (((IData)(this->__PVT__add_in1) 
                                                  >> 0xfU) 
                                                 | (0U 
                                                    != 
                                                    (0x7fffU 
                                                     & (IData)(this->__PVT__add_in1))))) 
                                             & (~ (
                                                   ((IData)(this->__PVT__add_in2) 
                                                    >> 0xfU) 
                                                   | (0U 
                                                      != 
                                                      (0x7fffU 
                                                       & (IData)(this->__PVT__add_in2))))))) 
                                         | (~ ((IData)(this->__PVT__PADD__DOT__DSR_left_out) 
                                               >> 0xfU))))
                                   ? ((IData)(this->__PVT__add_inf) 
                                      << 0xfU) : (((IData)(this->__PVT__PADD__DOT__ls) 
                                                   << 0xfU) 
                                                  | (0x7fffU 
                                                     & (((IData)(this->__PVT__PADD__DOT__ls)
                                                          ? 
                                                         (- (IData)(this->__PVT__PADD__DOT__tmp1_o_rnd))
                                                          : (IData)(this->__PVT__PADD__DOT__tmp1_o_rnd)) 
                                                        >> 1U))));
        } else {
            if ((1U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
                this->__PVT__q_out = ((1U & (((IData)(this->__PVT__mult_inf) 
                                              | ((~ 
                                                  (((IData)(this->__PVT__mult_in1) 
                                                    >> 0xfU) 
                                                   | (0U 
                                                      != 
                                                      (0x7fffU 
                                                       & (IData)(this->__PVT__mult_in1))))) 
                                                 & (~ 
                                                    (((IData)(this->__PVT__mult_in2) 
                                                      >> 0xfU) 
                                                     | (0U 
                                                        != 
                                                        (0x7fffU 
                                                         & (IData)(this->__PVT__mult_in2))))))) 
                                             | (~ (this->__PVT__PMULT__DOT__mult_mN 
                                                   >> 0x1dU))))
                                       ? ((IData)(this->__PVT__mult_inf) 
                                          << 0xfU) : 
                                      (((IData)(this->__PVT__PMULT__DOT__mult_s) 
                                        << 0xfU) | 
                                       (0x7fffU & (
                                                   ((IData)(this->__PVT__PMULT__DOT__mult_s)
                                                     ? 
                                                    (- (IData)(this->__PVT__PMULT__DOT__tmp1_o_rnd))
                                                     : (IData)(this->__PVT__PMULT__DOT__tmp1_o_rnd)) 
                                                   >> 1U))));
            } else {
                if ((2U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
                    this->__PVT__q_out = ((1U & (((IData)(this->__PVT__div_inf) 
                                                  | ((~ 
                                                      (((IData)(this->__PVT__div_in1) 
                                                        >> 0xfU) 
                                                       | (0U 
                                                          != 
                                                          (0x7fffU 
                                                           & (IData)(this->__PVT__div_in1))))) 
                                                     | (((IData)(this->__PVT__div_in2) 
                                                         >> 0xfU) 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x7fffU 
                                                                       & (IData)(this->__PVT__div_in2)))))))) 
                                                 | (~ 
                                                    (this->__PVT__PDIV__DOT__div_mN 
                                                     >> 0x1dU))))
                                           ? ((IData)(this->__PVT__div_inf) 
                                              << 0xfU)
                                           : (((IData)(this->__PVT__PDIV__DOT__div_s) 
                                               << 0xfU) 
                                              | (0x7fffU 
                                                 & (((IData)(this->__PVT__PDIV__DOT__div_s)
                                                      ? 
                                                     (- (IData)(this->__PVT__PDIV__DOT__tmp1_o_rnd))
                                                      : (IData)(this->__PVT__PDIV__DOT__tmp1_o_rnd)) 
                                                    >> 1U))));
                }
            }
        }
    }
}

VL_INLINE_OPT void Vibex_simple_system_posit_unit::_combo__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__18(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vibex_simple_system_posit_unit::_combo__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__18\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__PMULT__DOT__mult_m = (0x3fffffffU 
                                       & ((((IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fffU 
                                                      & (IData)(this->__PVT__mult_in1)))) 
                                            << 0xeU) 
                                           | (0x3fffU 
                                              & __PVT__PMULT__DOT__uut_de1->__PVT__ls__DOT__tmp
                                              [3U])) 
                                          * (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fffU 
                                                        & (IData)(this->__PVT__mult_in2)))) 
                                              << 0xeU) 
                                             | (0x3fffU 
                                                & __PVT__PMULT__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                [3U]))));
    this->__PVT__PDIV__DOT__m1 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__div_in1)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PDIV__DOT__uut_de1->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PDIV__DOT__m2 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__div_in2)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PADD__DOT__m1 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__add_in1)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PADD__DOT__uut_de1->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PADD__DOT__m2 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__add_in2)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PADD__DOT__uut_de2->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PADD__DOT__le = (3U & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                         ? (__PVT__PADD__DOT__uut_de1->__PVT__ls__DOT__tmp
                                            [3U] >> 0xeU)
                                         : (__PVT__PADD__DOT__uut_de2->__PVT__ls__DOT__tmp
                                            [3U] >> 0xeU)));
    this->__PVT__PMULT__DOT__mult_mN = (0x3fffffffU 
                                        & ((0x20000000U 
                                            & this->__PVT__PMULT__DOT__mult_m)
                                            ? this->__PVT__PMULT__DOT__mult_m
                                            : (this->__PVT__PMULT__DOT__mult_m 
                                               << 1U)));
    this->__PVT__PMULT__DOT__mult_e = (0xffU & ((((0xfcU 
                                                   & (((0x4000U 
                                                        & (IData)(this->__PVT__PMULT__DOT__xin1))
                                                        ? (IData)(__PVT__PMULT__DOT__uut_de1->regime)
                                                        : 
                                                       (- (IData)(__PVT__PMULT__DOT__uut_de1->regime))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (__PVT__PMULT__DOT__uut_de1->__PVT__ls__DOT__tmp
                                                        [3U] 
                                                        >> 0xeU))) 
                                                 + 
                                                 ((0xfcU 
                                                   & (((0x4000U 
                                                        & (IData)(this->__PVT__PMULT__DOT__xin2))
                                                        ? (IData)(__PVT__PMULT__DOT__uut_de2->regime)
                                                        : 
                                                       (- (IData)(__PVT__PMULT__DOT__uut_de2->regime))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (__PVT__PMULT__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                        [3U] 
                                                        >> 0xeU)))) 
                                                + (1U 
                                                   & (this->__PVT__PMULT__DOT__mult_m 
                                                      >> 0x1dU))));
    this->__Vtableidx2 = (0xfeU & ((IData)(this->__PVT__PDIV__DOT__m2) 
                                   >> 6U));
    this->__PVT__PDIV__DOT__m2_inv0_tmp = this->__Vtable2___PVT__PDIV__DOT__m2_inv0_tmp
        [this->__Vtableidx2];
    this->__PVT__PADD__DOT__lm = ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                   ? (IData)(this->__PVT__PADD__DOT__m1)
                                   : (IData)(this->__PVT__PADD__DOT__m2));
    this->__PVT__PADD__DOT__diff = (0xffU & ((((IData)(this->__PVT__PADD__DOT__lr_N) 
                                               << 2U) 
                                              | (IData)(this->__PVT__PADD__DOT__le)) 
                                             - ((0x7cU 
                                                 & (((1U 
                                                      & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                          ? 
                                                         ((IData)(this->__PVT__PADD__DOT__xin2) 
                                                          >> 0xeU)
                                                          : 
                                                         ((IData)(this->__PVT__PADD__DOT__xin1) 
                                                          >> 0xeU)))
                                                      ? (IData)(this->__PVT__PADD__DOT__sr)
                                                      : 
                                                     (- (IData)(this->__PVT__PADD__DOT__sr))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                       ? 
                                                      (__PVT__PADD__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                       [3U] 
                                                       >> 0xeU)
                                                       : 
                                                      (__PVT__PADD__DOT__uut_de1->__PVT__ls__DOT__tmp
                                                       [3U] 
                                                       >> 0xeU))))));
    this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN 
        = (0x7fU & ((0x80U & (IData)(this->__PVT__PMULT__DOT__mult_e))
                     ? ((IData)(1U) + (~ (IData)(this->__PVT__PMULT__DOT__mult_e)))
                     : (IData)(this->__PVT__PMULT__DOT__mult_e)));
    this->__PVT__PDIV__DOT__m2_inv[0U] = (0x1fe00000U 
                                          & ((IData)(this->__PVT__PDIV__DOT__m2_inv0_tmp) 
                                             << 0x14U));
    this->__PVT__PADD__DOT__exp_diff = ((0U != (7U 
                                                & ((IData)(this->__PVT__PADD__DOT__diff) 
                                                   >> 4U)))
                                         ? 0xfU : (0xfU 
                                                   & (IData)(this->__PVT__PADD__DOT__diff)));
    this->__PVT__PMULT__DOT__r_o = (0x1fU & ((1U & 
                                              ((~ ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                   >> 7U)) 
                                               | (0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN)))))
                                              ? ((IData)(1U) 
                                                 + 
                                                 (0x1fU 
                                                  & ((IData)(this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN) 
                                                     >> 2U)))
                                              : (0x1fU 
                                                 & ((IData)(this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN) 
                                                    >> 2U))));
    this->__PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2[0U] 
        = (0x3fffffffU & ((0x7f80U & (this->__PVT__PDIV__DOT__m2_inv
                                      [0U] >> 0xeU)) 
                          * (IData)(this->__PVT__PDIV__DOT__m2)));
    this->__PVT__PDIV__DOT__div_m = (0x3fffffffU & 
                                     ((0U != (0x3fffU 
                                              & __PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                              [3U]))
                                       ? ((IData)(this->__PVT__PDIV__DOT__m1) 
                                          * (0x7fffU 
                                             & (this->__PVT__PDIV__DOT__m2_inv
                                                [1U] 
                                                >> 0xeU)))
                                       : ((IData)(this->__PVT__PDIV__DOT__m1) 
                                          << 0xeU)));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[0U] = (0xffffU 
                                                  & ((1U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (0x7fffffffU 
                                                      & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                          ? (IData)(this->__PVT__PADD__DOT__m2)
                                                          : (IData)(this->__PVT__PADD__DOT__m1)))
                                                      : 
                                                     (((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                        ? (IData)(this->__PVT__PADD__DOT__m2)
                                                        : (IData)(this->__PVT__PADD__DOT__m1)) 
                                                      << 1U)));
    this->PMULT__DOT____Vcellinp__dsr2__b = ((0x10U 
                                              & (IData)(this->__PVT__PMULT__DOT__r_o))
                                              ? 0xfU
                                              : (IData)(this->__PVT__PMULT__DOT__r_o));
    this->__PVT__PDIV__DOT__genblk4__DOT__two_m2_inv_X_m2[0U] 
        = (0xffffU & ((IData)(0x4000U) - ((0x3ffeU 
                                           & (this->__PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2
                                              [0U] 
                                              >> 0x10U)) 
                                          | (0U != 
                                             (0x1ffffU 
                                              & this->__PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2
                                              [0U])))));
    this->__PVT__PDIV__DOT__div_mN = (0x3fffffffU & 
                                      ((0x20000000U 
                                        & this->__PVT__PDIV__DOT__div_m)
                                        ? this->__PVT__PDIV__DOT__div_m
                                        : (this->__PVT__PDIV__DOT__div_m 
                                           << 1U)));
    this->__PVT__PDIV__DOT__div_e = (0xffU & ((((0xfcU 
                                                 & (((0x4000U 
                                                      & (IData)(this->__PVT__PDIV__DOT__xin1))
                                                      ? (IData)(__PVT__PDIV__DOT__uut_de1->regime)
                                                      : 
                                                     (- (IData)(__PVT__PDIV__DOT__uut_de1->regime))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (__PVT__PDIV__DOT__uut_de1->__PVT__ls__DOT__tmp
                                                      [3U] 
                                                      >> 0xeU))) 
                                               - ((0xfcU 
                                                   & (((0x4000U 
                                                        & (IData)(this->__PVT__PDIV__DOT__xin2))
                                                        ? (IData)(__PVT__PDIV__DOT__uut_de2->regime)
                                                        : 
                                                       (- (IData)(__PVT__PDIV__DOT__uut_de2->regime))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (__PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                        [3U] 
                                                        >> 0xeU)))) 
                                              - ((1U 
                                                  & ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffU 
                                                                  & __PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                                  [3U])))) 
                                                     | (this->__PVT__PDIV__DOT__div_m 
                                                        >> 0x1dU)))
                                                  ? 0U
                                                  : 1U)));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[1U] = (0xffffU 
                                                  & ((2U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                      [0U] 
                                                      >> 2U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                     [0U]));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[2U] = (0xffffU 
                                                  & ((4U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                      [1U] 
                                                      >> 4U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                     [1U]));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[3U] = (0xffffU 
                                                  & ((8U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                      [2U] 
                                                      >> 8U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                     [2U]));
    this->__PVT__PADD__DOT__add_m = (0x1ffffU & ((1U 
                                                  & (((IData)(this->__PVT__add_in1) 
                                                      >> 0xfU) 
                                                     ^ ~ 
                                                     ((IData)(this->__PVT__add_in2) 
                                                      >> 0xfU)))
                                                  ? 
                                                 (((IData)(this->__PVT__PADD__DOT__lm) 
                                                   << 1U) 
                                                  + 
                                                  this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                  [3U])
                                                  : 
                                                 (((IData)(this->__PVT__PADD__DOT__lm) 
                                                   << 1U) 
                                                  - 
                                                  this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                  [3U])));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[0U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((1U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      ((VL_ULL(0x7ffffffffffc0000) 
                                                        & ((QData)((IData)(
                                                                           ((0xffff0000U 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                >> 7U))))) 
                                                                                << 0x10U)) 
                                                                            | ((0x8000U 
                                                                                & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 8U)) 
                                                                               | ((0x6000U 
                                                                                & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 0xdU)) 
                                                                                | (0x1fffU 
                                                                                & (this->__PVT__PMULT__DOT__mult_mN 
                                                                                >> 0x10U))))))) 
                                                           << 0x12U)) 
                                                       | ((QData)((IData)(
                                                                          ((0x60000U 
                                                                            & (this->__PVT__PMULT__DOT__mult_mN 
                                                                               << 3U)) 
                                                                           | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PMULT__DOT__mult_mN))) 
                                                                              << 0x10U)))) 
                                                          >> 1U))
                                                       : 
                                                      (((QData)((IData)(
                                                                        ((0xffff0000U 
                                                                          & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                >> 7U))))) 
                                                                             << 0x10U)) 
                                                                         | ((0x8000U 
                                                                             & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 8U)) 
                                                                            | ((0x6000U 
                                                                                & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 0xdU)) 
                                                                               | (0x1fffU 
                                                                                & (this->__PVT__PMULT__DOT__mult_mN 
                                                                                >> 0x10U))))))) 
                                                        << 0x13U) 
                                                       | (QData)((IData)(
                                                                         ((0x60000U 
                                                                           & (this->__PVT__PMULT__DOT__mult_mN 
                                                                              << 3U)) 
                                                                          | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PMULT__DOT__mult_mN))) 
                                                                             << 0x10U)))))));
    this->__PVT__PDIV__DOT__m2_inv[1U] = (0x3fffffffU 
                                          & ((0x7f80U 
                                              & (this->__PVT__PDIV__DOT__m2_inv
                                                 [0U] 
                                                 >> 0xeU)) 
                                             * (0x7ffeU 
                                                & (this->__PVT__PDIV__DOT__genblk4__DOT__two_m2_inv_X_m2
                                                   [0U] 
                                                   << 1U))));
    this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN 
        = (0x7fU & ((0x80U & (IData)(this->__PVT__PDIV__DOT__div_e))
                     ? ((IData)(1U) + (~ (IData)(this->__PVT__PDIV__DOT__div_e)))
                     : (IData)(this->__PVT__PDIV__DOT__div_e)));
    this->__PVT__PADD__DOT__LOD_in = ((0x8000U & ((0x7fff8000U 
                                                   & (this->__PVT__PADD__DOT__add_m 
                                                      >> 1U)) 
                                                  | (0xffff8000U 
                                                     & this->__PVT__PADD__DOT__add_m))) 
                                      | (0x7fffU & this->__PVT__PADD__DOT__add_m));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[1U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((2U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [0U] 
                                                       >> 2U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [0U]));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[2U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((4U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [1U] 
                                                       >> 4U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [1U]));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[3U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((8U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [2U] 
                                                       >> 8U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [2U]));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[4U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((0x10U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [3U] 
                                                       >> 0x10U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [3U]));
    this->__PVT__PMULT__DOT__tmp1_o_rnd = (0xffffU 
                                           & ((0xcU 
                                               > (IData)(this->__PVT__PMULT__DOT__r_o))
                                               ? ((IData)(
                                                          (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                           [4U] 
                                                           >> 0x13U)) 
                                                  + 
                                                  (1U 
                                                   & (((IData)(
                                                               (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                [4U] 
                                                                >> 0x13U)) 
                                                       & ((IData)(
                                                                  (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                   [4U] 
                                                                   >> 0x12U)) 
                                                          | (0U 
                                                             != 
                                                             (0x3ffffU 
                                                              & (IData)(
                                                                        this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                        [4U]))))) 
                                                      | (((IData)(
                                                                  (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                   [4U] 
                                                                   >> 0x14U)) 
                                                          & (IData)(
                                                                    (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                     [4U] 
                                                                     >> 0x13U))) 
                                                         & (~ 
                                                            ((IData)(
                                                                     (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                      [4U] 
                                                                      >> 0x12U)) 
                                                             | (0U 
                                                                != 
                                                                (0x3ffffU 
                                                                 & (IData)(
                                                                           this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                           [4U])))))))))
                                               : (IData)(
                                                         (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                          [4U] 
                                                          >> 0x13U))));
    this->__PVT__PDIV__DOT__r_o = (0x1fU & ((1U & (
                                                   (~ 
                                                    ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                     >> 7U)) 
                                                   | (0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN)))))
                                             ? ((IData)(1U) 
                                                + (0x1fU 
                                                   & ((IData)(this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN) 
                                                      >> 2U)))
                                             : (0x1fU 
                                                & ((IData)(this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN) 
                                                   >> 2U))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__PVT__PADD__DOT__LOD_in))) 
           | (0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                           >> 2U))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                  >> 6U))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                  >> 0xaU))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                               >> 0xeU))));
    this->PDIV__DOT____Vcellinp__dsr2__b = ((0x10U 
                                             & (IData)(this->__PVT__PDIV__DOT__r_o))
                                             ? 0xfU
                                             : (IData)(this->__PVT__PDIV__DOT__r_o));
    this->__PVT__PADD__DOT__left_shift = (((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                                           | (IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                                           ? ((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                                               ? ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                       >> 0xeU)))
                                                   ? 
                                                  (1U 
                                                   & ((~ 
                                                       ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                        >> 0xfU)) 
                                                      & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                         >> 0xeU)))
                                                   : 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                                 >> 0xcU)))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 0xdU)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 0xcU)))))
                                               : (((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                          >> 0xaU)))
                                                      ? 
                                                     (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 0xbU)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 0xaU)))
                                                      : 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                                    >> 8U)))) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((~ 
                                                             ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                              >> 9U)) 
                                                            & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                               >> 8U)))))))
                                           : ((((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                                | (IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                                               << 3U) 
                                              | ((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                                  ? 
                                                 ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                       >> 6U)))
                                                   ? 
                                                  (1U 
                                                   & ((~ 
                                                       ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                        >> 7U)) 
                                                      & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                         >> 6U)))
                                                   : 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                                 >> 4U)))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 5U)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 4U)))))
                                                  : 
                                                 (((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                          >> 2U)))
                                                      ? 
                                                     (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 3U)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 2U)))
                                                      : 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & (IData)(this->__PVT__PADD__DOT__LOD_in)))) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((~ 
                                                             ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                              >> 1U)) 
                                                            & (IData)(this->__PVT__PADD__DOT__LOD_in)))))))));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[0U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((1U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     ((VL_ULL(0x7ffffffffffc0000) 
                                                       & ((QData)((IData)(
                                                                          ((0xffff0000U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                >> 7U))))) 
                                                                               << 0x10U)) 
                                                                           | ((0x8000U 
                                                                               & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                << 8U)) 
                                                                              | ((0x6000U 
                                                                                & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                << 0xdU)) 
                                                                                | (0x1fffU 
                                                                                & (this->__PVT__PDIV__DOT__div_mN 
                                                                                >> 0x10U))))))) 
                                                          << 0x12U)) 
                                                      | ((QData)((IData)(
                                                                         ((0x60000U 
                                                                           & (this->__PVT__PDIV__DOT__div_mN 
                                                                              << 3U)) 
                                                                          | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PDIV__DOT__div_mN))) 
                                                                             << 0x10U)))) 
                                                         >> 1U))
                                                      : 
                                                     (((QData)((IData)(
                                                                       ((0xffff0000U 
                                                                         & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                >> 7U))))) 
                                                                            << 0x10U)) 
                                                                        | ((0x8000U 
                                                                            & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                               << 8U)) 
                                                                           | ((0x6000U 
                                                                               & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                << 0xdU)) 
                                                                              | (0x1fffU 
                                                                                & (this->__PVT__PDIV__DOT__div_mN 
                                                                                >> 0x10U))))))) 
                                                       << 0x13U) 
                                                      | (QData)((IData)(
                                                                        ((0x60000U 
                                                                          & (this->__PVT__PDIV__DOT__div_mN 
                                                                             << 3U)) 
                                                                         | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PDIV__DOT__div_mN))) 
                                                                            << 0x10U)))))));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[0U] = (0xffffU 
                                                  & ((1U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (0xfffffffeU 
                                                      & this->__PVT__PADD__DOT__add_m)
                                                      : 
                                                     (this->__PVT__PADD__DOT__add_m 
                                                      >> 1U)));
    this->__PVT__PADD__DOT__le_o = (0xffU & (((((IData)(this->__PVT__PADD__DOT__lr_N) 
                                                << 2U) 
                                               | (IData)(this->__PVT__PADD__DOT__le)) 
                                              - (IData)(this->__PVT__PADD__DOT__left_shift)) 
                                             + (1U 
                                                & (this->__PVT__PADD__DOT__add_m 
                                                   >> 0x10U))));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[1U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((2U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [0U] 
                                                      >> 2U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [0U]));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[2U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((4U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [1U] 
                                                      >> 4U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [1U]));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[3U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((8U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [2U] 
                                                      >> 8U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [2U]));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[4U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((0x10U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [3U] 
                                                      >> 0x10U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [3U]));
    this->__PVT__PDIV__DOT__tmp1_o_rnd = (0xffffU & 
                                          ((0xcU > (IData)(this->__PVT__PDIV__DOT__r_o))
                                            ? ((IData)(
                                                       (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                        [4U] 
                                                        >> 0x13U)) 
                                               + (1U 
                                                  & (((IData)(
                                                              (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                               [4U] 
                                                               >> 0x13U)) 
                                                      & ((IData)(
                                                                 (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                  [4U] 
                                                                  >> 0x12U)) 
                                                         | (0U 
                                                            != 
                                                            (0x3ffffU 
                                                             & (IData)(
                                                                       this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                       [4U]))))) 
                                                     | (((IData)(
                                                                 (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                  [4U] 
                                                                  >> 0x14U)) 
                                                         & (IData)(
                                                                   (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                    [4U] 
                                                                    >> 0x13U))) 
                                                        & (~ 
                                                           ((IData)(
                                                                    (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                     [4U] 
                                                                     >> 0x12U)) 
                                                            | (0U 
                                                               != 
                                                               (0x3ffffU 
                                                                & (IData)(
                                                                          this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                          [4U])))))))))
                                            : (IData)(
                                                      (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                       [4U] 
                                                       >> 0x13U))));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[1U] = (0xffffU 
                                                  & ((2U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                      [0U] 
                                                      << 2U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                     [0U]));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[2U] = (0xffffU 
                                                  & ((4U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                      [1U] 
                                                      << 4U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                     [1U]));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[3U] = (0xffffU 
                                                  & ((8U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                      [2U] 
                                                      << 8U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                     [2U]));
    this->__PVT__PADD__DOT__DSR_left_out = ((0x8000U 
                                             & this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                             [3U]) ? 
                                            this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                            [3U] : 
                                            (0xfffeU 
                                             & (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                [3U] 
                                                << 1U)));
    this->__PVT__PADD__DOT__uut_reg_ro__DOT__exp_oN 
        = (0x7fU & (IData)(this->__PVT__PADD__DOT__le_o));
    this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3 
        = (0x1fU & ((IData)(1U) + (0x1fU & ((IData)(this->__PVT__PADD__DOT__uut_reg_ro__DOT__exp_oN) 
                                            >> 2U))));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[0U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((1U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     ((VL_ULL(0x7ffffffc00000000) 
                                                       & ((QData)((IData)(
                                                                          (0xffffU 
                                                                           & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                                >> 6U)))))))) 
                                                          << 0x22U)) 
                                                      | ((VL_ULL(0x7ffffffe00000000) 
                                                          & ((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                                >> 6U)))) 
                                                             << 0x21U)) 
                                                         | ((VL_ULL(0x7fffffff80000000) 
                                                             & ((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(this->__PVT__PADD__DOT__le_o)))) 
                                                                << 0x1fU)) 
                                                            | ((QData)((IData)(
                                                                               (0xfffe0000U 
                                                                                & ((IData)(this->__PVT__PADD__DOT__DSR_left_out) 
                                                                                << 0x11U)))) 
                                                               >> 1U))))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                                >> 6U)))))))) 
                                                       << 0x23U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                              >> 6U)))) 
                                                          << 0x22U) 
                                                         | (((QData)((IData)(
                                                                             (3U 
                                                                              & (IData)(this->__PVT__PADD__DOT__le_o)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              (0xfffe0000U 
                                                                               & ((IData)(this->__PVT__PADD__DOT__DSR_left_out) 
                                                                                << 0x11U)))))))));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[1U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((2U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                      [0U] 
                                                      >> 2U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                     [0U]));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[2U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((4U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                      [1U] 
                                                      >> 4U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                     [1U]));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[3U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((8U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                      [2U] 
                                                      >> 8U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                     [2U]));
    this->__PVT__PADD__DOT__tmp1_o_rnd = (0xffffU & 
                                          ((0xcU > 
                                            (0xfU & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3)))
                                            ? ((IData)(
                                                       (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                        [3U] 
                                                        >> 0x13U)) 
                                               + (1U 
                                                  & (((IData)(
                                                              (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                               [3U] 
                                                               >> 0x13U)) 
                                                      & ((IData)(
                                                                 (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                  [3U] 
                                                                  >> 0x12U)) 
                                                         | (0U 
                                                            != 
                                                            (0x3ffffU 
                                                             & (IData)(
                                                                       this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                       [3U]))))) 
                                                     | (((IData)(
                                                                 (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                  [3U] 
                                                                  >> 0x14U)) 
                                                         & (IData)(
                                                                   (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                    [3U] 
                                                                    >> 0x13U))) 
                                                        & (~ 
                                                           ((IData)(
                                                                    (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                     [3U] 
                                                                     >> 0x12U)) 
                                                            | (0U 
                                                               != 
                                                               (0x3ffffU 
                                                                & (IData)(
                                                                          this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                          [3U])))))))))
                                            : (IData)(
                                                      (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                       [3U] 
                                                       >> 0x13U))));
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_start) {
        if ((0U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
            this->__PVT__q_out = ((1U & (((IData)(this->__PVT__add_inf) 
                                          | ((~ (((IData)(this->__PVT__add_in1) 
                                                  >> 0xfU) 
                                                 | (0U 
                                                    != 
                                                    (0x7fffU 
                                                     & (IData)(this->__PVT__add_in1))))) 
                                             & (~ (
                                                   ((IData)(this->__PVT__add_in2) 
                                                    >> 0xfU) 
                                                   | (0U 
                                                      != 
                                                      (0x7fffU 
                                                       & (IData)(this->__PVT__add_in2))))))) 
                                         | (~ ((IData)(this->__PVT__PADD__DOT__DSR_left_out) 
                                               >> 0xfU))))
                                   ? ((IData)(this->__PVT__add_inf) 
                                      << 0xfU) : (((IData)(this->__PVT__PADD__DOT__ls) 
                                                   << 0xfU) 
                                                  | (0x7fffU 
                                                     & (((IData)(this->__PVT__PADD__DOT__ls)
                                                          ? 
                                                         (- (IData)(this->__PVT__PADD__DOT__tmp1_o_rnd))
                                                          : (IData)(this->__PVT__PADD__DOT__tmp1_o_rnd)) 
                                                        >> 1U))));
        } else {
            if ((1U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
                this->__PVT__q_out = ((1U & (((IData)(this->__PVT__mult_inf) 
                                              | ((~ 
                                                  (((IData)(this->__PVT__mult_in1) 
                                                    >> 0xfU) 
                                                   | (0U 
                                                      != 
                                                      (0x7fffU 
                                                       & (IData)(this->__PVT__mult_in1))))) 
                                                 & (~ 
                                                    (((IData)(this->__PVT__mult_in2) 
                                                      >> 0xfU) 
                                                     | (0U 
                                                        != 
                                                        (0x7fffU 
                                                         & (IData)(this->__PVT__mult_in2))))))) 
                                             | (~ (this->__PVT__PMULT__DOT__mult_mN 
                                                   >> 0x1dU))))
                                       ? ((IData)(this->__PVT__mult_inf) 
                                          << 0xfU) : 
                                      (((IData)(this->__PVT__PMULT__DOT__mult_s) 
                                        << 0xfU) | 
                                       (0x7fffU & (
                                                   ((IData)(this->__PVT__PMULT__DOT__mult_s)
                                                     ? 
                                                    (- (IData)(this->__PVT__PMULT__DOT__tmp1_o_rnd))
                                                     : (IData)(this->__PVT__PMULT__DOT__tmp1_o_rnd)) 
                                                   >> 1U))));
            } else {
                if ((2U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit2_op_sel))) {
                    this->__PVT__q_out = ((1U & (((IData)(this->__PVT__div_inf) 
                                                  | ((~ 
                                                      (((IData)(this->__PVT__div_in1) 
                                                        >> 0xfU) 
                                                       | (0U 
                                                          != 
                                                          (0x7fffU 
                                                           & (IData)(this->__PVT__div_in1))))) 
                                                     | (((IData)(this->__PVT__div_in2) 
                                                         >> 0xfU) 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x7fffU 
                                                                       & (IData)(this->__PVT__div_in2)))))))) 
                                                 | (~ 
                                                    (this->__PVT__PDIV__DOT__div_mN 
                                                     >> 0x1dU))))
                                           ? ((IData)(this->__PVT__div_inf) 
                                              << 0xfU)
                                           : (((IData)(this->__PVT__PDIV__DOT__div_s) 
                                               << 0xfU) 
                                              | (0x7fffU 
                                                 & (((IData)(this->__PVT__PDIV__DOT__div_s)
                                                      ? 
                                                     (- (IData)(this->__PVT__PDIV__DOT__tmp1_o_rnd))
                                                      : (IData)(this->__PVT__PDIV__DOT__tmp1_o_rnd)) 
                                                    >> 1U))));
                }
            }
        }
    }
}

VL_INLINE_OPT void Vibex_simple_system_posit_unit::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__3(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vibex_simple_system_posit_unit::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__3\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_start) {
        if ((0U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
            this->__PVT__add_start = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_start;
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_start) {
        if ((0U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
            if ((1U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
                this->__PVT__mult_start = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_start;
            }
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_start) {
        if ((0U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
            if ((1U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
                if ((2U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
                    this->__PVT__div_start = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_start;
                }
            }
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_start) {
        if ((0U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
            if ((1U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
                this->__PVT__mult_in2 = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_in2;
            }
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_start) {
        if ((0U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
            if ((1U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
                this->__PVT__mult_in1 = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_in1;
            }
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_start) {
        if ((0U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
            if ((1U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
                if ((2U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
                    this->__PVT__div_in1 = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_in1;
                }
            }
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_start) {
        if ((0U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
            if ((1U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
                if ((2U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
                    this->__PVT__div_in2 = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_in2;
                }
            }
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_start) {
        if ((0U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
            this->__PVT__add_in1 = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_in1;
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_start) {
        if ((0U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
            this->__PVT__add_in2 = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_in2;
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_start) {
        if ((0U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
            this->__PVT__q_done = this->__PVT__add_start;
        } else {
            if ((1U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
                this->__PVT__q_done = this->__PVT__mult_start;
            } else {
                if ((2U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
                    this->__PVT__q_done = this->__PVT__div_start;
                }
            }
        }
    }
    this->__PVT__PMULT__DOT__xin2 = (0xffffU & ((0x8000U 
                                                 & (IData)(this->__PVT__mult_in2))
                                                 ? 
                                                (- (IData)(this->__PVT__mult_in2))
                                                 : (IData)(this->__PVT__mult_in2)));
    this->__PVT__mult_inf = (1U & ((((IData)(this->__PVT__mult_in1) 
                                     >> 0xfU) & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x7fffU 
                                                             & (IData)(this->__PVT__mult_in1)))))) 
                                   | (((IData)(this->__PVT__mult_in2) 
                                       >> 0xfU) & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x7fffU 
                                                               & (IData)(this->__PVT__mult_in2))))))));
    this->__PVT__PMULT__DOT__mult_s = (1U & (((IData)(this->__PVT__mult_in1) 
                                              ^ (IData)(this->__PVT__mult_in2)) 
                                             >> 0xfU));
    this->__PVT__PMULT__DOT__xin1 = (0xffffU & ((0x8000U 
                                                 & (IData)(this->__PVT__mult_in1))
                                                 ? 
                                                (- (IData)(this->__PVT__mult_in1))
                                                 : (IData)(this->__PVT__mult_in1)));
    this->__PVT__PDIV__DOT__xin1 = (0xffffU & ((0x8000U 
                                                & (IData)(this->__PVT__div_in1))
                                                ? (- (IData)(this->__PVT__div_in1))
                                                : (IData)(this->__PVT__div_in1)));
    this->__PVT__div_inf = (1U & ((((IData)(this->__PVT__div_in1) 
                                    >> 0xfU) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffU 
                                                            & (IData)(this->__PVT__div_in1)))))) 
                                  | (~ (((IData)(this->__PVT__div_in2) 
                                         >> 0xfU) | 
                                        (0U != (0x7fffU 
                                                & (IData)(this->__PVT__div_in2)))))));
    this->__PVT__PDIV__DOT__div_s = (1U & (((IData)(this->__PVT__div_in1) 
                                            ^ (IData)(this->__PVT__div_in2)) 
                                           >> 0xfU));
    this->__PVT__PDIV__DOT__xin2 = (0xffffU & ((0x8000U 
                                                & (IData)(this->__PVT__div_in2))
                                                ? (- (IData)(this->__PVT__div_in2))
                                                : (IData)(this->__PVT__div_in2)));
    this->__PVT__PADD__DOT__xin1 = (0xffffU & ((0x8000U 
                                                & (IData)(this->__PVT__add_in1))
                                                ? (- (IData)(this->__PVT__add_in1))
                                                : (IData)(this->__PVT__add_in1)));
    this->__PVT__add_inf = (1U & ((((IData)(this->__PVT__add_in1) 
                                    >> 0xfU) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffU 
                                                            & (IData)(this->__PVT__add_in1)))))) 
                                  | (((IData)(this->__PVT__add_in2) 
                                      >> 0xfU) & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x7fffU 
                                                              & (IData)(this->__PVT__add_in2))))))));
    this->__PVT__PADD__DOT__xin2 = (0xffffU & ((0x8000U 
                                                & (IData)(this->__PVT__add_in2))
                                                ? (- (IData)(this->__PVT__add_in2))
                                                : (IData)(this->__PVT__add_in2)));
    this->__PVT__PADD__DOT__in1_gt_in2 = ((0x7fffU 
                                           & (IData)(this->__PVT__PADD__DOT__xin1)) 
                                          >= (0x7fffU 
                                              & (IData)(this->__PVT__PADD__DOT__xin2)));
    this->__PVT__PADD__DOT__ls = (1U & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                         ? ((IData)(this->__PVT__add_in1) 
                                            >> 0xfU)
                                         : ((IData)(this->__PVT__add_in2) 
                                            >> 0xfU)));
}

void Vibex_simple_system_posit_unit::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__7(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vibex_simple_system_posit_unit::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__7\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__PMULT__DOT__mult_m = (0x3fffffffU 
                                       & ((((IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fffU 
                                                      & (IData)(this->__PVT__mult_in1)))) 
                                            << 0xeU) 
                                           | (0x3fffU 
                                              & __PVT__PMULT__DOT__uut_de1->__PVT__ls__DOT__tmp
                                              [3U])) 
                                          * (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fffU 
                                                        & (IData)(this->__PVT__mult_in2)))) 
                                              << 0xeU) 
                                             | (0x3fffU 
                                                & __PVT__PMULT__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                [3U]))));
    this->__PVT__PDIV__DOT__m1 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__div_in1)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PDIV__DOT__uut_de1->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PDIV__DOT__m2 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__div_in2)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PADD__DOT__m1 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__add_in1)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PADD__DOT__uut_de1->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PADD__DOT__m2 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__add_in2)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PADD__DOT__uut_de2->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PADD__DOT__le = (3U & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                         ? (__PVT__PADD__DOT__uut_de1->__PVT__ls__DOT__tmp
                                            [3U] >> 0xeU)
                                         : (__PVT__PADD__DOT__uut_de2->__PVT__ls__DOT__tmp
                                            [3U] >> 0xeU)));
    this->__PVT__PADD__DOT__sr = ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                   ? (IData)(__PVT__PADD__DOT__uut_de2->regime)
                                   : (IData)(__PVT__PADD__DOT__uut_de1->regime));
    this->__PVT__PADD__DOT__lr = ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                   ? (IData)(__PVT__PADD__DOT__uut_de1->regime)
                                   : (IData)(__PVT__PADD__DOT__uut_de2->regime));
    this->__PVT__PMULT__DOT__mult_mN = (0x3fffffffU 
                                        & ((0x20000000U 
                                            & this->__PVT__PMULT__DOT__mult_m)
                                            ? this->__PVT__PMULT__DOT__mult_m
                                            : (this->__PVT__PMULT__DOT__mult_m 
                                               << 1U)));
    this->__PVT__PMULT__DOT__mult_e = (0xffU & ((((0xfcU 
                                                   & (((0x4000U 
                                                        & (IData)(this->__PVT__PMULT__DOT__xin1))
                                                        ? (IData)(__PVT__PMULT__DOT__uut_de1->regime)
                                                        : 
                                                       (- (IData)(__PVT__PMULT__DOT__uut_de1->regime))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (__PVT__PMULT__DOT__uut_de1->__PVT__ls__DOT__tmp
                                                        [3U] 
                                                        >> 0xeU))) 
                                                 + 
                                                 ((0xfcU 
                                                   & (((0x4000U 
                                                        & (IData)(this->__PVT__PMULT__DOT__xin2))
                                                        ? (IData)(__PVT__PMULT__DOT__uut_de2->regime)
                                                        : 
                                                       (- (IData)(__PVT__PMULT__DOT__uut_de2->regime))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (__PVT__PMULT__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                        [3U] 
                                                        >> 0xeU)))) 
                                                + (1U 
                                                   & (this->__PVT__PMULT__DOT__mult_m 
                                                      >> 0x1dU))));
    this->__Vtableidx3 = (0xfeU & ((IData)(this->__PVT__PDIV__DOT__m2) 
                                   >> 6U));
    this->__PVT__PDIV__DOT__m2_inv0_tmp = this->__Vtable3___PVT__PDIV__DOT__m2_inv0_tmp
        [this->__Vtableidx3];
    this->__PVT__PADD__DOT__lm = ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                   ? (IData)(this->__PVT__PADD__DOT__m1)
                                   : (IData)(this->__PVT__PADD__DOT__m2));
    this->__PVT__PADD__DOT__lr_N = (0x1fU & ((1U & 
                                              ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                ? ((IData)(this->__PVT__PADD__DOT__xin1) 
                                                   >> 0xeU)
                                                : ((IData)(this->__PVT__PADD__DOT__xin2) 
                                                   >> 0xeU)))
                                              ? (IData)(this->__PVT__PADD__DOT__lr)
                                              : (- (IData)(this->__PVT__PADD__DOT__lr))));
    this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN 
        = (0x7fU & ((0x80U & (IData)(this->__PVT__PMULT__DOT__mult_e))
                     ? ((IData)(1U) + (~ (IData)(this->__PVT__PMULT__DOT__mult_e)))
                     : (IData)(this->__PVT__PMULT__DOT__mult_e)));
    this->__PVT__PDIV__DOT__m2_inv[0U] = (0x1fe00000U 
                                          & ((IData)(this->__PVT__PDIV__DOT__m2_inv0_tmp) 
                                             << 0x14U));
    this->__PVT__PADD__DOT__diff = (0xffU & ((((IData)(this->__PVT__PADD__DOT__lr_N) 
                                               << 2U) 
                                              | (IData)(this->__PVT__PADD__DOT__le)) 
                                             - ((0x7cU 
                                                 & (((1U 
                                                      & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                          ? 
                                                         ((IData)(this->__PVT__PADD__DOT__xin2) 
                                                          >> 0xeU)
                                                          : 
                                                         ((IData)(this->__PVT__PADD__DOT__xin1) 
                                                          >> 0xeU)))
                                                      ? (IData)(this->__PVT__PADD__DOT__sr)
                                                      : 
                                                     (- (IData)(this->__PVT__PADD__DOT__sr))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                       ? 
                                                      (__PVT__PADD__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                       [3U] 
                                                       >> 0xeU)
                                                       : 
                                                      (__PVT__PADD__DOT__uut_de1->__PVT__ls__DOT__tmp
                                                       [3U] 
                                                       >> 0xeU))))));
    this->__PVT__PMULT__DOT__r_o = (0x1fU & ((1U & 
                                              ((~ ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                   >> 7U)) 
                                               | (0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN)))))
                                              ? ((IData)(1U) 
                                                 + 
                                                 (0x1fU 
                                                  & ((IData)(this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN) 
                                                     >> 2U)))
                                              : (0x1fU 
                                                 & ((IData)(this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN) 
                                                    >> 2U))));
    this->__PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2[0U] 
        = (0x3fffffffU & ((0x7f80U & (this->__PVT__PDIV__DOT__m2_inv
                                      [0U] >> 0xeU)) 
                          * (IData)(this->__PVT__PDIV__DOT__m2)));
    this->__PVT__PDIV__DOT__div_m = (0x3fffffffU & 
                                     ((0U != (0x3fffU 
                                              & __PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                              [3U]))
                                       ? ((IData)(this->__PVT__PDIV__DOT__m1) 
                                          * (0x7fffU 
                                             & (this->__PVT__PDIV__DOT__m2_inv
                                                [1U] 
                                                >> 0xeU)))
                                       : ((IData)(this->__PVT__PDIV__DOT__m1) 
                                          << 0xeU)));
    this->__PVT__PADD__DOT__exp_diff = ((0U != (7U 
                                                & ((IData)(this->__PVT__PADD__DOT__diff) 
                                                   >> 4U)))
                                         ? 0xfU : (0xfU 
                                                   & (IData)(this->__PVT__PADD__DOT__diff)));
    this->PMULT__DOT____Vcellinp__dsr2__b = ((0x10U 
                                              & (IData)(this->__PVT__PMULT__DOT__r_o))
                                              ? 0xfU
                                              : (IData)(this->__PVT__PMULT__DOT__r_o));
    this->__PVT__PDIV__DOT__genblk4__DOT__two_m2_inv_X_m2[0U] 
        = (0xffffU & ((IData)(0x4000U) - ((0x3ffeU 
                                           & (this->__PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2
                                              [0U] 
                                              >> 0x10U)) 
                                          | (0U != 
                                             (0x1ffffU 
                                              & this->__PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2
                                              [0U])))));
    this->__PVT__PDIV__DOT__div_mN = (0x3fffffffU & 
                                      ((0x20000000U 
                                        & this->__PVT__PDIV__DOT__div_m)
                                        ? this->__PVT__PDIV__DOT__div_m
                                        : (this->__PVT__PDIV__DOT__div_m 
                                           << 1U)));
    this->__PVT__PDIV__DOT__div_e = (0xffU & ((((0xfcU 
                                                 & (((0x4000U 
                                                      & (IData)(this->__PVT__PDIV__DOT__xin1))
                                                      ? (IData)(__PVT__PDIV__DOT__uut_de1->regime)
                                                      : 
                                                     (- (IData)(__PVT__PDIV__DOT__uut_de1->regime))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (__PVT__PDIV__DOT__uut_de1->__PVT__ls__DOT__tmp
                                                      [3U] 
                                                      >> 0xeU))) 
                                               - ((0xfcU 
                                                   & (((0x4000U 
                                                        & (IData)(this->__PVT__PDIV__DOT__xin2))
                                                        ? (IData)(__PVT__PDIV__DOT__uut_de2->regime)
                                                        : 
                                                       (- (IData)(__PVT__PDIV__DOT__uut_de2->regime))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (__PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                        [3U] 
                                                        >> 0xeU)))) 
                                              - ((1U 
                                                  & ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffU 
                                                                  & __PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                                  [3U])))) 
                                                     | (this->__PVT__PDIV__DOT__div_m 
                                                        >> 0x1dU)))
                                                  ? 0U
                                                  : 1U)));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[0U] = (0xffffU 
                                                  & ((1U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (0x7fffffffU 
                                                      & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                          ? (IData)(this->__PVT__PADD__DOT__m2)
                                                          : (IData)(this->__PVT__PADD__DOT__m1)))
                                                      : 
                                                     (((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                        ? (IData)(this->__PVT__PADD__DOT__m2)
                                                        : (IData)(this->__PVT__PADD__DOT__m1)) 
                                                      << 1U)));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[0U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((1U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      ((VL_ULL(0x7ffffffffffc0000) 
                                                        & ((QData)((IData)(
                                                                           ((0xffff0000U 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                >> 7U))))) 
                                                                                << 0x10U)) 
                                                                            | ((0x8000U 
                                                                                & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 8U)) 
                                                                               | ((0x6000U 
                                                                                & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 0xdU)) 
                                                                                | (0x1fffU 
                                                                                & (this->__PVT__PMULT__DOT__mult_mN 
                                                                                >> 0x10U))))))) 
                                                           << 0x12U)) 
                                                       | ((QData)((IData)(
                                                                          ((0x60000U 
                                                                            & (this->__PVT__PMULT__DOT__mult_mN 
                                                                               << 3U)) 
                                                                           | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PMULT__DOT__mult_mN))) 
                                                                              << 0x10U)))) 
                                                          >> 1U))
                                                       : 
                                                      (((QData)((IData)(
                                                                        ((0xffff0000U 
                                                                          & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                >> 7U))))) 
                                                                             << 0x10U)) 
                                                                         | ((0x8000U 
                                                                             & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 8U)) 
                                                                            | ((0x6000U 
                                                                                & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 0xdU)) 
                                                                               | (0x1fffU 
                                                                                & (this->__PVT__PMULT__DOT__mult_mN 
                                                                                >> 0x10U))))))) 
                                                        << 0x13U) 
                                                       | (QData)((IData)(
                                                                         ((0x60000U 
                                                                           & (this->__PVT__PMULT__DOT__mult_mN 
                                                                              << 3U)) 
                                                                          | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PMULT__DOT__mult_mN))) 
                                                                             << 0x10U)))))));
    this->__PVT__PDIV__DOT__m2_inv[1U] = (0x3fffffffU 
                                          & ((0x7f80U 
                                              & (this->__PVT__PDIV__DOT__m2_inv
                                                 [0U] 
                                                 >> 0xeU)) 
                                             * (0x7ffeU 
                                                & (this->__PVT__PDIV__DOT__genblk4__DOT__two_m2_inv_X_m2
                                                   [0U] 
                                                   << 1U))));
    this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN 
        = (0x7fU & ((0x80U & (IData)(this->__PVT__PDIV__DOT__div_e))
                     ? ((IData)(1U) + (~ (IData)(this->__PVT__PDIV__DOT__div_e)))
                     : (IData)(this->__PVT__PDIV__DOT__div_e)));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[1U] = (0xffffU 
                                                  & ((2U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                      [0U] 
                                                      >> 2U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                     [0U]));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[2U] = (0xffffU 
                                                  & ((4U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                      [1U] 
                                                      >> 4U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                     [1U]));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[3U] = (0xffffU 
                                                  & ((8U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                      [2U] 
                                                      >> 8U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                     [2U]));
    this->__PVT__PADD__DOT__add_m = (0x1ffffU & ((1U 
                                                  & (((IData)(this->__PVT__add_in1) 
                                                      >> 0xfU) 
                                                     ^ ~ 
                                                     ((IData)(this->__PVT__add_in2) 
                                                      >> 0xfU)))
                                                  ? 
                                                 (((IData)(this->__PVT__PADD__DOT__lm) 
                                                   << 1U) 
                                                  + 
                                                  this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                  [3U])
                                                  : 
                                                 (((IData)(this->__PVT__PADD__DOT__lm) 
                                                   << 1U) 
                                                  - 
                                                  this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                  [3U])));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[1U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((2U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [0U] 
                                                       >> 2U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [0U]));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[2U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((4U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [1U] 
                                                       >> 4U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [1U]));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[3U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((8U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [2U] 
                                                       >> 8U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [2U]));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[4U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((0x10U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [3U] 
                                                       >> 0x10U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [3U]));
    this->__PVT__PMULT__DOT__tmp1_o_rnd = (0xffffU 
                                           & ((0xcU 
                                               > (IData)(this->__PVT__PMULT__DOT__r_o))
                                               ? ((IData)(
                                                          (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                           [4U] 
                                                           >> 0x13U)) 
                                                  + 
                                                  (1U 
                                                   & (((IData)(
                                                               (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                [4U] 
                                                                >> 0x13U)) 
                                                       & ((IData)(
                                                                  (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                   [4U] 
                                                                   >> 0x12U)) 
                                                          | (0U 
                                                             != 
                                                             (0x3ffffU 
                                                              & (IData)(
                                                                        this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                        [4U]))))) 
                                                      | (((IData)(
                                                                  (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                   [4U] 
                                                                   >> 0x14U)) 
                                                          & (IData)(
                                                                    (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                     [4U] 
                                                                     >> 0x13U))) 
                                                         & (~ 
                                                            ((IData)(
                                                                     (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                      [4U] 
                                                                      >> 0x12U)) 
                                                             | (0U 
                                                                != 
                                                                (0x3ffffU 
                                                                 & (IData)(
                                                                           this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                           [4U])))))))))
                                               : (IData)(
                                                         (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                          [4U] 
                                                          >> 0x13U))));
    this->__PVT__PDIV__DOT__r_o = (0x1fU & ((1U & (
                                                   (~ 
                                                    ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                     >> 7U)) 
                                                   | (0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN)))))
                                             ? ((IData)(1U) 
                                                + (0x1fU 
                                                   & ((IData)(this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN) 
                                                      >> 2U)))
                                             : (0x1fU 
                                                & ((IData)(this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN) 
                                                   >> 2U))));
    this->__PVT__PADD__DOT__LOD_in = ((0x8000U & ((0x7fff8000U 
                                                   & (this->__PVT__PADD__DOT__add_m 
                                                      >> 1U)) 
                                                  | (0xffff8000U 
                                                     & this->__PVT__PADD__DOT__add_m))) 
                                      | (0x7fffU & this->__PVT__PADD__DOT__add_m));
    this->PDIV__DOT____Vcellinp__dsr2__b = ((0x10U 
                                             & (IData)(this->__PVT__PDIV__DOT__r_o))
                                             ? 0xfU
                                             : (IData)(this->__PVT__PDIV__DOT__r_o));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__PVT__PADD__DOT__LOD_in))) 
           | (0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                           >> 2U))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                  >> 6U))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                  >> 0xaU))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                               >> 0xeU))));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[0U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((1U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     ((VL_ULL(0x7ffffffffffc0000) 
                                                       & ((QData)((IData)(
                                                                          ((0xffff0000U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                >> 7U))))) 
                                                                               << 0x10U)) 
                                                                           | ((0x8000U 
                                                                               & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                << 8U)) 
                                                                              | ((0x6000U 
                                                                                & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                << 0xdU)) 
                                                                                | (0x1fffU 
                                                                                & (this->__PVT__PDIV__DOT__div_mN 
                                                                                >> 0x10U))))))) 
                                                          << 0x12U)) 
                                                      | ((QData)((IData)(
                                                                         ((0x60000U 
                                                                           & (this->__PVT__PDIV__DOT__div_mN 
                                                                              << 3U)) 
                                                                          | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PDIV__DOT__div_mN))) 
                                                                             << 0x10U)))) 
                                                         >> 1U))
                                                      : 
                                                     (((QData)((IData)(
                                                                       ((0xffff0000U 
                                                                         & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                >> 7U))))) 
                                                                            << 0x10U)) 
                                                                        | ((0x8000U 
                                                                            & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                               << 8U)) 
                                                                           | ((0x6000U 
                                                                               & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                << 0xdU)) 
                                                                              | (0x1fffU 
                                                                                & (this->__PVT__PDIV__DOT__div_mN 
                                                                                >> 0x10U))))))) 
                                                       << 0x13U) 
                                                      | (QData)((IData)(
                                                                        ((0x60000U 
                                                                          & (this->__PVT__PDIV__DOT__div_mN 
                                                                             << 3U)) 
                                                                         | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PDIV__DOT__div_mN))) 
                                                                            << 0x10U)))))));
    this->__PVT__PADD__DOT__left_shift = (((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                                           | (IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                                           ? ((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                                               ? ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                       >> 0xeU)))
                                                   ? 
                                                  (1U 
                                                   & ((~ 
                                                       ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                        >> 0xfU)) 
                                                      & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                         >> 0xeU)))
                                                   : 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                                 >> 0xcU)))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 0xdU)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 0xcU)))))
                                               : (((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                          >> 0xaU)))
                                                      ? 
                                                     (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 0xbU)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 0xaU)))
                                                      : 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                                    >> 8U)))) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((~ 
                                                             ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                              >> 9U)) 
                                                            & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                               >> 8U)))))))
                                           : ((((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                                | (IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                                               << 3U) 
                                              | ((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                                  ? 
                                                 ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                       >> 6U)))
                                                   ? 
                                                  (1U 
                                                   & ((~ 
                                                       ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                        >> 7U)) 
                                                      & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                         >> 6U)))
                                                   : 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                                 >> 4U)))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 5U)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 4U)))))
                                                  : 
                                                 (((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                          >> 2U)))
                                                      ? 
                                                     (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 3U)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 2U)))
                                                      : 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & (IData)(this->__PVT__PADD__DOT__LOD_in)))) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((~ 
                                                             ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                              >> 1U)) 
                                                            & (IData)(this->__PVT__PADD__DOT__LOD_in)))))))));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[1U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((2U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [0U] 
                                                      >> 2U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [0U]));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[2U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((4U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [1U] 
                                                      >> 4U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [1U]));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[3U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((8U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [2U] 
                                                      >> 8U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [2U]));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[4U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((0x10U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [3U] 
                                                      >> 0x10U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [3U]));
    this->__PVT__PDIV__DOT__tmp1_o_rnd = (0xffffU & 
                                          ((0xcU > (IData)(this->__PVT__PDIV__DOT__r_o))
                                            ? ((IData)(
                                                       (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                        [4U] 
                                                        >> 0x13U)) 
                                               + (1U 
                                                  & (((IData)(
                                                              (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                               [4U] 
                                                               >> 0x13U)) 
                                                      & ((IData)(
                                                                 (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                  [4U] 
                                                                  >> 0x12U)) 
                                                         | (0U 
                                                            != 
                                                            (0x3ffffU 
                                                             & (IData)(
                                                                       this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                       [4U]))))) 
                                                     | (((IData)(
                                                                 (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                  [4U] 
                                                                  >> 0x14U)) 
                                                         & (IData)(
                                                                   (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                    [4U] 
                                                                    >> 0x13U))) 
                                                        & (~ 
                                                           ((IData)(
                                                                    (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                     [4U] 
                                                                     >> 0x12U)) 
                                                            | (0U 
                                                               != 
                                                               (0x3ffffU 
                                                                & (IData)(
                                                                          this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                          [4U])))))))))
                                            : (IData)(
                                                      (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                       [4U] 
                                                       >> 0x13U))));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[0U] = (0xffffU 
                                                  & ((1U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (0xfffffffeU 
                                                      & this->__PVT__PADD__DOT__add_m)
                                                      : 
                                                     (this->__PVT__PADD__DOT__add_m 
                                                      >> 1U)));
    this->__PVT__PADD__DOT__le_o = (0xffU & (((((IData)(this->__PVT__PADD__DOT__lr_N) 
                                                << 2U) 
                                               | (IData)(this->__PVT__PADD__DOT__le)) 
                                              - (IData)(this->__PVT__PADD__DOT__left_shift)) 
                                             + (1U 
                                                & (this->__PVT__PADD__DOT__add_m 
                                                   >> 0x10U))));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[1U] = (0xffffU 
                                                  & ((2U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                      [0U] 
                                                      << 2U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                     [0U]));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[2U] = (0xffffU 
                                                  & ((4U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                      [1U] 
                                                      << 4U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                     [1U]));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[3U] = (0xffffU 
                                                  & ((8U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                      [2U] 
                                                      << 8U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                     [2U]));
    this->__PVT__PADD__DOT__DSR_left_out = ((0x8000U 
                                             & this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                             [3U]) ? 
                                            this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                            [3U] : 
                                            (0xfffeU 
                                             & (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                [3U] 
                                                << 1U)));
    this->__PVT__PADD__DOT__uut_reg_ro__DOT__exp_oN 
        = (0x7fU & (IData)(this->__PVT__PADD__DOT__le_o));
    this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3 
        = (0x1fU & ((IData)(1U) + (0x1fU & ((IData)(this->__PVT__PADD__DOT__uut_reg_ro__DOT__exp_oN) 
                                            >> 2U))));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[0U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((1U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     ((VL_ULL(0x7ffffffc00000000) 
                                                       & ((QData)((IData)(
                                                                          (0xffffU 
                                                                           & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                                >> 6U)))))))) 
                                                          << 0x22U)) 
                                                      | ((VL_ULL(0x7ffffffe00000000) 
                                                          & ((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                                >> 6U)))) 
                                                             << 0x21U)) 
                                                         | ((VL_ULL(0x7fffffff80000000) 
                                                             & ((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(this->__PVT__PADD__DOT__le_o)))) 
                                                                << 0x1fU)) 
                                                            | ((QData)((IData)(
                                                                               (0xfffe0000U 
                                                                                & ((IData)(this->__PVT__PADD__DOT__DSR_left_out) 
                                                                                << 0x11U)))) 
                                                               >> 1U))))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                                >> 6U)))))))) 
                                                       << 0x23U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                              >> 6U)))) 
                                                          << 0x22U) 
                                                         | (((QData)((IData)(
                                                                             (3U 
                                                                              & (IData)(this->__PVT__PADD__DOT__le_o)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              (0xfffe0000U 
                                                                               & ((IData)(this->__PVT__PADD__DOT__DSR_left_out) 
                                                                                << 0x11U)))))))));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[1U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((2U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                      [0U] 
                                                      >> 2U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                     [0U]));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[2U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((4U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                      [1U] 
                                                      >> 4U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                     [1U]));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[3U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((8U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                      [2U] 
                                                      >> 8U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                     [2U]));
    this->__PVT__PADD__DOT__tmp1_o_rnd = (0xffffU & 
                                          ((0xcU > 
                                            (0xfU & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3)))
                                            ? ((IData)(
                                                       (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                        [3U] 
                                                        >> 0x13U)) 
                                               + (1U 
                                                  & (((IData)(
                                                              (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                               [3U] 
                                                               >> 0x13U)) 
                                                      & ((IData)(
                                                                 (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                  [3U] 
                                                                  >> 0x12U)) 
                                                         | (0U 
                                                            != 
                                                            (0x3ffffU 
                                                             & (IData)(
                                                                       this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                       [3U]))))) 
                                                     | (((IData)(
                                                                 (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                  [3U] 
                                                                  >> 0x14U)) 
                                                         & (IData)(
                                                                   (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                    [3U] 
                                                                    >> 0x13U))) 
                                                        & (~ 
                                                           ((IData)(
                                                                    (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                     [3U] 
                                                                     >> 0x12U)) 
                                                            | (0U 
                                                               != 
                                                               (0x3ffffU 
                                                                & (IData)(
                                                                          this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                          [3U])))))))))
                                            : (IData)(
                                                      (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                       [3U] 
                                                       >> 0x13U))));
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_start) {
        if ((0U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
            this->__PVT__q_out = ((1U & (((IData)(this->__PVT__add_inf) 
                                          | ((~ (((IData)(this->__PVT__add_in1) 
                                                  >> 0xfU) 
                                                 | (0U 
                                                    != 
                                                    (0x7fffU 
                                                     & (IData)(this->__PVT__add_in1))))) 
                                             & (~ (
                                                   ((IData)(this->__PVT__add_in2) 
                                                    >> 0xfU) 
                                                   | (0U 
                                                      != 
                                                      (0x7fffU 
                                                       & (IData)(this->__PVT__add_in2))))))) 
                                         | (~ ((IData)(this->__PVT__PADD__DOT__DSR_left_out) 
                                               >> 0xfU))))
                                   ? ((IData)(this->__PVT__add_inf) 
                                      << 0xfU) : (((IData)(this->__PVT__PADD__DOT__ls) 
                                                   << 0xfU) 
                                                  | (0x7fffU 
                                                     & (((IData)(this->__PVT__PADD__DOT__ls)
                                                          ? 
                                                         (- (IData)(this->__PVT__PADD__DOT__tmp1_o_rnd))
                                                          : (IData)(this->__PVT__PADD__DOT__tmp1_o_rnd)) 
                                                        >> 1U))));
        } else {
            if ((1U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
                this->__PVT__q_out = ((1U & (((IData)(this->__PVT__mult_inf) 
                                              | ((~ 
                                                  (((IData)(this->__PVT__mult_in1) 
                                                    >> 0xfU) 
                                                   | (0U 
                                                      != 
                                                      (0x7fffU 
                                                       & (IData)(this->__PVT__mult_in1))))) 
                                                 & (~ 
                                                    (((IData)(this->__PVT__mult_in2) 
                                                      >> 0xfU) 
                                                     | (0U 
                                                        != 
                                                        (0x7fffU 
                                                         & (IData)(this->__PVT__mult_in2))))))) 
                                             | (~ (this->__PVT__PMULT__DOT__mult_mN 
                                                   >> 0x1dU))))
                                       ? ((IData)(this->__PVT__mult_inf) 
                                          << 0xfU) : 
                                      (((IData)(this->__PVT__PMULT__DOT__mult_s) 
                                        << 0xfU) | 
                                       (0x7fffU & (
                                                   ((IData)(this->__PVT__PMULT__DOT__mult_s)
                                                     ? 
                                                    (- (IData)(this->__PVT__PMULT__DOT__tmp1_o_rnd))
                                                     : (IData)(this->__PVT__PMULT__DOT__tmp1_o_rnd)) 
                                                   >> 1U))));
            } else {
                if ((2U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
                    this->__PVT__q_out = ((1U & (((IData)(this->__PVT__div_inf) 
                                                  | ((~ 
                                                      (((IData)(this->__PVT__div_in1) 
                                                        >> 0xfU) 
                                                       | (0U 
                                                          != 
                                                          (0x7fffU 
                                                           & (IData)(this->__PVT__div_in1))))) 
                                                     | (((IData)(this->__PVT__div_in2) 
                                                         >> 0xfU) 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x7fffU 
                                                                       & (IData)(this->__PVT__div_in2)))))))) 
                                                 | (~ 
                                                    (this->__PVT__PDIV__DOT__div_mN 
                                                     >> 0x1dU))))
                                           ? ((IData)(this->__PVT__div_inf) 
                                              << 0xfU)
                                           : (((IData)(this->__PVT__PDIV__DOT__div_s) 
                                               << 0xfU) 
                                              | (0x7fffU 
                                                 & (((IData)(this->__PVT__PDIV__DOT__div_s)
                                                      ? 
                                                     (- (IData)(this->__PVT__PDIV__DOT__tmp1_o_rnd))
                                                      : (IData)(this->__PVT__PDIV__DOT__tmp1_o_rnd)) 
                                                    >> 1U))));
                }
            }
        }
    }
}

VL_INLINE_OPT void Vibex_simple_system_posit_unit::_combo__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__19(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vibex_simple_system_posit_unit::_combo__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__19\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__PMULT__DOT__mult_m = (0x3fffffffU 
                                       & ((((IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fffU 
                                                      & (IData)(this->__PVT__mult_in1)))) 
                                            << 0xeU) 
                                           | (0x3fffU 
                                              & __PVT__PMULT__DOT__uut_de1->__PVT__ls__DOT__tmp
                                              [3U])) 
                                          * (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fffU 
                                                        & (IData)(this->__PVT__mult_in2)))) 
                                              << 0xeU) 
                                             | (0x3fffU 
                                                & __PVT__PMULT__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                [3U]))));
    this->__PVT__PDIV__DOT__m1 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__div_in1)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PDIV__DOT__uut_de1->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PDIV__DOT__m2 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__div_in2)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PADD__DOT__m1 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__add_in1)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PADD__DOT__uut_de1->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PADD__DOT__m2 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__add_in2)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PADD__DOT__uut_de2->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PADD__DOT__le = (3U & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                         ? (__PVT__PADD__DOT__uut_de1->__PVT__ls__DOT__tmp
                                            [3U] >> 0xeU)
                                         : (__PVT__PADD__DOT__uut_de2->__PVT__ls__DOT__tmp
                                            [3U] >> 0xeU)));
    this->__PVT__PMULT__DOT__mult_mN = (0x3fffffffU 
                                        & ((0x20000000U 
                                            & this->__PVT__PMULT__DOT__mult_m)
                                            ? this->__PVT__PMULT__DOT__mult_m
                                            : (this->__PVT__PMULT__DOT__mult_m 
                                               << 1U)));
    this->__PVT__PMULT__DOT__mult_e = (0xffU & ((((0xfcU 
                                                   & (((0x4000U 
                                                        & (IData)(this->__PVT__PMULT__DOT__xin1))
                                                        ? (IData)(__PVT__PMULT__DOT__uut_de1->regime)
                                                        : 
                                                       (- (IData)(__PVT__PMULT__DOT__uut_de1->regime))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (__PVT__PMULT__DOT__uut_de1->__PVT__ls__DOT__tmp
                                                        [3U] 
                                                        >> 0xeU))) 
                                                 + 
                                                 ((0xfcU 
                                                   & (((0x4000U 
                                                        & (IData)(this->__PVT__PMULT__DOT__xin2))
                                                        ? (IData)(__PVT__PMULT__DOT__uut_de2->regime)
                                                        : 
                                                       (- (IData)(__PVT__PMULT__DOT__uut_de2->regime))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (__PVT__PMULT__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                        [3U] 
                                                        >> 0xeU)))) 
                                                + (1U 
                                                   & (this->__PVT__PMULT__DOT__mult_m 
                                                      >> 0x1dU))));
    this->__Vtableidx3 = (0xfeU & ((IData)(this->__PVT__PDIV__DOT__m2) 
                                   >> 6U));
    this->__PVT__PDIV__DOT__m2_inv0_tmp = this->__Vtable3___PVT__PDIV__DOT__m2_inv0_tmp
        [this->__Vtableidx3];
    this->__PVT__PADD__DOT__lm = ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                   ? (IData)(this->__PVT__PADD__DOT__m1)
                                   : (IData)(this->__PVT__PADD__DOT__m2));
    this->__PVT__PADD__DOT__diff = (0xffU & ((((IData)(this->__PVT__PADD__DOT__lr_N) 
                                               << 2U) 
                                              | (IData)(this->__PVT__PADD__DOT__le)) 
                                             - ((0x7cU 
                                                 & (((1U 
                                                      & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                          ? 
                                                         ((IData)(this->__PVT__PADD__DOT__xin2) 
                                                          >> 0xeU)
                                                          : 
                                                         ((IData)(this->__PVT__PADD__DOT__xin1) 
                                                          >> 0xeU)))
                                                      ? (IData)(this->__PVT__PADD__DOT__sr)
                                                      : 
                                                     (- (IData)(this->__PVT__PADD__DOT__sr))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                       ? 
                                                      (__PVT__PADD__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                       [3U] 
                                                       >> 0xeU)
                                                       : 
                                                      (__PVT__PADD__DOT__uut_de1->__PVT__ls__DOT__tmp
                                                       [3U] 
                                                       >> 0xeU))))));
    this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN 
        = (0x7fU & ((0x80U & (IData)(this->__PVT__PMULT__DOT__mult_e))
                     ? ((IData)(1U) + (~ (IData)(this->__PVT__PMULT__DOT__mult_e)))
                     : (IData)(this->__PVT__PMULT__DOT__mult_e)));
    this->__PVT__PDIV__DOT__m2_inv[0U] = (0x1fe00000U 
                                          & ((IData)(this->__PVT__PDIV__DOT__m2_inv0_tmp) 
                                             << 0x14U));
    this->__PVT__PADD__DOT__exp_diff = ((0U != (7U 
                                                & ((IData)(this->__PVT__PADD__DOT__diff) 
                                                   >> 4U)))
                                         ? 0xfU : (0xfU 
                                                   & (IData)(this->__PVT__PADD__DOT__diff)));
    this->__PVT__PMULT__DOT__r_o = (0x1fU & ((1U & 
                                              ((~ ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                   >> 7U)) 
                                               | (0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN)))))
                                              ? ((IData)(1U) 
                                                 + 
                                                 (0x1fU 
                                                  & ((IData)(this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN) 
                                                     >> 2U)))
                                              : (0x1fU 
                                                 & ((IData)(this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN) 
                                                    >> 2U))));
    this->__PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2[0U] 
        = (0x3fffffffU & ((0x7f80U & (this->__PVT__PDIV__DOT__m2_inv
                                      [0U] >> 0xeU)) 
                          * (IData)(this->__PVT__PDIV__DOT__m2)));
    this->__PVT__PDIV__DOT__div_m = (0x3fffffffU & 
                                     ((0U != (0x3fffU 
                                              & __PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                              [3U]))
                                       ? ((IData)(this->__PVT__PDIV__DOT__m1) 
                                          * (0x7fffU 
                                             & (this->__PVT__PDIV__DOT__m2_inv
                                                [1U] 
                                                >> 0xeU)))
                                       : ((IData)(this->__PVT__PDIV__DOT__m1) 
                                          << 0xeU)));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[0U] = (0xffffU 
                                                  & ((1U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (0x7fffffffU 
                                                      & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                          ? (IData)(this->__PVT__PADD__DOT__m2)
                                                          : (IData)(this->__PVT__PADD__DOT__m1)))
                                                      : 
                                                     (((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                        ? (IData)(this->__PVT__PADD__DOT__m2)
                                                        : (IData)(this->__PVT__PADD__DOT__m1)) 
                                                      << 1U)));
    this->PMULT__DOT____Vcellinp__dsr2__b = ((0x10U 
                                              & (IData)(this->__PVT__PMULT__DOT__r_o))
                                              ? 0xfU
                                              : (IData)(this->__PVT__PMULT__DOT__r_o));
    this->__PVT__PDIV__DOT__genblk4__DOT__two_m2_inv_X_m2[0U] 
        = (0xffffU & ((IData)(0x4000U) - ((0x3ffeU 
                                           & (this->__PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2
                                              [0U] 
                                              >> 0x10U)) 
                                          | (0U != 
                                             (0x1ffffU 
                                              & this->__PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2
                                              [0U])))));
    this->__PVT__PDIV__DOT__div_mN = (0x3fffffffU & 
                                      ((0x20000000U 
                                        & this->__PVT__PDIV__DOT__div_m)
                                        ? this->__PVT__PDIV__DOT__div_m
                                        : (this->__PVT__PDIV__DOT__div_m 
                                           << 1U)));
    this->__PVT__PDIV__DOT__div_e = (0xffU & ((((0xfcU 
                                                 & (((0x4000U 
                                                      & (IData)(this->__PVT__PDIV__DOT__xin1))
                                                      ? (IData)(__PVT__PDIV__DOT__uut_de1->regime)
                                                      : 
                                                     (- (IData)(__PVT__PDIV__DOT__uut_de1->regime))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (__PVT__PDIV__DOT__uut_de1->__PVT__ls__DOT__tmp
                                                      [3U] 
                                                      >> 0xeU))) 
                                               - ((0xfcU 
                                                   & (((0x4000U 
                                                        & (IData)(this->__PVT__PDIV__DOT__xin2))
                                                        ? (IData)(__PVT__PDIV__DOT__uut_de2->regime)
                                                        : 
                                                       (- (IData)(__PVT__PDIV__DOT__uut_de2->regime))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (__PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                        [3U] 
                                                        >> 0xeU)))) 
                                              - ((1U 
                                                  & ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffU 
                                                                  & __PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                                  [3U])))) 
                                                     | (this->__PVT__PDIV__DOT__div_m 
                                                        >> 0x1dU)))
                                                  ? 0U
                                                  : 1U)));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[1U] = (0xffffU 
                                                  & ((2U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                      [0U] 
                                                      >> 2U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                     [0U]));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[2U] = (0xffffU 
                                                  & ((4U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                      [1U] 
                                                      >> 4U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                     [1U]));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[3U] = (0xffffU 
                                                  & ((8U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                      [2U] 
                                                      >> 8U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                     [2U]));
    this->__PVT__PADD__DOT__add_m = (0x1ffffU & ((1U 
                                                  & (((IData)(this->__PVT__add_in1) 
                                                      >> 0xfU) 
                                                     ^ ~ 
                                                     ((IData)(this->__PVT__add_in2) 
                                                      >> 0xfU)))
                                                  ? 
                                                 (((IData)(this->__PVT__PADD__DOT__lm) 
                                                   << 1U) 
                                                  + 
                                                  this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                  [3U])
                                                  : 
                                                 (((IData)(this->__PVT__PADD__DOT__lm) 
                                                   << 1U) 
                                                  - 
                                                  this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                  [3U])));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[0U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((1U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      ((VL_ULL(0x7ffffffffffc0000) 
                                                        & ((QData)((IData)(
                                                                           ((0xffff0000U 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                >> 7U))))) 
                                                                                << 0x10U)) 
                                                                            | ((0x8000U 
                                                                                & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 8U)) 
                                                                               | ((0x6000U 
                                                                                & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 0xdU)) 
                                                                                | (0x1fffU 
                                                                                & (this->__PVT__PMULT__DOT__mult_mN 
                                                                                >> 0x10U))))))) 
                                                           << 0x12U)) 
                                                       | ((QData)((IData)(
                                                                          ((0x60000U 
                                                                            & (this->__PVT__PMULT__DOT__mult_mN 
                                                                               << 3U)) 
                                                                           | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PMULT__DOT__mult_mN))) 
                                                                              << 0x10U)))) 
                                                          >> 1U))
                                                       : 
                                                      (((QData)((IData)(
                                                                        ((0xffff0000U 
                                                                          & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                >> 7U))))) 
                                                                             << 0x10U)) 
                                                                         | ((0x8000U 
                                                                             & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 8U)) 
                                                                            | ((0x6000U 
                                                                                & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 0xdU)) 
                                                                               | (0x1fffU 
                                                                                & (this->__PVT__PMULT__DOT__mult_mN 
                                                                                >> 0x10U))))))) 
                                                        << 0x13U) 
                                                       | (QData)((IData)(
                                                                         ((0x60000U 
                                                                           & (this->__PVT__PMULT__DOT__mult_mN 
                                                                              << 3U)) 
                                                                          | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PMULT__DOT__mult_mN))) 
                                                                             << 0x10U)))))));
    this->__PVT__PDIV__DOT__m2_inv[1U] = (0x3fffffffU 
                                          & ((0x7f80U 
                                              & (this->__PVT__PDIV__DOT__m2_inv
                                                 [0U] 
                                                 >> 0xeU)) 
                                             * (0x7ffeU 
                                                & (this->__PVT__PDIV__DOT__genblk4__DOT__two_m2_inv_X_m2
                                                   [0U] 
                                                   << 1U))));
    this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN 
        = (0x7fU & ((0x80U & (IData)(this->__PVT__PDIV__DOT__div_e))
                     ? ((IData)(1U) + (~ (IData)(this->__PVT__PDIV__DOT__div_e)))
                     : (IData)(this->__PVT__PDIV__DOT__div_e)));
    this->__PVT__PADD__DOT__LOD_in = ((0x8000U & ((0x7fff8000U 
                                                   & (this->__PVT__PADD__DOT__add_m 
                                                      >> 1U)) 
                                                  | (0xffff8000U 
                                                     & this->__PVT__PADD__DOT__add_m))) 
                                      | (0x7fffU & this->__PVT__PADD__DOT__add_m));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[1U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((2U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [0U] 
                                                       >> 2U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [0U]));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[2U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((4U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [1U] 
                                                       >> 4U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [1U]));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[3U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((8U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [2U] 
                                                       >> 8U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [2U]));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[4U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((0x10U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [3U] 
                                                       >> 0x10U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [3U]));
    this->__PVT__PMULT__DOT__tmp1_o_rnd = (0xffffU 
                                           & ((0xcU 
                                               > (IData)(this->__PVT__PMULT__DOT__r_o))
                                               ? ((IData)(
                                                          (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                           [4U] 
                                                           >> 0x13U)) 
                                                  + 
                                                  (1U 
                                                   & (((IData)(
                                                               (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                [4U] 
                                                                >> 0x13U)) 
                                                       & ((IData)(
                                                                  (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                   [4U] 
                                                                   >> 0x12U)) 
                                                          | (0U 
                                                             != 
                                                             (0x3ffffU 
                                                              & (IData)(
                                                                        this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                        [4U]))))) 
                                                      | (((IData)(
                                                                  (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                   [4U] 
                                                                   >> 0x14U)) 
                                                          & (IData)(
                                                                    (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                     [4U] 
                                                                     >> 0x13U))) 
                                                         & (~ 
                                                            ((IData)(
                                                                     (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                      [4U] 
                                                                      >> 0x12U)) 
                                                             | (0U 
                                                                != 
                                                                (0x3ffffU 
                                                                 & (IData)(
                                                                           this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                           [4U])))))))))
                                               : (IData)(
                                                         (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                          [4U] 
                                                          >> 0x13U))));
    this->__PVT__PDIV__DOT__r_o = (0x1fU & ((1U & (
                                                   (~ 
                                                    ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                     >> 7U)) 
                                                   | (0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN)))))
                                             ? ((IData)(1U) 
                                                + (0x1fU 
                                                   & ((IData)(this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN) 
                                                      >> 2U)))
                                             : (0x1fU 
                                                & ((IData)(this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN) 
                                                   >> 2U))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__PVT__PADD__DOT__LOD_in))) 
           | (0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                           >> 2U))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                  >> 6U))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                  >> 0xaU))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                               >> 0xeU))));
    this->PDIV__DOT____Vcellinp__dsr2__b = ((0x10U 
                                             & (IData)(this->__PVT__PDIV__DOT__r_o))
                                             ? 0xfU
                                             : (IData)(this->__PVT__PDIV__DOT__r_o));
    this->__PVT__PADD__DOT__left_shift = (((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                                           | (IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                                           ? ((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                                               ? ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                       >> 0xeU)))
                                                   ? 
                                                  (1U 
                                                   & ((~ 
                                                       ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                        >> 0xfU)) 
                                                      & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                         >> 0xeU)))
                                                   : 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                                 >> 0xcU)))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 0xdU)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 0xcU)))))
                                               : (((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                          >> 0xaU)))
                                                      ? 
                                                     (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 0xbU)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 0xaU)))
                                                      : 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                                    >> 8U)))) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((~ 
                                                             ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                              >> 9U)) 
                                                            & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                               >> 8U)))))))
                                           : ((((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                                | (IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                                               << 3U) 
                                              | ((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                                  ? 
                                                 ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                       >> 6U)))
                                                   ? 
                                                  (1U 
                                                   & ((~ 
                                                       ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                        >> 7U)) 
                                                      & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                         >> 6U)))
                                                   : 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                                 >> 4U)))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 5U)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 4U)))))
                                                  : 
                                                 (((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                          >> 2U)))
                                                      ? 
                                                     (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 3U)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 2U)))
                                                      : 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & (IData)(this->__PVT__PADD__DOT__LOD_in)))) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((~ 
                                                             ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                              >> 1U)) 
                                                            & (IData)(this->__PVT__PADD__DOT__LOD_in)))))))));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[0U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((1U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     ((VL_ULL(0x7ffffffffffc0000) 
                                                       & ((QData)((IData)(
                                                                          ((0xffff0000U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                >> 7U))))) 
                                                                               << 0x10U)) 
                                                                           | ((0x8000U 
                                                                               & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                << 8U)) 
                                                                              | ((0x6000U 
                                                                                & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                << 0xdU)) 
                                                                                | (0x1fffU 
                                                                                & (this->__PVT__PDIV__DOT__div_mN 
                                                                                >> 0x10U))))))) 
                                                          << 0x12U)) 
                                                      | ((QData)((IData)(
                                                                         ((0x60000U 
                                                                           & (this->__PVT__PDIV__DOT__div_mN 
                                                                              << 3U)) 
                                                                          | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PDIV__DOT__div_mN))) 
                                                                             << 0x10U)))) 
                                                         >> 1U))
                                                      : 
                                                     (((QData)((IData)(
                                                                       ((0xffff0000U 
                                                                         & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                >> 7U))))) 
                                                                            << 0x10U)) 
                                                                        | ((0x8000U 
                                                                            & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                               << 8U)) 
                                                                           | ((0x6000U 
                                                                               & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                << 0xdU)) 
                                                                              | (0x1fffU 
                                                                                & (this->__PVT__PDIV__DOT__div_mN 
                                                                                >> 0x10U))))))) 
                                                       << 0x13U) 
                                                      | (QData)((IData)(
                                                                        ((0x60000U 
                                                                          & (this->__PVT__PDIV__DOT__div_mN 
                                                                             << 3U)) 
                                                                         | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PDIV__DOT__div_mN))) 
                                                                            << 0x10U)))))));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[0U] = (0xffffU 
                                                  & ((1U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (0xfffffffeU 
                                                      & this->__PVT__PADD__DOT__add_m)
                                                      : 
                                                     (this->__PVT__PADD__DOT__add_m 
                                                      >> 1U)));
    this->__PVT__PADD__DOT__le_o = (0xffU & (((((IData)(this->__PVT__PADD__DOT__lr_N) 
                                                << 2U) 
                                               | (IData)(this->__PVT__PADD__DOT__le)) 
                                              - (IData)(this->__PVT__PADD__DOT__left_shift)) 
                                             + (1U 
                                                & (this->__PVT__PADD__DOT__add_m 
                                                   >> 0x10U))));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[1U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((2U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [0U] 
                                                      >> 2U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [0U]));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[2U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((4U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [1U] 
                                                      >> 4U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [1U]));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[3U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((8U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [2U] 
                                                      >> 8U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [2U]));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[4U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((0x10U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [3U] 
                                                      >> 0x10U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [3U]));
    this->__PVT__PDIV__DOT__tmp1_o_rnd = (0xffffU & 
                                          ((0xcU > (IData)(this->__PVT__PDIV__DOT__r_o))
                                            ? ((IData)(
                                                       (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                        [4U] 
                                                        >> 0x13U)) 
                                               + (1U 
                                                  & (((IData)(
                                                              (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                               [4U] 
                                                               >> 0x13U)) 
                                                      & ((IData)(
                                                                 (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                  [4U] 
                                                                  >> 0x12U)) 
                                                         | (0U 
                                                            != 
                                                            (0x3ffffU 
                                                             & (IData)(
                                                                       this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                       [4U]))))) 
                                                     | (((IData)(
                                                                 (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                  [4U] 
                                                                  >> 0x14U)) 
                                                         & (IData)(
                                                                   (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                    [4U] 
                                                                    >> 0x13U))) 
                                                        & (~ 
                                                           ((IData)(
                                                                    (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                     [4U] 
                                                                     >> 0x12U)) 
                                                            | (0U 
                                                               != 
                                                               (0x3ffffU 
                                                                & (IData)(
                                                                          this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                          [4U])))))))))
                                            : (IData)(
                                                      (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                       [4U] 
                                                       >> 0x13U))));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[1U] = (0xffffU 
                                                  & ((2U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                      [0U] 
                                                      << 2U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                     [0U]));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[2U] = (0xffffU 
                                                  & ((4U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                      [1U] 
                                                      << 4U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                     [1U]));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[3U] = (0xffffU 
                                                  & ((8U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                      [2U] 
                                                      << 8U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                     [2U]));
    this->__PVT__PADD__DOT__DSR_left_out = ((0x8000U 
                                             & this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                             [3U]) ? 
                                            this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                            [3U] : 
                                            (0xfffeU 
                                             & (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                [3U] 
                                                << 1U)));
    this->__PVT__PADD__DOT__uut_reg_ro__DOT__exp_oN 
        = (0x7fU & (IData)(this->__PVT__PADD__DOT__le_o));
    this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3 
        = (0x1fU & ((IData)(1U) + (0x1fU & ((IData)(this->__PVT__PADD__DOT__uut_reg_ro__DOT__exp_oN) 
                                            >> 2U))));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[0U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((1U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     ((VL_ULL(0x7ffffffc00000000) 
                                                       & ((QData)((IData)(
                                                                          (0xffffU 
                                                                           & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                                >> 6U)))))))) 
                                                          << 0x22U)) 
                                                      | ((VL_ULL(0x7ffffffe00000000) 
                                                          & ((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                                >> 6U)))) 
                                                             << 0x21U)) 
                                                         | ((VL_ULL(0x7fffffff80000000) 
                                                             & ((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(this->__PVT__PADD__DOT__le_o)))) 
                                                                << 0x1fU)) 
                                                            | ((QData)((IData)(
                                                                               (0xfffe0000U 
                                                                                & ((IData)(this->__PVT__PADD__DOT__DSR_left_out) 
                                                                                << 0x11U)))) 
                                                               >> 1U))))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                                >> 6U)))))))) 
                                                       << 0x23U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                              >> 6U)))) 
                                                          << 0x22U) 
                                                         | (((QData)((IData)(
                                                                             (3U 
                                                                              & (IData)(this->__PVT__PADD__DOT__le_o)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              (0xfffe0000U 
                                                                               & ((IData)(this->__PVT__PADD__DOT__DSR_left_out) 
                                                                                << 0x11U)))))))));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[1U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((2U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                      [0U] 
                                                      >> 2U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                     [0U]));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[2U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((4U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                      [1U] 
                                                      >> 4U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                     [1U]));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[3U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((8U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                      [2U] 
                                                      >> 8U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                     [2U]));
    this->__PVT__PADD__DOT__tmp1_o_rnd = (0xffffU & 
                                          ((0xcU > 
                                            (0xfU & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3)))
                                            ? ((IData)(
                                                       (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                        [3U] 
                                                        >> 0x13U)) 
                                               + (1U 
                                                  & (((IData)(
                                                              (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                               [3U] 
                                                               >> 0x13U)) 
                                                      & ((IData)(
                                                                 (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                  [3U] 
                                                                  >> 0x12U)) 
                                                         | (0U 
                                                            != 
                                                            (0x3ffffU 
                                                             & (IData)(
                                                                       this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                       [3U]))))) 
                                                     | (((IData)(
                                                                 (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                  [3U] 
                                                                  >> 0x14U)) 
                                                         & (IData)(
                                                                   (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                    [3U] 
                                                                    >> 0x13U))) 
                                                        & (~ 
                                                           ((IData)(
                                                                    (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                     [3U] 
                                                                     >> 0x12U)) 
                                                            | (0U 
                                                               != 
                                                               (0x3ffffU 
                                                                & (IData)(
                                                                          this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                          [3U])))))))))
                                            : (IData)(
                                                      (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                       [3U] 
                                                       >> 0x13U))));
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_start) {
        if ((0U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
            this->__PVT__q_out = ((1U & (((IData)(this->__PVT__add_inf) 
                                          | ((~ (((IData)(this->__PVT__add_in1) 
                                                  >> 0xfU) 
                                                 | (0U 
                                                    != 
                                                    (0x7fffU 
                                                     & (IData)(this->__PVT__add_in1))))) 
                                             & (~ (
                                                   ((IData)(this->__PVT__add_in2) 
                                                    >> 0xfU) 
                                                   | (0U 
                                                      != 
                                                      (0x7fffU 
                                                       & (IData)(this->__PVT__add_in2))))))) 
                                         | (~ ((IData)(this->__PVT__PADD__DOT__DSR_left_out) 
                                               >> 0xfU))))
                                   ? ((IData)(this->__PVT__add_inf) 
                                      << 0xfU) : (((IData)(this->__PVT__PADD__DOT__ls) 
                                                   << 0xfU) 
                                                  | (0x7fffU 
                                                     & (((IData)(this->__PVT__PADD__DOT__ls)
                                                          ? 
                                                         (- (IData)(this->__PVT__PADD__DOT__tmp1_o_rnd))
                                                          : (IData)(this->__PVT__PADD__DOT__tmp1_o_rnd)) 
                                                        >> 1U))));
        } else {
            if ((1U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
                this->__PVT__q_out = ((1U & (((IData)(this->__PVT__mult_inf) 
                                              | ((~ 
                                                  (((IData)(this->__PVT__mult_in1) 
                                                    >> 0xfU) 
                                                   | (0U 
                                                      != 
                                                      (0x7fffU 
                                                       & (IData)(this->__PVT__mult_in1))))) 
                                                 & (~ 
                                                    (((IData)(this->__PVT__mult_in2) 
                                                      >> 0xfU) 
                                                     | (0U 
                                                        != 
                                                        (0x7fffU 
                                                         & (IData)(this->__PVT__mult_in2))))))) 
                                             | (~ (this->__PVT__PMULT__DOT__mult_mN 
                                                   >> 0x1dU))))
                                       ? ((IData)(this->__PVT__mult_inf) 
                                          << 0xfU) : 
                                      (((IData)(this->__PVT__PMULT__DOT__mult_s) 
                                        << 0xfU) | 
                                       (0x7fffU & (
                                                   ((IData)(this->__PVT__PMULT__DOT__mult_s)
                                                     ? 
                                                    (- (IData)(this->__PVT__PMULT__DOT__tmp1_o_rnd))
                                                     : (IData)(this->__PVT__PMULT__DOT__tmp1_o_rnd)) 
                                                   >> 1U))));
            } else {
                if ((2U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit3_op_sel))) {
                    this->__PVT__q_out = ((1U & (((IData)(this->__PVT__div_inf) 
                                                  | ((~ 
                                                      (((IData)(this->__PVT__div_in1) 
                                                        >> 0xfU) 
                                                       | (0U 
                                                          != 
                                                          (0x7fffU 
                                                           & (IData)(this->__PVT__div_in1))))) 
                                                     | (((IData)(this->__PVT__div_in2) 
                                                         >> 0xfU) 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x7fffU 
                                                                       & (IData)(this->__PVT__div_in2)))))))) 
                                                 | (~ 
                                                    (this->__PVT__PDIV__DOT__div_mN 
                                                     >> 0x1dU))))
                                           ? ((IData)(this->__PVT__div_inf) 
                                              << 0xfU)
                                           : (((IData)(this->__PVT__PDIV__DOT__div_s) 
                                               << 0xfU) 
                                              | (0x7fffU 
                                                 & (((IData)(this->__PVT__PDIV__DOT__div_s)
                                                      ? 
                                                     (- (IData)(this->__PVT__PDIV__DOT__tmp1_o_rnd))
                                                      : (IData)(this->__PVT__PDIV__DOT__tmp1_o_rnd)) 
                                                    >> 1U))));
                }
            }
        }
    }
}

VL_INLINE_OPT void Vibex_simple_system_posit_unit::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__4(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vibex_simple_system_posit_unit::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__4\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_start) {
        if ((0U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
            this->__PVT__add_start = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_start;
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_start) {
        if ((0U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
            if ((1U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
                this->__PVT__mult_start = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_start;
            }
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_start) {
        if ((0U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
            if ((1U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
                if ((2U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
                    this->__PVT__div_start = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_start;
                }
            }
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_start) {
        if ((0U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
            if ((1U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
                this->__PVT__mult_in2 = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_in2;
            }
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_start) {
        if ((0U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
            if ((1U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
                this->__PVT__mult_in1 = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_in1;
            }
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_start) {
        if ((0U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
            if ((1U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
                if ((2U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
                    this->__PVT__div_in1 = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_in1;
                }
            }
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_start) {
        if ((0U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
            if ((1U != (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
                if ((2U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
                    this->__PVT__div_in2 = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_in2;
                }
            }
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_start) {
        if ((0U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
            this->__PVT__add_in1 = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_in1;
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_start) {
        if ((0U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
            this->__PVT__add_in2 = vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_in2;
        }
    }
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_start) {
        if ((0U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
            this->__PVT__q_done = this->__PVT__add_start;
        } else {
            if ((1U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
                this->__PVT__q_done = this->__PVT__mult_start;
            } else {
                if ((2U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
                    this->__PVT__q_done = this->__PVT__div_start;
                }
            }
        }
    }
    this->__PVT__PMULT__DOT__xin2 = (0xffffU & ((0x8000U 
                                                 & (IData)(this->__PVT__mult_in2))
                                                 ? 
                                                (- (IData)(this->__PVT__mult_in2))
                                                 : (IData)(this->__PVT__mult_in2)));
    this->__PVT__mult_inf = (1U & ((((IData)(this->__PVT__mult_in1) 
                                     >> 0xfU) & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x7fffU 
                                                             & (IData)(this->__PVT__mult_in1)))))) 
                                   | (((IData)(this->__PVT__mult_in2) 
                                       >> 0xfU) & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x7fffU 
                                                               & (IData)(this->__PVT__mult_in2))))))));
    this->__PVT__PMULT__DOT__mult_s = (1U & (((IData)(this->__PVT__mult_in1) 
                                              ^ (IData)(this->__PVT__mult_in2)) 
                                             >> 0xfU));
    this->__PVT__PMULT__DOT__xin1 = (0xffffU & ((0x8000U 
                                                 & (IData)(this->__PVT__mult_in1))
                                                 ? 
                                                (- (IData)(this->__PVT__mult_in1))
                                                 : (IData)(this->__PVT__mult_in1)));
    this->__PVT__PDIV__DOT__xin1 = (0xffffU & ((0x8000U 
                                                & (IData)(this->__PVT__div_in1))
                                                ? (- (IData)(this->__PVT__div_in1))
                                                : (IData)(this->__PVT__div_in1)));
    this->__PVT__div_inf = (1U & ((((IData)(this->__PVT__div_in1) 
                                    >> 0xfU) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffU 
                                                            & (IData)(this->__PVT__div_in1)))))) 
                                  | (~ (((IData)(this->__PVT__div_in2) 
                                         >> 0xfU) | 
                                        (0U != (0x7fffU 
                                                & (IData)(this->__PVT__div_in2)))))));
    this->__PVT__PDIV__DOT__div_s = (1U & (((IData)(this->__PVT__div_in1) 
                                            ^ (IData)(this->__PVT__div_in2)) 
                                           >> 0xfU));
    this->__PVT__PDIV__DOT__xin2 = (0xffffU & ((0x8000U 
                                                & (IData)(this->__PVT__div_in2))
                                                ? (- (IData)(this->__PVT__div_in2))
                                                : (IData)(this->__PVT__div_in2)));
    this->__PVT__PADD__DOT__xin1 = (0xffffU & ((0x8000U 
                                                & (IData)(this->__PVT__add_in1))
                                                ? (- (IData)(this->__PVT__add_in1))
                                                : (IData)(this->__PVT__add_in1)));
    this->__PVT__add_inf = (1U & ((((IData)(this->__PVT__add_in1) 
                                    >> 0xfU) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffU 
                                                            & (IData)(this->__PVT__add_in1)))))) 
                                  | (((IData)(this->__PVT__add_in2) 
                                      >> 0xfU) & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x7fffU 
                                                              & (IData)(this->__PVT__add_in2))))))));
    this->__PVT__PADD__DOT__xin2 = (0xffffU & ((0x8000U 
                                                & (IData)(this->__PVT__add_in2))
                                                ? (- (IData)(this->__PVT__add_in2))
                                                : (IData)(this->__PVT__add_in2)));
    this->__PVT__PADD__DOT__in1_gt_in2 = ((0x7fffU 
                                           & (IData)(this->__PVT__PADD__DOT__xin1)) 
                                          >= (0x7fffU 
                                              & (IData)(this->__PVT__PADD__DOT__xin2)));
    this->__PVT__PADD__DOT__ls = (1U & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                         ? ((IData)(this->__PVT__add_in1) 
                                            >> 0xfU)
                                         : ((IData)(this->__PVT__add_in2) 
                                            >> 0xfU)));
}

void Vibex_simple_system_posit_unit::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__8(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vibex_simple_system_posit_unit::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__8\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__PMULT__DOT__mult_m = (0x3fffffffU 
                                       & ((((IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fffU 
                                                      & (IData)(this->__PVT__mult_in1)))) 
                                            << 0xeU) 
                                           | (0x3fffU 
                                              & __PVT__PMULT__DOT__uut_de1->__PVT__ls__DOT__tmp
                                              [3U])) 
                                          * (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fffU 
                                                        & (IData)(this->__PVT__mult_in2)))) 
                                              << 0xeU) 
                                             | (0x3fffU 
                                                & __PVT__PMULT__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                [3U]))));
    this->__PVT__PDIV__DOT__m1 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__div_in1)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PDIV__DOT__uut_de1->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PDIV__DOT__m2 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__div_in2)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PADD__DOT__m1 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__add_in1)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PADD__DOT__uut_de1->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PADD__DOT__m2 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__add_in2)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PADD__DOT__uut_de2->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PADD__DOT__le = (3U & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                         ? (__PVT__PADD__DOT__uut_de1->__PVT__ls__DOT__tmp
                                            [3U] >> 0xeU)
                                         : (__PVT__PADD__DOT__uut_de2->__PVT__ls__DOT__tmp
                                            [3U] >> 0xeU)));
    this->__PVT__PADD__DOT__sr = ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                   ? (IData)(__PVT__PADD__DOT__uut_de2->regime)
                                   : (IData)(__PVT__PADD__DOT__uut_de1->regime));
    this->__PVT__PADD__DOT__lr = ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                   ? (IData)(__PVT__PADD__DOT__uut_de1->regime)
                                   : (IData)(__PVT__PADD__DOT__uut_de2->regime));
    this->__PVT__PMULT__DOT__mult_mN = (0x3fffffffU 
                                        & ((0x20000000U 
                                            & this->__PVT__PMULT__DOT__mult_m)
                                            ? this->__PVT__PMULT__DOT__mult_m
                                            : (this->__PVT__PMULT__DOT__mult_m 
                                               << 1U)));
    this->__PVT__PMULT__DOT__mult_e = (0xffU & ((((0xfcU 
                                                   & (((0x4000U 
                                                        & (IData)(this->__PVT__PMULT__DOT__xin1))
                                                        ? (IData)(__PVT__PMULT__DOT__uut_de1->regime)
                                                        : 
                                                       (- (IData)(__PVT__PMULT__DOT__uut_de1->regime))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (__PVT__PMULT__DOT__uut_de1->__PVT__ls__DOT__tmp
                                                        [3U] 
                                                        >> 0xeU))) 
                                                 + 
                                                 ((0xfcU 
                                                   & (((0x4000U 
                                                        & (IData)(this->__PVT__PMULT__DOT__xin2))
                                                        ? (IData)(__PVT__PMULT__DOT__uut_de2->regime)
                                                        : 
                                                       (- (IData)(__PVT__PMULT__DOT__uut_de2->regime))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (__PVT__PMULT__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                        [3U] 
                                                        >> 0xeU)))) 
                                                + (1U 
                                                   & (this->__PVT__PMULT__DOT__mult_m 
                                                      >> 0x1dU))));
    this->__Vtableidx4 = (0xfeU & ((IData)(this->__PVT__PDIV__DOT__m2) 
                                   >> 6U));
    this->__PVT__PDIV__DOT__m2_inv0_tmp = this->__Vtable4___PVT__PDIV__DOT__m2_inv0_tmp
        [this->__Vtableidx4];
    this->__PVT__PADD__DOT__lm = ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                   ? (IData)(this->__PVT__PADD__DOT__m1)
                                   : (IData)(this->__PVT__PADD__DOT__m2));
    this->__PVT__PADD__DOT__lr_N = (0x1fU & ((1U & 
                                              ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                ? ((IData)(this->__PVT__PADD__DOT__xin1) 
                                                   >> 0xeU)
                                                : ((IData)(this->__PVT__PADD__DOT__xin2) 
                                                   >> 0xeU)))
                                              ? (IData)(this->__PVT__PADD__DOT__lr)
                                              : (- (IData)(this->__PVT__PADD__DOT__lr))));
    this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN 
        = (0x7fU & ((0x80U & (IData)(this->__PVT__PMULT__DOT__mult_e))
                     ? ((IData)(1U) + (~ (IData)(this->__PVT__PMULT__DOT__mult_e)))
                     : (IData)(this->__PVT__PMULT__DOT__mult_e)));
    this->__PVT__PDIV__DOT__m2_inv[0U] = (0x1fe00000U 
                                          & ((IData)(this->__PVT__PDIV__DOT__m2_inv0_tmp) 
                                             << 0x14U));
    this->__PVT__PADD__DOT__diff = (0xffU & ((((IData)(this->__PVT__PADD__DOT__lr_N) 
                                               << 2U) 
                                              | (IData)(this->__PVT__PADD__DOT__le)) 
                                             - ((0x7cU 
                                                 & (((1U 
                                                      & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                          ? 
                                                         ((IData)(this->__PVT__PADD__DOT__xin2) 
                                                          >> 0xeU)
                                                          : 
                                                         ((IData)(this->__PVT__PADD__DOT__xin1) 
                                                          >> 0xeU)))
                                                      ? (IData)(this->__PVT__PADD__DOT__sr)
                                                      : 
                                                     (- (IData)(this->__PVT__PADD__DOT__sr))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                       ? 
                                                      (__PVT__PADD__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                       [3U] 
                                                       >> 0xeU)
                                                       : 
                                                      (__PVT__PADD__DOT__uut_de1->__PVT__ls__DOT__tmp
                                                       [3U] 
                                                       >> 0xeU))))));
    this->__PVT__PMULT__DOT__r_o = (0x1fU & ((1U & 
                                              ((~ ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                   >> 7U)) 
                                               | (0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN)))))
                                              ? ((IData)(1U) 
                                                 + 
                                                 (0x1fU 
                                                  & ((IData)(this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN) 
                                                     >> 2U)))
                                              : (0x1fU 
                                                 & ((IData)(this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN) 
                                                    >> 2U))));
    this->__PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2[0U] 
        = (0x3fffffffU & ((0x7f80U & (this->__PVT__PDIV__DOT__m2_inv
                                      [0U] >> 0xeU)) 
                          * (IData)(this->__PVT__PDIV__DOT__m2)));
    this->__PVT__PDIV__DOT__div_m = (0x3fffffffU & 
                                     ((0U != (0x3fffU 
                                              & __PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                              [3U]))
                                       ? ((IData)(this->__PVT__PDIV__DOT__m1) 
                                          * (0x7fffU 
                                             & (this->__PVT__PDIV__DOT__m2_inv
                                                [1U] 
                                                >> 0xeU)))
                                       : ((IData)(this->__PVT__PDIV__DOT__m1) 
                                          << 0xeU)));
    this->__PVT__PADD__DOT__exp_diff = ((0U != (7U 
                                                & ((IData)(this->__PVT__PADD__DOT__diff) 
                                                   >> 4U)))
                                         ? 0xfU : (0xfU 
                                                   & (IData)(this->__PVT__PADD__DOT__diff)));
    this->PMULT__DOT____Vcellinp__dsr2__b = ((0x10U 
                                              & (IData)(this->__PVT__PMULT__DOT__r_o))
                                              ? 0xfU
                                              : (IData)(this->__PVT__PMULT__DOT__r_o));
    this->__PVT__PDIV__DOT__genblk4__DOT__two_m2_inv_X_m2[0U] 
        = (0xffffU & ((IData)(0x4000U) - ((0x3ffeU 
                                           & (this->__PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2
                                              [0U] 
                                              >> 0x10U)) 
                                          | (0U != 
                                             (0x1ffffU 
                                              & this->__PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2
                                              [0U])))));
    this->__PVT__PDIV__DOT__div_mN = (0x3fffffffU & 
                                      ((0x20000000U 
                                        & this->__PVT__PDIV__DOT__div_m)
                                        ? this->__PVT__PDIV__DOT__div_m
                                        : (this->__PVT__PDIV__DOT__div_m 
                                           << 1U)));
    this->__PVT__PDIV__DOT__div_e = (0xffU & ((((0xfcU 
                                                 & (((0x4000U 
                                                      & (IData)(this->__PVT__PDIV__DOT__xin1))
                                                      ? (IData)(__PVT__PDIV__DOT__uut_de1->regime)
                                                      : 
                                                     (- (IData)(__PVT__PDIV__DOT__uut_de1->regime))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (__PVT__PDIV__DOT__uut_de1->__PVT__ls__DOT__tmp
                                                      [3U] 
                                                      >> 0xeU))) 
                                               - ((0xfcU 
                                                   & (((0x4000U 
                                                        & (IData)(this->__PVT__PDIV__DOT__xin2))
                                                        ? (IData)(__PVT__PDIV__DOT__uut_de2->regime)
                                                        : 
                                                       (- (IData)(__PVT__PDIV__DOT__uut_de2->regime))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (__PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                        [3U] 
                                                        >> 0xeU)))) 
                                              - ((1U 
                                                  & ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffU 
                                                                  & __PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                                  [3U])))) 
                                                     | (this->__PVT__PDIV__DOT__div_m 
                                                        >> 0x1dU)))
                                                  ? 0U
                                                  : 1U)));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[0U] = (0xffffU 
                                                  & ((1U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (0x7fffffffU 
                                                      & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                          ? (IData)(this->__PVT__PADD__DOT__m2)
                                                          : (IData)(this->__PVT__PADD__DOT__m1)))
                                                      : 
                                                     (((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                        ? (IData)(this->__PVT__PADD__DOT__m2)
                                                        : (IData)(this->__PVT__PADD__DOT__m1)) 
                                                      << 1U)));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[0U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((1U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      ((VL_ULL(0x7ffffffffffc0000) 
                                                        & ((QData)((IData)(
                                                                           ((0xffff0000U 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                >> 7U))))) 
                                                                                << 0x10U)) 
                                                                            | ((0x8000U 
                                                                                & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 8U)) 
                                                                               | ((0x6000U 
                                                                                & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 0xdU)) 
                                                                                | (0x1fffU 
                                                                                & (this->__PVT__PMULT__DOT__mult_mN 
                                                                                >> 0x10U))))))) 
                                                           << 0x12U)) 
                                                       | ((QData)((IData)(
                                                                          ((0x60000U 
                                                                            & (this->__PVT__PMULT__DOT__mult_mN 
                                                                               << 3U)) 
                                                                           | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PMULT__DOT__mult_mN))) 
                                                                              << 0x10U)))) 
                                                          >> 1U))
                                                       : 
                                                      (((QData)((IData)(
                                                                        ((0xffff0000U 
                                                                          & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                >> 7U))))) 
                                                                             << 0x10U)) 
                                                                         | ((0x8000U 
                                                                             & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 8U)) 
                                                                            | ((0x6000U 
                                                                                & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 0xdU)) 
                                                                               | (0x1fffU 
                                                                                & (this->__PVT__PMULT__DOT__mult_mN 
                                                                                >> 0x10U))))))) 
                                                        << 0x13U) 
                                                       | (QData)((IData)(
                                                                         ((0x60000U 
                                                                           & (this->__PVT__PMULT__DOT__mult_mN 
                                                                              << 3U)) 
                                                                          | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PMULT__DOT__mult_mN))) 
                                                                             << 0x10U)))))));
    this->__PVT__PDIV__DOT__m2_inv[1U] = (0x3fffffffU 
                                          & ((0x7f80U 
                                              & (this->__PVT__PDIV__DOT__m2_inv
                                                 [0U] 
                                                 >> 0xeU)) 
                                             * (0x7ffeU 
                                                & (this->__PVT__PDIV__DOT__genblk4__DOT__two_m2_inv_X_m2
                                                   [0U] 
                                                   << 1U))));
    this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN 
        = (0x7fU & ((0x80U & (IData)(this->__PVT__PDIV__DOT__div_e))
                     ? ((IData)(1U) + (~ (IData)(this->__PVT__PDIV__DOT__div_e)))
                     : (IData)(this->__PVT__PDIV__DOT__div_e)));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[1U] = (0xffffU 
                                                  & ((2U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                      [0U] 
                                                      >> 2U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                     [0U]));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[2U] = (0xffffU 
                                                  & ((4U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                      [1U] 
                                                      >> 4U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                     [1U]));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[3U] = (0xffffU 
                                                  & ((8U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                      [2U] 
                                                      >> 8U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                     [2U]));
    this->__PVT__PADD__DOT__add_m = (0x1ffffU & ((1U 
                                                  & (((IData)(this->__PVT__add_in1) 
                                                      >> 0xfU) 
                                                     ^ ~ 
                                                     ((IData)(this->__PVT__add_in2) 
                                                      >> 0xfU)))
                                                  ? 
                                                 (((IData)(this->__PVT__PADD__DOT__lm) 
                                                   << 1U) 
                                                  + 
                                                  this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                  [3U])
                                                  : 
                                                 (((IData)(this->__PVT__PADD__DOT__lm) 
                                                   << 1U) 
                                                  - 
                                                  this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                  [3U])));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[1U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((2U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [0U] 
                                                       >> 2U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [0U]));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[2U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((4U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [1U] 
                                                       >> 4U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [1U]));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[3U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((8U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [2U] 
                                                       >> 8U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [2U]));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[4U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((0x10U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [3U] 
                                                       >> 0x10U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [3U]));
    this->__PVT__PMULT__DOT__tmp1_o_rnd = (0xffffU 
                                           & ((0xcU 
                                               > (IData)(this->__PVT__PMULT__DOT__r_o))
                                               ? ((IData)(
                                                          (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                           [4U] 
                                                           >> 0x13U)) 
                                                  + 
                                                  (1U 
                                                   & (((IData)(
                                                               (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                [4U] 
                                                                >> 0x13U)) 
                                                       & ((IData)(
                                                                  (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                   [4U] 
                                                                   >> 0x12U)) 
                                                          | (0U 
                                                             != 
                                                             (0x3ffffU 
                                                              & (IData)(
                                                                        this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                        [4U]))))) 
                                                      | (((IData)(
                                                                  (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                   [4U] 
                                                                   >> 0x14U)) 
                                                          & (IData)(
                                                                    (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                     [4U] 
                                                                     >> 0x13U))) 
                                                         & (~ 
                                                            ((IData)(
                                                                     (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                      [4U] 
                                                                      >> 0x12U)) 
                                                             | (0U 
                                                                != 
                                                                (0x3ffffU 
                                                                 & (IData)(
                                                                           this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                           [4U])))))))))
                                               : (IData)(
                                                         (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                          [4U] 
                                                          >> 0x13U))));
    this->__PVT__PDIV__DOT__r_o = (0x1fU & ((1U & (
                                                   (~ 
                                                    ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                     >> 7U)) 
                                                   | (0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN)))))
                                             ? ((IData)(1U) 
                                                + (0x1fU 
                                                   & ((IData)(this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN) 
                                                      >> 2U)))
                                             : (0x1fU 
                                                & ((IData)(this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN) 
                                                   >> 2U))));
    this->__PVT__PADD__DOT__LOD_in = ((0x8000U & ((0x7fff8000U 
                                                   & (this->__PVT__PADD__DOT__add_m 
                                                      >> 1U)) 
                                                  | (0xffff8000U 
                                                     & this->__PVT__PADD__DOT__add_m))) 
                                      | (0x7fffU & this->__PVT__PADD__DOT__add_m));
    this->PDIV__DOT____Vcellinp__dsr2__b = ((0x10U 
                                             & (IData)(this->__PVT__PDIV__DOT__r_o))
                                             ? 0xfU
                                             : (IData)(this->__PVT__PDIV__DOT__r_o));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__PVT__PADD__DOT__LOD_in))) 
           | (0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                           >> 2U))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                  >> 6U))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                  >> 0xaU))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                               >> 0xeU))));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[0U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((1U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     ((VL_ULL(0x7ffffffffffc0000) 
                                                       & ((QData)((IData)(
                                                                          ((0xffff0000U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                >> 7U))))) 
                                                                               << 0x10U)) 
                                                                           | ((0x8000U 
                                                                               & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                << 8U)) 
                                                                              | ((0x6000U 
                                                                                & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                << 0xdU)) 
                                                                                | (0x1fffU 
                                                                                & (this->__PVT__PDIV__DOT__div_mN 
                                                                                >> 0x10U))))))) 
                                                          << 0x12U)) 
                                                      | ((QData)((IData)(
                                                                         ((0x60000U 
                                                                           & (this->__PVT__PDIV__DOT__div_mN 
                                                                              << 3U)) 
                                                                          | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PDIV__DOT__div_mN))) 
                                                                             << 0x10U)))) 
                                                         >> 1U))
                                                      : 
                                                     (((QData)((IData)(
                                                                       ((0xffff0000U 
                                                                         & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                >> 7U))))) 
                                                                            << 0x10U)) 
                                                                        | ((0x8000U 
                                                                            & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                               << 8U)) 
                                                                           | ((0x6000U 
                                                                               & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                << 0xdU)) 
                                                                              | (0x1fffU 
                                                                                & (this->__PVT__PDIV__DOT__div_mN 
                                                                                >> 0x10U))))))) 
                                                       << 0x13U) 
                                                      | (QData)((IData)(
                                                                        ((0x60000U 
                                                                          & (this->__PVT__PDIV__DOT__div_mN 
                                                                             << 3U)) 
                                                                         | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PDIV__DOT__div_mN))) 
                                                                            << 0x10U)))))));
    this->__PVT__PADD__DOT__left_shift = (((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                                           | (IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                                           ? ((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                                               ? ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                       >> 0xeU)))
                                                   ? 
                                                  (1U 
                                                   & ((~ 
                                                       ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                        >> 0xfU)) 
                                                      & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                         >> 0xeU)))
                                                   : 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                                 >> 0xcU)))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 0xdU)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 0xcU)))))
                                               : (((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                          >> 0xaU)))
                                                      ? 
                                                     (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 0xbU)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 0xaU)))
                                                      : 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                                    >> 8U)))) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((~ 
                                                             ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                              >> 9U)) 
                                                            & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                               >> 8U)))))))
                                           : ((((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                                | (IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                                               << 3U) 
                                              | ((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                                  ? 
                                                 ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                       >> 6U)))
                                                   ? 
                                                  (1U 
                                                   & ((~ 
                                                       ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                        >> 7U)) 
                                                      & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                         >> 6U)))
                                                   : 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                                 >> 4U)))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 5U)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 4U)))))
                                                  : 
                                                 (((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                          >> 2U)))
                                                      ? 
                                                     (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 3U)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 2U)))
                                                      : 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & (IData)(this->__PVT__PADD__DOT__LOD_in)))) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((~ 
                                                             ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                              >> 1U)) 
                                                            & (IData)(this->__PVT__PADD__DOT__LOD_in)))))))));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[1U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((2U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [0U] 
                                                      >> 2U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [0U]));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[2U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((4U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [1U] 
                                                      >> 4U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [1U]));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[3U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((8U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [2U] 
                                                      >> 8U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [2U]));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[4U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((0x10U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [3U] 
                                                      >> 0x10U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [3U]));
    this->__PVT__PDIV__DOT__tmp1_o_rnd = (0xffffU & 
                                          ((0xcU > (IData)(this->__PVT__PDIV__DOT__r_o))
                                            ? ((IData)(
                                                       (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                        [4U] 
                                                        >> 0x13U)) 
                                               + (1U 
                                                  & (((IData)(
                                                              (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                               [4U] 
                                                               >> 0x13U)) 
                                                      & ((IData)(
                                                                 (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                  [4U] 
                                                                  >> 0x12U)) 
                                                         | (0U 
                                                            != 
                                                            (0x3ffffU 
                                                             & (IData)(
                                                                       this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                       [4U]))))) 
                                                     | (((IData)(
                                                                 (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                  [4U] 
                                                                  >> 0x14U)) 
                                                         & (IData)(
                                                                   (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                    [4U] 
                                                                    >> 0x13U))) 
                                                        & (~ 
                                                           ((IData)(
                                                                    (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                     [4U] 
                                                                     >> 0x12U)) 
                                                            | (0U 
                                                               != 
                                                               (0x3ffffU 
                                                                & (IData)(
                                                                          this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                          [4U])))))))))
                                            : (IData)(
                                                      (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                       [4U] 
                                                       >> 0x13U))));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[0U] = (0xffffU 
                                                  & ((1U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (0xfffffffeU 
                                                      & this->__PVT__PADD__DOT__add_m)
                                                      : 
                                                     (this->__PVT__PADD__DOT__add_m 
                                                      >> 1U)));
    this->__PVT__PADD__DOT__le_o = (0xffU & (((((IData)(this->__PVT__PADD__DOT__lr_N) 
                                                << 2U) 
                                               | (IData)(this->__PVT__PADD__DOT__le)) 
                                              - (IData)(this->__PVT__PADD__DOT__left_shift)) 
                                             + (1U 
                                                & (this->__PVT__PADD__DOT__add_m 
                                                   >> 0x10U))));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[1U] = (0xffffU 
                                                  & ((2U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                      [0U] 
                                                      << 2U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                     [0U]));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[2U] = (0xffffU 
                                                  & ((4U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                      [1U] 
                                                      << 4U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                     [1U]));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[3U] = (0xffffU 
                                                  & ((8U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                      [2U] 
                                                      << 8U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                     [2U]));
    this->__PVT__PADD__DOT__DSR_left_out = ((0x8000U 
                                             & this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                             [3U]) ? 
                                            this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                            [3U] : 
                                            (0xfffeU 
                                             & (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                [3U] 
                                                << 1U)));
    this->__PVT__PADD__DOT__uut_reg_ro__DOT__exp_oN 
        = (0x7fU & (IData)(this->__PVT__PADD__DOT__le_o));
    this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3 
        = (0x1fU & ((IData)(1U) + (0x1fU & ((IData)(this->__PVT__PADD__DOT__uut_reg_ro__DOT__exp_oN) 
                                            >> 2U))));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[0U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((1U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     ((VL_ULL(0x7ffffffc00000000) 
                                                       & ((QData)((IData)(
                                                                          (0xffffU 
                                                                           & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                                >> 6U)))))))) 
                                                          << 0x22U)) 
                                                      | ((VL_ULL(0x7ffffffe00000000) 
                                                          & ((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                                >> 6U)))) 
                                                             << 0x21U)) 
                                                         | ((VL_ULL(0x7fffffff80000000) 
                                                             & ((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(this->__PVT__PADD__DOT__le_o)))) 
                                                                << 0x1fU)) 
                                                            | ((QData)((IData)(
                                                                               (0xfffe0000U 
                                                                                & ((IData)(this->__PVT__PADD__DOT__DSR_left_out) 
                                                                                << 0x11U)))) 
                                                               >> 1U))))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                                >> 6U)))))))) 
                                                       << 0x23U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                              >> 6U)))) 
                                                          << 0x22U) 
                                                         | (((QData)((IData)(
                                                                             (3U 
                                                                              & (IData)(this->__PVT__PADD__DOT__le_o)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              (0xfffe0000U 
                                                                               & ((IData)(this->__PVT__PADD__DOT__DSR_left_out) 
                                                                                << 0x11U)))))))));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[1U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((2U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                      [0U] 
                                                      >> 2U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                     [0U]));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[2U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((4U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                      [1U] 
                                                      >> 4U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                     [1U]));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[3U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((8U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                      [2U] 
                                                      >> 8U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                     [2U]));
    this->__PVT__PADD__DOT__tmp1_o_rnd = (0xffffU & 
                                          ((0xcU > 
                                            (0xfU & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3)))
                                            ? ((IData)(
                                                       (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                        [3U] 
                                                        >> 0x13U)) 
                                               + (1U 
                                                  & (((IData)(
                                                              (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                               [3U] 
                                                               >> 0x13U)) 
                                                      & ((IData)(
                                                                 (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                  [3U] 
                                                                  >> 0x12U)) 
                                                         | (0U 
                                                            != 
                                                            (0x3ffffU 
                                                             & (IData)(
                                                                       this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                       [3U]))))) 
                                                     | (((IData)(
                                                                 (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                  [3U] 
                                                                  >> 0x14U)) 
                                                         & (IData)(
                                                                   (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                    [3U] 
                                                                    >> 0x13U))) 
                                                        & (~ 
                                                           ((IData)(
                                                                    (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                     [3U] 
                                                                     >> 0x12U)) 
                                                            | (0U 
                                                               != 
                                                               (0x3ffffU 
                                                                & (IData)(
                                                                          this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                          [3U])))))))))
                                            : (IData)(
                                                      (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                       [3U] 
                                                       >> 0x13U))));
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_start) {
        if ((0U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
            this->__PVT__q_out = ((1U & (((IData)(this->__PVT__add_inf) 
                                          | ((~ (((IData)(this->__PVT__add_in1) 
                                                  >> 0xfU) 
                                                 | (0U 
                                                    != 
                                                    (0x7fffU 
                                                     & (IData)(this->__PVT__add_in1))))) 
                                             & (~ (
                                                   ((IData)(this->__PVT__add_in2) 
                                                    >> 0xfU) 
                                                   | (0U 
                                                      != 
                                                      (0x7fffU 
                                                       & (IData)(this->__PVT__add_in2))))))) 
                                         | (~ ((IData)(this->__PVT__PADD__DOT__DSR_left_out) 
                                               >> 0xfU))))
                                   ? ((IData)(this->__PVT__add_inf) 
                                      << 0xfU) : (((IData)(this->__PVT__PADD__DOT__ls) 
                                                   << 0xfU) 
                                                  | (0x7fffU 
                                                     & (((IData)(this->__PVT__PADD__DOT__ls)
                                                          ? 
                                                         (- (IData)(this->__PVT__PADD__DOT__tmp1_o_rnd))
                                                          : (IData)(this->__PVT__PADD__DOT__tmp1_o_rnd)) 
                                                        >> 1U))));
        } else {
            if ((1U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
                this->__PVT__q_out = ((1U & (((IData)(this->__PVT__mult_inf) 
                                              | ((~ 
                                                  (((IData)(this->__PVT__mult_in1) 
                                                    >> 0xfU) 
                                                   | (0U 
                                                      != 
                                                      (0x7fffU 
                                                       & (IData)(this->__PVT__mult_in1))))) 
                                                 & (~ 
                                                    (((IData)(this->__PVT__mult_in2) 
                                                      >> 0xfU) 
                                                     | (0U 
                                                        != 
                                                        (0x7fffU 
                                                         & (IData)(this->__PVT__mult_in2))))))) 
                                             | (~ (this->__PVT__PMULT__DOT__mult_mN 
                                                   >> 0x1dU))))
                                       ? ((IData)(this->__PVT__mult_inf) 
                                          << 0xfU) : 
                                      (((IData)(this->__PVT__PMULT__DOT__mult_s) 
                                        << 0xfU) | 
                                       (0x7fffU & (
                                                   ((IData)(this->__PVT__PMULT__DOT__mult_s)
                                                     ? 
                                                    (- (IData)(this->__PVT__PMULT__DOT__tmp1_o_rnd))
                                                     : (IData)(this->__PVT__PMULT__DOT__tmp1_o_rnd)) 
                                                   >> 1U))));
            } else {
                if ((2U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
                    this->__PVT__q_out = ((1U & (((IData)(this->__PVT__div_inf) 
                                                  | ((~ 
                                                      (((IData)(this->__PVT__div_in1) 
                                                        >> 0xfU) 
                                                       | (0U 
                                                          != 
                                                          (0x7fffU 
                                                           & (IData)(this->__PVT__div_in1))))) 
                                                     | (((IData)(this->__PVT__div_in2) 
                                                         >> 0xfU) 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x7fffU 
                                                                       & (IData)(this->__PVT__div_in2)))))))) 
                                                 | (~ 
                                                    (this->__PVT__PDIV__DOT__div_mN 
                                                     >> 0x1dU))))
                                           ? ((IData)(this->__PVT__div_inf) 
                                              << 0xfU)
                                           : (((IData)(this->__PVT__PDIV__DOT__div_s) 
                                               << 0xfU) 
                                              | (0x7fffU 
                                                 & (((IData)(this->__PVT__PDIV__DOT__div_s)
                                                      ? 
                                                     (- (IData)(this->__PVT__PDIV__DOT__tmp1_o_rnd))
                                                      : (IData)(this->__PVT__PDIV__DOT__tmp1_o_rnd)) 
                                                    >> 1U))));
                }
            }
        }
    }
}

VL_INLINE_OPT void Vibex_simple_system_posit_unit::_combo__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__20(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vibex_simple_system_posit_unit::_combo__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__20\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__PMULT__DOT__mult_m = (0x3fffffffU 
                                       & ((((IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fffU 
                                                      & (IData)(this->__PVT__mult_in1)))) 
                                            << 0xeU) 
                                           | (0x3fffU 
                                              & __PVT__PMULT__DOT__uut_de1->__PVT__ls__DOT__tmp
                                              [3U])) 
                                          * (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fffU 
                                                        & (IData)(this->__PVT__mult_in2)))) 
                                              << 0xeU) 
                                             | (0x3fffU 
                                                & __PVT__PMULT__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                [3U]))));
    this->__PVT__PDIV__DOT__m1 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__div_in1)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PDIV__DOT__uut_de1->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PDIV__DOT__m2 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__div_in2)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PADD__DOT__m1 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__add_in1)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PADD__DOT__uut_de1->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PADD__DOT__m2 = (((IData)((0U != (0x7fffU 
                                                   & (IData)(this->__PVT__add_in2)))) 
                                   << 0xeU) | (0x3fffU 
                                               & __PVT__PADD__DOT__uut_de2->__PVT__ls__DOT__tmp
                                               [3U]));
    this->__PVT__PADD__DOT__le = (3U & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                         ? (__PVT__PADD__DOT__uut_de1->__PVT__ls__DOT__tmp
                                            [3U] >> 0xeU)
                                         : (__PVT__PADD__DOT__uut_de2->__PVT__ls__DOT__tmp
                                            [3U] >> 0xeU)));
    this->__PVT__PMULT__DOT__mult_mN = (0x3fffffffU 
                                        & ((0x20000000U 
                                            & this->__PVT__PMULT__DOT__mult_m)
                                            ? this->__PVT__PMULT__DOT__mult_m
                                            : (this->__PVT__PMULT__DOT__mult_m 
                                               << 1U)));
    this->__PVT__PMULT__DOT__mult_e = (0xffU & ((((0xfcU 
                                                   & (((0x4000U 
                                                        & (IData)(this->__PVT__PMULT__DOT__xin1))
                                                        ? (IData)(__PVT__PMULT__DOT__uut_de1->regime)
                                                        : 
                                                       (- (IData)(__PVT__PMULT__DOT__uut_de1->regime))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (__PVT__PMULT__DOT__uut_de1->__PVT__ls__DOT__tmp
                                                        [3U] 
                                                        >> 0xeU))) 
                                                 + 
                                                 ((0xfcU 
                                                   & (((0x4000U 
                                                        & (IData)(this->__PVT__PMULT__DOT__xin2))
                                                        ? (IData)(__PVT__PMULT__DOT__uut_de2->regime)
                                                        : 
                                                       (- (IData)(__PVT__PMULT__DOT__uut_de2->regime))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (__PVT__PMULT__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                        [3U] 
                                                        >> 0xeU)))) 
                                                + (1U 
                                                   & (this->__PVT__PMULT__DOT__mult_m 
                                                      >> 0x1dU))));
    this->__Vtableidx4 = (0xfeU & ((IData)(this->__PVT__PDIV__DOT__m2) 
                                   >> 6U));
    this->__PVT__PDIV__DOT__m2_inv0_tmp = this->__Vtable4___PVT__PDIV__DOT__m2_inv0_tmp
        [this->__Vtableidx4];
    this->__PVT__PADD__DOT__lm = ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                   ? (IData)(this->__PVT__PADD__DOT__m1)
                                   : (IData)(this->__PVT__PADD__DOT__m2));
    this->__PVT__PADD__DOT__diff = (0xffU & ((((IData)(this->__PVT__PADD__DOT__lr_N) 
                                               << 2U) 
                                              | (IData)(this->__PVT__PADD__DOT__le)) 
                                             - ((0x7cU 
                                                 & (((1U 
                                                      & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                          ? 
                                                         ((IData)(this->__PVT__PADD__DOT__xin2) 
                                                          >> 0xeU)
                                                          : 
                                                         ((IData)(this->__PVT__PADD__DOT__xin1) 
                                                          >> 0xeU)))
                                                      ? (IData)(this->__PVT__PADD__DOT__sr)
                                                      : 
                                                     (- (IData)(this->__PVT__PADD__DOT__sr))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                       ? 
                                                      (__PVT__PADD__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                       [3U] 
                                                       >> 0xeU)
                                                       : 
                                                      (__PVT__PADD__DOT__uut_de1->__PVT__ls__DOT__tmp
                                                       [3U] 
                                                       >> 0xeU))))));
    this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN 
        = (0x7fU & ((0x80U & (IData)(this->__PVT__PMULT__DOT__mult_e))
                     ? ((IData)(1U) + (~ (IData)(this->__PVT__PMULT__DOT__mult_e)))
                     : (IData)(this->__PVT__PMULT__DOT__mult_e)));
    this->__PVT__PDIV__DOT__m2_inv[0U] = (0x1fe00000U 
                                          & ((IData)(this->__PVT__PDIV__DOT__m2_inv0_tmp) 
                                             << 0x14U));
    this->__PVT__PADD__DOT__exp_diff = ((0U != (7U 
                                                & ((IData)(this->__PVT__PADD__DOT__diff) 
                                                   >> 4U)))
                                         ? 0xfU : (0xfU 
                                                   & (IData)(this->__PVT__PADD__DOT__diff)));
    this->__PVT__PMULT__DOT__r_o = (0x1fU & ((1U & 
                                              ((~ ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                   >> 7U)) 
                                               | (0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN)))))
                                              ? ((IData)(1U) 
                                                 + 
                                                 (0x1fU 
                                                  & ((IData)(this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN) 
                                                     >> 2U)))
                                              : (0x1fU 
                                                 & ((IData)(this->__PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN) 
                                                    >> 2U))));
    this->__PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2[0U] 
        = (0x3fffffffU & ((0x7f80U & (this->__PVT__PDIV__DOT__m2_inv
                                      [0U] >> 0xeU)) 
                          * (IData)(this->__PVT__PDIV__DOT__m2)));
    this->__PVT__PDIV__DOT__div_m = (0x3fffffffU & 
                                     ((0U != (0x3fffU 
                                              & __PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                              [3U]))
                                       ? ((IData)(this->__PVT__PDIV__DOT__m1) 
                                          * (0x7fffU 
                                             & (this->__PVT__PDIV__DOT__m2_inv
                                                [1U] 
                                                >> 0xeU)))
                                       : ((IData)(this->__PVT__PDIV__DOT__m1) 
                                          << 0xeU)));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[0U] = (0xffffU 
                                                  & ((1U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (0x7fffffffU 
                                                      & ((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                          ? (IData)(this->__PVT__PADD__DOT__m2)
                                                          : (IData)(this->__PVT__PADD__DOT__m1)))
                                                      : 
                                                     (((IData)(this->__PVT__PADD__DOT__in1_gt_in2)
                                                        ? (IData)(this->__PVT__PADD__DOT__m2)
                                                        : (IData)(this->__PVT__PADD__DOT__m1)) 
                                                      << 1U)));
    this->PMULT__DOT____Vcellinp__dsr2__b = ((0x10U 
                                              & (IData)(this->__PVT__PMULT__DOT__r_o))
                                              ? 0xfU
                                              : (IData)(this->__PVT__PMULT__DOT__r_o));
    this->__PVT__PDIV__DOT__genblk4__DOT__two_m2_inv_X_m2[0U] 
        = (0xffffU & ((IData)(0x4000U) - ((0x3ffeU 
                                           & (this->__PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2
                                              [0U] 
                                              >> 0x10U)) 
                                          | (0U != 
                                             (0x1ffffU 
                                              & this->__PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2
                                              [0U])))));
    this->__PVT__PDIV__DOT__div_mN = (0x3fffffffU & 
                                      ((0x20000000U 
                                        & this->__PVT__PDIV__DOT__div_m)
                                        ? this->__PVT__PDIV__DOT__div_m
                                        : (this->__PVT__PDIV__DOT__div_m 
                                           << 1U)));
    this->__PVT__PDIV__DOT__div_e = (0xffU & ((((0xfcU 
                                                 & (((0x4000U 
                                                      & (IData)(this->__PVT__PDIV__DOT__xin1))
                                                      ? (IData)(__PVT__PDIV__DOT__uut_de1->regime)
                                                      : 
                                                     (- (IData)(__PVT__PDIV__DOT__uut_de1->regime))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (__PVT__PDIV__DOT__uut_de1->__PVT__ls__DOT__tmp
                                                      [3U] 
                                                      >> 0xeU))) 
                                               - ((0xfcU 
                                                   & (((0x4000U 
                                                        & (IData)(this->__PVT__PDIV__DOT__xin2))
                                                        ? (IData)(__PVT__PDIV__DOT__uut_de2->regime)
                                                        : 
                                                       (- (IData)(__PVT__PDIV__DOT__uut_de2->regime))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (__PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                        [3U] 
                                                        >> 0xeU)))) 
                                              - ((1U 
                                                  & ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3fffU 
                                                                  & __PVT__PDIV__DOT__uut_de2->__PVT__ls__DOT__tmp
                                                                  [3U])))) 
                                                     | (this->__PVT__PDIV__DOT__div_m 
                                                        >> 0x1dU)))
                                                  ? 0U
                                                  : 1U)));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[1U] = (0xffffU 
                                                  & ((2U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                      [0U] 
                                                      >> 2U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                     [0U]));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[2U] = (0xffffU 
                                                  & ((4U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                      [1U] 
                                                      >> 4U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                     [1U]));
    this->__PVT__PADD__DOT__dsr1__DOT__tmp[3U] = (0xffffU 
                                                  & ((8U 
                                                      & (IData)(this->__PVT__PADD__DOT__exp_diff))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                      [2U] 
                                                      >> 8U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                     [2U]));
    this->__PVT__PADD__DOT__add_m = (0x1ffffU & ((1U 
                                                  & (((IData)(this->__PVT__add_in1) 
                                                      >> 0xfU) 
                                                     ^ ~ 
                                                     ((IData)(this->__PVT__add_in2) 
                                                      >> 0xfU)))
                                                  ? 
                                                 (((IData)(this->__PVT__PADD__DOT__lm) 
                                                   << 1U) 
                                                  + 
                                                  this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                  [3U])
                                                  : 
                                                 (((IData)(this->__PVT__PADD__DOT__lm) 
                                                   << 1U) 
                                                  - 
                                                  this->__PVT__PADD__DOT__dsr1__DOT__tmp
                                                  [3U])));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[0U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((1U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      ((VL_ULL(0x7ffffffffffc0000) 
                                                        & ((QData)((IData)(
                                                                           ((0xffff0000U 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                >> 7U))))) 
                                                                                << 0x10U)) 
                                                                            | ((0x8000U 
                                                                                & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 8U)) 
                                                                               | ((0x6000U 
                                                                                & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 0xdU)) 
                                                                                | (0x1fffU 
                                                                                & (this->__PVT__PMULT__DOT__mult_mN 
                                                                                >> 0x10U))))))) 
                                                           << 0x12U)) 
                                                       | ((QData)((IData)(
                                                                          ((0x60000U 
                                                                            & (this->__PVT__PMULT__DOT__mult_mN 
                                                                               << 3U)) 
                                                                           | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PMULT__DOT__mult_mN))) 
                                                                              << 0x10U)))) 
                                                          >> 1U))
                                                       : 
                                                      (((QData)((IData)(
                                                                        ((0xffff0000U 
                                                                          & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                >> 7U))))) 
                                                                             << 0x10U)) 
                                                                         | ((0x8000U 
                                                                             & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 8U)) 
                                                                            | ((0x6000U 
                                                                                & ((IData)(this->__PVT__PMULT__DOT__mult_e) 
                                                                                << 0xdU)) 
                                                                               | (0x1fffU 
                                                                                & (this->__PVT__PMULT__DOT__mult_mN 
                                                                                >> 0x10U))))))) 
                                                        << 0x13U) 
                                                       | (QData)((IData)(
                                                                         ((0x60000U 
                                                                           & (this->__PVT__PMULT__DOT__mult_mN 
                                                                              << 3U)) 
                                                                          | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PMULT__DOT__mult_mN))) 
                                                                             << 0x10U)))))));
    this->__PVT__PDIV__DOT__m2_inv[1U] = (0x3fffffffU 
                                          & ((0x7f80U 
                                              & (this->__PVT__PDIV__DOT__m2_inv
                                                 [0U] 
                                                 >> 0xeU)) 
                                             * (0x7ffeU 
                                                & (this->__PVT__PDIV__DOT__genblk4__DOT__two_m2_inv_X_m2
                                                   [0U] 
                                                   << 1U))));
    this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN 
        = (0x7fU & ((0x80U & (IData)(this->__PVT__PDIV__DOT__div_e))
                     ? ((IData)(1U) + (~ (IData)(this->__PVT__PDIV__DOT__div_e)))
                     : (IData)(this->__PVT__PDIV__DOT__div_e)));
    this->__PVT__PADD__DOT__LOD_in = ((0x8000U & ((0x7fff8000U 
                                                   & (this->__PVT__PADD__DOT__add_m 
                                                      >> 1U)) 
                                                  | (0xffff8000U 
                                                     & this->__PVT__PADD__DOT__add_m))) 
                                      | (0x7fffU & this->__PVT__PADD__DOT__add_m));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[1U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((2U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [0U] 
                                                       >> 2U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [0U]));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[2U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((4U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [1U] 
                                                       >> 4U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [1U]));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[3U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((8U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [2U] 
                                                       >> 8U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [2U]));
    this->__PVT__PMULT__DOT__dsr2__DOT__tmp[4U] = (VL_ULL(0x7ffffffffffff) 
                                                   & ((0x10U 
                                                       & (IData)(this->PMULT__DOT____Vcellinp__dsr2__b))
                                                       ? 
                                                      (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                       [3U] 
                                                       >> 0x10U)
                                                       : 
                                                      this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                      [3U]));
    this->__PVT__PMULT__DOT__tmp1_o_rnd = (0xffffU 
                                           & ((0xcU 
                                               > (IData)(this->__PVT__PMULT__DOT__r_o))
                                               ? ((IData)(
                                                          (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                           [4U] 
                                                           >> 0x13U)) 
                                                  + 
                                                  (1U 
                                                   & (((IData)(
                                                               (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                [4U] 
                                                                >> 0x13U)) 
                                                       & ((IData)(
                                                                  (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                   [4U] 
                                                                   >> 0x12U)) 
                                                          | (0U 
                                                             != 
                                                             (0x3ffffU 
                                                              & (IData)(
                                                                        this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                        [4U]))))) 
                                                      | (((IData)(
                                                                  (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                   [4U] 
                                                                   >> 0x14U)) 
                                                          & (IData)(
                                                                    (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                     [4U] 
                                                                     >> 0x13U))) 
                                                         & (~ 
                                                            ((IData)(
                                                                     (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                      [4U] 
                                                                      >> 0x12U)) 
                                                             | (0U 
                                                                != 
                                                                (0x3ffffU 
                                                                 & (IData)(
                                                                           this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                                           [4U])))))))))
                                               : (IData)(
                                                         (this->__PVT__PMULT__DOT__dsr2__DOT__tmp
                                                          [4U] 
                                                          >> 0x13U))));
    this->__PVT__PDIV__DOT__r_o = (0x1fU & ((1U & (
                                                   (~ 
                                                    ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                     >> 7U)) 
                                                   | (0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN)))))
                                             ? ((IData)(1U) 
                                                + (0x1fU 
                                                   & ((IData)(this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN) 
                                                      >> 2U)))
                                             : (0x1fU 
                                                & ((IData)(this->__PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN) 
                                                   >> 2U))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__PVT__PADD__DOT__LOD_in))) 
           | (0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                           >> 2U))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                  >> 6U))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                  >> 0xaU))));
    this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                               >> 0xeU))));
    this->PDIV__DOT____Vcellinp__dsr2__b = ((0x10U 
                                             & (IData)(this->__PVT__PDIV__DOT__r_o))
                                             ? 0xfU
                                             : (IData)(this->__PVT__PDIV__DOT__r_o));
    this->__PVT__PADD__DOT__left_shift = (((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                                           | (IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                                           ? ((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                                               ? ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                       >> 0xeU)))
                                                   ? 
                                                  (1U 
                                                   & ((~ 
                                                       ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                        >> 0xfU)) 
                                                      & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                         >> 0xeU)))
                                                   : 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                                 >> 0xcU)))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 0xdU)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 0xcU)))))
                                               : (((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                          >> 0xaU)))
                                                      ? 
                                                     (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 0xbU)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 0xaU)))
                                                      : 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                                    >> 8U)))) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((~ 
                                                             ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                              >> 9U)) 
                                                            & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                               >> 8U)))))))
                                           : ((((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                                | (IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                                               << 3U) 
                                              | ((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                                  ? 
                                                 ((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                       >> 6U)))
                                                   ? 
                                                  (1U 
                                                   & ((~ 
                                                       ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                        >> 7U)) 
                                                      & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                         >> 6U)))
                                                   : 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                                 >> 4U)))) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 5U)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 4U)))))
                                                  : 
                                                 (((IData)(this->__PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                                   << 2U) 
                                                  | ((0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                          >> 2U)))
                                                      ? 
                                                     (1U 
                                                      & ((~ 
                                                          ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                           >> 3U)) 
                                                         & ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                            >> 2U)))
                                                      : 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (3U 
                                                                 & (IData)(this->__PVT__PADD__DOT__LOD_in)))) 
                                                       << 1U) 
                                                      | (1U 
                                                         & ((~ 
                                                             ((IData)(this->__PVT__PADD__DOT__LOD_in) 
                                                              >> 1U)) 
                                                            & (IData)(this->__PVT__PADD__DOT__LOD_in)))))))));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[0U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((1U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     ((VL_ULL(0x7ffffffffffc0000) 
                                                       & ((QData)((IData)(
                                                                          ((0xffff0000U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                >> 7U))))) 
                                                                               << 0x10U)) 
                                                                           | ((0x8000U 
                                                                               & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                << 8U)) 
                                                                              | ((0x6000U 
                                                                                & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                << 0xdU)) 
                                                                                | (0x1fffU 
                                                                                & (this->__PVT__PDIV__DOT__div_mN 
                                                                                >> 0x10U))))))) 
                                                          << 0x12U)) 
                                                      | ((QData)((IData)(
                                                                         ((0x60000U 
                                                                           & (this->__PVT__PDIV__DOT__div_mN 
                                                                              << 3U)) 
                                                                          | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PDIV__DOT__div_mN))) 
                                                                             << 0x10U)))) 
                                                         >> 1U))
                                                      : 
                                                     (((QData)((IData)(
                                                                       ((0xffff0000U 
                                                                         & ((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                >> 7U))))) 
                                                                            << 0x10U)) 
                                                                        | ((0x8000U 
                                                                            & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                               << 8U)) 
                                                                           | ((0x6000U 
                                                                               & ((IData)(this->__PVT__PDIV__DOT__div_e) 
                                                                                << 0xdU)) 
                                                                              | (0x1fffU 
                                                                                & (this->__PVT__PDIV__DOT__div_mN 
                                                                                >> 0x10U))))))) 
                                                       << 0x13U) 
                                                      | (QData)((IData)(
                                                                        ((0x60000U 
                                                                          & (this->__PVT__PDIV__DOT__div_mN 
                                                                             << 3U)) 
                                                                         | ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3fffU 
                                                                                & this->__PVT__PDIV__DOT__div_mN))) 
                                                                            << 0x10U)))))));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[0U] = (0xffffU 
                                                  & ((1U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (0xfffffffeU 
                                                      & this->__PVT__PADD__DOT__add_m)
                                                      : 
                                                     (this->__PVT__PADD__DOT__add_m 
                                                      >> 1U)));
    this->__PVT__PADD__DOT__le_o = (0xffU & (((((IData)(this->__PVT__PADD__DOT__lr_N) 
                                                << 2U) 
                                               | (IData)(this->__PVT__PADD__DOT__le)) 
                                              - (IData)(this->__PVT__PADD__DOT__left_shift)) 
                                             + (1U 
                                                & (this->__PVT__PADD__DOT__add_m 
                                                   >> 0x10U))));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[1U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((2U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [0U] 
                                                      >> 2U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [0U]));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[2U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((4U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [1U] 
                                                      >> 4U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [1U]));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[3U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((8U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [2U] 
                                                      >> 8U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [2U]));
    this->__PVT__PDIV__DOT__dsr2__DOT__tmp[4U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((0x10U 
                                                      & (IData)(this->PDIV__DOT____Vcellinp__dsr2__b))
                                                      ? 
                                                     (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                      [3U] 
                                                      >> 0x10U)
                                                      : 
                                                     this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                     [3U]));
    this->__PVT__PDIV__DOT__tmp1_o_rnd = (0xffffU & 
                                          ((0xcU > (IData)(this->__PVT__PDIV__DOT__r_o))
                                            ? ((IData)(
                                                       (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                        [4U] 
                                                        >> 0x13U)) 
                                               + (1U 
                                                  & (((IData)(
                                                              (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                               [4U] 
                                                               >> 0x13U)) 
                                                      & ((IData)(
                                                                 (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                  [4U] 
                                                                  >> 0x12U)) 
                                                         | (0U 
                                                            != 
                                                            (0x3ffffU 
                                                             & (IData)(
                                                                       this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                       [4U]))))) 
                                                     | (((IData)(
                                                                 (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                  [4U] 
                                                                  >> 0x14U)) 
                                                         & (IData)(
                                                                   (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                    [4U] 
                                                                    >> 0x13U))) 
                                                        & (~ 
                                                           ((IData)(
                                                                    (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                     [4U] 
                                                                     >> 0x12U)) 
                                                            | (0U 
                                                               != 
                                                               (0x3ffffU 
                                                                & (IData)(
                                                                          this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                                          [4U])))))))))
                                            : (IData)(
                                                      (this->__PVT__PDIV__DOT__dsr2__DOT__tmp
                                                       [4U] 
                                                       >> 0x13U))));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[1U] = (0xffffU 
                                                  & ((2U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                      [0U] 
                                                      << 2U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                     [0U]));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[2U] = (0xffffU 
                                                  & ((4U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                      [1U] 
                                                      << 4U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                     [1U]));
    this->__PVT__PADD__DOT__dsl1__DOT__tmp[3U] = (0xffffU 
                                                  & ((8U 
                                                      & (IData)(this->__PVT__PADD__DOT__left_shift))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                      [2U] 
                                                      << 8U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                     [2U]));
    this->__PVT__PADD__DOT__DSR_left_out = ((0x8000U 
                                             & this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                             [3U]) ? 
                                            this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                            [3U] : 
                                            (0xfffeU 
                                             & (this->__PVT__PADD__DOT__dsl1__DOT__tmp
                                                [3U] 
                                                << 1U)));
    this->__PVT__PADD__DOT__uut_reg_ro__DOT__exp_oN 
        = (0x7fU & (IData)(this->__PVT__PADD__DOT__le_o));
    this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3 
        = (0x1fU & ((IData)(1U) + (0x1fU & ((IData)(this->__PVT__PADD__DOT__uut_reg_ro__DOT__exp_oN) 
                                            >> 2U))));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[0U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((1U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     ((VL_ULL(0x7ffffffc00000000) 
                                                       & ((QData)((IData)(
                                                                          (0xffffU 
                                                                           & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                                >> 6U)))))))) 
                                                          << 0x22U)) 
                                                      | ((VL_ULL(0x7ffffffe00000000) 
                                                          & ((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                                >> 6U)))) 
                                                             << 0x21U)) 
                                                         | ((VL_ULL(0x7fffffff80000000) 
                                                             & ((QData)((IData)(
                                                                                (3U 
                                                                                & (IData)(this->__PVT__PADD__DOT__le_o)))) 
                                                                << 0x1fU)) 
                                                            | ((QData)((IData)(
                                                                               (0xfffe0000U 
                                                                                & ((IData)(this->__PVT__PADD__DOT__DSR_left_out) 
                                                                                << 0x11U)))) 
                                                               >> 1U))))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                                >> 6U)))))))) 
                                                       << 0x23U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(this->__PVT__PADD__DOT__le_o) 
                                                                              >> 6U)))) 
                                                          << 0x22U) 
                                                         | (((QData)((IData)(
                                                                             (3U 
                                                                              & (IData)(this->__PVT__PADD__DOT__le_o)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              (0xfffe0000U 
                                                                               & ((IData)(this->__PVT__PADD__DOT__DSR_left_out) 
                                                                                << 0x11U)))))))));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[1U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((2U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                      [0U] 
                                                      >> 2U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                     [0U]));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[2U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((4U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                      [1U] 
                                                      >> 4U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                     [1U]));
    this->__PVT__PADD__DOT__dsr2__DOT__tmp[3U] = (VL_ULL(0x7ffffffffffff) 
                                                  & ((8U 
                                                      & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3))
                                                      ? 
                                                     (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                      [2U] 
                                                      >> 8U)
                                                      : 
                                                     this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                     [2U]));
    this->__PVT__PADD__DOT__tmp1_o_rnd = (0xffffU & 
                                          ((0xcU > 
                                            (0xfU & (IData)(this->PADD__DOT____Vcellout__uut_reg_ro____pinNumber3)))
                                            ? ((IData)(
                                                       (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                        [3U] 
                                                        >> 0x13U)) 
                                               + (1U 
                                                  & (((IData)(
                                                              (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                               [3U] 
                                                               >> 0x13U)) 
                                                      & ((IData)(
                                                                 (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                  [3U] 
                                                                  >> 0x12U)) 
                                                         | (0U 
                                                            != 
                                                            (0x3ffffU 
                                                             & (IData)(
                                                                       this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                       [3U]))))) 
                                                     | (((IData)(
                                                                 (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                  [3U] 
                                                                  >> 0x14U)) 
                                                         & (IData)(
                                                                   (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                    [3U] 
                                                                    >> 0x13U))) 
                                                        & (~ 
                                                           ((IData)(
                                                                    (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                     [3U] 
                                                                     >> 0x12U)) 
                                                            | (0U 
                                                               != 
                                                               (0x3ffffU 
                                                                & (IData)(
                                                                          this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                                          [3U])))))))))
                                            : (IData)(
                                                      (this->__PVT__PADD__DOT__dsr2__DOT__tmp
                                                       [3U] 
                                                       >> 0x13U))));
    if (vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_start) {
        if ((0U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
            this->__PVT__q_out = ((1U & (((IData)(this->__PVT__add_inf) 
                                          | ((~ (((IData)(this->__PVT__add_in1) 
                                                  >> 0xfU) 
                                                 | (0U 
                                                    != 
                                                    (0x7fffU 
                                                     & (IData)(this->__PVT__add_in1))))) 
                                             & (~ (
                                                   ((IData)(this->__PVT__add_in2) 
                                                    >> 0xfU) 
                                                   | (0U 
                                                      != 
                                                      (0x7fffU 
                                                       & (IData)(this->__PVT__add_in2))))))) 
                                         | (~ ((IData)(this->__PVT__PADD__DOT__DSR_left_out) 
                                               >> 0xfU))))
                                   ? ((IData)(this->__PVT__add_inf) 
                                      << 0xfU) : (((IData)(this->__PVT__PADD__DOT__ls) 
                                                   << 0xfU) 
                                                  | (0x7fffU 
                                                     & (((IData)(this->__PVT__PADD__DOT__ls)
                                                          ? 
                                                         (- (IData)(this->__PVT__PADD__DOT__tmp1_o_rnd))
                                                          : (IData)(this->__PVT__PADD__DOT__tmp1_o_rnd)) 
                                                        >> 1U))));
        } else {
            if ((1U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
                this->__PVT__q_out = ((1U & (((IData)(this->__PVT__mult_inf) 
                                              | ((~ 
                                                  (((IData)(this->__PVT__mult_in1) 
                                                    >> 0xfU) 
                                                   | (0U 
                                                      != 
                                                      (0x7fffU 
                                                       & (IData)(this->__PVT__mult_in1))))) 
                                                 & (~ 
                                                    (((IData)(this->__PVT__mult_in2) 
                                                      >> 0xfU) 
                                                     | (0U 
                                                        != 
                                                        (0x7fffU 
                                                         & (IData)(this->__PVT__mult_in2))))))) 
                                             | (~ (this->__PVT__PMULT__DOT__mult_mN 
                                                   >> 0x1dU))))
                                       ? ((IData)(this->__PVT__mult_inf) 
                                          << 0xfU) : 
                                      (((IData)(this->__PVT__PMULT__DOT__mult_s) 
                                        << 0xfU) | 
                                       (0x7fffU & (
                                                   ((IData)(this->__PVT__PMULT__DOT__mult_s)
                                                     ? 
                                                    (- (IData)(this->__PVT__PMULT__DOT__tmp1_o_rnd))
                                                     : (IData)(this->__PVT__PMULT__DOT__tmp1_o_rnd)) 
                                                   >> 1U))));
            } else {
                if ((2U == (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_cooprocessor__DOT__unit4_op_sel))) {
                    this->__PVT__q_out = ((1U & (((IData)(this->__PVT__div_inf) 
                                                  | ((~ 
                                                      (((IData)(this->__PVT__div_in1) 
                                                        >> 0xfU) 
                                                       | (0U 
                                                          != 
                                                          (0x7fffU 
                                                           & (IData)(this->__PVT__div_in1))))) 
                                                     | (((IData)(this->__PVT__div_in2) 
                                                         >> 0xfU) 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x7fffU 
                                                                       & (IData)(this->__PVT__div_in2)))))))) 
                                                 | (~ 
                                                    (this->__PVT__PDIV__DOT__div_mN 
                                                     >> 0x1dU))))
                                           ? ((IData)(this->__PVT__div_inf) 
                                              << 0xfU)
                                           : (((IData)(this->__PVT__PDIV__DOT__div_s) 
                                               << 0xfU) 
                                              | (0x7fffU 
                                                 & (((IData)(this->__PVT__PDIV__DOT__div_s)
                                                      ? 
                                                     (- (IData)(this->__PVT__PDIV__DOT__tmp1_o_rnd))
                                                      : (IData)(this->__PVT__PDIV__DOT__tmp1_o_rnd)) 
                                                    >> 1U))));
                }
            }
        }
    }
}

void Vibex_simple_system_posit_unit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vibex_simple_system_posit_unit::_ctor_var_reset\n"); );
    // Body
    start = VL_RAND_RESET_I(1);
    op_sel = VL_RAND_RESET_I(2);
    in1 = VL_RAND_RESET_I(16);
    in2 = VL_RAND_RESET_I(16);
    out = VL_RAND_RESET_I(16);
    done = VL_RAND_RESET_I(1);
    inf = VL_RAND_RESET_I(1);
    zero = VL_RAND_RESET_I(1);
    __PVT__q_out = VL_RAND_RESET_I(16);
    __PVT__q_done = VL_RAND_RESET_I(1);
    __PVT__add_in1 = VL_RAND_RESET_I(16);
    __PVT__add_in2 = VL_RAND_RESET_I(16);
    __PVT__add_start = VL_RAND_RESET_I(1);
    __PVT__add_inf = VL_RAND_RESET_I(1);
    __PVT__mult_in1 = VL_RAND_RESET_I(16);
    __PVT__mult_in2 = VL_RAND_RESET_I(16);
    __PVT__mult_start = VL_RAND_RESET_I(1);
    __PVT__mult_inf = VL_RAND_RESET_I(1);
    __PVT__div_in1 = VL_RAND_RESET_I(16);
    __PVT__div_in2 = VL_RAND_RESET_I(16);
    __PVT__div_start = VL_RAND_RESET_I(1);
    __PVT__div_inf = VL_RAND_RESET_I(1);
    __PVT__PADD__DOT__xin1 = VL_RAND_RESET_I(16);
    __PVT__PADD__DOT__xin2 = VL_RAND_RESET_I(16);
    __PVT__PADD__DOT__m1 = VL_RAND_RESET_I(15);
    __PVT__PADD__DOT__m2 = VL_RAND_RESET_I(15);
    __PVT__PADD__DOT__in1_gt_in2 = VL_RAND_RESET_I(1);
    __PVT__PADD__DOT__ls = VL_RAND_RESET_I(1);
    __PVT__PADD__DOT__lr = VL_RAND_RESET_I(4);
    __PVT__PADD__DOT__sr = VL_RAND_RESET_I(4);
    __PVT__PADD__DOT__le = VL_RAND_RESET_I(2);
    __PVT__PADD__DOT__lm = VL_RAND_RESET_I(15);
    __PVT__PADD__DOT__diff = VL_RAND_RESET_I(8);
    __PVT__PADD__DOT__lr_N = VL_RAND_RESET_I(5);
    __PVT__PADD__DOT__exp_diff = VL_RAND_RESET_I(4);
    __PVT__PADD__DOT__add_m = VL_RAND_RESET_I(17);
    __PVT__PADD__DOT__LOD_in = VL_RAND_RESET_I(16);
    __PVT__PADD__DOT__left_shift = VL_RAND_RESET_I(4);
    __PVT__PADD__DOT__DSR_left_out = VL_RAND_RESET_I(16);
    __PVT__PADD__DOT__le_o = VL_RAND_RESET_I(8);
    PADD__DOT____Vcellout__uut_reg_ro____pinNumber3 = VL_RAND_RESET_I(5);
    __PVT__PADD__DOT__tmp1_o_rnd = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__PADD__DOT__dsr1__DOT__tmp[__Vi0] = VL_RAND_RESET_I(16);
    }}
    __PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl = VL_RAND_RESET_I(1);
    __PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh = VL_RAND_RESET_I(1);
    __PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl = VL_RAND_RESET_I(1);
    __PVT__PADD__DOT__l2__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__PADD__DOT__dsl1__DOT__tmp[__Vi0] = VL_RAND_RESET_I(16);
    }}
    __PVT__PADD__DOT__uut_reg_ro__DOT__exp_oN = VL_RAND_RESET_I(7);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__PADD__DOT__dsr2__DOT__tmp[__Vi0] = VL_RAND_RESET_Q(51);
    }}
    __PVT__PMULT__DOT__xin1 = VL_RAND_RESET_I(16);
    __PVT__PMULT__DOT__xin2 = VL_RAND_RESET_I(16);
    __PVT__PMULT__DOT__mult_s = VL_RAND_RESET_I(1);
    __PVT__PMULT__DOT__mult_m = VL_RAND_RESET_I(30);
    __PVT__PMULT__DOT__mult_mN = VL_RAND_RESET_I(30);
    __PVT__PMULT__DOT__mult_e = VL_RAND_RESET_I(8);
    __PVT__PMULT__DOT__r_o = VL_RAND_RESET_I(5);
    PMULT__DOT____Vcellinp__dsr2__b = VL_RAND_RESET_I(5);
    __PVT__PMULT__DOT__tmp1_o_rnd = VL_RAND_RESET_I(16);
    __PVT__PMULT__DOT__uut_reg_ro__DOT__exp_oN = VL_RAND_RESET_I(7);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            __PVT__PMULT__DOT__dsr2__DOT__tmp[__Vi0] = VL_RAND_RESET_Q(51);
    }}
    __PVT__PDIV__DOT__xin1 = VL_RAND_RESET_I(16);
    __PVT__PDIV__DOT__xin2 = VL_RAND_RESET_I(16);
    __PVT__PDIV__DOT__m1 = VL_RAND_RESET_I(15);
    __PVT__PDIV__DOT__m2 = VL_RAND_RESET_I(15);
    __PVT__PDIV__DOT__div_s = VL_RAND_RESET_I(1);
    __PVT__PDIV__DOT__m2_inv0_tmp = VL_RAND_RESET_I(9);
    __PVT__PDIV__DOT__div_m = VL_RAND_RESET_I(30);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __PVT__PDIV__DOT__m2_inv[__Vi0] = VL_RAND_RESET_I(30);
    }}
    __PVT__PDIV__DOT__div_mN = VL_RAND_RESET_I(30);
    __PVT__PDIV__DOT__div_e = VL_RAND_RESET_I(8);
    __PVT__PDIV__DOT__r_o = VL_RAND_RESET_I(5);
    PDIV__DOT____Vcellinp__dsr2__b = VL_RAND_RESET_I(5);
    __PVT__PDIV__DOT__tmp1_o_rnd = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__PDIV__DOT__genblk4__DOT__m2_inv_X_m2[__Vi0] = VL_RAND_RESET_I(30);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __PVT__PDIV__DOT__genblk4__DOT__two_m2_inv_X_m2[__Vi0] = VL_RAND_RESET_I(16);
    }}
    __PVT__PDIV__DOT__uut_reg_ro__DOT__exp_oN = VL_RAND_RESET_I(7);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            __PVT__PDIV__DOT__dsr2__DOT__tmp[__Vi0] = VL_RAND_RESET_Q(51);
    }}
    __PVT__PDIV__DOT__genblk2__DOT__i_uut__DOT__clk = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            __PVT__PDIV__DOT__genblk2__DOT__i_uut__DOT__a1_inv_rom[__Vi0] = VL_RAND_RESET_I(9);
    }}
    __Vtableidx1 = 0;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[0] = 0x1ffU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[1] = 0x1feU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[2] = 0x1fcU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[3] = 0x1faU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[4] = 0x1f8U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[5] = 0x1f6U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[6] = 0x1f4U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[7] = 0x1f2U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[8] = 0x1f0U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[9] = 0x1eeU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[10] = 0x1ecU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[11] = 0x1eaU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[12] = 0x1e9U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[13] = 0x1e7U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[14] = 0x1e5U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[15] = 0x1e3U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[16] = 0x1e1U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[17] = 0x1e0U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[18] = 0x1deU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[19] = 0x1dcU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[20] = 0x1daU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[21] = 0x1d9U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[22] = 0x1d7U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[23] = 0x1d5U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[24] = 0x1d4U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[25] = 0x1d2U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[26] = 0x1d0U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[27] = 0x1cfU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[28] = 0x1cdU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[29] = 0x1cbU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[30] = 0x1caU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[31] = 0x1c8U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[32] = 0x1c7U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[33] = 0x1c5U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[34] = 0x1c3U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[35] = 0x1c2U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[36] = 0x1c0U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[37] = 0x1bfU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[38] = 0x1bdU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[39] = 0x1bcU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[40] = 0x1baU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[41] = 0x1b9U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[42] = 0x1b7U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[43] = 0x1b6U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[44] = 0x1b4U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[45] = 0x1b3U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[46] = 0x1b2U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[47] = 0x1b0U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[48] = 0x1afU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[49] = 0x1adU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[50] = 0x1acU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[51] = 0x1aaU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[52] = 0x1a9U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[53] = 0x1a8U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[54] = 0x1a6U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[55] = 0x1a5U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[56] = 0x1a4U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[57] = 0x1a2U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[58] = 0x1a1U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[59] = 0x1a0U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[60] = 0x19eU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[61] = 0x19dU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[62] = 0x19cU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[63] = 0x19aU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[64] = 0x199U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[65] = 0x198U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[66] = 0x197U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[67] = 0x195U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[68] = 0x194U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[69] = 0x193U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[70] = 0x192U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[71] = 0x190U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[72] = 0x18fU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[73] = 0x18eU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[74] = 0x18dU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[75] = 0x18bU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[76] = 0x18aU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[77] = 0x189U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[78] = 0x188U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[79] = 0x187U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[80] = 0x186U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[81] = 0x184U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[82] = 0x183U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[83] = 0x182U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[84] = 0x181U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[85] = 0x180U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[86] = 0x17fU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[87] = 0x17eU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[88] = 0x17dU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[89] = 0x17bU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[90] = 0x17aU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[91] = 0x179U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[92] = 0x178U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[93] = 0x177U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[94] = 0x176U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[95] = 0x175U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[96] = 0x174U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[97] = 0x173U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[98] = 0x172U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[99] = 0x171U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[100] = 0x170U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[101] = 0x16fU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[102] = 0x16eU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[103] = 0x16dU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[104] = 0x16cU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[105] = 0x16bU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[106] = 0x16aU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[107] = 0x169U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[108] = 0x168U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[109] = 0x167U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[110] = 0x166U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[111] = 0x165U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[112] = 0x164U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[113] = 0x163U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[114] = 0x162U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[115] = 0x161U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[116] = 0x160U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[117] = 0x15fU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[118] = 0x15eU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[119] = 0x15dU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[120] = 0x15cU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[121] = 0x15bU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[122] = 0x15aU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[123] = 0x159U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[124] = 0x158U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[125] = 0x158U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[126] = 0x157U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[127] = 0x156U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[128] = 0x155U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[129] = 0x154U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[130] = 0x153U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[131] = 0x152U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[132] = 0x151U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[133] = 0x150U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[134] = 0x150U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[135] = 0x14fU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[136] = 0x14eU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[137] = 0x14dU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[138] = 0x14cU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[139] = 0x14bU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[140] = 0x14aU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[141] = 0x14aU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[142] = 0x149U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[143] = 0x148U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[144] = 0x147U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[145] = 0x146U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[146] = 0x146U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[147] = 0x145U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[148] = 0x144U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[149] = 0x143U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[150] = 0x142U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[151] = 0x142U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[152] = 0x141U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[153] = 0x140U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[154] = 0x13fU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[155] = 0x13eU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[156] = 0x13eU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[157] = 0x13dU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[158] = 0x13cU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[159] = 0x13bU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[160] = 0x13bU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[161] = 0x13aU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[162] = 0x139U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[163] = 0x138U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[164] = 0x138U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[165] = 0x137U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[166] = 0x136U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[167] = 0x135U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[168] = 0x135U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[169] = 0x134U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[170] = 0x133U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[171] = 0x132U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[172] = 0x132U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[173] = 0x131U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[174] = 0x130U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[175] = 0x130U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[176] = 0x12fU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[177] = 0x12eU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[178] = 0x12eU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[179] = 0x12dU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[180] = 0x12cU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[181] = 0x12bU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[182] = 0x12bU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[183] = 0x12aU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[184] = 0x129U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[185] = 0x129U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[186] = 0x128U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[187] = 0x127U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[188] = 0x127U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[189] = 0x126U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[190] = 0x125U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[191] = 0x125U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[192] = 0x124U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[193] = 0x123U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[194] = 0x123U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[195] = 0x122U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[196] = 0x121U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[197] = 0x121U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[198] = 0x120U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[199] = 0x120U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[200] = 0x11fU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[201] = 0x11eU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[202] = 0x11eU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[203] = 0x11dU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[204] = 0x11cU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[205] = 0x11cU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[206] = 0x11bU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[207] = 0x11bU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[208] = 0x11aU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[209] = 0x119U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[210] = 0x119U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[211] = 0x118U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[212] = 0x118U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[213] = 0x117U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[214] = 0x116U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[215] = 0x116U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[216] = 0x115U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[217] = 0x115U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[218] = 0x114U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[219] = 0x113U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[220] = 0x113U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[221] = 0x112U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[222] = 0x112U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[223] = 0x111U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[224] = 0x111U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[225] = 0x110U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[226] = 0x10fU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[227] = 0x10fU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[228] = 0x10eU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[229] = 0x10eU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[230] = 0x10dU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[231] = 0x10dU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[232] = 0x10cU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[233] = 0x10cU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[234] = 0x10bU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[235] = 0x10aU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[236] = 0x10aU;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[237] = 0x109U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[238] = 0x109U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[239] = 0x108U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[240] = 0x108U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[241] = 0x107U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[242] = 0x107U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[243] = 0x106U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[244] = 0x106U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[245] = 0x105U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[246] = 0x105U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[247] = 0x104U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[248] = 0x104U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[249] = 0x103U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[250] = 0x103U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[251] = 0x102U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[252] = 0x102U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[253] = 0x101U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[254] = 0x101U;
    __Vtable1___PVT__PDIV__DOT__m2_inv0_tmp[255] = 0x100U;
    __Vtableidx2 = 0;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[0] = 0x1ffU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[1] = 0x1feU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[2] = 0x1fcU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[3] = 0x1faU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[4] = 0x1f8U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[5] = 0x1f6U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[6] = 0x1f4U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[7] = 0x1f2U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[8] = 0x1f0U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[9] = 0x1eeU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[10] = 0x1ecU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[11] = 0x1eaU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[12] = 0x1e9U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[13] = 0x1e7U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[14] = 0x1e5U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[15] = 0x1e3U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[16] = 0x1e1U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[17] = 0x1e0U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[18] = 0x1deU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[19] = 0x1dcU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[20] = 0x1daU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[21] = 0x1d9U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[22] = 0x1d7U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[23] = 0x1d5U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[24] = 0x1d4U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[25] = 0x1d2U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[26] = 0x1d0U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[27] = 0x1cfU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[28] = 0x1cdU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[29] = 0x1cbU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[30] = 0x1caU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[31] = 0x1c8U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[32] = 0x1c7U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[33] = 0x1c5U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[34] = 0x1c3U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[35] = 0x1c2U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[36] = 0x1c0U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[37] = 0x1bfU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[38] = 0x1bdU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[39] = 0x1bcU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[40] = 0x1baU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[41] = 0x1b9U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[42] = 0x1b7U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[43] = 0x1b6U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[44] = 0x1b4U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[45] = 0x1b3U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[46] = 0x1b2U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[47] = 0x1b0U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[48] = 0x1afU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[49] = 0x1adU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[50] = 0x1acU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[51] = 0x1aaU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[52] = 0x1a9U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[53] = 0x1a8U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[54] = 0x1a6U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[55] = 0x1a5U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[56] = 0x1a4U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[57] = 0x1a2U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[58] = 0x1a1U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[59] = 0x1a0U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[60] = 0x19eU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[61] = 0x19dU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[62] = 0x19cU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[63] = 0x19aU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[64] = 0x199U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[65] = 0x198U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[66] = 0x197U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[67] = 0x195U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[68] = 0x194U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[69] = 0x193U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[70] = 0x192U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[71] = 0x190U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[72] = 0x18fU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[73] = 0x18eU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[74] = 0x18dU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[75] = 0x18bU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[76] = 0x18aU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[77] = 0x189U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[78] = 0x188U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[79] = 0x187U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[80] = 0x186U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[81] = 0x184U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[82] = 0x183U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[83] = 0x182U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[84] = 0x181U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[85] = 0x180U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[86] = 0x17fU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[87] = 0x17eU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[88] = 0x17dU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[89] = 0x17bU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[90] = 0x17aU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[91] = 0x179U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[92] = 0x178U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[93] = 0x177U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[94] = 0x176U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[95] = 0x175U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[96] = 0x174U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[97] = 0x173U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[98] = 0x172U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[99] = 0x171U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[100] = 0x170U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[101] = 0x16fU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[102] = 0x16eU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[103] = 0x16dU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[104] = 0x16cU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[105] = 0x16bU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[106] = 0x16aU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[107] = 0x169U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[108] = 0x168U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[109] = 0x167U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[110] = 0x166U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[111] = 0x165U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[112] = 0x164U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[113] = 0x163U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[114] = 0x162U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[115] = 0x161U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[116] = 0x160U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[117] = 0x15fU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[118] = 0x15eU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[119] = 0x15dU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[120] = 0x15cU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[121] = 0x15bU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[122] = 0x15aU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[123] = 0x159U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[124] = 0x158U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[125] = 0x158U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[126] = 0x157U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[127] = 0x156U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[128] = 0x155U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[129] = 0x154U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[130] = 0x153U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[131] = 0x152U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[132] = 0x151U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[133] = 0x150U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[134] = 0x150U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[135] = 0x14fU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[136] = 0x14eU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[137] = 0x14dU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[138] = 0x14cU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[139] = 0x14bU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[140] = 0x14aU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[141] = 0x14aU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[142] = 0x149U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[143] = 0x148U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[144] = 0x147U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[145] = 0x146U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[146] = 0x146U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[147] = 0x145U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[148] = 0x144U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[149] = 0x143U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[150] = 0x142U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[151] = 0x142U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[152] = 0x141U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[153] = 0x140U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[154] = 0x13fU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[155] = 0x13eU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[156] = 0x13eU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[157] = 0x13dU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[158] = 0x13cU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[159] = 0x13bU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[160] = 0x13bU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[161] = 0x13aU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[162] = 0x139U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[163] = 0x138U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[164] = 0x138U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[165] = 0x137U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[166] = 0x136U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[167] = 0x135U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[168] = 0x135U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[169] = 0x134U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[170] = 0x133U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[171] = 0x132U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[172] = 0x132U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[173] = 0x131U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[174] = 0x130U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[175] = 0x130U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[176] = 0x12fU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[177] = 0x12eU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[178] = 0x12eU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[179] = 0x12dU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[180] = 0x12cU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[181] = 0x12bU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[182] = 0x12bU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[183] = 0x12aU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[184] = 0x129U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[185] = 0x129U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[186] = 0x128U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[187] = 0x127U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[188] = 0x127U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[189] = 0x126U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[190] = 0x125U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[191] = 0x125U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[192] = 0x124U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[193] = 0x123U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[194] = 0x123U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[195] = 0x122U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[196] = 0x121U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[197] = 0x121U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[198] = 0x120U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[199] = 0x120U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[200] = 0x11fU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[201] = 0x11eU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[202] = 0x11eU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[203] = 0x11dU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[204] = 0x11cU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[205] = 0x11cU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[206] = 0x11bU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[207] = 0x11bU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[208] = 0x11aU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[209] = 0x119U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[210] = 0x119U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[211] = 0x118U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[212] = 0x118U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[213] = 0x117U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[214] = 0x116U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[215] = 0x116U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[216] = 0x115U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[217] = 0x115U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[218] = 0x114U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[219] = 0x113U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[220] = 0x113U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[221] = 0x112U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[222] = 0x112U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[223] = 0x111U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[224] = 0x111U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[225] = 0x110U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[226] = 0x10fU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[227] = 0x10fU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[228] = 0x10eU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[229] = 0x10eU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[230] = 0x10dU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[231] = 0x10dU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[232] = 0x10cU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[233] = 0x10cU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[234] = 0x10bU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[235] = 0x10aU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[236] = 0x10aU;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[237] = 0x109U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[238] = 0x109U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[239] = 0x108U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[240] = 0x108U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[241] = 0x107U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[242] = 0x107U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[243] = 0x106U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[244] = 0x106U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[245] = 0x105U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[246] = 0x105U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[247] = 0x104U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[248] = 0x104U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[249] = 0x103U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[250] = 0x103U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[251] = 0x102U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[252] = 0x102U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[253] = 0x101U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[254] = 0x101U;
    __Vtable2___PVT__PDIV__DOT__m2_inv0_tmp[255] = 0x100U;
    __Vtableidx3 = 0;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[0] = 0x1ffU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[1] = 0x1feU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[2] = 0x1fcU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[3] = 0x1faU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[4] = 0x1f8U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[5] = 0x1f6U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[6] = 0x1f4U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[7] = 0x1f2U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[8] = 0x1f0U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[9] = 0x1eeU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[10] = 0x1ecU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[11] = 0x1eaU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[12] = 0x1e9U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[13] = 0x1e7U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[14] = 0x1e5U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[15] = 0x1e3U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[16] = 0x1e1U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[17] = 0x1e0U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[18] = 0x1deU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[19] = 0x1dcU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[20] = 0x1daU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[21] = 0x1d9U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[22] = 0x1d7U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[23] = 0x1d5U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[24] = 0x1d4U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[25] = 0x1d2U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[26] = 0x1d0U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[27] = 0x1cfU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[28] = 0x1cdU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[29] = 0x1cbU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[30] = 0x1caU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[31] = 0x1c8U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[32] = 0x1c7U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[33] = 0x1c5U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[34] = 0x1c3U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[35] = 0x1c2U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[36] = 0x1c0U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[37] = 0x1bfU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[38] = 0x1bdU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[39] = 0x1bcU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[40] = 0x1baU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[41] = 0x1b9U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[42] = 0x1b7U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[43] = 0x1b6U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[44] = 0x1b4U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[45] = 0x1b3U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[46] = 0x1b2U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[47] = 0x1b0U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[48] = 0x1afU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[49] = 0x1adU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[50] = 0x1acU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[51] = 0x1aaU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[52] = 0x1a9U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[53] = 0x1a8U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[54] = 0x1a6U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[55] = 0x1a5U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[56] = 0x1a4U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[57] = 0x1a2U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[58] = 0x1a1U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[59] = 0x1a0U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[60] = 0x19eU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[61] = 0x19dU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[62] = 0x19cU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[63] = 0x19aU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[64] = 0x199U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[65] = 0x198U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[66] = 0x197U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[67] = 0x195U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[68] = 0x194U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[69] = 0x193U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[70] = 0x192U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[71] = 0x190U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[72] = 0x18fU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[73] = 0x18eU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[74] = 0x18dU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[75] = 0x18bU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[76] = 0x18aU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[77] = 0x189U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[78] = 0x188U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[79] = 0x187U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[80] = 0x186U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[81] = 0x184U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[82] = 0x183U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[83] = 0x182U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[84] = 0x181U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[85] = 0x180U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[86] = 0x17fU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[87] = 0x17eU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[88] = 0x17dU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[89] = 0x17bU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[90] = 0x17aU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[91] = 0x179U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[92] = 0x178U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[93] = 0x177U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[94] = 0x176U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[95] = 0x175U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[96] = 0x174U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[97] = 0x173U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[98] = 0x172U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[99] = 0x171U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[100] = 0x170U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[101] = 0x16fU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[102] = 0x16eU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[103] = 0x16dU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[104] = 0x16cU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[105] = 0x16bU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[106] = 0x16aU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[107] = 0x169U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[108] = 0x168U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[109] = 0x167U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[110] = 0x166U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[111] = 0x165U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[112] = 0x164U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[113] = 0x163U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[114] = 0x162U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[115] = 0x161U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[116] = 0x160U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[117] = 0x15fU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[118] = 0x15eU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[119] = 0x15dU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[120] = 0x15cU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[121] = 0x15bU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[122] = 0x15aU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[123] = 0x159U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[124] = 0x158U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[125] = 0x158U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[126] = 0x157U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[127] = 0x156U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[128] = 0x155U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[129] = 0x154U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[130] = 0x153U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[131] = 0x152U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[132] = 0x151U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[133] = 0x150U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[134] = 0x150U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[135] = 0x14fU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[136] = 0x14eU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[137] = 0x14dU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[138] = 0x14cU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[139] = 0x14bU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[140] = 0x14aU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[141] = 0x14aU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[142] = 0x149U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[143] = 0x148U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[144] = 0x147U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[145] = 0x146U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[146] = 0x146U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[147] = 0x145U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[148] = 0x144U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[149] = 0x143U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[150] = 0x142U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[151] = 0x142U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[152] = 0x141U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[153] = 0x140U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[154] = 0x13fU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[155] = 0x13eU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[156] = 0x13eU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[157] = 0x13dU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[158] = 0x13cU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[159] = 0x13bU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[160] = 0x13bU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[161] = 0x13aU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[162] = 0x139U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[163] = 0x138U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[164] = 0x138U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[165] = 0x137U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[166] = 0x136U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[167] = 0x135U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[168] = 0x135U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[169] = 0x134U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[170] = 0x133U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[171] = 0x132U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[172] = 0x132U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[173] = 0x131U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[174] = 0x130U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[175] = 0x130U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[176] = 0x12fU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[177] = 0x12eU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[178] = 0x12eU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[179] = 0x12dU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[180] = 0x12cU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[181] = 0x12bU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[182] = 0x12bU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[183] = 0x12aU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[184] = 0x129U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[185] = 0x129U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[186] = 0x128U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[187] = 0x127U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[188] = 0x127U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[189] = 0x126U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[190] = 0x125U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[191] = 0x125U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[192] = 0x124U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[193] = 0x123U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[194] = 0x123U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[195] = 0x122U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[196] = 0x121U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[197] = 0x121U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[198] = 0x120U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[199] = 0x120U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[200] = 0x11fU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[201] = 0x11eU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[202] = 0x11eU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[203] = 0x11dU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[204] = 0x11cU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[205] = 0x11cU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[206] = 0x11bU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[207] = 0x11bU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[208] = 0x11aU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[209] = 0x119U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[210] = 0x119U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[211] = 0x118U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[212] = 0x118U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[213] = 0x117U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[214] = 0x116U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[215] = 0x116U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[216] = 0x115U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[217] = 0x115U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[218] = 0x114U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[219] = 0x113U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[220] = 0x113U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[221] = 0x112U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[222] = 0x112U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[223] = 0x111U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[224] = 0x111U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[225] = 0x110U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[226] = 0x10fU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[227] = 0x10fU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[228] = 0x10eU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[229] = 0x10eU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[230] = 0x10dU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[231] = 0x10dU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[232] = 0x10cU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[233] = 0x10cU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[234] = 0x10bU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[235] = 0x10aU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[236] = 0x10aU;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[237] = 0x109U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[238] = 0x109U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[239] = 0x108U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[240] = 0x108U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[241] = 0x107U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[242] = 0x107U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[243] = 0x106U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[244] = 0x106U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[245] = 0x105U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[246] = 0x105U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[247] = 0x104U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[248] = 0x104U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[249] = 0x103U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[250] = 0x103U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[251] = 0x102U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[252] = 0x102U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[253] = 0x101U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[254] = 0x101U;
    __Vtable3___PVT__PDIV__DOT__m2_inv0_tmp[255] = 0x100U;
    __Vtableidx4 = 0;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[0] = 0x1ffU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[1] = 0x1feU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[2] = 0x1fcU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[3] = 0x1faU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[4] = 0x1f8U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[5] = 0x1f6U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[6] = 0x1f4U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[7] = 0x1f2U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[8] = 0x1f0U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[9] = 0x1eeU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[10] = 0x1ecU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[11] = 0x1eaU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[12] = 0x1e9U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[13] = 0x1e7U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[14] = 0x1e5U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[15] = 0x1e3U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[16] = 0x1e1U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[17] = 0x1e0U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[18] = 0x1deU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[19] = 0x1dcU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[20] = 0x1daU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[21] = 0x1d9U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[22] = 0x1d7U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[23] = 0x1d5U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[24] = 0x1d4U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[25] = 0x1d2U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[26] = 0x1d0U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[27] = 0x1cfU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[28] = 0x1cdU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[29] = 0x1cbU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[30] = 0x1caU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[31] = 0x1c8U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[32] = 0x1c7U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[33] = 0x1c5U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[34] = 0x1c3U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[35] = 0x1c2U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[36] = 0x1c0U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[37] = 0x1bfU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[38] = 0x1bdU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[39] = 0x1bcU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[40] = 0x1baU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[41] = 0x1b9U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[42] = 0x1b7U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[43] = 0x1b6U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[44] = 0x1b4U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[45] = 0x1b3U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[46] = 0x1b2U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[47] = 0x1b0U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[48] = 0x1afU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[49] = 0x1adU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[50] = 0x1acU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[51] = 0x1aaU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[52] = 0x1a9U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[53] = 0x1a8U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[54] = 0x1a6U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[55] = 0x1a5U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[56] = 0x1a4U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[57] = 0x1a2U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[58] = 0x1a1U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[59] = 0x1a0U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[60] = 0x19eU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[61] = 0x19dU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[62] = 0x19cU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[63] = 0x19aU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[64] = 0x199U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[65] = 0x198U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[66] = 0x197U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[67] = 0x195U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[68] = 0x194U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[69] = 0x193U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[70] = 0x192U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[71] = 0x190U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[72] = 0x18fU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[73] = 0x18eU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[74] = 0x18dU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[75] = 0x18bU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[76] = 0x18aU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[77] = 0x189U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[78] = 0x188U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[79] = 0x187U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[80] = 0x186U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[81] = 0x184U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[82] = 0x183U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[83] = 0x182U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[84] = 0x181U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[85] = 0x180U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[86] = 0x17fU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[87] = 0x17eU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[88] = 0x17dU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[89] = 0x17bU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[90] = 0x17aU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[91] = 0x179U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[92] = 0x178U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[93] = 0x177U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[94] = 0x176U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[95] = 0x175U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[96] = 0x174U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[97] = 0x173U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[98] = 0x172U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[99] = 0x171U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[100] = 0x170U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[101] = 0x16fU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[102] = 0x16eU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[103] = 0x16dU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[104] = 0x16cU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[105] = 0x16bU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[106] = 0x16aU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[107] = 0x169U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[108] = 0x168U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[109] = 0x167U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[110] = 0x166U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[111] = 0x165U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[112] = 0x164U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[113] = 0x163U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[114] = 0x162U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[115] = 0x161U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[116] = 0x160U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[117] = 0x15fU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[118] = 0x15eU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[119] = 0x15dU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[120] = 0x15cU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[121] = 0x15bU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[122] = 0x15aU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[123] = 0x159U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[124] = 0x158U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[125] = 0x158U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[126] = 0x157U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[127] = 0x156U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[128] = 0x155U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[129] = 0x154U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[130] = 0x153U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[131] = 0x152U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[132] = 0x151U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[133] = 0x150U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[134] = 0x150U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[135] = 0x14fU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[136] = 0x14eU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[137] = 0x14dU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[138] = 0x14cU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[139] = 0x14bU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[140] = 0x14aU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[141] = 0x14aU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[142] = 0x149U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[143] = 0x148U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[144] = 0x147U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[145] = 0x146U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[146] = 0x146U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[147] = 0x145U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[148] = 0x144U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[149] = 0x143U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[150] = 0x142U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[151] = 0x142U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[152] = 0x141U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[153] = 0x140U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[154] = 0x13fU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[155] = 0x13eU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[156] = 0x13eU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[157] = 0x13dU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[158] = 0x13cU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[159] = 0x13bU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[160] = 0x13bU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[161] = 0x13aU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[162] = 0x139U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[163] = 0x138U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[164] = 0x138U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[165] = 0x137U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[166] = 0x136U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[167] = 0x135U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[168] = 0x135U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[169] = 0x134U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[170] = 0x133U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[171] = 0x132U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[172] = 0x132U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[173] = 0x131U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[174] = 0x130U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[175] = 0x130U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[176] = 0x12fU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[177] = 0x12eU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[178] = 0x12eU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[179] = 0x12dU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[180] = 0x12cU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[181] = 0x12bU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[182] = 0x12bU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[183] = 0x12aU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[184] = 0x129U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[185] = 0x129U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[186] = 0x128U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[187] = 0x127U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[188] = 0x127U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[189] = 0x126U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[190] = 0x125U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[191] = 0x125U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[192] = 0x124U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[193] = 0x123U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[194] = 0x123U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[195] = 0x122U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[196] = 0x121U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[197] = 0x121U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[198] = 0x120U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[199] = 0x120U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[200] = 0x11fU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[201] = 0x11eU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[202] = 0x11eU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[203] = 0x11dU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[204] = 0x11cU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[205] = 0x11cU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[206] = 0x11bU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[207] = 0x11bU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[208] = 0x11aU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[209] = 0x119U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[210] = 0x119U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[211] = 0x118U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[212] = 0x118U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[213] = 0x117U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[214] = 0x116U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[215] = 0x116U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[216] = 0x115U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[217] = 0x115U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[218] = 0x114U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[219] = 0x113U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[220] = 0x113U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[221] = 0x112U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[222] = 0x112U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[223] = 0x111U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[224] = 0x111U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[225] = 0x110U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[226] = 0x10fU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[227] = 0x10fU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[228] = 0x10eU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[229] = 0x10eU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[230] = 0x10dU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[231] = 0x10dU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[232] = 0x10cU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[233] = 0x10cU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[234] = 0x10bU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[235] = 0x10aU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[236] = 0x10aU;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[237] = 0x109U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[238] = 0x109U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[239] = 0x108U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[240] = 0x108U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[241] = 0x107U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[242] = 0x107U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[243] = 0x106U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[244] = 0x106U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[245] = 0x105U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[246] = 0x105U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[247] = 0x104U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[248] = 0x104U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[249] = 0x103U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[250] = 0x103U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[251] = 0x102U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[252] = 0x102U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[253] = 0x101U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[254] = 0x101U;
    __Vtable4___PVT__PDIV__DOT__m2_inv0_tmp[255] = 0x100U;
}
