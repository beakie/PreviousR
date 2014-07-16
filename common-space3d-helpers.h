#ifndef MATRIX3D_H
#define MATRIX3D_H

#include "common-matrix4.h"
#include "common-vector3.h"
#include "common-space3d-axisrotationarbitrary.h"

namespace Common
{

namespace Space3d
{

class Helpers
{
public:
    static Matrix4<float> getZeroMatrix()
    {
        Matrix4<float> matrix;
        matrix.values[0][0] = 1;
        matrix.values[1][1] = 1;
        matrix.values[2][2] = 1;
        matrix.values[3][3] = 1;
        return matrix;
    }

    static Matrix4<float> getAxisRotationMatrix(float x, float y, float z, float rotation)
    {
        return (new AxisRotationArbitrary(x, y, z, rotation))->getRotationMatrix();
    }

    virtual ~Helpers() { }
};

}

}

#endif // MATRIX3D_H
