
#include "HumanB.h"
HumanB::HumanB() :weapon_type(NULL){
    this->name = "unknown";
}

HumanB::HumanB(std::string name) : name(name), weapon_type(NULL){}

HumanB::~HumanB() {}

std::string HumanB::getWeapon() {
    if (this->weapon_type == NULL)
        return "no weapon";
    else
        return this->weapon_type->getType();
}
void HumanB::setWeapon(Weapon &type) {
    this->weapon_type = &type;
}

std::string HumanB::getName() {
    return this->name;
}

void HumanB::attack() {
    if(this->weapon_type == NULL)
    {
        std::cout << getName() << " : doesn't have a weapon"<< std::endl;
        return;
    }
    std::cout << getName() << " : attacks with their : " << getWeapon() << std::endl;
}
