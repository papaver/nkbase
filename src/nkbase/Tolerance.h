/*
 * header
 */


#ifndef __NKBASE_TOLERANCE_H__
#define __NKBASE_TOLERANCE_H__

#include <nkbase/Defs.h>

BEGIN_NK_NS

/**
 * This structure contains templatized static methods for querying standard
 * tolerances for use within hive. These tolerances are specialized for 
 * floating point types like: float, double and half.
 */
template <typename T>
struct Tolerance 
{
    static T zero();
};

END_NK_NS

#endif //__NKBASE_TOLERANCE_H__
