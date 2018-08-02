#pragma once
#include "Creature.h"

class Player : public Creature
{
private:
    int m_level;

public:
    // Constructors
    Player(std::string name);

    // getters
    int getLevel() const;

    // Doers
    void levelUp();
    bool hasWon() const;



};