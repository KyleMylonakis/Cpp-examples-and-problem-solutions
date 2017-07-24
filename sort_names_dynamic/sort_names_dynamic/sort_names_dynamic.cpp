// sort_names_dynamic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int getNumberOfNames()
{
	std::cout << "How many names would you like to enter? ";
	int numberOfNames{ 0 };
	std::cin >> numberOfNames;
	std::cin.ignore(1111, '\n');
	return numberOfNames;
}

void enterNames(std::string *listOfNames, int numberOfNames)
{
	int index = 0;
	for (; index < numberOfNames; ++index)
	{
		std::cout << "Enter name #" << index+1 << ": ";
		// std::string enteredName;
		std::getline(std::cin , listOfNames[index]);
		// listOfNames[index] = enteredName;
	}
}

void selectionSort(std::string *listOfNames, int numberOfNames)
{
	for (int index = 0; index < numberOfNames; ++index)
	{
		std::string smallest{ listOfNames[index] };
		int indexOfSmallest{ index };

		for (int secondIndex = index; secondIndex < (numberOfNames); secondIndex++)
		{
			if (listOfNames[secondIndex] < smallest)
			{
				smallest = listOfNames[secondIndex];
				indexOfSmallest = secondIndex;
			}
		}
		std::swap(listOfNames[indexOfSmallest], listOfNames[index]);
	}
}

void printList(std::string *listOfNames, int numberOfNames)
{
	for (int count = 0; count < numberOfNames; ++count)
	{
		std::cout << "Name #" << count+1 << ": " << listOfNames[count] << '\n';
	}
}

int main()
{
	int numberOfNames{ getNumberOfNames() };
	std::string *listOfNames = new std::string[numberOfNames];

	enterNames(listOfNames, numberOfNames);
	selectionSort(listOfNames, numberOfNames);
	printList(listOfNames, numberOfNames);

	delete[] listOfNames;
	listOfNames = nullptr;

    return 0;
}

