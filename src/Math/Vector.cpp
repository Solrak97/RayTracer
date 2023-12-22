#include "Vector.hpp"

namespace Math
{

    Vector::Vector(float X, float Y, float Z) : Tuple(X, Y, Z, 0.0f)
    {
    }

    Vector::~Vector() {}

    // Tuple like operations
    Vector Vector::operator*(const float &f)
    {
        return Vector(this->X * f, this->Y * f, this->Z * f);
    }
    Vector Vector::operator/(const float &f)
    {
        return *this * 1 / f;
    }

    // Vector -> Vector Operations
    Vector Vector::operator+(const Vector &V) {
        return Vector(this->X + V.X, this->Y + V.Y, this->Z + V.Z);
    }
    Vector Vector::operator-(const Vector &V) {}
    Vector Vector::operator-() {}

    // Vector -> Point Operations
    Vector Vector::operator+(const Point &P) {}
    Vector Vector::operator-(const Point &P) {}

    // Special Vector Operations
    float Vector::magnitude() {}
    Vector Vector::normalize() {}
    Vector Vector::dot(const Vector &V) {}
    Vector Vector::cross(const Vector &V) {}
}