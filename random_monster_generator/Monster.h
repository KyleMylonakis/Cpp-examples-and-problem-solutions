#pragma once

#include <string>

class Monster
{
public:
    enum MonsterType
    {
        Dragon,
        Goblin,
        Ogre,
        Orc,
        Skeleton,
        Troll,
        Vampire,
        Zombie,
        MAX_MONSTER_TYPES
    };

private:
    MonsterType m_type;
    std::string m_name;
    std::string m_roar;
    int m_hp;

public:
    Monster(Monster::MonsterType mon_type, std::string name, std::string roar, int hp);
    std::string getTypeString();
    void print();

};