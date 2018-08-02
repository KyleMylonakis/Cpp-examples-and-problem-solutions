#include "Fraction.h"
#include <iostream>

Fraction::Fraction() : m_numerator {0}, m_denominator {1}
{
}

Fraction::Fraction(int numerator = 0, int denominator = 1) : m_numerator{numerator}, m_denominator{denominator}
{
}

void Fraction::print()
{
    std::cout << m_numerator << "/" << m_denominator << std::endl;
}

int Fraction::getNumerator() const
{
    return m_numerator;
}

int Fraction::getDenominator() const
{
    return m_denominator;
}

void Fraction::setNumerator(int numerator)
{
    m_numerator = numerator;
}

void Fraction::setDenominator(int denominator)
{
    m_denominator = denominator;
}