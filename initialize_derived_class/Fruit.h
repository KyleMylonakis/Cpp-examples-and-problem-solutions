#pragma once
#include <string>

class Fruit
{
private:
    std::string m_name;
    std::string m_color;

public:
    Fruit(std::string name, std::string color);

    std::string getName() const;
    std::string getColor() const;

};