//
// Created by mperetia on 02.06.24.
//

#include "Cure.h"

Cure::Cure() : AMateria("cure"){
    std::cout << GREEN "Cure Default Constructor Called" RESET << std::endl;
}

Cure::Cure(const Cure &obj) : AMateria(obj.getType()){
    std::cout << YELLOW "Cure Copy Constructor Called" RESET << std::endl;
}

Cure &Cure::operator=(const Cure &obj) {
    std::cout << YELLOW "Cure Copy assignment operator called" RESET << std::endl;
    if(this != &obj)
        this->type = obj.type;
    return *this;
}

Cure::~Cure(){
    std::cout << RED "Cure Destructor Called" RESET << std::endl;
}

AMateria *Cure::clone() const {
    return (new Cure());
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}