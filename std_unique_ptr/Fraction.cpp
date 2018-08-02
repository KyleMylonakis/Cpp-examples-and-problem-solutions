#include "Fraction.h"
#include <iostream>


Fraction::Fraction(int num, int denom) :
    m_num {num}, m_denom {denom}
{
}

std::ostream& operator<<(std::ostream& out, const Fraction &frac)
{
    out << frac.m_num << "/" << frac.m_denom;
    return out;
}

void printFraction(const Fraction* const frac)
{
    if (frac)
        std::cout << *frac << std::endl;
}