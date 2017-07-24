#pragma once

// Data Structures
enum class CardRanks
{
	TWO,
	THREE,
	FOUR,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN,
	JACK,
	QUEEN,
	KING,
	ACE
};

enum class Suits
{
	CLUBS,
	DIAMONDS,
	HEATS,
	SPADES
};

struct Card
{
	CardRanks rank;
	Suits suit;
};

// Constants
const int numberOfCards{ 52 };
const int numberOfSuits{ 4 };


// Functions Declarations
void printCard(const Card card);
void printDeck(const std::array<Card, numberOfCards> &deck);
void swapCards(Card &firstCard, Card &secondCard);
void shuffleDeck(std::array<Card, numberOfCards> &deck);
int getCardValue(Card card);
bool playBlackjack(std::array<Card, numberOfCards> &deck);