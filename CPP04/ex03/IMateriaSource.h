//
// Created by mperetia on 01.06.24.
//

#ifndef CPP_IMATERIASOURCE_H
#define CPP_IMATERIASOURCE_H

#include <iostream>
#include "AMateria.h"

class IMateriaSource{
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif //CPP_IMATERIASOURCE_H
