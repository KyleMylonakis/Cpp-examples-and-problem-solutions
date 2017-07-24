// GradeMap.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>

struct StudentGrade
{
	std::string name;
	char grade;
};

class GradeMap
{
private:
	std::vector<StudentGrade> m_map;
public:
	GradeMap() {}

	char& operator[](std::string name)
	{
		for (StudentGrade test_name : m_map)
		{
			if (test_name.name == name)
				return test_name.grade;
		}

		StudentGrade newStudent{ name,' ' };
		m_map.push_back(newStudent);
		return m_map.back().grade;
	}

};


int main()
{
	GradeMap grades;;
	grades["Joe"] = 'A';
	grades["Frank"] = 'B';

	std::cout << "Joe has a grade of " << grades["Joe"] << '\n';
	std::cout << "Frank has a grade of " << grades["Frank"] << '\n';
    return 0;
}

