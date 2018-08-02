#pragma once
#include "Shape.h"

class Point : public Shape
{
protected:
    int m_x;
    int m_y;
    int m_z;

public:
    Point(int x, int y, int z);
    virtual std::ostream& print(std::ostream& out) const override;

};