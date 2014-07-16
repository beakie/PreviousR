#ifndef COMMONSPACE3DLINESEGMENT2D_H
#define COMMONSPACE3DLINESEGMENT2D_H

#include "common-space2d-plot.h"

namespace Common
{

namespace Space2d
{

struct LineSegment
{
    Common::Space2d::Plot From;
    Common::Space2d::Plot To;

    float getLength()
    {
        return From.distanceFrom(To);
    }
};

}

}

#endif // COMMONSPACE3DLINESEGMENT2D_H
