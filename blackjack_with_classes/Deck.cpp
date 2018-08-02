#include "Deck.h"
#include <iostream>
#include <random>
#include <chrono>

Deck::Deck() : m_cardIndex {0}
    {
        for (int rank = 0; rank < static_cast<int>(Card::CardRank::MAX_RANKS); ++rank)
        {
            for (int suit = 0; suit < static_cast<int>(Card::CardSuit::MAX_SUITS); ++suit)
            {
                m_deck[Card::CardSuit::MAX_SUITS*rank + suit] = Card(rank,suit);
            }
        }
    }
    
void Deck::printDeck() const
{
    for (Card card : m_deck)
    {
        card.printCard();
        std::cout << std::endl;
    }
}

void Deck::swapCard(Card &a, Card &b)
{
    Card temp {a};
    a = b;
    b = temp;
}

int Deck::getRandomNumber(int min, int max) const
{
    static long long seed {std::chrono::high_resolution_clock::now().time_since_epoch().count()};
    static std::mt19937 rng (seed);
    static std::uniform_int_distribution<int> distribution(min,max - 1);
    return distribution(rng);
}


void Deck::shuffleDeck()
{
    for (int ii = 0; ii < Deck::m_num_cards; ++ii)
    {
        int swap_index { Deck::getRandomNumber(0,Deck::m_num_cards) };
        Deck::swapCard(Deck::m_deck[ii], Deck::m_deck[swap_index]);
    }
    Deck::m_cardIndex = 0;
}
    
const Card& Deck::dealCard()
{
    ++Deck::m_cardIndex;
    return Deck::m_deck[Deck::m_cardIndex - 1];
}

