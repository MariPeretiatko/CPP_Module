//
// Created by mperetia on 12.05.24.
//

#include "Weapon.h"

Weapon::Weapon() {
    this->weapon_type = "unknown";
}
Weapon::Weapon(std::string type) : weapon_type(type){}

Weapon::~Weapon() {}

void Weapon::setType(std::string type) {
    this->weapon_type = type;
}
std::string Weapon::getType() {
    return this->weapon_type;
}
