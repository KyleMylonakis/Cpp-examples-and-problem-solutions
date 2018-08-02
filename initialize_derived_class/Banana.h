#pragma once
#include "Fruit.h"
#include <ostream>

class Banana : public Fruit
{
private:

public:
    Banana(std::string color="yellow");

    friend std::ostream& operator<<(std::ostream& out, const Banana& b);

};