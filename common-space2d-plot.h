#ifndef COMMONPLOT_H
#define COMMONPLOT_H

#include "common-vector2.h"

namespace Common
{

namespace Space2d
{

template <typename TVALUE>
struct Plot : Vector2<TVALUE>
{

    float x()
    {
        return values[0];
    }

    float y()
    {
        return values[1];
    }

    virtual ~Plot() { }
};

}

}

#endif // COMMONPLOT_H
