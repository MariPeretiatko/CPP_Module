//
// Created by mperetia on 02.06.24.
//

#include "MateriaSource.h"

MateriaSource::MateriaSource() {
    std::cout << GREEN "MateriaSource Default Constructor Called" RESET << std::endl;
    for (int i = 0; i < COUNT_MATERIAS; i++)
        this->slot[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &obj) {
    if(this != &obj)
        *this = obj;
    std::cout << YELLOW "MateriaSource Copy Constructor Called" RESET << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj) {
    std::cout << YELLOW "MateriaSource Copy assignment operator called" RESET << std::endl;
    if (this != &obj)
    {
        for (int i = 0; i < COUNT_MATERIAS; i++) {
            if (this->slot[i])
                delete this->slot[i];
            if (obj.slot[i])
                this->slot[i] = obj.slot[i]->clone();
            else
                this->slot[i] = NULL;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < COUNT_MATERIAS; i++){
        if(this->slot[i] != NULL){
            delete this->slot[i];
            this->slot[i] = NULL;
        }
    }
//
//    for (int i = 0; i < 4; i++) {
//        for (int j = i + 1; j < 4; j++) {
//            if (this->slot[i] == this->slot[j])
//                this->slot[j] = NULL;
//        }
//    }
//    for (int i = 0; i < 4; i++) {
//        if (this->slot[i] != NULL)
//            delete this->slot[i];
//    }
    std::cout << RED "MateriaSource Destructor Called" RESET << std::endl;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
    for (int i = 0; i < COUNT_MATERIAS; i++) {
        if (this->slot[i] && this->slot[i]->getType() == type)
            return this->slot[i];
    }
    std::cout << type << " materia does not created" << std::endl;
    return 0;
}

void MateriaSource::learnMateria(AMateria *materia) {
    for (int i = 0; i < 4; ++i) {
        if (!this->slot[i])
        {
//            this->slot[i] = materia;
            this->slot[i] = materia->clone();
            delete materia;

            return;
        }
    }
    std::cout << "Slot full. No spots left to learn" << std::endl;
}