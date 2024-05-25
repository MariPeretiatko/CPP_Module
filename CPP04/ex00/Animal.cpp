//
// Created by mperetia on 23.05.24.
//

#include "Animal.h"

Animal::Animal() {
    this->type = "unknown";
    std::cout << GREEN "Animal Default Constructor Called" RESET << std::endl;
}

Animal::Animal(std::string new_type) {
    this->type = new_type;
    std::cout << GREEN "Animal String Constructor Called" RESET << std::endl;
}

Animal::Animal(const Animal &obj):type(obj.type){
    std::cout << YELLOW "Animal Copy Constructor Called" RESET << std::endl;
}

Animal &Animal::operator=(const Animal &obj) {
    std::cout << YELLOW "Animal Copy assignment operator called" RESET << std::endl;
    if (this != &obj){
        this->type = obj.type;
    }
    return (*this);
}

Animal::~Animal() {
    std::cout << RED "Animal Destructor Called." RESET << std::endl;
}

std::string Animal::getType() const{
    return this->type;
}

void Animal::makeSound() const {
    std::cout << this->type << " Random Animal Sound" << std::endl;
}