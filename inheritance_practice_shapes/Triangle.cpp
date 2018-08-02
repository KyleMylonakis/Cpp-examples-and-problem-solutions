#include "Triangle.h"

Triangle::Triangle(Point& first,
                    Point& second,
                    Point& third) :
                    m_point_1 {first},
                    m_point_2 {second},
                    m_point_3 {third}
{}

std::ostream& Triangle::print(std::ostream& out) const
{
    out << "Triangle(" 
        << m_point_1 << ", "
        << m_point_2 << ", "
        << m_point_3 << ")";

}