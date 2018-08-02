#pragma once
#include <string>

class Creature
{
private:
    std::string m_name;
    char m_symbol;
protected:
    int m_health;
    int m_attack;
    int m_gold;

public:
    // Constructors
    Creature(std::string name, char symbol, int health, int attack, int gold);

    // Getters
    std::string getName() const;
    char getSymbol() const;
    int getHealth() const;
    int getAttack() const;
    int getGold() const;
    
    // Doers
    void reduceHealth(int dmg);
    bool isDead() const;
    void addGold(int gold);


};