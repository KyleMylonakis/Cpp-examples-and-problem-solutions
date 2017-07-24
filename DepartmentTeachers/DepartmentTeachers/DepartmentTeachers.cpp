// DepartmentTeachers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>

class Teacher
{
private:
		std::string m_name;
public:
	Teacher(std::string name) :m_name{ name }
	{
	}

	std::string getname() { return m_name; }
};


class Department
{
private:
	std::vector<Teacher> teacher;

public:
	Department()
	{
	}

	void add(Teacher *newTeacher)
	{
		teacher.push_back(*newTeacher);
	}

	friend std::ostream& operator<<(std::ostream& out, Department dept);

};

std::ostream& operator<<(std::ostream& out, Department dept)
{
	for (Teacher teachers : dept.teacher)
	{
		std::cout << teachers.getname() << ' ';
	}
	std::cout << '\n';
	return out;
}

int main()
{

	Teacher *t1 = new Teacher{"Bob"};
	Teacher *t2 = new Teacher{ "Frank" };
	Teacher *t3 = new Teacher{ "Beth" };

	{
		Department dept;
		dept.add(t1);
		dept.add(t2);
		dept.add(t3);

		std::cout << dept;
	}

	std::cout << t1->getname() << " still exists!\n";
	std::cout << (*t2).getname() << " still exists!\n";
	std::cout << t3->getname() << " still exists!\n";

	delete t1;
	delete t2;
	delete t3;

    return 0;
}

