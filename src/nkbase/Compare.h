/*
 * header
 */


#ifndef __NKBASE_MATH_H__
#define __NKBASE_MATH_H__

//------------------------------------------------------------------------------
// includes
//------------------------------------------------------------------------------

#include <nkbase/Defs.h>
#include <nkbase/Types.h>

//------------------------------------------------------------------------------
// function declarations
//------------------------------------------------------------------------------

BEGIN_NK_NS

/** 
 * Return the ternery min of the 3 values given.
 */
template <typename T>
T min(T a, T b, T c);

/**
 * Return the ternery max of the 3 values given.
 */
template <typename T>
T max(T a, T b, T c);

/**
 * Determines if the given vector is zero up to a desired numerical tolerance.
 */
template <typename T>
bool isZeroVector(const typename Vec3Type<T>::type &v);

END_NK_NS

//-----------------------------------------------------------------------------
// function implementations
//-----------------------------------------------------------------------------

BEGIN_NK_NS

#include <nkbase/Compare.hpp>

END_NK_NS


#endif //__NKBASE_MATH_H__
