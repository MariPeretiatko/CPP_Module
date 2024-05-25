//
// Created by mperetia on 23.05.24.
//

#ifndef CPP_DIAMONDTRAP_H
#define CPP_DIAMONDTRAP_H

#include "ScavTrap.h"
#include "FlagTrap.h"

class DiamondTrap : public ScavTrap,  public FlagTrap{
private:
    std::string name;
public:
    DiamondTrap();
    DiamondTrap(const std::string new_name);
    DiamondTrap& operator=(const DiamondTrap& obj);
    DiamondTrap (const DiamondTrap& obj);
    ~DiamondTrap();

    void whoAmI();
    void attack(const std::string& target);
};


#endif
