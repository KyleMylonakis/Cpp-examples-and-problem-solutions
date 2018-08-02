#include <iostream>
#include "Point2d.h"
#include <cmath>

Point2d::Point2d() : m_x {0.0}, m_y {0.0}
{
}

Point2d::Point2d(double x = 0.0, double y = 0.0) : m_x {x}, m_y {y}
{
}

void Point2d::print()
{
    std::cout << "Point2d(" << m_x << " , " << m_y << ")" << std::endl;
}



