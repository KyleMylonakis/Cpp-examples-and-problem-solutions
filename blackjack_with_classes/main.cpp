#include <iostream>
#include "Card.h"
#include "Deck.h"
#include "Blackjack.h"


int main()
{
    Deck deck;
    deck.shuffleDeck();
    Blackjack game;

    game.playBlackjack(deck);

    return 0;

}