//
// Created by mperetia on 23.05.24.
//

#include "AAnimal.h"

AAnimal::AAnimal() {
    this->type = "unknown";
    std::cout << GREEN "AAnimal Default Constructor Called" RESET << std::endl;
}

AAnimal::AAnimal(std::string new_type) {
    this->type = new_type;
    std::cout << GREEN "AAnimal String Constructor Called" RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal &obj):type(obj.type){
    std::cout << YELLOW "AAnimal Copy Constructor Called" RESET << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &obj) {
    std::cout << YELLOW "AAnimal Copy assignment operator called" RESET << std::endl;
    if (this != &obj){
        this->type = obj.type;
    }
    return (*this);
}

AAnimal::~AAnimal() {
    std::cout << RED "AAnimal Destructor Called" RESET << std::endl;
}

std::string AAnimal::getType() const{
    return this->type;
}

