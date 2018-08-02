#include "Shape.h"

Shape::Shape() {}

std::ostream& operator<< (std::ostream& out, const Shape& shape)
{
    return shape.print(out);
}

Shape::~Shape() {}