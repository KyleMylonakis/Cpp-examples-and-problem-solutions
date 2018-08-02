#include "Animal.h"

Animal::Animal(std::string name) : m_name {name} {}

std::string Animal::getName() const
{
    return m_name;
}

std::string Animal::speak() const
{
    return m_roar;
}