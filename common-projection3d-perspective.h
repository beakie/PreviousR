#ifndef COMMONPROJECTION3DPERSPECTIVE_H
#define COMMONPROJECTION3DPERSPECTIVE_H

#include "common-projection3d-iprojection.h"

namespace Common
{

namespace Projection3d
{

struct Perspective: IProjection
{
    Matrix4<float> getMatrix()
    {
    }
};

}

}

#endif // COMMONPROJECTION3DPERSPECTIVE_H
