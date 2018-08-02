#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include <iostream>

int main()
{
    Cat fred{"Fred"}, misty{"Misty"}, zeke{"Zeke"};
    Dog garbo{"Garbo"}, pooky{"Pooky"}, truffle{"Truffle"};

    Animal* animal[] = {&fred, &misty, &zeke, &garbo, &pooky, &truffle};
    for (int ii = 0; ii < 6; ++ii)
    {
        std::cout << animal[ii]->getName() << " says " << animal[ii]->speak() << std::endl;
    }

    return 0;
}