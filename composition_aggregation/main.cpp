#include "Department.h"


int main()
{
    Teacher *t1 = new Teacher("Bob");
    Teacher *t2 = new Teacher("Frank");
    Teacher *t3 = new Teacher("Beth");
    {
        Department dept;
        dept.add(t1);
        dept.add(t2);
        dept.add(t3);

        std::cout << dept;
    }

    std::cout << t1->getName() << " still exists!" << std::endl;
    std::cout << t2->getName() << " still exists!" << std::endl;
    std::cout << t3->getName() << " still exists!" << std::endl;

    delete t1;
    delete t2;
    delete t3;
    
    t1 = nullptr;
    t2 = nullptr;
    t3 = nullptr;

    return 0;
}