#include "Player.h"
#include <iostream>

Player::Player(std::string name) : Creature(name, '@', 100, 1, 0) , m_level {1}
{
    std::cout << "Welcome " << Player::getName() << '.' << std::endl;
    std::cout << "You have " << Player::getHealth() << " health and are carrying "
        << Player::getGold() << " gold." << std::endl;

}

int Player::getLevel() const
{
    return m_level;
}

void Player::levelUp()
{
    ++m_level;
    ++m_attack;
}

bool Player::hasWon() const
{
    if (m_level > 19)
    {
        return true;
    }
    else
    {
        return false;
    }
}