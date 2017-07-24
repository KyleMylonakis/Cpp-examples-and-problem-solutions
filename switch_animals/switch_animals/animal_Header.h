#pragma once
#include <string>

enum class Animal
{
	PIG,
	CHICKEN,
	GOAT,
	CAT,
	DOG,
	OSTRICH
};

const int fourLegs = 4;
const int twoLegs = 2;

std::string getAnimalName(Animal animal);
int pritnNumberOfLegs(Animal animal);
void printAnimal(Animal animal);