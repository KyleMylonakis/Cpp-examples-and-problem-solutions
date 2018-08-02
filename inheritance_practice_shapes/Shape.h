#pragma once
#include <ostream>

class Shape
{
public:
    Shape();
    virtual std::ostream& print(std::ostream& out) const = 0;
    friend std::ostream& operator<< (std::ostream& out, const Shape& shape);
    virtual ~Shape();
 

};