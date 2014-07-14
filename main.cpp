#include <QCoreApplication>

#include "matrix3d.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Common::Matrix4<float> matrix4;
    matrix4.set(0);
    matrix4.get(1, 1);

    matrix4 *= Common::Matrix3D<float>::getZeroMatrix();

    return a.exec();
}
