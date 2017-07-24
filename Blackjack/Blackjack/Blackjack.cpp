// Blackjack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <array>
#include <random>
#include "blackjack_header.h"


int main()
{
	/* Test card functionality
	*  
	*  Card testCard;
	*  testCard.rank = CardRanks::TWO;
	*  testCard.suit = Suits::CLUBS;
	*  printCard(testCard);
	*
	*/

	
	// Initialize Deck
	std::array<Card, numberOfCards> deck;
	for (int index = 0; index < (numberOfCards); index++)
	{
		deck[index].rank = static_cast<CardRanks>(index / numberOfSuits);
		deck[index].suit = static_cast<Suits>(index % numberOfSuits);
	}

	shuffleDeck(deck);
	playBlackjack(deck);


    return 0;
}

