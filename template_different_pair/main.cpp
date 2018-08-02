#include "Pair.h"
#include "StringValuePair.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    /*
    Pair<int, double> p1 {5, 6.7};
    std::cout << "Pair: " << p1.first() << ' ' << p1.second() << std::endl;
 
	const Pair<double, int> p2(2.3, 4);
	std::cout << "Pair: " << p2.first() << ' ' << p2.second() << std::endl;
    */

    StringValuePair<int> svp {"Hello", 5};
    std::cout << "Pair: " << svp.first() << ' ' << svp.second() << std::endl;

    return 0;
}
