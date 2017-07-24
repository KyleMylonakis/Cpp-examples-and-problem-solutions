#include "stdafx.h"
#include <iostream>
#include <random>
#include <array>
#include "blackjack_header.h"
#include <string>

void printCard(const Card card)
{
	switch (card.rank)
	{
	case CardRanks::TWO:
		std::cout << '2';
		break;
	case CardRanks::THREE:
		std::cout << '3';
		break;
	case CardRanks::FOUR:
		std::cout << '4';
		break;
	case CardRanks::FIVE:
		std::cout << '5';
		break;
	case CardRanks::SIX:
		std::cout << '6';
		break;
	case CardRanks::SEVEN:
		std::cout << '7';
		break;
	case CardRanks::EIGHT:
		std::cout << '8';
		break;
	case CardRanks::NINE:
		std::cout << '9';
		break;
	case CardRanks::TEN:
		std::cout << "10";
		break;
	case CardRanks::JACK:
		std::cout << 'J';
		break;
	case CardRanks::QUEEN:
		std::cout << 'Q';
		break;
	case CardRanks::KING:
		std::cout << 'K';
		break;
	case CardRanks::ACE:
		std::cout << 'A';
		break;
	}
	switch (card.suit)
	{
	case Suits::CLUBS:
		std::cout << 'C';
		break;
	case Suits::DIAMONDS:
		std::cout << 'D';
		break;
	case Suits::HEATS:
		std::cout << 'H';
		break;
	case Suits::SPADES:
		std::cout << 'S';
		break;
	}
	std::cout << '\n';
}

void printDeck(const std::array<Card, numberOfCards> &deck)
{
	for (const Card card : deck)
	{
		printCard(card);
	}
}

void swapCards(Card &firstCard, Card &secondCard)
{
	Card temp;
	temp = firstCard;
	firstCard = secondCard;
	secondCard = temp;
}

void shuffleDeck(std::array<Card, numberOfCards> &deck)
{
	std::random_device rd;
	std::mt19937 mersenne(rd());
	for (int count = 0; count <numberOfCards; count++)
	{
		int random_count = (mersenne() % numberOfCards);
		swapCards(deck[count], deck[random_count]);
	}
}

int getCardValue(Card card)
{
	switch (card.rank)
	{
	case CardRanks::TWO:
		return 2;
	case CardRanks::THREE:
		return 3;
	case CardRanks::FOUR:
		return 4;
	case CardRanks::FIVE:
		return 5;
	case CardRanks::SIX:
		return 6;
	case CardRanks::SEVEN:
		return 7;
	case CardRanks::EIGHT:
		return 8;
	case CardRanks::NINE:
		return 9;
	case CardRanks::ACE:
		return 11;
	default:
		return 10;
	}
}

bool playBlackjack(std::array<Card, numberOfCards> &deck)
{
	Card *pcard = &deck[0];
	int dealer_score{ getCardValue(*pcard++) };
	int player_score{ getCardValue(*pcard++) };
	player_score += getCardValue(*pcard++);

	while (player_score < 22)
	{
		
		while (bool gameLoop = true)
		{
			std::cout << "Your score is " << player_score << '\n';
			std::cout << "Would you like to hit or stay?\n";
			std::string playerInput{};
			std::getline(std::cin, playerInput);

			if (playerInput == "hit")
			{
				player_score += getCardValue(*pcard++);
			}

			else if (playerInput == "stay")
			{
				while (dealer_score < 17)
				{
					dealer_score += getCardValue(*pcard++);
				}
				if (dealer_score < player_score)
				{
					std::cout << "You have " << player_score << ". The dealer has " << dealer_score << '\n';
					std::cout << "You Win! \n";
					return true;
				}
				else
				{
					std::cout << "You have " << player_score << ". The dealer has " << dealer_score << '\n';
					std::cout << "You Lose. \n";
					return false;
				}
			}

			else
			{
				std::cout << "Invalid input. \n";
			}
		}
	}
}
