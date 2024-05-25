//
// Created by mperetia on 12.05.24.
//

#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon_type(weapon){}

HumanA::~HumanA() {}

std::string HumanA::getWeaponType() {
    return this->weapon_type.getType();
}

std::string HumanA::getName() {
    return this->name;
}

void HumanA::attack() {
    std::cout << getName() << " : attacks with their : " << getWeaponType() << std::endl;
}


