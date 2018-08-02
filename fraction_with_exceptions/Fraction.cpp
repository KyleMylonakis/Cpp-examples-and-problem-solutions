#include "Fraction.h"
#include <stdexcept>
#include <iostream>

Fraction::Fraction(int num, int denom):
m_num {num}, m_denom {denom}
{
    if (m_denom == 0)
        throw std::runtime_error("Your fraction has an invalid denominator.");
    std::cout << m_num << "/" << m_denom << std::endl;
    
}