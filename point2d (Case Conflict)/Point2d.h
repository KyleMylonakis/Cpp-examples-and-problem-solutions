#pragma once

class Point2d
{
private:
    double m_x;
    double m_y;

public:
    Point2d();
    Point2d(double x, double y );
    void print();
    double distanceTo(const Point2d &p);

    friend double distanceFrom(const Point2d &a, const Point2d &b);

};