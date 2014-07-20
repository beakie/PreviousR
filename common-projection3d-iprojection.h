#ifndef COMMONPROJECTION3DIPROJECTION_H
#define COMMONPROJECTION3DIPROJECTION_H

#include "common-quaternion.h"
#include "common-matrix4.h"
#include "common-space2d-plot.h"
#include "common-space3d-coordinate.h"

namespace Common
{

namespace Projection3d
{

struct IProjection
{
    virtual Matrix4<float> getMatrix() = 0;
    //virtual Quaternion getQuaternion() = 0;
    virtual Common::Space2d::Plot getPlot(Common::Space3d::Coordinate coordinate) = 0;
    //add getPlotwithzindex(coordinate) or maybe getzindex(coordinate)
};

}

}

#endif // COMMONPROJECTION3DIPROJECTION_H
