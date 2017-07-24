// factorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int factorial(int n)
{
	if (n == 0)
		return 1;
	return n*factorial(n - 1);
}

int main()
{
	for (int count = 0; count < 8; count++)
	{
		std::cout << factorial(count) << ' ';
	}
    return 0;
}

