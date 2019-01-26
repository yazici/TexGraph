#include "../FactoryMethods.h"
// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#include "simd.h"

using namespace System;
using namespace System::Runtime::InteropServices;

int SprueBind::Math::simd::AllzeroPs(M128 x)
{
    auto _marshal0 = ::__m128();
    cli::pin_ptr<float> __pinnedPtr = &x.M128F32[0];
    float* __arrayPtr = __pinnedPtr;
    _marshal0.m128_f32 = (float (&)[4]) __arrayPtr;
    cli::pin_ptr<unsigned long long> __pinnedPtr = &x.M128U64[0];
    unsigned long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u64 = (unsigned long long (&)[2]) __arrayPtr;
    cli::pin_ptr<char> __pinnedPtr = &x.M128I8[0];
    char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i8 = (char (&)[16]) __arrayPtr;
    cli::pin_ptr<short> __pinnedPtr = &x.M128I16[0];
    short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i16 = (short (&)[8]) __arrayPtr;
    cli::pin_ptr<int> __pinnedPtr = &x.M128I32[0];
    int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i32 = (int (&)[4]) __arrayPtr;
    cli::pin_ptr<long long> __pinnedPtr = &x.M128I64[0];
    long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i64 = (long long (&)[2]) __arrayPtr;
    cli::pin_ptr<unsigned char> __pinnedPtr = &x.M128U8[0];
    unsigned char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u8 = (unsigned char (&)[16]) __arrayPtr;
    cli::pin_ptr<unsigned short> __pinnedPtr = &x.M128U16[0];
    unsigned short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u16 = (unsigned short (&)[8]) __arrayPtr;
    cli::pin_ptr<unsigned int> __pinnedPtr = &x.M128U32[0];
    unsigned int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u32 = (unsigned int (&)[4]) __arrayPtr;
    auto __arg0 = _marshal0;
    auto __ret = ::math::allzero_ps(__arg0);
    return __ret;
}

int SprueBind::Math::simd::AllonePs(M128 x)
{
    auto _marshal0 = ::__m128();
    cli::pin_ptr<float> __pinnedPtr = &x.M128F32[0];
    float* __arrayPtr = __pinnedPtr;
    _marshal0.m128_f32 = (float (&)[4]) __arrayPtr;
    cli::pin_ptr<unsigned long long> __pinnedPtr = &x.M128U64[0];
    unsigned long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u64 = (unsigned long long (&)[2]) __arrayPtr;
    cli::pin_ptr<char> __pinnedPtr = &x.M128I8[0];
    char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i8 = (char (&)[16]) __arrayPtr;
    cli::pin_ptr<short> __pinnedPtr = &x.M128I16[0];
    short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i16 = (short (&)[8]) __arrayPtr;
    cli::pin_ptr<int> __pinnedPtr = &x.M128I32[0];
    int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i32 = (int (&)[4]) __arrayPtr;
    cli::pin_ptr<long long> __pinnedPtr = &x.M128I64[0];
    long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i64 = (long long (&)[2]) __arrayPtr;
    cli::pin_ptr<unsigned char> __pinnedPtr = &x.M128U8[0];
    unsigned char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u8 = (unsigned char (&)[16]) __arrayPtr;
    cli::pin_ptr<unsigned short> __pinnedPtr = &x.M128U16[0];
    unsigned short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u16 = (unsigned short (&)[8]) __arrayPtr;
    cli::pin_ptr<unsigned int> __pinnedPtr = &x.M128U32[0];
    unsigned int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u32 = (unsigned int (&)[4]) __arrayPtr;
    auto __arg0 = _marshal0;
    auto __ret = ::math::allone_ps(__arg0);
    return __ret;
}

M128 SprueBind::Math::simd::LoadVec3([System::Runtime::InteropServices::In, System::Runtime::InteropServices::Out] float% ptr, float w)
{
    float __arg0 = ptr;
    auto __ret = ::math::load_vec3(&__arg0, w);
    ptr = __arg0;
    return M128((::__m128*)&__ret);
}

void SprueBind::Math::simd::StoreVec3([System::Runtime::InteropServices::In, System::Runtime::InteropServices::Out] float% ptr, M128 v)
{
    float __arg0 = ptr;
    auto _marshal1 = ::__m128();
    cli::pin_ptr<float> __pinnedPtr = &v.M128F32[0];
    float* __arrayPtr = __pinnedPtr;
    _marshal1.m128_f32 = (float (&)[4]) __arrayPtr;
    cli::pin_ptr<unsigned long long> __pinnedPtr = &v.M128U64[0];
    unsigned long long* __arrayPtr = __pinnedPtr;
    _marshal1.m128_u64 = (unsigned long long (&)[2]) __arrayPtr;
    cli::pin_ptr<char> __pinnedPtr = &v.M128I8[0];
    char* __arrayPtr = __pinnedPtr;
    _marshal1.m128_i8 = (char (&)[16]) __arrayPtr;
    cli::pin_ptr<short> __pinnedPtr = &v.M128I16[0];
    short* __arrayPtr = __pinnedPtr;
    _marshal1.m128_i16 = (short (&)[8]) __arrayPtr;
    cli::pin_ptr<int> __pinnedPtr = &v.M128I32[0];
    int* __arrayPtr = __pinnedPtr;
    _marshal1.m128_i32 = (int (&)[4]) __arrayPtr;
    cli::pin_ptr<long long> __pinnedPtr = &v.M128I64[0];
    long long* __arrayPtr = __pinnedPtr;
    _marshal1.m128_i64 = (long long (&)[2]) __arrayPtr;
    cli::pin_ptr<unsigned char> __pinnedPtr = &v.M128U8[0];
    unsigned char* __arrayPtr = __pinnedPtr;
    _marshal1.m128_u8 = (unsigned char (&)[16]) __arrayPtr;
    cli::pin_ptr<unsigned short> __pinnedPtr = &v.M128U16[0];
    unsigned short* __arrayPtr = __pinnedPtr;
    _marshal1.m128_u16 = (unsigned short (&)[8]) __arrayPtr;
    cli::pin_ptr<unsigned int> __pinnedPtr = &v.M128U32[0];
    unsigned int* __arrayPtr = __pinnedPtr;
    _marshal1.m128_u32 = (unsigned int (&)[4]) __arrayPtr;
    auto __arg1 = _marshal1;
    ::math::store_vec3(&__arg0, __arg1);
    ptr = __arg0;
}

