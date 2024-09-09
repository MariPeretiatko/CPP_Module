//
// Created by mperetia on 23.05.24.
//

#ifndef CPP_DIAMONDTRAP_H
#define CPP_DIAMONDTRAP_H

#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap : public ScavTrap,  public FragTrap{
private:
    std::string name;
public:
    DiamondTrap();
    DiamondTrap(const std::string new_name);
    DiamondTrap& operator=(const DiamondTrap& obj);
    DiamondTrap (const DiamondTrap& obj);
    ~DiamondTrap();

    std::string getName();

    void whoAmI();
    void attack(const std::string& target);
};


#endif
