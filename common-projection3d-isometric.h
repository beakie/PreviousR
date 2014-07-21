#ifndef COMMONPROJECTION3DISOMETRIC_H
#define COMMONPROJECTION3DISOMETRIC_H

#include "common-projection3d-iprojection.h"

namespace Common
{

namespace Projection3d
{

struct Isometric: IProjection
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

#endif // COMMONPROJECTION3DISOMETRIC_H
