#include "Monster.h"
#include <iostream>

Monster::Monster(MonsterType type, std::string name, std::string roar, int hp)
    : m_type {type}, m_name {name}, m_roar {roar}, m_hp {hp}
{

}

std::string Monster::getTypeString()
{
    switch (m_type)
    {
        case Dragon:
            return "Dragon";
            break;
        case Goblin:
            return "Goblin";
            break;
        case Ogre:
            return "Ogre";
            break;
        case Orc:
            return "Orc";
            break;
        case Skeleton:
            return "Skeleton";
            break;
        case Troll:
            return "Troll";
            break;
        case Vampire:
            return "Vampire";
            break;
        case Zombie:
            return "Zombie";
            break;
        default:
            return "ERROR OCCURED IN MONSTER TYPE";
            break;
    }

}

void Monster::print()
{
    std::cout << m_name << " the " << getTypeString() << " has " << m_hp << " hit points and says " << m_roar << std::endl;
}

