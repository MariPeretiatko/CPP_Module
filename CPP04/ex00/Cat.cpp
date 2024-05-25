//
// Created by mperetia on 23.05.24.
//

#include "Cat.h"

Cat::Cat() : Animal("Cat"){
    std::cout << GREEN "Cat Default Constructor Called" RESET<< std::endl;
}

Cat &Cat::operator=(const Cat &obj) {
    std::cout << YELLOW "Cat Copy assignment operator called" RESET << std::endl;
    if(this != &obj)
        this->type = obj.type;
    return (*this);
}

Cat::Cat(const Cat &obj) : Animal(obj){
    std::cout << YELLOW "Cat Copy Constructor Called" RESET << std::endl;
    if(this != &obj)
        *this = obj;
}

Cat::~Cat(){
    std::cout << RED "Cat Destructor Called" RESET << std::endl;
}

void Cat::makeSound() const {
    std::cout << this->type << " Meow" << std::endl;
}


