#pragma once
#include "Fruit.h"
#include <ostream>


class Apple : public Fruit
{
private:
    double m_fiber;

protected:
    Apple(std::string name, std::string color, double fiber=0);

public:
    Apple(std::string color="red", double fiber=0);
    double getFiber() const;
    friend std::ostream& operator<<(std::ostream& out, const Apple& a);
};