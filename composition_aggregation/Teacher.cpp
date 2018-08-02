#include "Teacher.h"

Teacher::Teacher(std::string name) : m_name {name} {}

std::string Teacher::getName()
{
    return m_name;
}
