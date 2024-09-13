//
// Created by mperetia on 02.06.24.
//

#ifndef CPP_ICE_H
#define CPP_ICE_H

#include "AMateria.h"

class Ice : public AMateria{
public:
    Ice();
    Ice(Ice const &obj);
    Ice &operator=(Ice const &obj);
    ~Ice();

    AMateria *clone() const;
    void use(ICharacter& target);

};


#endif //CPP_ICE_H
