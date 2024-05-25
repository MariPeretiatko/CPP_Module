//
// Created by mperetia on 22.05.24.
//

#ifndef CPP_SCAVTRAP_H
#define CPP_SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap{
public:
    ScavTrap();
    ScavTrap(const std::string name);
    ScavTrap& operator =(const ScavTrap& obj);
    ScavTrap(const ScavTrap &obj);
    ~ScavTrap();

    void guardGate();
    void attack(const std::string &target);

};


#endif //CPP_SCAVTRAP_H
