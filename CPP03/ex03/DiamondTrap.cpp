//
// Created by mperetia on 23.05.24.
//

#include "DiamondTrap.h"

DiamondTrap::DiamondTrap() {
    std::cout << GREEN "•DiamondTrap• Default constructor called" RESET<< std::endl;
    this->name = "Default";
    ScavTrap::setDefaultValues();
    std::cout << this->name << " " << this->hit_points << " " << this->energy << " " <<this->attack_damage << std::endl;

}

DiamondTrap::DiamondTrap(const std::string new_name)
: ClapTrap(new_name+ "_clap_name"), ScavTrap(new_name), FragTrap(new_name) {
    std::cout << GREEN "•DiamondTrap• String constructor called" RESET<< std::endl;
    ScavTrap::setDefaultValues();
    this->name = new_name;
    std::cout << "" << this->name << " " << this->hit_points << " " << this->energy << " " <<this->attack_damage << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) :ClapTrap(obj),  ScavTrap(obj), FragTrap(obj), name(obj.name){
    std::cout << GREEN "•DiamondTrap• Copy Constructor Called" RESET<< std::endl;
    if(this != &obj)
        *this = obj;
}


DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj) {
    if (this != &obj){
        ClapTrap::operator=(obj);
        this->name = obj.name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap(){
    std::cout << GREEN"•DiamondTrap• Destructor called" RESET<< std::endl;
}

std::string DiamondTrap::getName() {
    return this->name;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " CYAN << this->name << RESET "\nClapTrap name: " CYAN << ClapTrap::name << RESET << std::endl;
}
void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}