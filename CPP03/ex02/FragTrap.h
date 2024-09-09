
#ifndef CPP_FRAGTRAP_H
#define CPP_FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap& operator=(const FragTrap& obj);
    FragTrap(const FragTrap& obj);
    ~FragTrap();

    void highFivesGuys();

};


#endif //CPP_FRAGTRAP_H
