#ifndef _VECTOR_H
#define _VECTOR_H

#include "Tuple.hpp"
namespace Math
{

    class Vector : Tuple
    {
    private:
    public:
        Vector(float X, float Y, float Z);
        ~Vector();
    };

}
#endif