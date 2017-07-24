// looping_through_array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

const int arrayLength{ 9 };

void printArray(const int array[])
{
	for (int iii = 0; iii < arrayLength; ++iii)
	{
		//std::cout << iii << ' ';
		//std::cout << sizeof(array) << ' ';
		//std::cout << (sizeof(array) / sizeof(array[0])) << ' ';
		std::cout << array[iii] << ' ';
	}
	std::cout << '\n';
}

int getNumber()
{
	while (1)
	{
		std::cout << "Please enter a number between 1 and 9 \n";
		int number{ 0 };
		std::cin >> number;

		if (number > 0 && number < 10)
			return number;
		else
		{
			std::cout << "That input is not valid. ";
			std::cin.clear();
			std::cin.ignore(1111, '\n');

		}
	}
}

int findNumberIndexInArray(int number, int array[])
{
	for (int counter = 0; counter < arrayLength; ++counter)
	{
		if (array[counter] == number)
			return counter;
	}
	std::cout << '\n';
}

int main()
{

	int array[arrayLength]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };
	// std::cout << (sizeof(array) / sizeof(array[0]));


	int number{ getNumber() };
	printArray(array);
	int indexOfNumber{ findNumberIndexInArray(number, array) };
	std::cout << indexOfNumber << '\n';

    return 0;
}

