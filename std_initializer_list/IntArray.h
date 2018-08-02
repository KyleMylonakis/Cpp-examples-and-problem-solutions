#pragma once

#include <initializer_list>

class IntArray
{
private: 
    int m_length;
    int *m_data;

public:
    IntArray();
    IntArray(int length);
    IntArray(const std::initializer_list<int> &list);
    ~IntArray();
    int& operator[](int index);
    int getLength();
    IntArray& operator=(const std::initializer_list<int> &list);

};