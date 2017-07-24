// calculatorOfMeans.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using arithmeticFcn = int(*)(int, int);

int getNumber()
{
	std::cout << "Please enter an integer \n";
	int input{};
	std::cin >> input;
	std::cin.ignore(12345, '\n');
	return input;
}

int add(int a, int b)
{
	return a + b;
}

int subtract(int a, int b)
{
	return a - b;
}

int multiply(int a, int b)
{
	return a*b;
}
int divide(int a, int b)
{
	return a / b;
}

char getOperation()
{
	bool invalid_input = false;
	do
	{
		std::cout << "Please enter a +, -, *, or / \n";
		char input{};
		std::cin >> input;
		std::cin.ignore(12345, '\n');
		switch (input)
		{
		case '+':
			return '+';
		case '-':
			return '-';
		case '*':
			return '*';
		case '/':
			return '/';
		default:
			std::cout << "Invalid input \n";
			invalid_input = true;
		}
	} 
	while (invalid_input == true);
}



arithmeticFcn getarithmeticFunction(char operation)
{
	switch (operation)
	{
	case '+':
		return add;
	case'-':
		return subtract;
	case '*':
		return multiply;
	case '/':
		return divide;
	default:
		break;
	}
}

int main()
{
	int firstNumber{ getNumber() };
	int secondNumber{ getNumber() };
	char operation{ getOperation() };

	std::cout << getarithmeticFunction(operation)(firstNumber, secondNumber) << '\n';





    return 0; 
}

