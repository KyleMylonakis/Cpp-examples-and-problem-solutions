#include "Point.h"

Point::Point(int x, int y, int z) :
    m_x {x}, m_y {y}, m_z {z} 
    {}

std::ostream& Point::print(std::ostream& out) const
{
    out << "Point(" 
        << m_x << ", "
        << m_y << ", "
        << m_z << ")";
    return out;
}