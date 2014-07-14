#ifndef COMMONSPACE3DCOORDINATE_H
#define COMMONSPACE3DCOORDINATE_H

#include "common-vector3.h"

namespace Common
{

namespace Space3D
{

struct Coordinate: Vector3<float>
{
    float x()
    {
        return values[0];
    }

    float y()
    {
        return values[1];
    }

    float z()
    {
        return values[2];
    }

    virtual ~Coordinate() { }
};

}

}

#endif // COMMONSPACE3DCOORDINATE_H
