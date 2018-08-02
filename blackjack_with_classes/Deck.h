#pragma once

#include "Card.h"
#include <array>
#include <chrono>
#include <random>


class Deck
{
private:
    static const int m_num_cards {52};
    std::array<Card, m_num_cards> m_deck;
    int m_cardIndex;

public:
    Deck();
    void printDeck() const;

private:
    int getRandomNumber(int min, int max) const;
    void swapCard(Card &a, Card &b);

public:
    void shuffleDeck();
    const Card& dealCard();


};