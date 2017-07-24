// ball_drop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "constants.h"

double getHeight()
{
	std::cout << "How Tall is the tower? (please input in meters) \n";
	double a{ 0 };
	std::cin >> a;
	return a;
}

double ballHeight(double towerHeight,int time)
{
	return towerHeight - constants::gravity * (time*time)/2;
}

int main()
{
	int time{ 1 };
	const double height{ getHeight() };

	while (ballHeight(height,time) > 0)
	{
		
		if (ballHeight(height, time) < 0)
		{
			std::cout << "The ball hit the ground" << std::endl;
			return 0;
		}
		else
		{
			std::cout << "The height of the ball is " << ballHeight(height, time) << " meters" << std::endl;
		}
		time = time + 1;
	}
    return 0;
}

