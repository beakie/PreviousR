#ifndef COMMONPROJECTION3DWEAKPERSPECTIVEZ_H
#define COMMONPROJECTION3DWEAKPERSPECTIVEZ_H

#include "common-projection3d-iprojection.h"

namespace Common
{

namespace Projection3d
{

struct WeakPerspectiveZ: IProjection
{
    float Scale;

    Matrix4<float> getMatrix()
    {
        return Matrix4<float>(0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
    }

    Common::Space2d::Plot getPlot(Common::Space3d::Coordinate coordinate)
    {
        return Common::Space2d::Plot(coordinate.values[0], coordinate.values[1]);
    }
};

}

}

#endif // COMMONPROJECTION3DWEAKPERSPECTIVEZ_H
