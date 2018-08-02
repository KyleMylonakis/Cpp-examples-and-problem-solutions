#include "GradeMap.h"
#include <vector>

GradeMap::GradeMap()
{
}


char& GradeMap::operator[] (const std::string index)
{
    for (StudentGrade &member : m_map)
    {
        if (index == member.studentName )
        {
            return member.grade;
        }
    }
    StudentGrade temp {index, ' '};

    m_map.push_back(temp);

    return m_map.back().grade;
}