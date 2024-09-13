//
// Created by mperetia on 02.06.24.
//

#ifndef CPP_MATERIASOURCE_H
#define CPP_MATERIASOURCE_H

#include "AMateria.h"
#include "IMateriaSource.h"

#define COUNT_MATERIAS 4

class MateriaSource : public IMateriaSource{
private:
    AMateria *slot[COUNT_MATERIAS];
public:
    MateriaSource();
    MateriaSource(MateriaSource const &obj);
    MateriaSource &operator=(MateriaSource const &obj);
    ~MateriaSource();

    AMateria* createMateria(std::string const & type);
    void learnMateria(AMateria* materia);
};


#endif //CPP_MATERIASOURCE_H
