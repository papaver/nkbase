/*
 * header
 */


#ifndef __NKBASE_BINARYOPS_H__
#define __NKBASE_BINARYOPS_H__

//------------------------------------------------------------------------------
// includes
//------------------------------------------------------------------------------

#include <functional>
#include <nkbase/Defs.h>

//------------------------------------------------------------------------------
// definitions
//------------------------------------------------------------------------------

BEGIN_NK_NS

/**
 * The set function simply ignores the first argument type and returns the
 * second one as the result.
 */
template <typename T>
struct set_op : std::binary_function<T, T, T>
{
    T operator()(const T &, const T &y)
    {
        return y;
    }
};

END_NK_NS

//------------------------------------------------------------------------------

#endif // __NKBASE_BINARYOPS_H__
