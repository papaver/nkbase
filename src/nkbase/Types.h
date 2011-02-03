/*
 * header
 */

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

typedef int8_t               i8;
typedef int16_t              i16;
typedef int32_t              i32;
typedef int64_t              i64;

//- unsigned integer -----------------------------------------------------------

typedef uint8_t              u8;
typedef uint16_t             u16;
typedef uint32_t             u32;
typedef uint64_t             u64;

//- float ----------------------------------------------------------------------

typedef ::half               f16;
typedef float                f32;
typedef double               f64;

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