M128 SprueBind::Math::simd::RcpPs(M128 x)
{
    auto _marshal0 = ::__m128();
    cli::pin_ptr<float> __pinnedPtr = &x.M128F32[0];
    float* __arrayPtr = __pinnedPtr;
    _marshal0.m128_f32 = (float (&)[4]) __arrayPtr;
    cli::pin_ptr<unsigned long long> __pinnedPtr = &x.M128U64[0];
    unsigned long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u64 = (unsigned long long (&)[2]) __arrayPtr;
    cli::pin_ptr<char> __pinnedPtr = &x.M128I8[0];
    char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i8 = (char (&)[16]) __arrayPtr;
    cli::pin_ptr<short> __pinnedPtr = &x.M128I16[0];
    short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i16 = (short (&)[8]) __arrayPtr;
    cli::pin_ptr<int> __pinnedPtr = &x.M128I32[0];
    int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i32 = (int (&)[4]) __arrayPtr;
    cli::pin_ptr<long long> __pinnedPtr = &x.M128I64[0];
    long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i64 = (long long (&)[2]) __arrayPtr;
    cli::pin_ptr<unsigned char> __pinnedPtr = &x.M128U8[0];
    unsigned char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u8 = (unsigned char (&)[16]) __arrayPtr;
    cli::pin_ptr<unsigned short> __pinnedPtr = &x.M128U16[0];
    unsigned short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u16 = (unsigned short (&)[8]) __arrayPtr;
    cli::pin_ptr<unsigned int> __pinnedPtr = &x.M128U32[0];
    unsigned int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u32 = (unsigned int (&)[4]) __arrayPtr;
    auto __arg0 = _marshal0;
    auto __ret = ::math::rcp_ps(__arg0);
    return M128((::__m128*)&__ret);
}

M128 SprueBind::Math::simd::RsqrtPs(M128 x)
{
    auto _marshal0 = ::__m128();
    cli::pin_ptr<float> __pinnedPtr = &x.M128F32[0];
    float* __arrayPtr = __pinnedPtr;
    _marshal0.m128_f32 = (float (&)[4]) __arrayPtr;
    cli::pin_ptr<unsigned long long> __pinnedPtr = &x.M128U64[0];
    unsigned long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u64 = (unsigned long long (&)[2]) __arrayPtr;
    cli::pin_ptr<char> __pinnedPtr = &x.M128I8[0];
    char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i8 = (char (&)[16]) __arrayPtr;
    cli::pin_ptr<short> __pinnedPtr = &x.M128I16[0];
    short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i16 = (short (&)[8]) __arrayPtr;
    cli::pin_ptr<int> __pinnedPtr = &x.M128I32[0];
    int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i32 = (int (&)[4]) __arrayPtr;
    cli::pin_ptr<long long> __pinnedPtr = &x.M128I64[0];
    long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i64 = (long long (&)[2]) __arrayPtr;
    cli::pin_ptr<unsigned char> __pinnedPtr = &x.M128U8[0];
    unsigned char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u8 = (unsigned char (&)[16]) __arrayPtr;
    cli::pin_ptr<unsigned short> __pinnedPtr = &x.M128U16[0];
    unsigned short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u16 = (unsigned short (&)[8]) __arrayPtr;
    cli::pin_ptr<unsigned int> __pinnedPtr = &x.M128U32[0];
    unsigned int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u32 = (unsigned int (&)[4]) __arrayPtr;
    auto __arg0 = _marshal0;
    auto __ret = ::math::rsqrt_ps(__arg0);
    return M128((::__m128*)&__ret);
}

// <summary>
// <para>Returns the simd vector [_, _, _, f], that is, a SSE variable with the given float f in the lowest index.</para>
// <para>The three higher indices should all be treated undefined.</para>
// </summary>
// DEBUG: FORCE_INLINE simd4f setx_ps(float f){	// On VS2010+AVX generates vmovss+vxorps+vmovss	// return _mm_load_ss(&f);#if _MSC_VER < 1700 // < VS2012	// On VS2010+AVX generates vmovss+vshufps (to broadcast the single element to all channels). Best performance so far for VS2010.	// On VS2013 generates a vbroadcastss instruction.	return set1_ps(f);#else	// On VS2010+AVX is the same as _mm_load_ss, i.e. vmovss+vxorps+vmovss	// On VS2013, this is the perfect thing - a single vmovss instruction!	return _mm_set_ss(f);#endif	// On VS2010+AVX generates vmovss reg <- mem, vmovss alignedmem <- reg, vmovaps reg <- alignedmem, so is the worst!	// simd4f s;	// s.m128_f32[0] = f;	// return s;}
M128 SprueBind::Math::simd::SetxPs(float f)
{
    auto __ret = ::math::setx_ps(f);
    return M128((::__m128*)&__ret);
}

// <summary>Replaces the x channel (lowest lane) in the given vector with the given float x, i.e. returns [vec.w, vec.z, vec.y, x]</summary>
// DEBUG: FORCE_INLINE simd4f setx_ps(const simd4f &vec, float x){	return _mm_move_ss(vec, _mm_set_ss(x));}
M128 SprueBind::Math::simd::SetxPs(M128 vec, float x)
{
    auto _marshal0 = ::__m128();
    cli::pin_ptr<float> __pinnedPtr = &vec.M128F32[0];
    float* __arrayPtr = __pinnedPtr;
    _marshal0.m128_f32 = (float (&)[4]) __arrayPtr;
    cli::pin_ptr<unsigned long long> __pinnedPtr = &vec.M128U64[0];
    unsigned long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u64 = (unsigned long long (&)[2]) __arrayPtr;
    cli::pin_ptr<char> __pinnedPtr = &vec.M128I8[0];
    char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i8 = (char (&)[16]) __arrayPtr;
    cli::pin_ptr<short> __pinnedPtr = &vec.M128I16[0];
    short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i16 = (short (&)[8]) __arrayPtr;
    cli::pin_ptr<int> __pinnedPtr = &vec.M128I32[0];
    int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i32 = (int (&)[4]) __arrayPtr;
    cli::pin_ptr<long long> __pinnedPtr = &vec.M128I64[0];
    long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i64 = (long long (&)[2]) __arrayPtr;
    cli::pin_ptr<unsigned char> __pinnedPtr = &vec.M128U8[0];
    unsigned char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u8 = (unsigned char (&)[16]) __arrayPtr;
    cli::pin_ptr<unsigned short> __pinnedPtr = &vec.M128U16[0];
    unsigned short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u16 = (unsigned short (&)[8]) __arrayPtr;
    cli::pin_ptr<unsigned int> __pinnedPtr = &vec.M128U32[0];
    unsigned int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u32 = (unsigned int (&)[4]) __arrayPtr;
    auto __arg0 = _marshal0;
    auto __ret = ::math::setx_ps(__arg0, x);
    return M128((::__m128*)&__ret);
}

