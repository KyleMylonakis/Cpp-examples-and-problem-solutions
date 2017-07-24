// correct_max.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	using std::cout;
	using std::cin;

	cout << "Enter an integer: " << '\n';
	int firstNumber{ 0 };
	cin >> firstNumber;

	cout << "Enter a larger integer: \n";
	int secondNumber{ 0 };
	cin >> secondNumber;

	if (secondNumber < firstNumber)
	{
		int largerNumber{ firstNumber };
		firstNumber = secondNumber;
		secondNumber = largerNumber;
		cout << "Swapping the numbers \n";
	}
	cout << "The smaller number is " << firstNumber << '\n';
	cout << "The larger number is " << secondNumber << '\n';


    return 0;
}

