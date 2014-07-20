#ifndef COMMONPLOT_H
#define COMMONPLOT_H

#include "common-math.h"
#include "common-vector2.h"

namespace Common
{

namespace Space2d
{

struct Plot : Vector2<float>
{

    using Vector2::Vector2;

    float x()
    {
        return values[0];
    }

    float y()
    {
        return values[1];
    }

    float distanceFrom(Plot plot)
    {
        return Common::Math::power(Common::Math::power(plot.values[0] - values[0], 2) + Common::Math::power(plot.values[1] - values[1], 2), 0.5);
    }

    Plot getOffset(Plot plot)
    {
        return plot - *this;
    }

    Plot & operator+(const Plot &plot)
    {
        Vector2::operator +((Vector2<float>)plot);

        return *this;
    }

    Plot & operator-(const Plot &plot)
    {
        Vector2::operator -((Vector2<float>)plot);

        return *this;
    }

    Plot & operator=(const Plot &plot)
    {
        Vector2::operator =((Vector2<float>)plot);

        return *this;
    }

    virtual ~Plot() { }
};

}

}

#endif // COMMONPLOT_H
