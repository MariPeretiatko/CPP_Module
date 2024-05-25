//
// Created by mperetia on 12.05.24.
//

#ifndef CPP_WEAPON_H
#define CPP_WEAPON_H

#include <iostream>
#include <string>

class Weapon {
private:
    std::string weapon_type;
public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();
    void setType(std::string type);
    std::string getType();
};


#endif //CPP_WEAPON_H
