#ifndef COMMONMATH_H
#define COMMONMATH_H

namespace Common
{

class Math
{
public:
    template <typename T>
    static T sin(T value)
    {
        return value;
    }

    template <typename T>
    static T cos(T value)
    {
        return value;
    }

    template <typename T>
    static T tan(T value)
    {
        return value;
    }

    template <typename T>
    T DegreeToRadian(T value)
    {
        return (T)(Pi * ((float)value) / 180.0);
    }

    template <typename T>
    T RadianToDegree(T value)
    {
        return (T)(((float)value) * (180.0 / Pi));
    }

    static const float Pi = 3.1415926534;
};

}

#endif // COMMONMATH_H
