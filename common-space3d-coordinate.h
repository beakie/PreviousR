#ifndef COMMONSPACE3DCOORDINATE_H
#define COMMONSPACE3DCOORDINATE_H

#include "common-math.h"
#include "common-vector3.h"

namespace Common
{

namespace Space3d
{

struct Coordinate: Vector3<float>
{
    using Vector3::Vector3;

    float x()
    {
        return values[0];
    }

    float y()
    {
        return values[1];
    }

    float z()
    {
        return values[2];
    }

    float distanceFrom(Coordinate coordinate)
    {
        return Common::Math::power(Common::Math::power(coordinate.values[0] - values[0], 2) + Common::Math::power(coordinate.values[1] - values[1], 2) + Common::Math::power(coordinate.values[2] - values[2], 2), 0.5);
    }

    Coordinate & operator+(const Coordinate &coordinate)
    {
        Vector3::operator +((Vector3<float>)coordinate);

        return *this;
    }

    Coordinate & operator-(const Coordinate &coordinate)
    {
        Vector3::operator -((Vector3<float>)coordinate);

        return *this;
    }

    Coordinate & operator=(const Coordinate &coordinate)
    {
        Vector3::operator =((Vector3<float>)coordinate);

        return *this;
    }

    virtual ~Coordinate() { }
};

}

}

#endif // COMMONSPACE3DCOORDINATE_H
