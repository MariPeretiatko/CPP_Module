
#ifndef CPP_FRAGTRAP_H
#define CPP_FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : virtual public ClapTrap{
public:
    FragTrap();
    FragTrap(const std::string new_name);
    FragTrap& operator=(const FragTrap& obj);
    FragTrap(const FragTrap& obj);
    virtual ~FragTrap();

    void highFivesGuys();
    void setDefaultValues();

};


#endif //CPP_FRAGTRAP_H
