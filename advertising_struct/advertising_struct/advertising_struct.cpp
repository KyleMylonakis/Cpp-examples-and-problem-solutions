// advertising_struct.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

struct addData
{
	int numAddsShown;
	double percentClicked;
	double profitPerClick;
};

addData getAddData()
{
	addData data;
	std::cout << "How many adds were shown? ";
	std::cin >> data.numAddsShown;

	std::cout << "What percent of people saw the adds?";
	std::cin >> data.percentClicked;

	std::cout << "What is our profit per click?";
	std::cin >> data.profitPerClick;

	return data;
}

int main()
{
	addData data= getAddData() ;
	std::cout << "You made $" << data.numAddsShown*data.percentClicked*data.profitPerClick << std::endl;
    return 0;
}

