
#ifndef CPP_FLAGTRAP_H
#define CPP_FLAGTRAP_H

#include "ClapTrap.h"

class FlagTrap : public ClapTrap{
public:
    FlagTrap();
    FlagTrap(std::string name);
    FlagTrap& operator=(const FlagTrap& obj);
    FlagTrap(const FlagTrap& obj);
    ~FlagTrap();

    void highFivesGuys();

};


#endif //CPP_FLAGTRAP_H
