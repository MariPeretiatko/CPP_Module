//
// Created by mperetia on 01.06.24.
//

#ifndef CPP_AMETERIA_H
#define CPP_AMETERIA_H

#include <iostream>
#include "ICharacter.h"
#include "IMateriaSource.h"

#include "Colors.h"

class AMateria{
protected:
    std::string type;
public:
    AMateria(std::string const &type);
    AMateria(AMateria const &obj);
    AMateria &operator=(AMateria const &obj);
    virtual ~AMateria();

    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};


#endif //CPP_AMETERIA_H
