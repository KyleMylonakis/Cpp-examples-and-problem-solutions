// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "io.h"

int main()
{
	using std::cout;
	cout << "What is the first number you would like to add?" << std::endl;
	int a = readNumber();
	cout << "And the second number?" << std::endl;
	int b = readNumber();

	int c = a + b;
	writeAnswer(c);

    return 0;
}

