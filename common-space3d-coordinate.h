#ifndef COMMONSPACE3DCOORDINATE_H
#define COMMONSPACE3DCOORDINATE_H

#include "common-math.h"
#include "common-vector3.h"

namespace Common
{

namespace Space3d
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

    float getLength()
    {
        // todo. make operator calls
        return Common::Math::power((values[0] * values[0]) * (values[1] * values[1]) * (values[2] * values[2]), 0.5f);
    }

    virtual ~Coordinate() { }
};

}

}

#endif // COMMONSPACE3DCOORDINATE_H
