// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_simple_system.h for the primary calling header

#include "Vibex_simple_system_data_extract_v1.h"
#include "Vibex_simple_system__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vibex_simple_system_data_extract_v1) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vibex_simple_system_data_extract_v1::__Vconfigure(Vibex_simple_system__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vibex_simple_system_data_extract_v1::~Vibex_simple_system_data_extract_v1() {
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PADD__DOT__uut_de1__11(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PADD__DOT__uut_de1__11\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin1))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin1) 
                                                    << 2U))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PADD__DOT__uut_de1__35(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PADD__DOT__uut_de1__35\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin1))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin1) 
                                                    << 2U))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_combo__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PADD__DOT__uut_de1__59(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_combo__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PADD__DOT__uut_de1__59\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PADD__DOT__uut_de2__12(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PADD__DOT__uut_de2__12\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin2))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin2) 
                                                    << 2U))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PADD__DOT__uut_de2__36(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PADD__DOT__uut_de2__36\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin2))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin2) 
                                                    << 2U))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PADD__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PMULT__DOT__uut_de1__8(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PMULT__DOT__uut_de1__8\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin1))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin1) 
                                                    << 2U))));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PMULT__DOT__uut_de1__32(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PMULT__DOT__uut_de1__32\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin1))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin1) 
                                                    << 2U))));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PMULT__DOT__uut_de2__7(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PMULT__DOT__uut_de2__7\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin2))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin2) 
                                                    << 2U))));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PMULT__DOT__uut_de2__31(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PMULT__DOT__uut_de2__31\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin2))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PMULT__DOT__xin2) 
                                                    << 2U))));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PDIV__DOT__uut_de1__9(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PDIV__DOT__uut_de1__9\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin1))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin1) 
                                                    << 2U))));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PDIV__DOT__uut_de1__33(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PDIV__DOT__uut_de1__33\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin1))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin1) 
                                                    << 2U))));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PDIV__DOT__uut_de2__10(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PDIV__DOT__uut_de2__10\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin2))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin2) 
                                                    << 2U))));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PDIV__DOT__uut_de2__34(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1__PDIV__DOT__uut_de2__34\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin2))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT1.__PVT__PDIV__DOT__xin2) 
                                                    << 2U))));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PADD__DOT__uut_de1__17(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PADD__DOT__uut_de1__17\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin1))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin1) 
                                                    << 2U))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PADD__DOT__uut_de1__41(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PADD__DOT__uut_de1__41\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin1))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin1) 
                                                    << 2U))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PADD__DOT__uut_de2__18(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PADD__DOT__uut_de2__18\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin2))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin2) 
                                                    << 2U))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PADD__DOT__uut_de2__42(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PADD__DOT__uut_de2__42\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin2))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin2) 
                                                    << 2U))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PADD__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PMULT__DOT__uut_de1__14(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PMULT__DOT__uut_de1__14\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin1))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin1) 
                                                    << 2U))));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PMULT__DOT__uut_de1__38(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PMULT__DOT__uut_de1__38\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin1))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin1) 
                                                    << 2U))));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PMULT__DOT__uut_de2__13(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PMULT__DOT__uut_de2__13\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin2))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin2) 
                                                    << 2U))));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PMULT__DOT__uut_de2__37(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PMULT__DOT__uut_de2__37\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin2))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PMULT__DOT__xin2) 
                                                    << 2U))));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PDIV__DOT__uut_de1__15(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PDIV__DOT__uut_de1__15\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin1))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin1) 
                                                    << 2U))));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PDIV__DOT__uut_de1__39(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PDIV__DOT__uut_de1__39\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin1))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin1) 
                                                    << 2U))));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PDIV__DOT__uut_de2__16(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PDIV__DOT__uut_de2__16\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin2))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin2) 
                                                    << 2U))));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PDIV__DOT__uut_de2__40(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2__PDIV__DOT__uut_de2__40\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin2))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT2.__PVT__PDIV__DOT__xin2) 
                                                    << 2U))));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PADD__DOT__uut_de1__23(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PADD__DOT__uut_de1__23\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin1))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin1) 
                                                    << 2U))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PADD__DOT__uut_de1__47(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PADD__DOT__uut_de1__47\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin1))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin1) 
                                                    << 2U))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PADD__DOT__uut_de2__24(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PADD__DOT__uut_de2__24\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin2))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin2) 
                                                    << 2U))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PADD__DOT__uut_de2__48(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PADD__DOT__uut_de2__48\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin2))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin2) 
                                                    << 2U))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PADD__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PMULT__DOT__uut_de1__20(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PMULT__DOT__uut_de1__20\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin1))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin1) 
                                                    << 2U))));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PMULT__DOT__uut_de1__44(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PMULT__DOT__uut_de1__44\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin1))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin1) 
                                                    << 2U))));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PMULT__DOT__uut_de2__19(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PMULT__DOT__uut_de2__19\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin2))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin2) 
                                                    << 2U))));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PMULT__DOT__uut_de2__43(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PMULT__DOT__uut_de2__43\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin2))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PMULT__DOT__xin2) 
                                                    << 2U))));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PDIV__DOT__uut_de1__21(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PDIV__DOT__uut_de1__21\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin1))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin1) 
                                                    << 2U))));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PDIV__DOT__uut_de1__45(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PDIV__DOT__uut_de1__45\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin1))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin1) 
                                                    << 2U))));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PDIV__DOT__uut_de2__22(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PDIV__DOT__uut_de2__22\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin2))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin2) 
                                                    << 2U))));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PDIV__DOT__uut_de2__46(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3__PDIV__DOT__uut_de2__46\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin2))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT3.__PVT__PDIV__DOT__xin2) 
                                                    << 2U))));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PADD__DOT__uut_de1__29(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PADD__DOT__uut_de1__29\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin1))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin1) 
                                                    << 2U))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PADD__DOT__uut_de1__53(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PADD__DOT__uut_de1__53\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin1))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin1) 
                                                    << 2U))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PADD__DOT__uut_de2__30(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PADD__DOT__uut_de2__30\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin2))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin2) 
                                                    << 2U))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PADD__DOT__uut_de2__54(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PADD__DOT__uut_de2__54\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin2))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin2) 
                                                    << 2U))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PADD__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PMULT__DOT__uut_de1__26(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PMULT__DOT__uut_de1__26\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin1))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin1) 
                                                    << 2U))));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PMULT__DOT__uut_de1__50(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PMULT__DOT__uut_de1__50\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin1))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin1) 
                                                    << 2U))));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PMULT__DOT__uut_de2__25(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PMULT__DOT__uut_de2__25\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin2))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin2) 
                                                    << 2U))));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PMULT__DOT__uut_de2__49(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PMULT__DOT__uut_de2__49\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin2))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PMULT__DOT__xin2) 
                                                    << 2U))));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PDIV__DOT__uut_de1__27(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PDIV__DOT__uut_de1__27\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin1))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin1) 
                                                    << 2U))));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PDIV__DOT__uut_de1__51(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PDIV__DOT__uut_de1__51\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin1))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin1) 
                                                    << 2U))));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PDIV__DOT__uut_de2__28(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PDIV__DOT__uut_de2__28\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin2))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin2) 
                                                    << 2U))));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PDIV__DOT__uut_de2__52(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_sequent__TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4__PDIV__DOT__uut_de2__52\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin2))
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system__DOT__u_posit_cooprocessor__DOT__PUNIT4.__PVT__PDIV__DOT__xin2) 
                                                    << 2U))));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__uut_de1__6(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__uut_de1__6\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin1))
                                                   : (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin1) 
                                                    << 2U))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_multiclk__TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__uut_de1__84(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_multiclk__TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__uut_de1__84\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin1))
                                                   : (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin1) 
                                                    << 2U))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin1))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__uut_de2__5(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__uut_de2__5\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin2))
                                                   : (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin2) 
                                                    << 2U))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_multiclk__TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__uut_de2__83(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_multiclk__TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__uut_de2__83\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin2))
                                                   : (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin2) 
                                                    << 2U))));
    this->regime = (0xfU & ((0x4000U & (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__padd__DOT__xin2))
                             ? ((IData)(this->__PVT__k) 
                                - (IData)(1U)) : (IData)(this->__PVT__k)));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__uut_de1__1(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__uut_de1__1\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__xin1))
                                                   : (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__xin1) 
                                                    << 2U))));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_multiclk__TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__uut_de1__79(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_multiclk__TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__uut_de1__79\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__xin1))
                                                   : (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__xin1) 
                                                    << 2U))));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__uut_de2__2(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__uut_de2__2\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__xin2))
                                                   : (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__xin2) 
                                                    << 2U))));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_multiclk__TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__uut_de2__80(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_multiclk__TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__uut_de2__80\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__xin2))
                                                   : (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pmul__DOT__xin2) 
                                                    << 2U))));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__uut_de1__3(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__uut_de1__3\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__xin1))
                                                   : (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__xin1) 
                                                    << 2U))));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_multiclk__TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__uut_de1__81(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_multiclk__TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__uut_de1__81\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__xin1))
                                                   ? 
                                                  (~ (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__xin1))
                                                   : (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__xin1)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__xin1) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__xin1) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__xin1) 
                                                    << 2U))));
}

void Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__uut_de2__4(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_settle__TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__uut_de2__4\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__xin2))
                                                   : (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__xin2) 
                                                    << 2U))));
    this->__PVT__ls__DOT__tmp[1U] = (0xffffU & ((2U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [0U] 
                                                 << 2U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [0U]));
    this->__PVT__ls__DOT__tmp[2U] = (0xffffU & ((4U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [1U] 
                                                 << 4U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [1U]));
    this->__PVT__ls__DOT__tmp[3U] = (0xffffU & ((8U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (this->__PVT__ls__DOT__tmp
                                                 [2U] 
                                                 << 8U)
                                                 : 
                                                this->__PVT__ls__DOT__tmp
                                                [2U]));
}

VL_INLINE_OPT void Vibex_simple_system_data_extract_v1::_multiclk__TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__uut_de2__82(Vibex_simple_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_multiclk__TOP__ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__uut_de2__82\n"); );
    Vibex_simple_system* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellinp__xinst_k__in = ((0xfffeU & (((0x4000U 
                                                   & (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__xin2))
                                                   ? 
                                                  (~ (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__xin2))
                                                   : (IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__xin2)) 
                                                 << 1U)) 
                                     | (1U & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__xin2) 
                                              >> 0xeU)));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & (IData)(this->__Vcellinp__xinst_k__in))) 
           | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                           >> 2U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 4U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 6U))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 8U))) | (0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 0xaU))));
    this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh 
        = ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                         >> 0xcU))) | (0U != (3U & 
                                              ((IData)(this->__Vcellinp__xinst_k__in) 
                                               >> 0xeU))));
    this->__PVT__k = (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                       | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh))
                       ? ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh)
                           ? ((0U != (3U & ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xeU)))
                               ? (1U & ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                            >> 0xfU)) 
                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                           >> 0xeU)))
                               : (((IData)((0U != (3U 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))) 
                                   << 1U) | (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xdU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xcU)))))
                           : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl) 
                               << 2U) | ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 0xaU)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 0xbU)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 0xaU)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 8U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 9U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 8U)))))))
                       : ((((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                            | (IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)) 
                           << 3U) | ((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh)
                                      ? ((0U != (3U 
                                                 & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                    >> 6U)))
                                          ? (1U & (
                                                   (~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 7U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 6U)))
                                          : (((IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                           >> 4U)))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ 
                                                    ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 5U)) 
                                                   & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 4U)))))
                                      : (((IData)(this->__PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl) 
                                          << 2U) | 
                                         ((0U != (3U 
                                                  & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                     >> 2U)))
                                           ? (1U & 
                                              ((~ ((IData)(this->__Vcellinp__xinst_k__in) 
                                                   >> 3U)) 
                                               & ((IData)(this->__Vcellinp__xinst_k__in) 
                                                  >> 2U)))
                                           : (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(this->__Vcellinp__xinst_k__in)))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     ((IData)(this->__Vcellinp__xinst_k__in) 
                                                      >> 1U)) 
                                                    & (IData)(this->__Vcellinp__xinst_k__in)))))))));
    this->__PVT__ls__DOT__tmp[0U] = (0xffffU & ((1U 
                                                 & (IData)(this->__PVT__k))
                                                 ? 
                                                (0x1fff8U 
                                                 & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__xin2) 
                                                    << 3U))
                                                 : 
                                                (0xfffcU 
                                                 & ((IData)(vlTOPp->ibex_simple_system__DOT__u_posit_single_processor__DOT__pdiv__DOT__xin2) 
                                                    << 2U))));
}

void Vibex_simple_system_data_extract_v1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vibex_simple_system_data_extract_v1::_ctor_var_reset\n"); );
    // Body
    in = VL_RAND_RESET_I(16);
    rc = VL_RAND_RESET_I(1);
    regime = VL_RAND_RESET_I(4);
    exp = VL_RAND_RESET_I(2);
    mant = VL_RAND_RESET_I(14);
    __PVT__k = VL_RAND_RESET_I(4);
    __Vcellinp__xinst_k__in = VL_RAND_RESET_I(16);
    __PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vl = VL_RAND_RESET_I(1);
    __PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__l__DOT__genblk3__DOT__out_vh = VL_RAND_RESET_I(1);
    __PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vl = VL_RAND_RESET_I(1);
    __PVT__xinst_k__DOT__l1__DOT__genblk3__DOT__h__DOT__genblk3__DOT__out_vh = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__ls__DOT__tmp[__Vi0] = VL_RAND_RESET_I(16);
    }}
}
