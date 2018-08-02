#include "Creature.h"

Creature::Creature(std::string name, char symbol, int health, int attack, int gold) :
    m_name {name},
    m_symbol {symbol},
    m_health {health},
    m_attack {attack},
    m_gold {gold}
{
}

std::string Creature::getName() const
{
    return m_name;
}

char Creature::getSymbol() const
{
    return m_symbol;
}

int Creature::getHealth() const
{
    return m_health;
}

int Creature::getAttack() const
{
    return m_attack;
}

int Creature::getGold() const
{
    return m_gold;
}

void Creature::reduceHealth(int dmg)
{
    m_health -= dmg;
}

bool Creature::isDead() const
{
    if (m_health < 1)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

void Creature::addGold(int gold)
{
    m_gold += gold;
}