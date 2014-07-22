#include <QCoreApplication>

#include "namespaces.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Common::Matrix4<float> matrix4;
    matrix4.set(0);
    matrix4.get(1, 1);
    matrix4 *= (new Common::Space3d::AxisAngle(0, 0, 0, 0))->getMatrix();
    matrix4 *= Common::Space3d::Helpers::getRotationMatrix(0, 0, 0, 0);

    Common::Array<float> array;

    array.addItem(1);
    array += 1;

    array.operator ++();
    array.operator ++(0);
    array++;
    ++array;
    array.resize();

    array.operator --();
    array.operator --(0);
    array--;
    --array;
    array.clear();

    Common::Space3d::Coordinate c;
    c = c + c;

    Common::Vector3<float> v;
    v = v.crossProduct(v);
    float x = v.dotProduct(v);
    x = Common::Space2d::LineSlopeIntercept().y(x);

    Common::Space2d::Plot p;
    p = p - p;

    Common::UnitVector3 u;

    Common::Matrix4f m1 = Common::Matrix4<float>();

    Common::Projection3d::Trimetric projection();

    Common::Space3d::Helpers::getScalingMatrix(Common::Vector3<float>());

    return a.exec();
}
