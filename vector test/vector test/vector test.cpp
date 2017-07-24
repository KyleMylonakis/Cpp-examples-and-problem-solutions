// vector test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>

int main()
{
	std::vector<double> testVector{ 0, 0, 0, 0, 0, 0, 0, 0 };
	std::cout << testVector.at(0) << '\n';
	std::cout << testVector[0] << '\n';
    return 0;
}

