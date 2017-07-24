// hi-low-game.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <random>

long chooseRandomNumber()
{
	std::random_device rd;
	std::mt19937 mersenne(rd());

	static const double fraction = 1.0 / ((static_cast<double>(std::mt19937::max()) + 1.0));

	return static_cast<int>(mersenne()*fraction*(100) +1);
}

int main()
{
	while (1)
	{
		std::cout << "Let's play a game. I'm thinking of a number. You have seven treis to guess what it is. \n";
		int randomNumber{ chooseRandomNumber() };

		int guessNumber{ 0 };
		for (; guessNumber < 7; ++guessNumber)
		{
			int guess;
			std::cin >> guess;

			if (guess < randomNumber)
				std::cout << "Your guess is too low. \n";
			else if (guess > randomNumber)
				std::cout << "Your guess is too high. \n";
			else
			{
				std::cout << "Correct! You win!\n";
				break;
			}
		}

		if (guessNumber == 7)
			std::cout << "Sorry, you lose. The correct number was " << randomNumber << '\n';

		char playAgain{ 'a' };
		do
		{
			if (playAgain == 'y')
				break;
			std::cout << "Would you like to play again (y/n)?\n";
			std::cin >> playAgain;
		} while (playAgain != 'n');

			if (playAgain == 'n')
				break;

	}
    return 0;
}

