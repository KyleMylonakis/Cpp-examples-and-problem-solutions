#include "Department.h"

Department::Department()
{
}

void Department::add(Teacher *teacher)
{
    m_teachers.push_back(teacher);
}

std::ostream& operator<< (std::ostream& out, const Department &dept)
{
    out << "Department: ";
    for (int i = 0; i < dept.m_teachers.size(); ++i)
    {
    out << dept.m_teachers[i]->getName() << " ";
    }
    out << std::endl;

}