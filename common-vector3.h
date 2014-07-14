#ifndef COMMONVECTOR3_H
#define COMMONVECTOR3_H

#include "common-ivector.h"

namespace Common
{

template <typename TVALUE>
struct Vector3 : IVector<TVALUE, unsigned char, Matrix4<TVALUE> >
{
    TVALUE values[3];

    virtual ~Vector3() { }
};

}

#endif // COMMONVECTOR3_H
