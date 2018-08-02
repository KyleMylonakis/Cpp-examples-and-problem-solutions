#pragma once

class Cents 
{
private:
    int m_cents;

public:
    Cents(int cents = 0);
    friend bool operator>(const Cents &c1, const Cents &c2);
    friend bool operator<=(const Cents &c1, const Cents &c2);
    friend bool operator<(const Cents &c1, const Cents &c2);
    friend bool operator>=(const Cents &c1, const Cents &c2);


};