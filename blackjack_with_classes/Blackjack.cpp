#include "Blackjack.h"
#include <iostream>

Blackjack::Blackjack(): m_playerTotal {0}, m_dealerTotal {0}
{
}

char Blackjack::getPlayerChoice() const
{
    std::cout << "(h) to hit, or (s) to stand: ";
    char choice;
    do
    {
        std::cin >> choice;
    } while (choice != 'h' && choice != 's');

    return choice;
}

bool Blackjack::playBlackjack(Deck &deck)
{
    Blackjack::m_dealerTotal += deck.dealCard().getCardValue();
    std::cout << "The dealer is showing: " << Blackjack::m_dealerTotal << std::endl;

    Blackjack::m_playerTotal += deck.dealCard().getCardValue();
    Blackjack::m_playerTotal += deck.dealCard().getCardValue();

    while (true)
    {
        std::cout << "You have: " << Blackjack::m_playerTotal << ::std::endl;
        char choice = Blackjack::getPlayerChoice();
        if (choice  == 's')
        {
            break;
        }
        Blackjack::m_playerTotal += deck.dealCard().getCardValue();

        if (Blackjack::m_playerTotal > 21)
        {
            std::cout << "You busted with: " << Blackjack::m_playerTotal << std::endl;
            return false;
        }
    }

    while (Blackjack::m_dealerTotal < 17)
    {
        Blackjack::m_dealerTotal += deck.dealCard().getCardValue();
        std::cout << "The dealer now has: " << Blackjack::m_dealerTotal << std::endl;
    }

    if (Blackjack::m_dealerTotal > 21)
    {
        std::cout << "Congratulation, you win!" << std::endl;
        return true;
    }

    return (Blackjack::m_playerTotal > Blackjack::m_dealerTotal);

}