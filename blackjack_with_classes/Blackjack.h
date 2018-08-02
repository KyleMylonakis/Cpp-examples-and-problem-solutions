#pragma once
#include "Deck.h"

class Blackjack
{
private:
    int m_playerTotal;
    int m_dealerTotal;

public:
    Blackjack();
    bool playBlackjack(Deck &deck);
    char getPlayerChoice() const;
    
};
