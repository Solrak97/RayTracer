#include "Tuple.hpp"

namespace Math
{

    Tuple::Tuple(float X, float Y, float Z, float W)
    {
        this->X = X;
        this->Y = Y;
        this->Z = Z;
        this->W = W;
    }

    Tuple::~Tuple()
    {
    }

    bool Tuple::is_point()
    {
        return this->W == 1;
    }

    bool Tuple::is_vector()
    {
        return this->W == 0;
    }
}
