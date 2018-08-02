#include "Cents.h"
#include <iostream>

int main()
{

    Cents dime {10};
    Cents nickle {5};

    if (nickle > dime)
        std::cout << "a nickle is greater than a dime." << std::endl;

    if (nickle >= dime)
        std::cout << "a nickle is greater than or equal to a dime" << std::endl;
    
    if (nickle < dime)
        std::cout << "a dime is greater than a nickle" << std::endl;

    if (nickle <= dime)
        std::cout << "a dime is greater than or equal to a nickle." << std::endl;


    return 0;
}