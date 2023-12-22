#include <iostream>
#include "Math/Tuple.hpp"
#include "Math/Vector.hpp"
#include "Math/Point.hpp"

int main(int argc, char const *argv[])
{

    Math::Tuple T(-1.0f, -2.0f, -3.0f, 0.0f);
    Math::Vector V(1.0f, 2.0f, 3.0f);

    Math::Tuple V2 = V + V;

    std::cout << T.toString() << std::endl;
    std::cout << V.toString() << std::endl;

    

    return 0;

}
