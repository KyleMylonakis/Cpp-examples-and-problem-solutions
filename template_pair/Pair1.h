#pragma once

// Class Definition
template <class T>
class Pair1
{
protected:
    T m_first;
    T m_second;

public:
    Pair1(T first, T second) : m_first {first}, m_second {second} {}
    const T& first() const;
    const T& second() const;
};

template <class T>
const T& Pair1<T>::first() const
{
    return m_first;
}

template <class T>
const T& Pair1<T>::second() const
{
    return m_second;
}