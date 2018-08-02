#include "Fruit.h"

Fruit::Fruit(std::string name, std::string color) : m_name {name}, m_color {color}
{
}

std::string Fruit::getColor() const
{
    return m_color;
}

std::string Fruit::getName() const
{
    return m_name;
}