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
    static T degreeToRadian(T value)
    {
        return (T)(Pi * value / 180.0);
    }

    template <typename T>
    static T radianToDegree(T value)
    {
        return (T)(value * (180.0 / Pi));
    }

    template <typename T>
    static T power(T value, T p)
    {
        return 0; // BALLLLLLSSSSS (todo). make operator too.
    }

    static const long double Pi = 3.14159265358979323846; // acos(-1)
};

}

#endif // COMMONMATH_H
