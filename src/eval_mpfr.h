/**
 *  \file eval_mpfr.h
 *  Evaluation of numeric expressions using MPFR
 *
 **/

#ifndef SYMENGINE_EVAL_MPFR_H
#define SYMENGINE_EVAL_MPFR_H

#ifdef HAVE_SYMENGINE_MPFR

#include "basic.h"
#include "mpfr.h"

namespace SymEngine {

void eval_mpfr(mpfr_t result, const Basic &b, mpfr_rnd_t rnd);

} // SymEngine

#endif // HAVE_SYMENGINE_MPFR

#endif
