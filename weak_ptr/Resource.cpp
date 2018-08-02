#include "Resource.h"
#include <iostream>

Resource::Resource()
{
    std::cout << "Resource acquired" << std::endl;
}

Resource::~Resource()
{
    std::cout << "Resource destroyed" << std::endl;
}