#include "stdafx.h"

#include <iostream>
#include "Point3d.h"


void Point3d::print()
{
	std::cout << "Point(" << m_x << " , " << m_y << " , " << m_z << ")\n";
}


void Vector3d::print()
{
	std::cout << "Vector(" << m_x << " , " << m_y << " , " << m_z << ")\n";
}


void Point3d::moveByVector(Vector3d &v)
{
	m_x = v.m_x + m_x;
	m_y = v.m_y + m_y;
	m_z = v.m_z + m_z;
}

Point3d Point3d::operator+()
{
	return Point3d(m_x, m_y, m_z);
}
