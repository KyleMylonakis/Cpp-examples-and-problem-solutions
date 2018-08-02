#pragma once

class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:
    Fraction();
    Fraction(int numerator, int denominator);
    void print();

    int getNumerator() const;
    int getDenominator() const;

    void setNumerator(int numerator);
    void setDenominator(int denominator);

    friend Fraction operator*(const Fraction &q, const int a);
    friend Fraction operator*(const int a, const Fraction &q);
    friend Fraction operator*(const Fraction &p, const Fraction &q);


};