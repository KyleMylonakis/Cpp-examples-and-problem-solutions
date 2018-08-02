#include "Shape.h"
#include "Triangle.h"
#include "Circle.h"
#include <iostream>
#include <vector>
#include "functions.h"


int main(int argc, char const *argv[])
{
    Point a {1, 2, 3};
    Point b {4, 5, 6};
    Point c {7, 8, 9};

    std::vector<Shape*> v;
    v.push_back(new Circle {a,7});
    v.push_back(new Triangle {a,b,c});
    v.push_back(new Circle {b, 3});

    for (Shape* element : v)
    {
        std::cout << *element << std::endl;
    }

    std::cout << "The largest radius is: " << getLargestRadius(v) << std::endl;

    for (Shape* element : v)
    {
        delete element;
    }
}
