#include "stdafx.h"
#include <iostream>

int readNumber()
{
	int a;
	std::cin >> a;
	return a;
}

void writeAnswer(int a)
{
	std::cout << "The sum is " << a << std::endl;
}