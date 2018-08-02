#pragma once

#include "Shape.h"
#include "Point.h"

class Circle : public Shape
{
protected:
    int m_radius;
    Point m_center;

public:
    Circle(Point& center, int radius);
    virtual std::ostream& print(std::ostream& out) const override;
    int getRadius() const;
};