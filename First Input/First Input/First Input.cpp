// First Input.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>	
int double_number(int x)
{
	return 2 * x;
}


int main()
{
	using std::cout;
	cout << "What number would you like doubled?" << std::endl;
	int x;
	std::cin >> x;
	cout << double_number(x) << " is twice " << x << std::endl;
	return 0;
}

