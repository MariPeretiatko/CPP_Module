//
// Created by mperetia on 23.05.24.
//

#include "Dog.h"

Dog::Dog() :AAnimal("Dog"){
    std::cout << GREEN "Dog Default Constructor Called" RESET << std::endl;
    this->brain = new Brain();
}

Dog &Dog::operator=(const Dog &obj) {
    std::cout << YELLOW "Dog Copy assignment operator called" RESET << std::endl;
    if(this != &obj)
        this->type = obj.type;
    return (*this);
}

Dog::Dog(const Dog &obj) : AAnimal(obj){
    std::cout << GREEN "Dog Copy Constructor Called" RESET << std::endl;
    if(this != &obj)
        *this = obj;
}

Dog::~Dog() {
    delete this->brain;
    std::cout << RED "Dog Destructor Called" RESET << std::endl;
}

void Dog::makeSound() const {
    std::cout << this->type << " Woof" << std::endl;
}

void Dog::printRandomIdea() const{
    std::cout << CYAN << this->type << RESET " " << this->brain->getRandomIdea() << std::endl;
}