#include "Circle.h"
#include <iostream>

Circle::Circle(Point &center, int radius) : m_center {center},
    m_radius {radius}
    {}

std::ostream& Circle::print(std::ostream& out) const
{
    std::cout << "Circle("
        << m_center << ", radius " << m_radius << ")";
}

int Circle::getRadius() const
{
    return m_radius;
}