// <summary>Replaces the y channel in the given vector with the given float y, i.e. returns [vec.w, vec.z, y, vec.x]</summary>
// DEBUG: FORCE_INLINE simd4f sety_ps(const simd4f &vec, float y){	simd4f tmp = _mm_set_ss(y); // [0, 0, 0, y]	tmp = _mm_shuffle_ps(tmp, vec, _MM_SHUFFLE(0, 0, 0, 0)); // [vec.x, vec.x, y, y]	return _mm_shuffle_ps(tmp, vec, _MM_SHUFFLE(3, 2, 0, 2)); // [vec.w, vec.z, y, vec.x]}
M128 SprueBind::Math::simd::SetyPs(M128 vec, float y)
{
    auto _marshal0 = ::__m128();
    cli::pin_ptr<float> __pinnedPtr = &vec.M128F32[0];
    float* __arrayPtr = __pinnedPtr;
    _marshal0.m128_f32 = (float (&)[4]) __arrayPtr;
    cli::pin_ptr<unsigned long long> __pinnedPtr = &vec.M128U64[0];
    unsigned long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u64 = (unsigned long long (&)[2]) __arrayPtr;
    cli::pin_ptr<char> __pinnedPtr = &vec.M128I8[0];
    char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i8 = (char (&)[16]) __arrayPtr;
    cli::pin_ptr<short> __pinnedPtr = &vec.M128I16[0];
    short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i16 = (short (&)[8]) __arrayPtr;
    cli::pin_ptr<int> __pinnedPtr = &vec.M128I32[0];
    int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i32 = (int (&)[4]) __arrayPtr;
    cli::pin_ptr<long long> __pinnedPtr = &vec.M128I64[0];
    long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i64 = (long long (&)[2]) __arrayPtr;
    cli::pin_ptr<unsigned char> __pinnedPtr = &vec.M128U8[0];
    unsigned char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u8 = (unsigned char (&)[16]) __arrayPtr;
    cli::pin_ptr<unsigned short> __pinnedPtr = &vec.M128U16[0];
    unsigned short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u16 = (unsigned short (&)[8]) __arrayPtr;
    cli::pin_ptr<unsigned int> __pinnedPtr = &vec.M128U32[0];
    unsigned int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u32 = (unsigned int (&)[4]) __arrayPtr;
    auto __arg0 = _marshal0;
    auto __ret = ::math::sety_ps(__arg0, y);
    return M128((::__m128*)&__ret);
}

// <summary>Replaces the z channel in the given vector with the given float z, i.e. returns [vec.w, z, vec.y, vec.x]</summary>
// DEBUG: FORCE_INLINE simd4f setz_ps(const simd4f &vec, float z){	simd4f tmp = _mm_set_ss(z); // [0, 0, 0, z]	tmp = _mm_shuffle_ps(tmp, vec, _MM_SHUFFLE(3, 3, 0, 0)); // [vec.w, vec.w, z, z]	return _mm_shuffle_ps(vec, tmp, _MM_SHUFFLE(3, 0, 1, 0)); // [vec.w, z, vec.y, vec.x]}
M128 SprueBind::Math::simd::SetzPs(M128 vec, float z)
{
    auto _marshal0 = ::__m128();
    cli::pin_ptr<float> __pinnedPtr = &vec.M128F32[0];
    float* __arrayPtr = __pinnedPtr;
    _marshal0.m128_f32 = (float (&)[4]) __arrayPtr;
    cli::pin_ptr<unsigned long long> __pinnedPtr = &vec.M128U64[0];
    unsigned long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u64 = (unsigned long long (&)[2]) __arrayPtr;
    cli::pin_ptr<char> __pinnedPtr = &vec.M128I8[0];
    char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i8 = (char (&)[16]) __arrayPtr;
    cli::pin_ptr<short> __pinnedPtr = &vec.M128I16[0];
    short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i16 = (short (&)[8]) __arrayPtr;
    cli::pin_ptr<int> __pinnedPtr = &vec.M128I32[0];
    int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i32 = (int (&)[4]) __arrayPtr;
    cli::pin_ptr<long long> __pinnedPtr = &vec.M128I64[0];
    long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i64 = (long long (&)[2]) __arrayPtr;
    cli::pin_ptr<unsigned char> __pinnedPtr = &vec.M128U8[0];
    unsigned char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u8 = (unsigned char (&)[16]) __arrayPtr;
    cli::pin_ptr<unsigned short> __pinnedPtr = &vec.M128U16[0];
    unsigned short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u16 = (unsigned short (&)[8]) __arrayPtr;
    cli::pin_ptr<unsigned int> __pinnedPtr = &vec.M128U32[0];
    unsigned int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u32 = (unsigned int (&)[4]) __arrayPtr;
    auto __arg0 = _marshal0;
    auto __ret = ::math::setz_ps(__arg0, z);
    return M128((::__m128*)&__ret);
}

