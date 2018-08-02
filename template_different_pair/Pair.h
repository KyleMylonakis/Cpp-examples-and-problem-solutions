#pragma once

template <class T1, class T2>
class Pair 
{
protected:
    T1 m_first;
    T2 m_second;

public:
    Pair(T1 first, T2 second) : m_first {first}, m_second {second} {}
    T1& first();
    const T1& first() const;
    T2& second();
    const T2& second() const;
};

template <typename T1, typename T2>
T1& Pair<T1, T2>::first()
{
    return m_first;
}

template <typename T1, typename T2>
const T1& Pair<T1, T2>::first() const
{
    return m_first;
}

template <typename T1, typename T2>
T2& Pair<T1, T2>::second()
{
    return m_second;
}

template <typename T1, typename T2>
const T2& Pair<T1, T2>::second() const
{
    return m_second;
}