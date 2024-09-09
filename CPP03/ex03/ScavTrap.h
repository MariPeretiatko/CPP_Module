//
// Created by mperetia on 22.05.24.
//

#ifndef CPP_SCAVTRAP_H
#define CPP_SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : virtual public ClapTrap{
public:
    ScavTrap();
    ScavTrap(const std::string new_name);
    ScavTrap& operator =(const ScavTrap& obj);
    ScavTrap(const ScavTrap &obj);
    virtual ~ScavTrap();

    void guardGate();
    void attack(const std::string &target);
    void setDefaultValues();

};


#endif //CPP_SCAVTRAP_H
