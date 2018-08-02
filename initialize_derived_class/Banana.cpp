#include "Banana.h"

Banana::Banana(std::string color) : Fruit("banana", color) {}

std::ostream& operator<<(std::ostream& out, const Banana& b)
{
    out << "Banana" << '(' << b.getName() << ", " << b.getColor() << ')' << std::endl;
    return out;
}
