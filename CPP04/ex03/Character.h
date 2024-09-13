//
// Created by mperetia on 01.06.24.
//

#ifndef CPP_CHARACTER_H
#define CPP_CHARACTER_H

#include <string>
#include <iostream>
#include "ICharacter.h"
#include "AMateria.h"

#define COUNT_MATERIAS  4

class Character : public ICharacter{
private:
    std::string name;
    AMateria *slot[COUNT_MATERIAS];
public:
//    Character();
    Character(std::string new_name);
    Character(const Character &obj);
    Character &operator=(const Character &obj);
    ~Character();

    const std::string & getName() const;
    void equip(AMateria *materia);
    void unequip(int idx);
    void use(int idx, ICharacter &target);

};


#endif //CPP_CHARACTER_H
