//
// Created by mperetia on 12.05.24.
//

#ifndef CPP_HUMANB_H
#define CPP_HUMANB_H

#include <iostream>
#include <string>
#include "Weapon.h"

class HumanB {
private:
    std::string name;
    Weapon *weapon_type;
public:
    HumanB();
    HumanB(std::string name);
    ~HumanB();
    std::string  getWeapon();
    std::string getName();
    void setWeapon(Weapon &type);
    void attack();
};


#endif //CPP_HUMANB_H
