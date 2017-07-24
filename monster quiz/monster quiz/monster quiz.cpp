// monster quiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>	
#include <string>
#include "monster_data.h"

int main()
{
	Monster_Info monster{Monster::OGRE, "Torg", 145};
	printMonster(monster);
	monster = { Monster::SLIME, "Blurp", 23 };
	printMonster(monster);
    return 0;
}

