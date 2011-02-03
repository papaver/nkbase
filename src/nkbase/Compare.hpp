/*
 * header
 */

// no includes allowed

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
