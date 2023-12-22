#ifndef _POINT_H
#define _POINT_H

#include "Tuple.hpp"

namespace Math
{
    class Point : Tuple
    {

    private:
    public:
        Point(float X, float Y, float Z);
        ~Point();
    };
}
#endif