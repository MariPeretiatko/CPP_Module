//
// Created by mperetia on 23.05.24.
//

#include "Dog.h"

Dog::Dog() :Animal("Dog"){
    std::cout << GREEN "Dog Default Constructor Called" RESET << std::endl;
}

Dog &Dog::operator=(const Dog &obj) {
    std::cout << YELLOW "Dog Copy assignment operator called" RESET << std::endl;
    if(this != &obj)
        this->type = obj.type;
    return (*this);
}

Dog::Dog(const Dog &obj) : Animal(obj){
    std::cout << GREEN "Dog Copy Constructor Called" RESET << std::endl;
    if(this != &obj)
        *this = obj;
}

Dog::~Dog() {
    std::cout << RED "Dog Destructor Called" RESET << std::endl;
}

void Dog::makeSound() const {
    std::cout << this->type << " Woof" << std::endl;
}