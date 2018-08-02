#include <iostream>
#include "Point2d.h"
#include "functions.h"

int main()
{
    Point2d second(3.0, 4.0);
    Point2d first;
    first.print();
    second.print();
    std::cout << "Distance between two points: " << distanceFrom( first, second) << std::endl;
    return 0;
}