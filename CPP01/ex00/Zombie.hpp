//
// Created by mperetia on 11.05.24.
//

#ifndef CPP_ZOMBIE_H
#define CPP_ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {
private:
    std::string name;
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    std::string getName();
    void setName(std::string name);
    void announce( void );
    Zombie* newZombie( std::string name);
    void randomChump( std::string name );
};

#endif //CPP_ZOMBIE_H
