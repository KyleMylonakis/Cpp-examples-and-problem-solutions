#include "game_logic_functions.h"
#include <iostream>


int getRandomNumber(int min, int max);
/*{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
	// evenly distribute the random number across our range
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}*/

void attackMonster(Player& player, Monster& monster)
{
    monster.reduceHealth(player.getAttack());
    std::cout << "You hit the " << monster.getName() << " for " << player.getAttack() << " damage." << std::endl;
}

void attackPlayer(Player& player, Monster& monster)
{
    player.reduceHealth(monster.getAttack());
    std::cout << "The " << monster.getName() << " hit you for " << monster.getAttack() << " damage." << std::endl;
}


void fightMonster(Player& player, Monster& monster)
{
    // returning false means the player survived
    while (!monster.isDead())
    {
        std::cout << "(R)un or (F)ight: ";
        char player_action;
        std::cin >> player_action;
        std::cout << player_action << std::endl;;

        // Input validation
        while (player_action != 'R' && player_action != 'F') 
        {
            std::cout << "Invalid Input. Please try again: " ;
            std::cin.clear(); // put us back in 'normal' operation mode
            std::cin.ignore(32767,'\n'); // and remove the bad input
            std::cin >> player_action;

        }
        // Flee logic
        if (player_action == 'R')
        {

            int escape = getRandomNumber(0,1);
            if (escape == 0)
            {
                std::cout << "You sucessfully fled." << std::endl;
                return;
            }

            else
            {
                std::cout << "You failed to flee." << std::endl;
                attackPlayer(player, monster);
                if (player.isDead())
                {
                    return;
                }
            }
        }
        // Fight logic
        else if (player_action =='F')
        {
            attackMonster(player, monster);
            if (monster.isDead())
            {
                player.addGold(monster.getGold());
                player.levelUp();
                std::cout << "You are now level " << player.getLevel() << std::endl;
                std::cout << "You found " << monster.getGold() << " gold." <<std::endl;
                return;
            }
            attackPlayer(player, monster);
            if (player.isDead())
            {
                return;
            }
        }
    }
    
    
    
}