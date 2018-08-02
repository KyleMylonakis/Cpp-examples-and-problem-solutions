#include "MyString.h"
#include <iostream>

int main()
{
    MyString string("Hello, world!");
    std::cout << string(7,5) << std::endl;
    return 0;
}