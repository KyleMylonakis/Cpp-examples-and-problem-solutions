#include "functions.h"
#include <cmath>

double distanceFrom (const Point2d &a, const Point2d &b)
{
    return sqrt( (a.m_x - b.m_x)*(a.m_x - b.m_x) + (a.m_y - b.m_y)*(a.m_y - b.m_y));
}