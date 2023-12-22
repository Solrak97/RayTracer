#ifndef _TUPLE_H
#define _TUPLE_H

#include <iostream>
#include <string>
#include <sstream>

namespace Math
{

    class Tuple
    {
        friend class Point;
        friend class Vector;

    private:
        float X;
        float Y;
        float Z;
        float W;

    public:
        Tuple(float X, float Y, float Z, float W);
        ~Tuple();

        bool isPoint();
        bool isVector();

        std::string toString();

        // Tuple add
        Tuple operator+(const Tuple &T);

        // Tuple sub
        Tuple operator-(const Tuple &T);

        // Tuple neg
        Tuple operator-();

        // Scalar mul
        Tuple operator * (const float &f);

        // Div
        Tuple operator / (const float &f);

        

    };
}

#endif