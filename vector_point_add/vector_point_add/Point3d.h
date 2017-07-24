#pragma once

class Vector3d;

class Point3d
{
private:
	double m_x, m_y, m_z;

public:
	Point3d(double x = 0.0, double y = 0.0, double z = 0.0) : m_x(x), m_y(y), m_z(z)
	{

	}

	Point3d operator+();

	void print();

	void moveByVector(Vector3d &);
};

class Vector3d
{
private:
	double m_x, m_y, m_z;

public:
	// Constructor with default initilization the zero vector
	Vector3d(double x = 0.0, double y = 0.0, double z = 0.0) : m_x(x), m_y(y), m_z(z)
	{

	}

	void print();

	friend void Point3d::moveByVector(Vector3d &v);
	
	

};