// <summary>Replaces the w channel in the given vector with the given float w, i.e. returns [w, vec.z, vec.y, vec.x]</summary>
// DEBUG: FORCE_INLINE simd4f setw_ps(const simd4f &vec, float w){	simd4f tmp = _mm_set_ss(w); // [0, 0, 0, w]	tmp = _mm_shuffle_ps(tmp, vec, _MM_SHUFFLE(2, 2, 0, 0)); // [vec.z, vec.z, w, w]	return _mm_shuffle_ps(vec, tmp, _MM_SHUFFLE(0, 3, 1, 0)); // [w, vec.z, vec.y, vec.x]}
M128 SprueBind::Math::simd::SetwPs(M128 vec, float w)
{
    auto _marshal0 = ::__m128();
    cli::pin_ptr<float> __pinnedPtr = &vec.M128F32[0];
    float* __arrayPtr = __pinnedPtr;
    _marshal0.m128_f32 = (float (&)[4]) __arrayPtr;
    cli::pin_ptr<unsigned long long> __pinnedPtr = &vec.M128U64[0];
    unsigned long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u64 = (unsigned long long (&)[2]) __arrayPtr;
    cli::pin_ptr<char> __pinnedPtr = &vec.M128I8[0];
    char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i8 = (char (&)[16]) __arrayPtr;
    cli::pin_ptr<short> __pinnedPtr = &vec.M128I16[0];
    short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i16 = (short (&)[8]) __arrayPtr;
    cli::pin_ptr<int> __pinnedPtr = &vec.M128I32[0];
    int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i32 = (int (&)[4]) __arrayPtr;
    cli::pin_ptr<long long> __pinnedPtr = &vec.M128I64[0];
    long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i64 = (long long (&)[2]) __arrayPtr;
    cli::pin_ptr<unsigned char> __pinnedPtr = &vec.M128U8[0];
    unsigned char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u8 = (unsigned char (&)[16]) __arrayPtr;
    cli::pin_ptr<unsigned short> __pinnedPtr = &vec.M128U16[0];
    unsigned short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u16 = (unsigned short (&)[8]) __arrayPtr;
    cli::pin_ptr<unsigned int> __pinnedPtr = &vec.M128U32[0];
    unsigned int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u32 = (unsigned int (&)[4]) __arrayPtr;
    auto __arg0 = _marshal0;
    auto __ret = ::math::setw_ps(__arg0, w);
    return M128((::__m128*)&__ret);
}

// <summary>Returns a direction vector (w == 0) with xyz all set to the same scalar value.</summary>
// DEBUG: FORCE_INLINE simd4f dir_from_scalar_ps(float scalar){	return set_ps(0.f, scalar, scalar, scalar);}
M128 SprueBind::Math::simd::DirFromScalarPs(float scalar)
{
    auto __ret = ::math::dir_from_scalar_ps(scalar);
    return M128((::__m128*)&__ret);
}

// <summary>Returns a position vector (w == 1) with xyz all set to the same scalar value.</summary>
// DEBUG: FORCE_INLINE simd4f pos_from_scalar_ps(float scalar){	return set_ps(1.f, scalar, scalar, scalar);}
M128 SprueBind::Math::simd::PosFromScalarPs(float scalar)
{
    auto __ret = ::math::pos_from_scalar_ps(scalar);
    return M128((::__m128*)&__ret);
}

