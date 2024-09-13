//
// Created by mperetia on 28.05.24.
//

#include "WrongAnimal.h"


WrongAnimal::WrongAnimal() {
    this->type = "unknown_WrongAnimal";
    std::cout << GREEN "WrongAnimal Default Constructor Called" RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string new_type) : type(new_type){
    std::cout << GREEN "WrongAnimal String Constructor Called" RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) : type(obj.type){
    std::cout << YELLOW "WrongAnimal Copy Constructor Called" RESET << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj) {
    std::cout << YELLOW "WrongAnimal Copy assignment operator called" RESET << std::endl;
    if(this != &obj)
        this->type = obj.type;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << RED "WrongAnimal Destructor Called." RESET << std::endl;
}

std::string WrongAnimal::getType() const{
    return this->type;
}

void WrongAnimal::makeSound() const {
    std::cout << this->type << " Random Wrong Animal Sound" << std::endl;
}

