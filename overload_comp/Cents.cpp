#include "Cents.h"


Cents::Cents(int cents /* header gives default value of 0 cents */) :
    m_cents {cents}
    {
    }

bool operator>(const Cents &c1, const Cents &c2)
{
    return c1.m_cents > c2.m_cents;
}

bool operator<=(const Cents &c1, const Cents &c2)
{
    return !(c1 > c2);
}

bool operator<(const Cents &c1, const Cents &c2)
{
    return c1.m_cents < c2.m_cents;
}

bool operator>=(const Cents &c1, const Cents &c2)
{
    return !(c1 < c2);
}