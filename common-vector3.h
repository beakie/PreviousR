#ifndef COMMONVECTOR3_H
#define COMMONVECTOR3_H

namespace Common
{

template <typename TVALUE>
struct Vector3
{
    TVALUE values[3];

    Vector3()
    {
    }

    Vector3(TVALUE x, TVALUE y, TVALUE z)
    {
        values[0] = x;
        values[1] = y;
        values[2] = z;
    }

    TVALUE dotProduct(const Vector3<TVALUE> &v)
    {
        return (values[0] * v.values[0] + values[1] * v.values[1] + values[2] * v.values[2]);
    }

    Vector3<TVALUE> crossProduct(const Vector3<TVALUE> &v)
    {
        Vector3<TVALUE> vector;
        vector.values[0] = (values[1] * v.values[2] - values[2] * v.values[1]);
        vector.values[1] = (values[2] * v.values[0] - values[0] * v.values[2]);
        vector.values[2] = (values[0] * v.values[1] - values[1] * v.values[0]);
        return vector;
    }

    virtual ~Vector3() { }
};

}

#endif // COMMONVECTOR3_H
