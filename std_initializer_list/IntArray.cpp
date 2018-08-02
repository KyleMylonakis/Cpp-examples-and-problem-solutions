#include "IntArray.h"
#include <cassert>

IntArray::IntArray() : m_length {0}, m_data { nullptr }
{
}

IntArray::IntArray(int length) : m_length {length}
{
    m_data  = new int[length];
}

IntArray::IntArray(const std::initializer_list<int> &list) : m_length { list.size() }
{
    int count {0};
    m_data = new int[m_length];
    for (auto &element : list)
    {
        m_data[count] = element;
        ++count;
    }
}

IntArray::~IntArray()
{
    delete[] m_data;
    m_data = nullptr;
}

int& IntArray::operator[](int index)
{
    assert(index >= 0 && index < m_length);
    return m_data[index];
}

int IntArray::getLength()
{
    return m_length;
}

IntArray& IntArray::operator=(const std::initializer_list<int> &list)
{
    m_length = list.size();
    delete[] m_data;
    m_data = new int[m_length];

    int count {0};
    for (auto &element : list)
    {
        m_data[count] = element;
        ++count;
    }

}