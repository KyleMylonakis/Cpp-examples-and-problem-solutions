#include "Fraction.h"
#include <memory>

int main(int argc, char const *argv[])
{
    
    std::unique_ptr<Fraction> frac = std::make_unique<Fraction>(5,3);
    printFraction(frac.get());

    return 0;
}
