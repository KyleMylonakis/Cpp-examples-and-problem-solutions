#include "HelloWorld.h"
#include <iostream>

HelloWorld::HelloWorld()
{
    m_data = new char[14];
    const char *init {"Hello World!"};
    for (int i = 0; i < 14; ++i)
    {
        m_data[i] = init[i];
    }
}

HelloWorld::~HelloWorld()
{
    delete[] m_data;
    m_data = nullptr;
    std::cout << "Object sucessfully destroyed" << std::endl;

}

void HelloWorld::print() const
{
    std::cout << m_data << std::endl;
}
