// swapUsingRefs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

void swap(int &a, int &b)
{
	int temp{ b };
	b = a;
	a = temp;
}

int main()
{
	int a{ 1 };
	int b{ 2 };
	
	std::cout << a << ' ' << b << '\n';
	swap(a, b);
	std::cout << a << ' ' << b << '\n';
    return 0;
}

