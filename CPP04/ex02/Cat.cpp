//
// Created by mperetia on 23.05.24.
//

#include "Cat.h"

Cat::Cat() : AAnimal("Cat"){
    std::cout << GREEN "Cat Default Constructor Called" RESET<< std::endl;
    this->brain = new Brain();
}

Cat &Cat::operator=(const Cat &obj) {
    std::cout << YELLOW "Cat Copy assignment operator called" RESET << std::endl;
    if(this != &obj)
        this->type = obj.type;
    return (*this);
}

Cat::Cat(const Cat &obj) : AAnimal(obj){
    std::cout << YELLOW "Cat Copy Constructor Called" RESET << std::endl;
    if(this != &obj)
        *this = obj;
}

Cat::~Cat(){
    delete this->brain;
    std::cout << RED "Cat Destructor Called" RESET << std::endl;
}

void Cat::makeSound() const {
    std::cout << this->type << " Meow" << std::endl;
}

void Cat::printRandomIdea() const{
    std::cout << CYAN << this->type << RESET " " << this->brain->getRandomIdea() << std::endl;
}



