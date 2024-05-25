#ifndef CPP_ZOMBIE_H
#define CPP_ZOMBIE_H

#include <iostream>
#include <string>
#include <sstream>

# define RESET "\033[0m"
# define RED "\033[1;31m"

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

Zombie* zombieHorde(int N, std::string name);

#endif //CPP_ZOMBIE_H
