#pragma once
#include "Point3d.h"

class Vector3d
{
private:
    double m_x;
    double m_y;
    double m_z;

public:
    Vector3d(double x, double y, double z);

    void print(void);
    friend void Point3d::moveByVector(const Vector3d &v);

};