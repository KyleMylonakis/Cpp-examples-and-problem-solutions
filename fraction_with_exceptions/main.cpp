#include "Fraction.h"
#include <iostream>

int main()
{

    std::cout << "Enter the numerator: ";
    int tmp_num {0};
    std::cin >> tmp_num;
    std::cout << std::endl;

    std::cout << "Enter the denominator: ";
    int tmp_denom {0};
    std::cin >> tmp_denom;
    std::cout << std::endl;

    try
    {
        Fraction frac {tmp_num,tmp_denom};    
    }
    catch (std::runtime_error &exception)
    {
        std::cerr << exception.what() << std::endl;
    }
    
    
    return 0;
}