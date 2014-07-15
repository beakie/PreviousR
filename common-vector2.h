#ifndef COMMONVECTOR2_H
#define COMMONVECTOR2_H

namespace Common
{

template <typename TVALUE>
struct Vector2
{
    TVALUE values[2];

    Vector2()
    {
    }

    Vector2(TVALUE a, TVALUE b)
    {
        values[0] = a;
        values[1] = b;
    }

    virtual ~Vector2() { }
};

}

#endif // COMMONVECTOR2_H
