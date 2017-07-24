// switch_animals.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "animal_Header.h"



int main()
{
	Animal cat = Animal::CAT;
	Animal chicken = Animal::CHICKEN;
		
	printAnimal(cat);
	printAnimal(chicken);
	return 0;
}

