// student_grade_sorter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

struct Student_Info
{
	std::string name;
	int grade;
};

int getNumberOfStudent()
{
	int numberOfStudents;
	std::cin >> numberOfStudents;
	return numberOfStudents;
}

std::string getStudentName()
{
	std::cout << "What is the student's name? \n";
	std::string studentName;
	std::cin >> studentName;
	return studentName;
}

int getStudentGrade()
{
	std::cout << "What is the student's grade? \n";
	int studentGrade;
	std::cin >> studentGrade;
	return studentGrade;
}

void sortByGrade(Student_Info *class_info, int numberOfStudents)
{
	for (int count = 0; count < numberOfStudents; count++)
	{
		for (int innterCount = 0; innterCount < numberOfStudents - 1; innterCount++)
		{
			if (class_info[innterCount].grade < class_info[innterCount + 1].grade)
				std::swap(class_info[innterCount], class_info[innterCount + 1]);
		}
	}
}

void printStudentInfo(Student_Info *class_info, int numberOfStudents)
{
	for (int count = 0; count < numberOfStudents; count++)
	{
		std::cout << class_info[count].name << " got a grade of " << class_info[count].grade << '\n';
	}
}

int main()
{
	std::cout << "How many students are there? \n";
	int numberOfStudents{ getNumberOfStudent() };

	Student_Info *class_info = new Student_Info[numberOfStudents];
	for (int count = 0; count < numberOfStudents; count++)
	{
		class_info[count].name = getStudentName();
		class_info[count].grade = getStudentGrade();
	}

	sortByGrade(class_info, numberOfStudents);
	printStudentInfo(class_info, numberOfStudents);

	delete[] class_info;
	class_info = nullptr;

    return 0;
}

