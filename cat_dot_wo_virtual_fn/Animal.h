#pragma once

#include <string>

class Animal
{
protected:
    std::string m_name;
    std::string m_roar;

    Animal(std::string name);
public:
    std::string getName() const;
    std::string speak() const;
};