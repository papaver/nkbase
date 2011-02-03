/*
 *  Tolerance.cpp
 *  hive
 *
 *  Created by Akash Garg on 7/2/10.
 *  Copyright 2010 libvoid. All rights reserved.
 *
 */

#include <nkbase/Tolerance.h>
#include <OpenEXR/half.h>

BEGIN_NK_NS

//------------------------------------------------------------------------------

template <>
float
Tolerance<float>::zero()
{
    return 1.e-6;
}

//------------------------------------------------------------------------------

template <>
double
Tolerance<double>::zero()
{
    return 1.e-8;
}

//------------------------------------------------------------------------------

template <>
half
Tolerance<half>::zero()
{
    return 1.e-4;
}

//------------------------------------------------------------------------------

END_NK_NS