M128 SprueBind::Math::simd::Pack4ssToPs(M128 x, M128 y, M128 z, M128 w)
{
    auto _marshal0 = ::__m128();
    cli::pin_ptr<float> __pinnedPtr = &x.M128F32[0];
    float* __arrayPtr = __pinnedPtr;
    _marshal0.m128_f32 = (float (&)[4]) __arrayPtr;
    cli::pin_ptr<unsigned long long> __pinnedPtr = &x.M128U64[0];
    unsigned long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u64 = (unsigned long long (&)[2]) __arrayPtr;
    cli::pin_ptr<char> __pinnedPtr = &x.M128I8[0];
    char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i8 = (char (&)[16]) __arrayPtr;
    cli::pin_ptr<short> __pinnedPtr = &x.M128I16[0];
    short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i16 = (short (&)[8]) __arrayPtr;
    cli::pin_ptr<int> __pinnedPtr = &x.M128I32[0];
    int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i32 = (int (&)[4]) __arrayPtr;
    cli::pin_ptr<long long> __pinnedPtr = &x.M128I64[0];
    long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i64 = (long long (&)[2]) __arrayPtr;
    cli::pin_ptr<unsigned char> __pinnedPtr = &x.M128U8[0];
    unsigned char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u8 = (unsigned char (&)[16]) __arrayPtr;
    cli::pin_ptr<unsigned short> __pinnedPtr = &x.M128U16[0];
    unsigned short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u16 = (unsigned short (&)[8]) __arrayPtr;
    cli::pin_ptr<unsigned int> __pinnedPtr = &x.M128U32[0];
    unsigned int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u32 = (unsigned int (&)[4]) __arrayPtr;
    auto __arg0 = _marshal0;
    auto _marshal1 = ::__m128();
    cli::pin_ptr<float> __pinnedPtr = &y.M128F32[0];
    float* __arrayPtr = __pinnedPtr;
    _marshal1.m128_f32 = (float (&)[4]) __arrayPtr;
    cli::pin_ptr<unsigned long long> __pinnedPtr = &y.M128U64[0];
    unsigned long long* __arrayPtr = __pinnedPtr;
    _marshal1.m128_u64 = (unsigned long long (&)[2]) __arrayPtr;
    cli::pin_ptr<char> __pinnedPtr = &y.M128I8[0];
    char* __arrayPtr = __pinnedPtr;
    _marshal1.m128_i8 = (char (&)[16]) __arrayPtr;
    cli::pin_ptr<short> __pinnedPtr = &y.M128I16[0];
    short* __arrayPtr = __pinnedPtr;
    _marshal1.m128_i16 = (short (&)[8]) __arrayPtr;
    cli::pin_ptr<int> __pinnedPtr = &y.M128I32[0];
    int* __arrayPtr = __pinnedPtr;
    _marshal1.m128_i32 = (int (&)[4]) __arrayPtr;
    cli::pin_ptr<long long> __pinnedPtr = &y.M128I64[0];
    long long* __arrayPtr = __pinnedPtr;
    _marshal1.m128_i64 = (long long (&)[2]) __arrayPtr;
    cli::pin_ptr<unsigned char> __pinnedPtr = &y.M128U8[0];
    unsigned char* __arrayPtr = __pinnedPtr;
    _marshal1.m128_u8 = (unsigned char (&)[16]) __arrayPtr;
    cli::pin_ptr<unsigned short> __pinnedPtr = &y.M128U16[0];
    unsigned short* __arrayPtr = __pinnedPtr;
    _marshal1.m128_u16 = (unsigned short (&)[8]) __arrayPtr;
    cli::pin_ptr<unsigned int> __pinnedPtr = &y.M128U32[0];
    unsigned int* __arrayPtr = __pinnedPtr;
    _marshal1.m128_u32 = (unsigned int (&)[4]) __arrayPtr;
    auto __arg1 = _marshal1;
    auto _marshal2 = ::__m128();
    cli::pin_ptr<float> __pinnedPtr = &z.M128F32[0];
    float* __arrayPtr = __pinnedPtr;
    _marshal2.m128_f32 = (float (&)[4]) __arrayPtr;
    cli::pin_ptr<unsigned long long> __pinnedPtr = &z.M128U64[0];
    unsigned long long* __arrayPtr = __pinnedPtr;
    _marshal2.m128_u64 = (unsigned long long (&)[2]) __arrayPtr;
    cli::pin_ptr<char> __pinnedPtr = &z.M128I8[0];
    char* __arrayPtr = __pinnedPtr;
    _marshal2.m128_i8 = (char (&)[16]) __arrayPtr;
    cli::pin_ptr<short> __pinnedPtr = &z.M128I16[0];
    short* __arrayPtr = __pinnedPtr;
    _marshal2.m128_i16 = (short (&)[8]) __arrayPtr;
    cli::pin_ptr<int> __pinnedPtr = &z.M128I32[0];
    int* __arrayPtr = __pinnedPtr;
    _marshal2.m128_i32 = (int (&)[4]) __arrayPtr;
    cli::pin_ptr<long long> __pinnedPtr = &z.M128I64[0];
    long long* __arrayPtr = __pinnedPtr;
    _marshal2.m128_i64 = (long long (&)[2]) __arrayPtr;
    cli::pin_ptr<unsigned char> __pinnedPtr = &z.M128U8[0];
    unsigned char* __arrayPtr = __pinnedPtr;
    _marshal2.m128_u8 = (unsigned char (&)[16]) __arrayPtr;
    cli::pin_ptr<unsigned short> __pinnedPtr = &z.M128U16[0];
    unsigned short* __arrayPtr = __pinnedPtr;
    _marshal2.m128_u16 = (unsigned short (&)[8]) __arrayPtr;
    cli::pin_ptr<unsigned int> __pinnedPtr = &z.M128U32[0];
    unsigned int* __arrayPtr = __pinnedPtr;
    _marshal2.m128_u32 = (unsigned int (&)[4]) __arrayPtr;
    auto __arg2 = _marshal2;
    auto _marshal3 = ::__m128();
    cli::pin_ptr<float> __pinnedPtr = &w.M128F32[0];
    float* __arrayPtr = __pinnedPtr;
    _marshal3.m128_f32 = (float (&)[4]) __arrayPtr;
    cli::pin_ptr<unsigned long long> __pinnedPtr = &w.M128U64[0];
    unsigned long long* __arrayPtr = __pinnedPtr;
    _marshal3.m128_u64 = (unsigned long long (&)[2]) __arrayPtr;
    cli::pin_ptr<char> __pinnedPtr = &w.M128I8[0];
    char* __arrayPtr = __pinnedPtr;
    _marshal3.m128_i8 = (char (&)[16]) __arrayPtr;
    cli::pin_ptr<short> __pinnedPtr = &w.M128I16[0];
    short* __arrayPtr = __pinnedPtr;
    _marshal3.m128_i16 = (short (&)[8]) __arrayPtr;
    cli::pin_ptr<int> __pinnedPtr = &w.M128I32[0];
    int* __arrayPtr = __pinnedPtr;
    _marshal3.m128_i32 = (int (&)[4]) __arrayPtr;
    cli::pin_ptr<long long> __pinnedPtr = &w.M128I64[0];
    long long* __arrayPtr = __pinnedPtr;
    _marshal3.m128_i64 = (long long (&)[2]) __arrayPtr;
    cli::pin_ptr<unsigned char> __pinnedPtr = &w.M128U8[0];
    unsigned char* __arrayPtr = __pinnedPtr;
    _marshal3.m128_u8 = (unsigned char (&)[16]) __arrayPtr;
    cli::pin_ptr<unsigned short> __pinnedPtr = &w.M128U16[0];
    unsigned short* __arrayPtr = __pinnedPtr;
    _marshal3.m128_u16 = (unsigned short (&)[8]) __arrayPtr;
    cli::pin_ptr<unsigned int> __pinnedPtr = &w.M128U32[0];
    unsigned int* __arrayPtr = __pinnedPtr;
    _marshal3.m128_u32 = (unsigned int (&)[4]) __arrayPtr;
    auto __arg3 = _marshal3;
    auto __ret = ::math::pack_4ss_to_ps(__arg0, __arg1, __arg2, __arg3);
    return M128((::__m128*)&__ret);
}

M128 SprueBind::Math::simd::SetwPs1(M128 m, float w)
{
    auto _marshal0 = ::__m128();
    cli::pin_ptr<float> __pinnedPtr = &m.M128F32[0];
    float* __arrayPtr = __pinnedPtr;
    _marshal0.m128_f32 = (float (&)[4]) __arrayPtr;
    cli::pin_ptr<unsigned long long> __pinnedPtr = &m.M128U64[0];
    unsigned long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u64 = (unsigned long long (&)[2]) __arrayPtr;
    cli::pin_ptr<char> __pinnedPtr = &m.M128I8[0];
    char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i8 = (char (&)[16]) __arrayPtr;
    cli::pin_ptr<short> __pinnedPtr = &m.M128I16[0];
    short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i16 = (short (&)[8]) __arrayPtr;
    cli::pin_ptr<int> __pinnedPtr = &m.M128I32[0];
    int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i32 = (int (&)[4]) __arrayPtr;
    cli::pin_ptr<long long> __pinnedPtr = &m.M128I64[0];
    long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i64 = (long long (&)[2]) __arrayPtr;
    cli::pin_ptr<unsigned char> __pinnedPtr = &m.M128U8[0];
    unsigned char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u8 = (unsigned char (&)[16]) __arrayPtr;
    cli::pin_ptr<unsigned short> __pinnedPtr = &m.M128U16[0];
    unsigned short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u16 = (unsigned short (&)[8]) __arrayPtr;
    cli::pin_ptr<unsigned int> __pinnedPtr = &m.M128U32[0];
    unsigned int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u32 = (unsigned int (&)[4]) __arrayPtr;
    auto __arg0 = _marshal0;
    auto __ret = ::math::setw_ps(__arg0, w);
    return M128((::__m128*)&__ret);
}

