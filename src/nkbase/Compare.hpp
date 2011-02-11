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
// Compare.hpp
//------------------------------------------------------------------------------

// no includes allowed

//------------------------------------------------------------------------------
// implementation
//------------------------------------------------------------------------------

template <typename T>
inline T 
min(T a, T b, T c)
{   
    return std::min(a, std::min(b, c));
}

//------------------------------------------------------------------------------

template <typename T>
inline T
max(T a, T b, T c)
{   
    return std::max(a, std::max(b, c));
}

//------------------------------------------------------------------------------

template <typename T>
inline bool
isZeroVector(const typename Vec3Type<T>::type &v)
{   
    if (fabs(v.x) < Tolerance<T>::zero() &&
        fabs(v.y) < Tolerance<T>::zero() &&
        fabs(v.z) < Tolerance<T>::zero()) {
        return true;
    }
    return false;
}

//------------------------------------------------------------------------------
