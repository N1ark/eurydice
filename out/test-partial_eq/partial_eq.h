/* 
  This file was generated by KaRaMeL <https://github.com/FStarLang/karamel>

  F* version: <unknown>

 */

#ifndef __partial_eq_H
#define __partial_eq_H

#include "eurydice_glue.h"


#if defined(__cplusplus)
extern "C" {
#endif

#include "Eurydice.h"

#define core_result_Ok 0
#define core_result_Err 1

typedef uint8_t core_result_Result_10;

extern core_result_Result_10
core_fmt__core__fmt__Formatter__a___write_str(core_fmt_Formatter *x0, Eurydice_str x1);

#define core_panicking_AssertKind_Eq 0
#define core_panicking_AssertKind_Ne 1
#define core_panicking_AssertKind_Match 2

typedef uint8_t core_panicking_AssertKind;

#define partial_eq_Enum_A 0

typedef uint8_t partial_eq_Enum;

/**
This function found in impl {core::cmp::PartialEq<partial_eq::Enum> for partial_eq::Enum}
*/
bool partial_eq_eq_31(partial_eq_Enum *self, partial_eq_Enum *other);

void partial_eq_main(void);

/**
This function found in impl {core::fmt::Debug for partial_eq::Enum}
*/
core_result_Result_10 partial_eq_fmt_29(partial_eq_Enum *self, core_fmt_Formatter *f);

#if defined(__cplusplus)
}
#endif

#define __partial_eq_H_DEFINED
#endif
