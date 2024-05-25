//
// Created by mperetia on 12.05.24.
//

#ifndef CPP_HUMANA_H
#define CPP_HUMANA_H

#include <iostream>
#include <string>
#include "Weapon.h"

class HumanA {
private:
    std::string name;
    Weapon &weapon_type;
public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    std::string getName();
    std::string getWeaponType();
    void attack();
};


#endif //CPP_HUMANA_H
