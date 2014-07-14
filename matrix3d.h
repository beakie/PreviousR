#ifndef MATRIX3D_H
#define MATRIX3D_H

#include "matrix4.h"

namespace Common
{

template <typename TVALUE>
class Matrix3D
{
public:
    static Matrix4<TVALUE> getZeroMatrix()
    {
        Matrix4<TVALUE> matrix;
        matrix.set(0, 0, 1);
        matrix.set(1, 1, 1);
        matrix.set(2, 2, 1);
        matrix.set(3, 3, 1);
        return matrix;
    }
};

}

#endif // MATRIX3D_H
