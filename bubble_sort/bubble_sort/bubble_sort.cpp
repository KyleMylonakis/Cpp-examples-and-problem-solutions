// bubble_sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <utility>

const int length(9);

int bubbleSort(int array[])
{
	for (int iteration = 0; iteration < length; ++iteration)
	{
		int numberOfSwaps{ 0 };
		
		for (int index = 0; index < (length - iteration - 1); ++index)
		{
			if (array[index] > array[index + 1])
			{
				std::swap(array[index], array[index + 1]);
				numberOfSwaps++;
			}	
		}
		if (numberOfSwaps == 0)
		{
			//for (int index = 0; index < length; ++index)
			//	std::cout << array[index] << ' ';

			//std::cout << '\n';
			return 0;
		}
	}
}

void printArray(int array[])
{
	for (int index = 0; index < length; ++index)
		std::cout << array[index] << ' ';

	std::cout << '\n';
}

int main()
{
	int array[length] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };
	bubbleSort(array);
	printArray(array);

	return 0;
}

