#pragma once
#include <string>
#include <iostream>

enum class Monster
{
	OGRE,
	DRAGON,
	ORC,
	GIANT_SPIDER,
	SLIME
};

struct Monster_Info
{
	Monster monsterType;
	std::string monsterName;
	int monsterHealth;
};

std::string printMonsterType(Monster_Info monster);
void printMonster(Monster_Info monster);
