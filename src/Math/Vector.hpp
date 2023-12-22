#ifndef VECTOR_H
#define VECTOR_H

#include "Tuple.hpp"
#include "Point.hpp"

namespace Math
{

    class Point;
    class Vector : public Tuple
    {
    private:
    public:
        Vector(float X, float Y, float Z);
        ~Vector();

        // Tuple like operations
        Vector operator*(const float &f);
        Vector operator/(const float &f);

        // Vector -> Vector Operations
        Vector operator+(const Vector &V);
        Vector operator-(const Vector &V);
        Vector operator-();

        // Vector -> Point Operations
        Vector operator+(const Point &P);
        Vector operator-(const Point &P);

        // Special Vector Operations
        float magnitude();
        Vector normalize();
        Vector dot(const Vector &V);
        Vector cross(const Vector &V);
    };

}
#endif