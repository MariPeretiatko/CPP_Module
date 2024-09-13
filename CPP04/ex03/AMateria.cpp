//
// Created by mperetia on 01.06.24.
//

#include "AMateria.h"

AMateria::AMateria(const std::string &type) : type(type){
    std::cout << GREEN "AMateria Default Constructor Called" RESET << std::endl;
}

AMateria::AMateria(const AMateria &obj) {
    std::cout << YELLOW "AMateria Copy Constructor Called" RESET << std::endl;
    if(this != &obj)
        *this = obj;
}

AMateria &AMateria::operator=(const AMateria &obj) {
    std::cout << YELLOW "AMateria Copy assignment operator called" RESET << std::endl;
    if(this != &obj)
        this->type = obj.type;
    return *this;
}

AMateria::~AMateria() {
    std::cout << RED "AMateria Destructor Called" RESET << std::endl;
}

const std::string &AMateria::getType() const {
    return this->type;
}

void AMateria::use(ICharacter &target) {
    std::cout << "does nothing to " << target.getName() << std::endl;
}