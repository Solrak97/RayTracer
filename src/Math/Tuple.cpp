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

    bool Tuple::isPoint()
    {
        return this->W == 1;
    }

    bool Tuple::isVector()
    {
        return this->W == 0;
    }

    std::string Tuple::toString()
    {
        std::stringstream iss("");
        iss << "(" << this->X << ", " << this->Y << ", " << this->Z << ", " << this->W << ")";
        return iss.str();
    }

    Tuple Tuple::operator+(const Tuple &T)
    {
        return Tuple(this->X + T.X, this->Y + T.Y, this->Z + T.Z, this->W + T.W);
    }

    Tuple Tuple::operator-() {}

    Tuple Tuple::operator*(const float &f) {}

    Tuple Tuple::operator/(const float &f) {}

}
