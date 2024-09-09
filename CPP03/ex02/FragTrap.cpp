
#include "FragTrap.h"

FragTrap::FragTrap() :ClapTrap(){
    std::cout << GREEN "•FragTrap• Default Constructor called" RESET<< std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    std::cout << GREEN "•FragTrap• String constructor called" RESET<< std::endl;
    this->hit_points = 100;
    this->energy = 100;
    this->attack_damage = 30;
}

FragTrap::~FragTrap() {
    std::cout << GREEN"•FragTrap• Destructor called" RESET<< std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &obj) {
    if(this != &obj)
        ClapTrap::operator=(obj);
    return *this;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj.name){
    std::cout << GREEN "•FragTrap• Copy Constructor Called" RESET<< std::endl;
    if(this != &obj)
        *this = obj;
}

void FragTrap::highFivesGuys() {
    std::cout << "•FragTrap• " CYAN << this->name << RESET" is high fiving." << std::endl;
}
