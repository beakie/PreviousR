#ifndef COMMONSPACE3DLINESEGMENT3D_H
#define COMMONSPACE3DLINESEGMENT3D_H

#include "common-math.h"
#include "common-space3d-coordinate.h"

namespace Common
{

namespace Space3d
{

struct LineSegment
{
    Common::Space3d::Coordinate From;
    Common::Space3d::Coordinate To;

    float getLength()
    {
        return From.distanceFrom(To);
    }

};

}

}

#endif // COMMONSPACE3DLINESEGMENT3D_H
