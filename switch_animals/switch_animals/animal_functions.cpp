#include "stdafx.h"
#include <iostream>
#include <string>
#include "animal_Header.h"

std::string getAnimalName(Animal animal)
{
	switch (animal)
	{
	case(Animal::PIG):
		return "pig";
		break;
	case(Animal::CHICKEN):
		return "chicken";
		break;
	case(Animal::GOAT):
		return "goat";
		break;
	case(Animal::CAT):
		return "cat";
		break;
	case(Animal::DOG):
		return "dog";
		break;
	case(Animal::OSTRICH):
		return "ostrich";
		break;

	}
}

int printNumberOfLegs(Animal animal)
{
	switch (animal)
	{
	case(Animal::CHICKEN):
	case(Animal::OSTRICH):
		return twoLegs;
		break;
	default:
		return fourLegs;
		break;
	}
}

void printAnimal(Animal animal)
{
	std::cout << "A " << getAnimalName(animal) << " has " << printNumberOfLegs(animal) << " legs. \n";
}