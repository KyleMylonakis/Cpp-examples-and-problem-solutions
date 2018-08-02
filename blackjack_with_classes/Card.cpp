#include "Card.h"
#include <iostream>

Card::Card() : m_rank {Card::CardRank::RANK_ACE}, m_suit {Card::CardSuit::SUIT_SPADE}
{
}

Card::Card(int rank = Card::CardRank::RANK_ACE, int suit = Card::CardSuit::SUIT_SPADE) : m_rank { rank }, m_suit { suit }
{
}

int Card::getCardValue() const
{
    switch (m_rank)
    {
        case Card::CardRank::RANK_2:
            return 2;
        case Card::CardRank::RANK_3:
            return 3;
        case Card::CardRank::RANK_4:
            return 4;
        case Card::CardRank::RANK_5:
            return 5;
        case Card::CardRank::RANK_6:
            return 6;
        case Card::CardRank::RANK_7:
            return 7;
        case Card::CardRank::RANK_8:
            return 8;
        case Card::CardRank::RANK_9:
            return 9;
        case Card::CardRank::RANK_10:
            return 10;
        case Card::CardRank::RANK_JACK:
            return 10;
        case Card::CardRank::RANK_QUEEN:
            return 10;
        case Card::CardRank::RANK_KING:
            return 10;
        case Card::CardRank::RANK_ACE:
            return 11;
    }

    // All switches failed
    return 0;
}

void Card::printCard() const
{
    switch (m_rank)
    {
        case Card::CardRank::RANK_2:
            std::cout << 2;
            break;
        case Card::CardRank::RANK_3:
            std::cout << 3;
            break;
        case Card::CardRank::RANK_4:
            std::cout << 4;
            break;
        case Card::CardRank::RANK_5:
            std::cout << 5;
            break;
        case Card::CardRank::RANK_6:
            std::cout << 6;
            break;
        case Card::CardRank::RANK_7:
            std::cout << 7;
            break;
        case Card::CardRank::RANK_8:
            std::cout << 8;
            break;
        case Card::CardRank::RANK_9:
            std::cout << 9;
            break;
        case Card::CardRank::RANK_10:
            std::cout << 10;
            break;
        case Card::CardRank::RANK_JACK:
            std::cout << "J";
            break;
        case Card::CardRank::RANK_QUEEN:
            std::cout << "Q";
            break;
        case Card::CardRank::RANK_KING:
            std::cout << "K";
            break;
        case Card::CardRank::RANK_ACE:
            std::cout << "A";
            break;
        default:
            std::cerr << "CARD HAS NO RANK";
            break;
    }

    switch (m_suit)
    {
        case Card::CardSuit::SUIT_CLUB:
            std::cout << "C";
            break;
        case Card::CardSuit::SUIT_DIAMOND:
            std::cout << "D";
            break;
        case Card::CardSuit::SUIT_HEART:
            std::cout << "H";
            break;
        case Card::CardSuit::SUIT_SPADE:
            std::cout << "S";
            break;
        default:
            std::cerr << "CARD HAS NO SUIT";
            break;

    }

}

