// FruitInheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

class Fruit
{
private:
	std::string m_name;
	std::string m_color;

public:
	Fruit(std::string name = "", std::string color = "") : m_name{ name }, m_color{ color }
	{
	}

	std::string getName() const { return m_name; }
	std::string getColor() const { return m_color; }

};

class Apple : public Fruit
{
private:
	double m_fiber;

public:
	Apple(std::string name, std::string color, double fiber) : Fruit(name, color), m_fiber{ fiber }
	{
	}

	double getFiber() const { return m_fiber; }

	friend std::ostream& operator<<(std::ostream&, const Apple &apple);
};

const class Bannana : public Fruit
{
public:
	Bannana(std::string name, std::string color) : Fruit(name, color)
	{
	}

	friend std::ostream& operator<<(std::ostream& out, const Bannana &bannana);
};

std::ostream& operator<<(std::ostream& out,const Bannana &bannana)
{
	out << "Bannana(" << bannana.getName() << ' ' << bannana.getColor() << ")\n";
	return out;
}

std::ostream& operator<<(std::ostream& out, const Apple &apple)
{
	out << "Apple(" << apple.getName() << ' ' << apple.getColor() << ' ' << apple.getFiber() << ")\n";
	return out;
}

int main()
{
	const Apple a("Red delicious", "red", 4.2);
	std::cout << a;

	const Bannana b("Cavendish", "yellow");
	std::cout << b;

	return 0;
    return 0;
}

