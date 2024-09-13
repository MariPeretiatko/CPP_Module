//
// Created by mperetia on 01.06.24.
//

#include "Character.h"

Character::Character(std::string new_name) : name(new_name) {
    for (int i = 0; i < COUNT_MATERIAS; i++)
        this->slot[i] = NULL;
    std::cout << GREEN "Character Default Constructor Called" RESET << std::endl;
}

Character::Character(const Character &obj) {
    std::cout << YELLOW "Character Copy Constructor Called" RESET << std::endl;
    *this = obj;
}

Character &Character::operator=(const Character &obj) {
    std::cout << YELLOW "Character Copy assignment operator called" RESET << std::endl;
    if(this != &obj){
        this->name = obj.name;
        for (int i = 0; i < COUNT_MATERIAS; i++){
            delete this->slot[i];
            if (obj.slot[i]) {
                this->slot[i] = obj.slot[i]->clone();
            } else
                this->slot[i] = NULL;

        }
    }
    return *this;
}

Character::~Character(){
//    for (int i = 0; i < COUNT_MATERIAS; i++)
//        delete this->slot[i];
    std::cout << RED "Character Destructor Called" RESET << std::endl;
}

const std::string &Character::getName() const {
    return this->name;
}
//экипировать
void Character::equip(AMateria *materia) {
    for (int i = 0; i < COUNT_MATERIAS; i++)
    {
        if(!slot[i])
        {
            this->slot[i] = materia;
            return;
        }
    }
    std::cout << "Cannot equip: all slots are full" << std::endl;
}
//снять снаряжение
void Character::unequip(int idx) {
//    if (idx >= 0 && idx < COUNT_MATERIAS) {
//        if (slot[idx] != NULL) {
//            delete slot[idx]; // Освобождаем ресурсы, если это необходимо
//            slot[idx] = NULL; // Устанавливаем указатель в NULL
//        } else {
//            std::cout << "Cannot unequip: slot is already empty" << std::endl;
//        }
//    } else {
//        std::cout << "Cannot unequip: invalid index" << std::endl;
//    }
    if(idx >= 0 && idx < COUNT_MATERIAS){
        this->slot[idx] = NULL;
        return;
    }
    std::cout << "Cannot unequip: invalid index" << std::endl;
}

void Character::use(int idx, ICharacter &target) {
    if((idx >= 0 && idx < COUNT_MATERIAS) && this->slot[idx])
        this->slot[idx]->use(target);
    else
        std::cout << "Cannot use: invalid index or slot is empty" << std::endl;
}
