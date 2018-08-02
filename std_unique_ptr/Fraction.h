#pragma once

#include <ostream>

class Fraction
{
protected:
    int m_num;
    int m_denom;

public:
    Fraction(int num = 0, int denom = 1);
    friend std::ostream& operator<<(std::ostream& out, const Fraction &f1);


};

void printFraction(const Fraction* const frac);