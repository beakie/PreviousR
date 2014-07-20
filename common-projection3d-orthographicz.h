#ifndef COMMONPROJECTION3DORTHOGRAPHICZ_H
#define COMMONPROJECTION3DORTHOGRAPHICZ_H

#include "common-projection3d-iprojection.h"

namespace Common
{

namespace Projection3d
{

struct OrthographicZ: IProjection
{
    Matrix4<float> getMatrix()
    {
        return Matrix4<float>(0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1); // todo
    }

    Common::Space2d::Plot getPlot(Common::Space3d::Coordinate coordinate)
    {
        return Common::Space2d::Plot(coordinate.values[1], coordinate.values[2]); // todo
    }
};

}

}

#endif // COMMONPROJECTION3DORTHOGRAPHICZ_H
