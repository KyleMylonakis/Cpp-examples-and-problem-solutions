#pragma once
#include "Fraction.h"
#include <iostream>

std::ostream& operator<<(std::ostream &out, const Fraction &q);
std::istream& operator>>(std::istream &in, Fraction &q);
Fraction operator*(const Fraction &q, const int a);
Fraction operator*(const int a, const Fraction &q);
Fraction operator*(const Fraction &p, const Fraction &q);

