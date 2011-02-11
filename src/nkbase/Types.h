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
// Types.h
//------------------------------------------------------------------------------

#ifndef __NKBASE_TYPES_H__
#define __NKBASE_TYPES_H__

//-----------------------------------------------------------------------------
// includes
//-----------------------------------------------------------------------------

#include <memory>

#include <nkbase/Defs.h>

#include <OpenEXR/half.h>
#include <OpenEXR/ImathFrustum.h>
#include <OpenEXR/ImathMatrix.h>
#include <OpenEXR/ImathVec.h>

//-----------------------------------------------------------------------------
// typedefs
//-----------------------------------------------------------------------------

BEGIN_NK_NS

//- signed integer -------------------------------------------------------------

typedef int8_t   i8;
typedef int16_t  i16;
typedef int32_t  i32;
typedef int64_t  i64;

//- unsigned integer -----------------------------------------------------------

typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

//- float ----------------------------------------------------------------------

typedef ::half   f16;
typedef float    f32;
typedef double   f64;

//- vectors --------------------------------------------------------------------

typedef struct { f32 x,y,z,w; } vec4f;
typedef struct { f64 x,y,z,w; } vec4d;
typedef struct { i32 x,y,z,w; } vec4i;
typedef struct { i64 x,y,z,w; } vec4l;
typedef Imath::Vec3<f32>        vec3f;
typedef Imath::Vec3<f64>        vec3d;
typedef Imath::Vec3<i32>        vec3i;
typedef Imath::Vec3<i64>        vec3l;
typedef Imath::Vec3<u32>        vec3ui;
typedef Imath::Vec2<f32>        vec2f;
typedef Imath::Vec2<f64>        vec2d;
typedef Imath::Vec2<i32>        vec2i;
typedef Imath::Vec2<i64>        vec2l;

template <typename T>
struct Vec3Type {
    typedef Imath::Vec3<T>   type;
};

//- matrices -------------------------------------------------------------------

typedef Imath::Matrix33<f32>  mtx3f;
typedef Imath::Matrix33<f64>  mtx3d;
typedef Imath::Matrix44<f32>  mtx4f;
typedef Imath::Matrix44<f64>  mtx4d;

typedef Imath::Frustum<f32>   Frustumf;
typedef Imath::Frustum<f64>   Frustumd;

//- calc types ----------------------------------------------------------------

template <typename T>
struct CalcType {
};

template <>
struct CalcType<float> {
    typedef double calc_type;
    typedef vec3d calc_vec_type;
};

template <>
struct CalcType<double> {
    typedef double calc_type;
    typedef vec3d calc_vec_type;
};

template <>
struct CalcType<half> {
    typedef float calc_type;
    typedef vec3f calc_vec_type;
}; 

template <>
struct CalcType<int8_t> {
    typedef float calc_type;
    typedef vec3f calc_vec_type;
};

template <>
struct CalcType<int16_t> {
    typedef float calc_type;
    typedef vec3f calc_vec_type;
};

template <>
struct CalcType<int32_t> {
    typedef double calc_type;
    typedef vec3d calc_vec_type;
};

template <>
struct CalcType<int64_t> {
    typedef double calc_type;
    typedef vec3d calc_vec_type;
};

//-----------------------------------------------------------------------------

END_NK_NS

#endif // __NKBASE_TYPES_H__
