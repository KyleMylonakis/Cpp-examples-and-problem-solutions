#pragma once
#include <vector>
#include "StudentGrade.h"

class GradeMap
{
private:
    std::vector<StudentGrade> m_map;

public:
    GradeMap();
    char& operator[] (const std::string index);


};