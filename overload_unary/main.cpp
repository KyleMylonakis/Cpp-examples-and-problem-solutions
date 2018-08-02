#include "Point.h"
#include <iostream>

int main()
{
    Point point;

    if (!point)
    {
        std::cout << "The point is set at the origin." << std::endl;
    }
    else
    {
        std::cout << "The point is not at the origin." << std::endl;
    }
    return 0;
}