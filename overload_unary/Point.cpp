#include "Point.h"


Point::Point(double x , double y , double z /* all parameters default to zero in header */) :
    m_x {x}, m_y {y}, m_z {z}
{
} 

Point Point::operator-() const
{
    return Point(-m_x, -m_y, -m_z);
}

Point Point::operator+() const
{
    return Point(-m_x, -m_y, -m_z);
}

bool Point::operator!() const
{
    return (m_x == 0 && m_y == 0 && m_z == 0);
}

double Point::getX() const
{
    return m_x;
}

double Point::getY() const
{
    return m_y;
}

double Point::getZ() const
{
    return m_z;
}