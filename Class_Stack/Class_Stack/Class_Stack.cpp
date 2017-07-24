// Class_Stack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class MyStack
{
	int m_stack[10]{ 0 };
	int m_length{ 0 };

	public:
		void reset()
		{
			m_length = 0;
			for (int entry : m_stack)
			{
				entry = 0;
			}
		}

		void push(int entry)
		{
			m_stack[m_length] = entry;
			m_length++;
		}

		void pop()
		{
			m_stack[m_length] = 0;
			m_length--;
		}

		void print()
		{
			std::cout << "( ";

			for (int count = 0; count < m_length; count++)
				std::cout << m_stack[count] << ' ';
			
			std::cout << ")\n";
		}
};

int main()
{
	MyStack stack;
	stack.reset();

	stack.print();

	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();

	stack.print();

    return 0;
}

