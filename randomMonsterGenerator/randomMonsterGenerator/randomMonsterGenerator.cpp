// randomMonsterGenerator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <random>

std::random_device rd;
std::mt19937 mersenne(rd());

class Monster
{
public:
	enum class MonsterType
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
	int m_hitPoints;

public:
	
	Monster(MonsterType monster, std::string name, std::string roar, int hitpoints)
		: m_type{ monster }, m_name{ name }, m_roar{ roar }, m_hitPoints{ hitpoints }
	{

	}


	std::string getTypeString()
	{
		switch (m_type)
		{
			case MonsterType::Dragon:
				return "Dragon";
			case MonsterType::Goblin:
				return "Goblin";
			case MonsterType::Ogre:
				return "Ogre";
			case MonsterType::Orc:
				return "Orc";
			case MonsterType::Skeleton:
				return "Skeleton";
			case MonsterType::Troll:
				return "Troll";
			case MonsterType::Vampire:
				return "Vampire";
			case MonsterType::Zombie:
				return "Zombie";
		}
	}

	void print()
	{
		std::cout << m_name << " the " << getTypeString() << " has " << m_hitPoints << " hit points and says " << m_roar << '\n';
	}

};

class MonsterGenerator
{
public:
	static int getRandomNumber(int min, int max)
	{
		static const double fraction = 1.0 / (static_cast<double>(mersenne.max()) + 1.0);
		return static_cast<int>(mersenne() * fraction * (max - min + 1) + min);
	}

	static Monster generateMonster()
	{
		Monster::MonsterType type{ static_cast<Monster::MonsterType>(getRandomNumber(0,static_cast<int>(Monster::MonsterType::MAX_MONSTER_TYPES) - 1)) };
		static std::string s_names[6]{ "alex", "bob", "charlie", "dave", "echo", "fey" };
		static std::string s_roars[6]{ "meow", "woof", "neow", "mew", "rattle", "silent" };
		int hitPoints{ getRandomNumber(1,6) };

		return Monster{ type,s_names[getRandomNumber(0,5)], s_roars[getRandomNumber(0,5)], hitPoints };
	}


};


int main()
{



	Monster m = MonsterGenerator::generateMonster();
	m.print();

    return 0;
}

