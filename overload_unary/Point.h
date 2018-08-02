#pragma once


class Point 
{
private:
    double m_x, m_y, m_z;

public:
    Point(double x = 0.0, double y = 0.0, double z = 0.0);
    
    Point operator-() const;
    Point operator+() const;
    bool operator!() const;

    double getX() const;
    double getY() const;
    double getZ() const;
};