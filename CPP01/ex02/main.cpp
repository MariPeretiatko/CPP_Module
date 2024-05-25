#include <iostream>


int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *pbrain  = &brain;
    std::string &rbrain = brain;

    std::cout << "The memory address of the string variable  - " << &brain  << std::endl;
    std::cout << "The memory address held by stringPTR  - " << pbrain <<std::endl;
    std::cout << "The memory address held by stringREF  - " << &rbrain <<std::endl;

    std::cout << "The value of the string variable  -  " << brain << std::endl;
    std::cout << "The value pointed to by stringPTR  -  " << *pbrain << std::endl;
    std::cout << "The value pointed to by stringREF  - " << rbrain << std::endl;


    return 0;
}