M128 SprueBind::Math::simd::ModfPs(M128 x, M128 mod)
{
    auto _marshal0 = ::__m128();
    cli::pin_ptr<float> __pinnedPtr = &x.M128F32[0];
    float* __arrayPtr = __pinnedPtr;
    _marshal0.m128_f32 = (float (&)[4]) __arrayPtr;
    cli::pin_ptr<unsigned long long> __pinnedPtr = &x.M128U64[0];
    unsigned long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u64 = (unsigned long long (&)[2]) __arrayPtr;
    cli::pin_ptr<char> __pinnedPtr = &x.M128I8[0];
    char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i8 = (char (&)[16]) __arrayPtr;
    cli::pin_ptr<short> __pinnedPtr = &x.M128I16[0];
    short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i16 = (short (&)[8]) __arrayPtr;
    cli::pin_ptr<int> __pinnedPtr = &x.M128I32[0];
    int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i32 = (int (&)[4]) __arrayPtr;
    cli::pin_ptr<long long> __pinnedPtr = &x.M128I64[0];
    long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i64 = (long long (&)[2]) __arrayPtr;
    cli::pin_ptr<unsigned char> __pinnedPtr = &x.M128U8[0];
    unsigned char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u8 = (unsigned char (&)[16]) __arrayPtr;
    cli::pin_ptr<unsigned short> __pinnedPtr = &x.M128U16[0];
    unsigned short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u16 = (unsigned short (&)[8]) __arrayPtr;
    cli::pin_ptr<unsigned int> __pinnedPtr = &x.M128U32[0];
    unsigned int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u32 = (unsigned int (&)[4]) __arrayPtr;
    auto __arg0 = _marshal0;
    auto _marshal1 = ::__m128();
    cli::pin_ptr<float> __pinnedPtr = &mod.M128F32[0];
    float* __arrayPtr = __pinnedPtr;
    _marshal1.m128_f32 = (float (&)[4]) __arrayPtr;
    cli::pin_ptr<unsigned long long> __pinnedPtr = &mod.M128U64[0];
    unsigned long long* __arrayPtr = __pinnedPtr;
    _marshal1.m128_u64 = (unsigned long long (&)[2]) __arrayPtr;
    cli::pin_ptr<char> __pinnedPtr = &mod.M128I8[0];
    char* __arrayPtr = __pinnedPtr;
    _marshal1.m128_i8 = (char (&)[16]) __arrayPtr;
    cli::pin_ptr<short> __pinnedPtr = &mod.M128I16[0];
    short* __arrayPtr = __pinnedPtr;
    _marshal1.m128_i16 = (short (&)[8]) __arrayPtr;
    cli::pin_ptr<int> __pinnedPtr = &mod.M128I32[0];
    int* __arrayPtr = __pinnedPtr;
    _marshal1.m128_i32 = (int (&)[4]) __arrayPtr;
    cli::pin_ptr<long long> __pinnedPtr = &mod.M128I64[0];
    long long* __arrayPtr = __pinnedPtr;
    _marshal1.m128_i64 = (long long (&)[2]) __arrayPtr;
    cli::pin_ptr<unsigned char> __pinnedPtr = &mod.M128U8[0];
    unsigned char* __arrayPtr = __pinnedPtr;
    _marshal1.m128_u8 = (unsigned char (&)[16]) __arrayPtr;
    cli::pin_ptr<unsigned short> __pinnedPtr = &mod.M128U16[0];
    unsigned short* __arrayPtr = __pinnedPtr;
    _marshal1.m128_u16 = (unsigned short (&)[8]) __arrayPtr;
    cli::pin_ptr<unsigned int> __pinnedPtr = &mod.M128U32[0];
    unsigned int* __arrayPtr = __pinnedPtr;
    _marshal1.m128_u32 = (unsigned int (&)[4]) __arrayPtr;
    auto __arg1 = _marshal1;
    auto __ret = ::math::modf_ps(__arg0, __arg1);
    return M128((::__m128*)&__ret);
}

