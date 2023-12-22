#ifndef POINT_H
#define POINT_H

#include "Tuple.hpp"
#include "Vector.hpp"

namespace Math
{
    class Vector;
    class Point : public Tuple
    {

    private:
    public:
        Point(float X, float Y, float Z);
        ~Point();
    };
}
#endif