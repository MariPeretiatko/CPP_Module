//
// Created by mperetia on 02.06.24.
//

#ifndef CPP_CURE_H
#define CPP_CURE_H

#include "AMateria.h"

class Cure : public AMateria{
public:
    Cure();
    Cure(Cure const &obj);
    Cure &operator=(Cure const &obj);
    ~Cure();

    AMateria *clone() const;
    void use(ICharacter& target);
};


#endif //CPP_CURE_H
