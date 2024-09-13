//
// Created by mperetia on 28.05.24.
//

#include "WrongCat.h"

WrongCat::WrongCat() : WrongAnimal("Cat"){
    std::cout << GREEN "WrongCat Default Constructor Called" RESET<< std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &obj) {
    std::cout << YELLOW "WrongCat Copy assignment operator called" RESET << std::endl;
    if(this != &obj)
        this->type = obj.type;
    return (*this);
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj){
    std::cout << YELLOW "WrongCat Copy Constructor Called" RESET << std::endl;
    if(this != &obj)
        *this = obj;
}

WrongCat::~WrongCat(){
    std::cout << RED "WrongCat Destructor Called" RESET << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << this->type << " Wrong Meow" << std::endl;
}