#ifndef COMMONSPACE3DAXISANGLEARBITRARY_H
#define COMMONSPACE3DAXISANGLEARBITRARY_H

#include "common-math.h"
#include "common-matrix4.h"
#include "common-space3d-coordinate.h"

namespace Common
{

namespace Space3d
{

struct AxisRotationArbitrary
{
    Common::Space3d::Coordinate Axis;
    float Rotation;

    AxisRotationArbitrary()
    {

    }

    AxisRotationArbitrary(const Common::Space3d::Coordinate axis, const float rotation)
    {
        Axis = axis;
        Rotation = rotation;
    }

    AxisRotationArbitrary(const float x, const float y, const float z, const float rotation)
    {
        Axis.values[0] = x;
        Axis.values[1] = y;
        Axis.values[2] = z;
        Rotation = rotation;
    }

    Matrix4<float> getRotationMatrix()
    {
        float c = Common::Math::cos(Rotation);
        float c_ = 1.0f - c;
        float s = Common::Math::sin(Rotation);
        Matrix4<float> matrix;
        matrix.values[0][0] = (Axis.values[0] * Axis.values[0]) + ((1 - (Axis.values[0] * Axis.values[0])) * c);
        matrix.values[0][1] = (Axis.values[0] * Axis.values[1] * c_) + (Axis.values[2] * s);
        matrix.values[0][2] = (Axis.values[0] * Axis.values[2] * c_) - (Axis.values[1] * s);
        matrix.values[1][0] = (Axis.values[0] * Axis.values[1] * c_) - (Axis.values[2] * s);
        matrix.values[1][1] = (Axis.values[1] * Axis.values[1]) + ((1 - (Axis.values[1] * Axis.values[1])) * c);
        matrix.values[1][2] = (Axis.values[1] * Axis.values[2] * c_) + (Axis.values[0] * s);
        matrix.values[2][0] = (Axis.values[0] * Axis.values[2] * c_) + (Axis.values[1] * s);
        matrix.values[2][1] = (Axis.values[1] * Axis.values[2] * c_) - (Axis.values[0] * s);
        matrix.values[2][2] = (Axis.values[2] * Axis.values[2]) + ((1 - (Axis.values[2] * Axis.values[2])) * c);
        matrix.values[3][3] = 1;
        return matrix;
    }

    virtual ~AxisRotationArbitrary() { }
};

}

}

#endif // COMMONSPACE3DAXISANGLEARBITRARY_H
