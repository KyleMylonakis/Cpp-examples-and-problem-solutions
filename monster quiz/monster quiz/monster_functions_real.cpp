#include "stdafx.h"
#include "monster_data.h"
#include <string>
#include <iostream>

std::string printMonsterType(Monster_Info monster)
{
	if (monster.monsterType == Monster::OGRE)
		return "Ogre";
	if (monster.monsterType == Monster::DRAGON)
		return "Dragon";
	if (monster.monsterType == Monster::ORC)
		return "Orc";
	if (monster.monsterType == Monster::GIANT_SPIDER)
		return "Giant Spider";
	if (monster.monsterType == Monster::SLIME)
		return "Slime";
}

void printMonster(Monster_Info monster)
{
	std::cout << "This " << printMonsterType(monster) << " is named " << monster.monsterName << " and has " << monster.monsterHealth << " health. \n";
}