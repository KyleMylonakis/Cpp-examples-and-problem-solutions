#pragma once
#include "Shape.h"
#include "Point.h"

class Triangle : public Shape
{
protected:
    Point m_point_1;
    Point m_point_2;
    Point m_point_3;

public:
    Triangle(Point& first, Point& second, Point& third);
    virtual std::ostream& print(std::ostream& out) const override;

};