#include <QCoreApplication>

#include "common-array.h"
#include "common-space3d-helpers.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Common::Matrix4<float> matrix4;
    matrix4.set(0);
    matrix4.get(1, 1);

    matrix4 *= (new Common::Space3D::AxisRotationArbitrary(0, 0, 0, 0))->getMatrix();

    matrix4 *= Common::Space3D::Helpers::getAxisRotationMatrix(0, 0, 0, 0);

    Common::Array<int> array;
    array.addItem(1);
    //array += 1;
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

    // +=(T) additem
    // +=(Array<T>) addItems
    // ++(T) resize

    return a.exec();
}
