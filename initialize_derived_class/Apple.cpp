#include "Apple.h"

Apple::Apple(std::string name, std::string color, double fiber) :
    Fruit(name, color), m_fiber {fiber}
{
}

Apple::Apple(std::string color, double fiber) :
    Fruit("apple", color),
    m_fiber {fiber}
{
}


double Apple::getFiber() const
{
    return m_fiber;
}

std::ostream& operator<<(std::ostream& out, const Apple& a)
{
    out << "Apple" << '(' << a.getName() << ", " << a.getColor() << ", " << a.getFiber() << ')' << std::endl;
    return out;
}