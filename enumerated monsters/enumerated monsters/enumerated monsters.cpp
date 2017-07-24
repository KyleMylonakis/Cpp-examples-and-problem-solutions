// enumerated monsters.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

enum MonsterType
{
	MONSTER_ORC,
	MONSTER_GOBLIC,
	MONSTER_TROLL,
	MONSTER_OGRE,
	MONSTER_SKELETON
};


int main()
{
	MonsterType troll{ MONSTER_TROLL };

    return 0;
}

