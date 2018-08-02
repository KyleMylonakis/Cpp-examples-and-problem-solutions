#pragma once
#include "Teacher.h"
#include <vector>
#include <iostream>

class Department
{
private:
    std::vector<Teacher*> m_teachers;

public:
    Department();
    void add(Teacher *teacher);
    friend std::ostream& operator<< (std::ostream& out,const Department& dept);


};