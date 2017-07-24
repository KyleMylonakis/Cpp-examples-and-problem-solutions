// overloadParens.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

class StringBucket
{
private:
	std::string m_string;

public:
	StringBucket(std::string inputString = "") : m_string{ inputString }
	{
	}

	std::string operator()(int start, int length)
	{
		std::string outString{""};
		for (int counter = 0; counter < length; ++counter)
		{
			outString += m_string[start + counter];
		}
		return outString;
	}
};

int main()
{
	StringBucket string{ "Hello, world!" } ;
	std::cout << string(7, 5) << '\n';
    return 0;
}

