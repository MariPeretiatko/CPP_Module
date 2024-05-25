
#ifndef CPP_FLAGTRAP_H
#define CPP_FLAGTRAP_H

#include "ClapTrap.h"

class FlagTrap : virtual public ClapTrap{
public:
    FlagTrap();
    FlagTrap(const std::string new_name);
    FlagTrap& operator=(const FlagTrap& obj);
    FlagTrap(const FlagTrap& obj);
    virtual ~FlagTrap();

    void highFivesGuys();

};


#endif //CPP_FLAGTRAP_H
