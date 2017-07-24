// AverageClassOverload.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class Average 
{
private:
	int32_t m_rollingSum{ 0 };
	int8_t m_numberOfNumbers{ 0 };

public:
	Average()
	{
	}

	Average& operator+=(int input)
	{
		m_rollingSum += input;
		++m_numberOfNumbers;
		return *this;
	}

	friend std::ostream& operator<<(std::ostream& out, Average &avg);

};

std::ostream& operator<<(std::ostream& out, Average &avg)
{
	out << static_cast<double>(avg.m_rollingSum) / static_cast<double>(avg.m_numberOfNumbers);
	return out;
}

int main()
{
	Average avg;

	avg += 4;
	std::cout << avg << '\n';

	avg += 8;
	std::cout << avg << '\n';

	avg += 24;
	std::cout << avg << '\n';

	avg += -10;
	std::cout << avg << '\n';

	(avg += 6) += 10; // 2 calls chained together
	std::cout << avg << '\n';

	Average copy = avg;
	std::cout << copy << '\n';
    return 0;
}

