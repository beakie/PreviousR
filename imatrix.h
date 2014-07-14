#ifndef IMATRIX_H
#define IMATRIX_H

namespace Common
{

template <typename TVALUE, typename TINDEX, typename TIMPLEMENTATION>
struct IMatrix
{
public:
    virtual void set(const TVALUE value) = 0;
    virtual void set(const TVALUE x1y1, const TVALUE x1y2, const TVALUE x1y3, const TVALUE x1y4, const TVALUE x2y1, const TVALUE x2y2, const TVALUE x2y3, const TVALUE x2y4, const TVALUE x3y1, const TVALUE x3y2, const TVALUE x3y3, const TVALUE x3y4, const TVALUE x4y1, const TVALUE x4y2, const TVALUE x4y3, const TVALUE x4y4) = 0;
    virtual void set(const TINDEX x, const TINDEX y, const TVALUE value) = 0;
    virtual void set(const TIMPLEMENTATION &matrix) = 0;
    virtual TVALUE get(const TINDEX x, const TINDEX y) = 0;
    virtual bool equals(const TIMPLEMENTATION &matrix) = 0;
    virtual TIMPLEMENTATION & multiply(const TIMPLEMENTATION &matrix) = 0;
    virtual TIMPLEMENTATION & operator=(const TVALUE &value) = 0;
    virtual TIMPLEMENTATION & operator=(const TIMPLEMENTATION &matrix) = 0;
    virtual bool operator==(const TIMPLEMENTATION &matrix) = 0;
    virtual TIMPLEMENTATION & operator*(const TIMPLEMENTATION &matrix) = 0;
    virtual TIMPLEMENTATION & operator*=(const TIMPLEMENTATION &matrix) = 0;
    virtual ~IMatrix() { }
};

}

#endif // IMATRIX_H
