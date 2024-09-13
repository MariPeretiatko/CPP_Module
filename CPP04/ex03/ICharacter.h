//
// Created by mperetia on 01.06.24.
//

#ifndef CPP_ICHARACTER_H
#define CPP_ICHARACTER_H

//#include <iostream>
#include <string>
//#include "AMateria.h"

class AMateria;

class ICharacter {
public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* materia) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};


#endif //CPP_ICHARACTER_H
