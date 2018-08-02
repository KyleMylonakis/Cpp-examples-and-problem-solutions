#include "Creature.h"
#include "Player.h"
#include "Monster.h"
#include "game_logic_functions.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    // Initialize RNG
    srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
	rand(); 


   // Create the player character
    std::string player_name;
    std::cout << "Enter your name: ";
    std::cin >> player_name;
    Player hero{player_name};


    // Main game loop
    while (hero.isDead() == false)
    {
        Monster m = Monster::getRandomMonster();
        std::cout << "You have encountered a " << m.getName() << " (" << m.getSymbol() << ")." << std::endl;
        fightMonster(hero, m);
        if (hero.isDead())
        {
            std::cout << "You died at level " << hero.getLevel() << " and with " << hero.getGold() << " gold." << std::endl;
            std::cout << "Too bad you can't take it with you!" << std::endl;
            return 0;
        }
        if (hero.getLevel() > 19)
        {
            std::cout << "Congratulations! You won the game" << std::endl;
            return 0;
        }




    }


    return 0;
}