M128 SprueBind::Math::simd::Hadd4Ps(M128 a, M128 b, M128 c, M128 d)
{
    auto _marshal0 = ::__m128();
    cli::pin_ptr<float> __pinnedPtr = &a.M128F32[0];
    float* __arrayPtr = __pinnedPtr;
    _marshal0.m128_f32 = (float (&)[4]) __arrayPtr;
    cli::pin_ptr<unsigned long long> __pinnedPtr = &a.M128U64[0];
    unsigned long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u64 = (unsigned long long (&)[2]) __arrayPtr;
    cli::pin_ptr<char> __pinnedPtr = &a.M128I8[0];
    char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i8 = (char (&)[16]) __arrayPtr;
    cli::pin_ptr<short> __pinnedPtr = &a.M128I16[0];
    short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i16 = (short (&)[8]) __arrayPtr;
    cli::pin_ptr<int> __pinnedPtr = &a.M128I32[0];
    int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i32 = (int (&)[4]) __arrayPtr;
    cli::pin_ptr<long long> __pinnedPtr = &a.M128I64[0];
    long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i64 = (long long (&)[2]) __arrayPtr;
    cli::pin_ptr<unsigned char> __pinnedPtr = &a.M128U8[0];
    unsigned char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u8 = (unsigned char (&)[16]) __arrayPtr;
    cli::pin_ptr<unsigned short> __pinnedPtr = &a.M128U16[0];
    unsigned short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u16 = (unsigned short (&)[8]) __arrayPtr;
    cli::pin_ptr<unsigned int> __pinnedPtr = &a.M128U32[0];
    unsigned int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u32 = (unsigned int (&)[4]) __arrayPtr;
    auto __arg0 = _marshal0;
    auto _marshal1 = ::__m128();
    cli::pin_ptr<float> __pinnedPtr = &b.M128F32[0];
    float* __arrayPtr = __pinnedPtr;
    _marshal1.m128_f32 = (float (&)[4]) __arrayPtr;
    cli::pin_ptr<unsigned long long> __pinnedPtr = &b.M128U64[0];
    unsigned long long* __arrayPtr = __pinnedPtr;
    _marshal1.m128_u64 = (unsigned long long (&)[2]) __arrayPtr;
    cli::pin_ptr<char> __pinnedPtr = &b.M128I8[0];
    char* __arrayPtr = __pinnedPtr;
    _marshal1.m128_i8 = (char (&)[16]) __arrayPtr;
    cli::pin_ptr<short> __pinnedPtr = &b.M128I16[0];
    short* __arrayPtr = __pinnedPtr;
    _marshal1.m128_i16 = (short (&)[8]) __arrayPtr;
    cli::pin_ptr<int> __pinnedPtr = &b.M128I32[0];
    int* __arrayPtr = __pinnedPtr;
    _marshal1.m128_i32 = (int (&)[4]) __arrayPtr;
    cli::pin_ptr<long long> __pinnedPtr = &b.M128I64[0];
    long long* __arrayPtr = __pinnedPtr;
    _marshal1.m128_i64 = (long long (&)[2]) __arrayPtr;
    cli::pin_ptr<unsigned char> __pinnedPtr = &b.M128U8[0];
    unsigned char* __arrayPtr = __pinnedPtr;
    _marshal1.m128_u8 = (unsigned char (&)[16]) __arrayPtr;
    cli::pin_ptr<unsigned short> __pinnedPtr = &b.M128U16[0];
    unsigned short* __arrayPtr = __pinnedPtr;
    _marshal1.m128_u16 = (unsigned short (&)[8]) __arrayPtr;
    cli::pin_ptr<unsigned int> __pinnedPtr = &b.M128U32[0];
    unsigned int* __arrayPtr = __pinnedPtr;
    _marshal1.m128_u32 = (unsigned int (&)[4]) __arrayPtr;
    auto __arg1 = _marshal1;
    auto _marshal2 = ::__m128();
    cli::pin_ptr<float> __pinnedPtr = &c.M128F32[0];
    float* __arrayPtr = __pinnedPtr;
    _marshal2.m128_f32 = (float (&)[4]) __arrayPtr;
    cli::pin_ptr<unsigned long long> __pinnedPtr = &c.M128U64[0];
    unsigned long long* __arrayPtr = __pinnedPtr;
    _marshal2.m128_u64 = (unsigned long long (&)[2]) __arrayPtr;
    cli::pin_ptr<char> __pinnedPtr = &c.M128I8[0];
    char* __arrayPtr = __pinnedPtr;
    _marshal2.m128_i8 = (char (&)[16]) __arrayPtr;
    cli::pin_ptr<short> __pinnedPtr = &c.M128I16[0];
    short* __arrayPtr = __pinnedPtr;
    _marshal2.m128_i16 = (short (&)[8]) __arrayPtr;
    cli::pin_ptr<int> __pinnedPtr = &c.M128I32[0];
    int* __arrayPtr = __pinnedPtr;
    _marshal2.m128_i32 = (int (&)[4]) __arrayPtr;
    cli::pin_ptr<long long> __pinnedPtr = &c.M128I64[0];
    long long* __arrayPtr = __pinnedPtr;
    _marshal2.m128_i64 = (long long (&)[2]) __arrayPtr;
    cli::pin_ptr<unsigned char> __pinnedPtr = &c.M128U8[0];
    unsigned char* __arrayPtr = __pinnedPtr;
    _marshal2.m128_u8 = (unsigned char (&)[16]) __arrayPtr;
    cli::pin_ptr<unsigned short> __pinnedPtr = &c.M128U16[0];
    unsigned short* __arrayPtr = __pinnedPtr;
    _marshal2.m128_u16 = (unsigned short (&)[8]) __arrayPtr;
    cli::pin_ptr<unsigned int> __pinnedPtr = &c.M128U32[0];
    unsigned int* __arrayPtr = __pinnedPtr;
    _marshal2.m128_u32 = (unsigned int (&)[4]) __arrayPtr;
    auto __arg2 = _marshal2;
    auto _marshal3 = ::__m128();
    cli::pin_ptr<float> __pinnedPtr = &d.M128F32[0];
    float* __arrayPtr = __pinnedPtr;
    _marshal3.m128_f32 = (float (&)[4]) __arrayPtr;
    cli::pin_ptr<unsigned long long> __pinnedPtr = &d.M128U64[0];
    unsigned long long* __arrayPtr = __pinnedPtr;
    _marshal3.m128_u64 = (unsigned long long (&)[2]) __arrayPtr;
    cli::pin_ptr<char> __pinnedPtr = &d.M128I8[0];
    char* __arrayPtr = __pinnedPtr;
    _marshal3.m128_i8 = (char (&)[16]) __arrayPtr;
    cli::pin_ptr<short> __pinnedPtr = &d.M128I16[0];
    short* __arrayPtr = __pinnedPtr;
    _marshal3.m128_i16 = (short (&)[8]) __arrayPtr;
    cli::pin_ptr<int> __pinnedPtr = &d.M128I32[0];
    int* __arrayPtr = __pinnedPtr;
    _marshal3.m128_i32 = (int (&)[4]) __arrayPtr;
    cli::pin_ptr<long long> __pinnedPtr = &d.M128I64[0];
    long long* __arrayPtr = __pinnedPtr;
    _marshal3.m128_i64 = (long long (&)[2]) __arrayPtr;
    cli::pin_ptr<unsigned char> __pinnedPtr = &d.M128U8[0];
    unsigned char* __arrayPtr = __pinnedPtr;
    _marshal3.m128_u8 = (unsigned char (&)[16]) __arrayPtr;
    cli::pin_ptr<unsigned short> __pinnedPtr = &d.M128U16[0];
    unsigned short* __arrayPtr = __pinnedPtr;
    _marshal3.m128_u16 = (unsigned short (&)[8]) __arrayPtr;
    cli::pin_ptr<unsigned int> __pinnedPtr = &d.M128U32[0];
    unsigned int* __arrayPtr = __pinnedPtr;
    _marshal3.m128_u32 = (unsigned int (&)[4]) __arrayPtr;
    auto __arg3 = _marshal3;
    auto __ret = ::math::hadd4_ps(__arg0, __arg1, __arg2, __arg3);
    return M128((::__m128*)&__ret);
}

