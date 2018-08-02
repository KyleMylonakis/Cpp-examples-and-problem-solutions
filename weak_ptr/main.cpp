#include "Resource.h"
#include <iostream>
#include <memory>


int main(int argc, char const *argv[])
{
    auto ptr1 = std::make_shared<Resource>();

    ptr1->m_ptr = ptr1;

    return 0;
}
