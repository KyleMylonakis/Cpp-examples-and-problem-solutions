#include "Apple.h"
#include "Banana.h"
#include "GrannySmith.h"
#include <iostream>

int main()
{
    /*
    const Apple a("Red delicious", "red", 4.2);
    std::cout << a;

    const Banana b("Cavendish", "yellow");
    std::cout << b;
    */

   Apple a("red");
   Banana b;
   GrannySmith c;

   std::cout << "My " << a.getName() << " is " << a.getColor() << std::endl;
   std::cout << "My " << b.getName() << " is " << b.getColor() << std::endl;
   std::cout << "My " << c.getName() << " is " << c.getColor() << std::endl;
    


    return 0;
}