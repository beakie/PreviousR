#ifndef COMMONSPACE3DLINE3D_H
#define COMMONSPACE3DLINE3D_H

#include "common-space3d-coordinate.h"

namespace Common
{

namespace Space3d
{

struct LineSegment3d
{
    Common::Space3d::Coordinate From;
    Common::Space3d::Coordinate To;

    float getLength()
    {
        // todo.
        return 0;
    }
};

}

}

#endif // COMMONSPACE3DLINE3D_H