M128 SprueBind::Math::simd::CmovPs(M128 a, M128 b, M128 mask)
{
    auto _marshal0 = ::__m128();
    cli::pin_ptr<float> __pinnedPtr = &a.M128F32[0];
    float* __arrayPtr = __pinnedPtr;
    _marshal0.m128_f32 = (float (&)[4]) __arrayPtr;
    cli::pin_ptr<unsigned long long> __pinnedPtr = &a.M128U64[0];
    unsigned long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u64 = (unsigned long long (&)[2]) __arrayPtr;
    cli::pin_ptr<char> __pinnedPtr = &a.M128I8[0];
    char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i8 = (char (&)[16]) __arrayPtr;
    cli::pin_ptr<short> __pinnedPtr = &a.M128I16[0];
    short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i16 = (short (&)[8]) __arrayPtr;
    cli::pin_ptr<int> __pinnedPtr = &a.M128I32[0];
    int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i32 = (int (&)[4]) __arrayPtr;
    cli::pin_ptr<long long> __pinnedPtr = &a.M128I64[0];
    long long* __arrayPtr = __pinnedPtr;
    _marshal0.m128_i64 = (long long (&)[2]) __arrayPtr;
    cli::pin_ptr<unsigned char> __pinnedPtr = &a.M128U8[0];
    unsigned char* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u8 = (unsigned char (&)[16]) __arrayPtr;
    cli::pin_ptr<unsigned short> __pinnedPtr = &a.M128U16[0];
    unsigned short* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u16 = (unsigned short (&)[8]) __arrayPtr;
    cli::pin_ptr<unsigned int> __pinnedPtr = &a.M128U32[0];
    unsigned int* __arrayPtr = __pinnedPtr;
    _marshal0.m128_u32 = (unsigned int (&)[4]) __arrayPtr;
    auto __arg0 = _marshal0;
    auto _marshal1 = ::__m128();
    cli::pin_ptr<float> __pinnedPtr = &b.M128F32[0];
    float* __arrayPtr = __pinnedPtr;
    _marshal1.m128_f32 = (float (&)[4]) __arrayPtr;
    cli::pin_ptr<unsigned long long> __pinnedPtr = &b.M128U64[0];
    unsigned long long* __arrayPtr = __pinnedPtr;
    _marshal1.m128_u64 = (unsigned long long (&)[2]) __arrayPtr;
    cli::pin_ptr<char> __pinnedPtr = &b.M128I8[0];
    char* __arrayPtr = __pinnedPtr;
    _marshal1.m128_i8 = (char (&)[16]) __arrayPtr;
    cli::pin_ptr<short> __pinnedPtr = &b.M128I16[0];
    short* __arrayPtr = __pinnedPtr;
    _marshal1.m128_i16 = (short (&)[8]) __arrayPtr;
    cli::pin_ptr<int> __pinnedPtr = &b.M128I32[0];
    int* __arrayPtr = __pinnedPtr;
    _marshal1.m128_i32 = (int (&)[4]) __arrayPtr;
    cli::pin_ptr<long long> __pinnedPtr = &b.M128I64[0];
    long long* __arrayPtr = __pinnedPtr;
    _marshal1.m128_i64 = (long long (&)[2]) __arrayPtr;
    cli::pin_ptr<unsigned char> __pinnedPtr = &b.M128U8[0];
    unsigned char* __arrayPtr = __pinnedPtr;
    _marshal1.m128_u8 = (unsigned char (&)[16]) __arrayPtr;
    cli::pin_ptr<unsigned short> __pinnedPtr = &b.M128U16[0];
    unsigned short* __arrayPtr = __pinnedPtr;
    _marshal1.m128_u16 = (unsigned short (&)[8]) __arrayPtr;
    cli::pin_ptr<unsigned int> __pinnedPtr = &b.M128U32[0];
    unsigned int* __arrayPtr = __pinnedPtr;
    _marshal1.m128_u32 = (unsigned int (&)[4]) __arrayPtr;
    auto __arg1 = _marshal1;
    auto _marshal2 = ::__m128();
    cli::pin_ptr<float> __pinnedPtr = &mask.M128F32[0];
    float* __arrayPtr = __pinnedPtr;
    _marshal2.m128_f32 = (float (&)[4]) __arrayPtr;
    cli::pin_ptr<unsigned long long> __pinnedPtr = &mask.M128U64[0];
    unsigned long long* __arrayPtr = __pinnedPtr;
    _marshal2.m128_u64 = (unsigned long long (&)[2]) __arrayPtr;
    cli::pin_ptr<char> __pinnedPtr = &mask.M128I8[0];
    char* __arrayPtr = __pinnedPtr;
    _marshal2.m128_i8 = (char (&)[16]) __arrayPtr;
    cli::pin_ptr<short> __pinnedPtr = &mask.M128I16[0];
    short* __arrayPtr = __pinnedPtr;
    _marshal2.m128_i16 = (short (&)[8]) __arrayPtr;
    cli::pin_ptr<int> __pinnedPtr = &mask.M128I32[0];
    int* __arrayPtr = __pinnedPtr;
    _marshal2.m128_i32 = (int (&)[4]) __arrayPtr;
    cli::pin_ptr<long long> __pinnedPtr = &mask.M128I64[0];
    long long* __arrayPtr = __pinnedPtr;
    _marshal2.m128_i64 = (long long (&)[2]) __arrayPtr;
    cli::pin_ptr<unsigned char> __pinnedPtr = &mask.M128U8[0];
    unsigned char* __arrayPtr = __pinnedPtr;
    _marshal2.m128_u8 = (unsigned char (&)[16]) __arrayPtr;
    cli::pin_ptr<unsigned short> __pinnedPtr = &mask.M128U16[0];
    unsigned short* __arrayPtr = __pinnedPtr;
    _marshal2.m128_u16 = (unsigned short (&)[8]) __arrayPtr;
    cli::pin_ptr<unsigned int> __pinnedPtr = &mask.M128U32[0];
    unsigned int* __arrayPtr = __pinnedPtr;
    _marshal2.m128_u32 = (unsigned int (&)[4]) __arrayPtr;
    auto __arg2 = _marshal2;
    auto __ret = ::math::cmov_ps(__arg0, __arg1, __arg2);
    return M128((::__m128*)&__ret);
}
