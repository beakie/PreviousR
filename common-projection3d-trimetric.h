#ifndef COMMONPROJECTION3DTRIMETRIC_H
#define COMMONPROJECTION3DTRIMETRIC_H

#include "common-projection3d-iprojection.h"

namespace Common
{

namespace Projection3d
{

struct Trimetric: IProjection
{
    Matrix4<float> getMatrix()
    {
        return Matrix4<float>(); // todo
    }

    Common::Space2d::Plot getPlot(Common::Space3d::Coordinate coordinate)
    {
        return Common::Space2d::Plot(); // todo
    }
};

}

}

#endif // COMMONPROJECTION3DTRIMETRIC_H
