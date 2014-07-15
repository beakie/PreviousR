#ifndef COMMONUNITVECTOR3_H
#define COMMONUNITVECTOR3_H

#include "common-vector3.h"

namespace Common
{

struct UnitVector3 : Vector3<float>
{
    float i()
    {
        return values[0];
    }

    float j()
    {
        return values[1];
    }

    float k()
    {
        return values[2];
    }

    virtual ~UnitVector3() { }
};

}

#endif // COMMONUNITVECTOR3_H
