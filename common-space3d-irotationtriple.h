#ifndef COMMONSPACE3DIROTATIONTRIPLE_H
#define COMMONSPACE3DIROTATIONTRIPLE_H

#include "common-matrix4.h"
#include "common-quaternion.h"
#include "common-space3d-irotation.h"

namespace Common
{

namespace Space3d
{

struct IRotationTriple: IRotation
{
    float Angle1;
    float Angle2;
    float Angle3;

    IRotationTriple(float angle1, float angle2, float angle3)
    {
        Angle1 = angle1;
        Angle2 = angle2;
        Angle3 = angle3;
    }

    virtual ~IRotationTriple() { }
};

}

}

#endif // COMMONSPACE3DIROTATIONTRIPLE_H
