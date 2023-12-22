#ifndef _TUPLE_H
#define _TUPLE_H

#include <iostream>

namespace Math
{

    class Tuple
    {
    private:
        float X;
        float Y;
        float Z;
        float W;

    public:
        Tuple(float X, float Y, float Z, float W);
        ~Tuple();

        bool is_point();
        bool is_vector();
    };
}

#endif