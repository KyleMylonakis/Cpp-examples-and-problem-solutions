#include <string>
#include <iostream>

class Ball
{
private:
    std::string m_color;
    double m_radius;

public:
    Ball(std::string color = "black", double radius = 10.0)
    {
        m_color = color;
        m_radius = radius;
    }

    Ball(double radius)
    {
        m_color = "black";
        m_radius = radius;
    }

    void print()
    {
        std::cout << "color: " << m_color << ", radius: " << m_radius << std::endl;
    }

};