#pragma once
#include <string>

class Teacher
{
private:
    std::string m_name;

public:
    Teacher(std::string name);
    std::string getName();
};