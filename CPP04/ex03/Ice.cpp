//
// Created by mperetia on 02.06.24.
//

#include "Ice.h"

Ice::Ice() : AMateria("ice"){
    std::cout << GREEN "Ice Default Constructor Called" RESET << std::endl;
}

Ice::Ice(const Ice &obj) : AMateria(obj.getType()){
    std::cout << YELLOW "Ice Copy Constructor Called" RESET << std::endl;
}

Ice &Ice::operator=(const Ice &obj) {
    std::cout << YELLOW "Ice Copy assignment operator called" RESET << std::endl;
    if(this != &obj)
        this->type = obj.type;
    return *this;
}

Ice::~Ice() {
    std::cout << RED "Ice Destructor Called" RESET << std::endl;
}

AMateria *Ice::clone() const {
    return (new Ice());
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}