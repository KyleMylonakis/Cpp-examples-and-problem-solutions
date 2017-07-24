// fractions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(int numerator=0, int denominator = 1) : m_numerator(numerator), m_denominator(denominator) 
	{
	}

	void print()
	{
		std::cout << m_numerator << '/' << m_denominator << '\n';
	}

	friend Fraction operator*(Fraction &fraction1, Fraction &fraction2);
	friend Fraction operator*(int number, Fraction &fraction);
	friend Fraction operator*(Fraction &fraction, int number);

	friend std::ostream& operator<<(std::ostream &out, Fraction &fraction);
	friend std::istream& operator >> (std::istream &in, Fraction &fraction);

};

Fraction operator*(Fraction &fraction1, Fraction &fraction2)
{
	return Fraction{ fraction1.m_numerator*fraction2.m_numerator, fraction1.m_denominator*fraction2.m_denominator };
}

Fraction operator*(int number, Fraction &fraction)
{
	return Fraction{ number*fraction.m_numerator, fraction.m_denominator };
}

Fraction operator*(Fraction &fraction, int number)
{
	return number*fraction;
}

std::ostream& operator<<(std::ostream &out, Fraction &fraction)
{
	out << fraction.m_numerator << '/' << fraction.m_denominator;
	return out;
}

std::istream& operator >> (std::istream &in, Fraction &fraction)
{
	in >> fraction.m_numerator;
	in.ignore(12312, '/');
	in >> fraction.m_denominator;
	return in;
}

int main()
{

	Fraction f1;
	std::cout << "Enter fraction 1: ";
	std::cin >> f1;

	Fraction f2;
	std::cout << "Enter fraction 2: ";
	std::cin >> f2;

	std::cout << f1 << " * " << f2 << " is " << f1 * f2 << '\n';

	return 0;
    return 0;
}

