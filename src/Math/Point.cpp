#include "Point.hpp"

namespace Math
{
    Point::Point(float X, float Y, float Z) : Tuple(X, Y, Z, 1.0f)
    {
    }

    Point::~Point()
    {
    }
}