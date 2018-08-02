#include "MonsterGenerator.h"

int MonsterGenerator::getRandomNumber(int min, int max)
	{
		static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
		return static_cast<int>(rand() * fraction * (max - min + 1) + min);
	}

Monster MonsterGenerator::generateMonster()
{
    static std::string s_names[6] {
        "Joker",//
        "Ryuji",//
        "Ann",//
        "Morgana",//
        "Makoto",//
        "Futaba"
        };

    static std::string s_roars[6] {
        "Yo",
        "For real?!",
        "Awww",
        "Looking Cool Joker!",
        "I got this",
        ">:C"
    };

    int MAX_HP {100};

    return Monster { static_cast<Monster::MonsterType>(MonsterGenerator::getRandomNumber(0,Monster::MAX_MONSTER_TYPES - 1)),
        s_names[MonsterGenerator::getRandomNumber(0,5)],
        s_roars[MonsterGenerator::getRandomNumber(0,5)],
        MonsterGenerator::getRandomNumber(0,MAX_HP)
        };
}
