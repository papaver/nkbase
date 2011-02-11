//------------------------------------------------------------------------------
//
// Copyright (c) 2011, NektarFX, Inc.
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without modific-
//  ation, are permitted provided that the following conditions are met:
// 
//  - Redistributions of source code must retain the above copyright notice, 
//    this list of conditions and the following disclaimer.
//  - Redistributions in binary form must reproduce the above copyright 
//    notice, this list of conditions and the following disclaimer in the 
//    documentation and/or other materials provided with the distribution.
//  - Neither the name of NektarFX, Inc. nor the names of its contributors may 
//    be used to endorse or promote products derived from this software 
//    without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE 
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE 
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSE-
// QUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE 
// GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) 
// HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT 
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY 
// OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH 
// DAMAGE.
// 
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Tolerance.h
//------------------------------------------------------------------------------

#ifndef __NKBASE_TOLERANCE_H__
#define __NKBASE_TOLERANCE_H__

//------------------------------------------------------------------------------
// includes
//------------------------------------------------------------------------------

#include <nkbase/Defs.h>

//------------------------------------------------------------------------------
// definitions
//------------------------------------------------------------------------------

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
