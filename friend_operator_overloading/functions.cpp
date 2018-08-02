#include "functions.h"

std::ostream& operator<<(std::ostream &out, const Fraction &q)
{
    out << q.getNumerator() << "/" << q.getDenominator();
    return out;
}


std::istream& operator>>(std::istream &in, Fraction &q)
{
    char c;
    int numerator;
    int denominator;
    in >> numerator;
    in >> c;
    in >> denominator;

    q.setNumerator(numerator);
    q.setDenominator(denominator);
    
    return in;
}


Fraction operator*(const Fraction &q, const int a)
{
    return Fraction(q.m_numerator * a, q.m_denominator);
}

Fraction operator*(const int a, const Fraction &q)
{
    return q*a;
}

Fraction operator*(const Fraction &p, const Fraction &q)
{
    return Fraction(p.m_numerator * q.m_numerator, p.m_denominator * q.m_denominator);
}

