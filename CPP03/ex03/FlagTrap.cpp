
#include "FlagTrap.h"

FlagTrap::FlagTrap() :ClapTrap(){
    std::cout << GREEN "•FlagTrap• Default Constructor called" RESET<< std::endl;
}

FlagTrap::FlagTrap(const std::string new_name) : ClapTrap(new_name){
    std::cout << GREEN "•FlagTrap• String constructor called" RESET<< std::endl;
    this->hit_points = 100;
    this->energy = 100;
    this->attack_damage = 30;
}

FlagTrap::~FlagTrap() {
    std::cout << GREEN"•FlagTrap• Destructor called" RESET<< std::endl;
}

FlagTrap &FlagTrap::operator=(const FlagTrap &obj) {
    if(this != &obj)
        ClapTrap::operator=(obj);
    return *this;
}

FlagTrap::FlagTrap(const FlagTrap &obj) : ClapTrap(obj.name){
    std::cout << GREEN "•FlagTrap• Copy Constructor Called" RESET<< std::endl;
    if(this != &obj)
        *this = obj;
}

void FlagTrap::highFivesGuys() {
    std::cout << "•FlagTrap• " CYAN << this->name << RESET" is high fiving." << std::endl;
}
