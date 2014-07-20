#ifndef COMMONSPACE2DLINEDISTANCEANGLE_H
#define COMMONSPACE2DLINEDISTANCEANGLE_H

#include "common-space2d-plot.h"

namespace Common
{

namespace Space2d
{

struct LineDistanceAngle
{
    float Distance;
    float Angle;

    float x(float y)
    {
        return (y - (Distance / Common::Math::sin(Common::Math::degreeToRadian(Angle)))) / (-(Common::Math::cos(Common::Math::degreeToRadian(Angle)) / Common::Math::sin(Common::Math::degreeToRadian(Angle))));
    }

    float y(float x)
    {
        return (-(Common::Math::cos(Common::Math::degreeToRadian(Angle)) / Common::Math::sin(Common::Math::degreeToRadian(Angle)))) * x + (Distance / Common::Math::sin(Common::Math::degreeToRadian(Angle)));
    }
};

}

}

#endif // COMMONSPACE2DLINEDISTANCEANGLE_H
