// inventory_quiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

enum class Inventory
{
	HEALTH_POTION,
	TORCHES,
	ARROWS,
};

int countTotalItems(int playerInvetory[], const int invetorySize)
{
	int totalItems{ 0 };
	for (int count = 0; count < invetorySize; count++)
	{
		totalItems += playerInvetory[count];
	}
	return totalItems;
}

int main()
{
	const int invetorySize{ 3 };
	int playerInvetory[invetorySize]{ 2,5,10 };

	std::cout << "You have " << countTotalItems(playerInvetory, invetorySize) << " items. \n";
		
    return 0;
}

