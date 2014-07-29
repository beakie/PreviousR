#ifndef COMMONPROJECTION3DDIMETRIC_H
#define COMMONPROJECTION3DDIMETRIC_H

#include "common-projection3d-iprojection.h"


// should return matrix3 ???
// overload getmatrix?
// need to make 8 of these

namespace Common
{

namespace Projection3d
{

struct Dimetric: IProjection
{

    Matrix4<float> getMatrix()
    {
        float a; // arcsin(tan(30*)) =~ 35.264
        float b; //45*

        return (Common::Matrix4<float>(1, 0, 0, 0, 0, Common::Math::cos(a), Common::Math::sin(a), 0, 0, -Common::Math::sin(a), Common::Math::cos(a), 0, 0, 0, 0, 1)
                    * Common::Matrix4<float>(Common::Math::cos(b), 0, -Common::Math::sin(b), 0, 0, 1, 0, 0, Common::Math::sin(b), 0, Common::Math::cos(b), 0, 0, 0, 0, 1)
                    * Common::Vector4<float>(0, 0, 0, 0)
                    * Common::Matrix4<float>(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0));

        //todo: not finished. need rest of multiplication from wiki.
    }

    Common::Space2d::Plot getPlot(Common::Space3d::Coordinate coordinate)
    {
        return Common::Space2d::Plot(); // todo
    }
};

}

}

#endif // COMMONPROJECTION3DDIMETRIC_H
