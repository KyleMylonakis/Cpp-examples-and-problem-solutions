// is_two_digit_prime.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int get_number()
{
	int a{0};
	std::cout << "Please enter a single digit number" << std::endl;
	std::cin >> a;
	return a;
}

int isPrime(int x)
{
	if (x == 2)
		std::cout << x << " is prime" << std::endl;
	else if (x == 3)
		std::cout << x << " is prime" << std::endl;
	else if (x == 5)
		std::cout << x << " is prime" << std::endl;
	else if (x == 7)
		std::cout << x << " is prime" << std::endl;
	else
		std::cout << x << " is composite" << std::endl;
	return 0;
}
int main()
{
	int number{ 0 };
	number = get_number();
	isPrime(number);

    return 0;
}

