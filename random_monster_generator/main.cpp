#include "Monster.h"
#include "MonsterGenerator.h"
#include <random>
#include <ctime>

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    Monster m { MonsterGenerator::generateMonster() };
    m.print();

    return 0;
}