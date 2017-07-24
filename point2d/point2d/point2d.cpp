// point2d.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

class Point2d
{
private:
	double m_x;
	double m_y;

public:
	
	Point2d(double x = 0.0, double y = 0.0) : m_x{ x }, m_y{ y }
	{

	}

	void print()
	{
		std::cout << "( " << m_x << " , " << m_y << " );\n";
	}

	double distanceTo(Point2d &point)
	{
		return sqrt((m_x - point.m_x)*(m_x - point.m_x) + (m_y - point.m_y)*(m_y - point.m_y));
	}
};

double distanceFrom(Point2d &firstPoint, Point2d &secondPoint)
{
	return firstPoint.distanceTo(secondPoint);
}


int main()
{
	Point2d first;
	Point2d second(3.0, 4.0);

	first.print();
	second.print();

	std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';
    return 0;
}

