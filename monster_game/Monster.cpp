#include "Monster.h"

// Lookup Table for MonsterData

Monster::MonsterData Monster::monsterData[Monster::MAX_TYPES]
{
    {"dragon", 'D', 20, 4, 100},
    {"orc", 'o', 4, 2, 25},
    {"slime", 's', 1, 1, 10}
};

Monster::Monster (Monster::Type type) : 
    Creature(Monster::monsterData[type].name,
            Monster::monsterData[type].symbol,
            Monster::monsterData[type].health,
            Monster::monsterData[type].attack,
            Monster::monsterData[type].gold)
{
}


int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
	// evenly distribute the random number across our range
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

Monster Monster::getRandomMonster()
{
    return Monster {static_cast<Monster::Type>(getRandomNumber(0,Monster::MAX_TYPES - 1))};
}