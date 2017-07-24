// personal_details.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

std::string getName()
{
	std::cout << "Please enter your full name: ";
	std::string fullName;
	std::getline(std::cin, fullName);
	
	return fullName;
}

int getAge()
{
	std::cout << "Please enter your age: ";
	int age{ 0 };
	std::cin >> age;
	return age;
}

double yearsPerLetter(std::string name, int age)
{
	int whitespace{ 1 };
	int nameLength = (name.length() - whitespace);
	return (static_cast<double>(nameLength) / age);
}

int main()
{
	std::string name;
	name = getName();
	
	int age{ 1 };
	age = getAge();

	double agePerLetter{ yearsPerLetter(name, age) };
	std::cout << "You've lived " << agePerLetter << " years for each letter in your name. \n";
    return 0;
}

