//
// Created by mperetia on 23.05.24.
//

#include "DiamondTrap.h"

DiamondTrap::DiamondTrap() {
    std::cout << GREEN "•DiamondTrap• Default constructor called" RESET<< std::endl;
    this->name = "Default";
    this->ClapTrap::energy = ScavTrap::energy;
//    this->energy = ScavTrap::energy;
    this->hit_points = FlagTrap::hit_points;
    this->attack_damage = FlagTrap::attack_damage;
    std::cout << this->name << " " << this->hit_points << " " << this->energy << " " <<this->attack_damage << std::endl;

}

DiamondTrap::DiamondTrap(const std::string new_name)
: ClapTrap(new_name+ "_clap_name"), ScavTrap(new_name) {
    std::cout << GREEN "•DiamondTrap• String constructor called" RESET<< std::endl;
    this->name = new_name;
    this->ClapTrap::energy  = ScavTrap::energy;
    this->energy = ScavTrap::energy;
    this->hit_points = FlagTrap::hit_points;
    this->attack_damage = FlagTrap::attack_damage;
    std::cout << this->name << " " << this->hit_points << " " << this->energy << " " <<this->attack_damage << std::endl;
    std::cout << ClapTrap::energy << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) :ClapTrap(obj),  ScavTrap(obj), FlagTrap(obj), name(obj.name){
    std::cout << GREEN "•DiamondTrap• Copy Constructor Called" RESET<< std::endl;
    if(this != &obj)
        *this = obj;
}


DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj) {
    if (this != &obj){
        ClapTrap::operator=(obj);
        ScavTrap::operator=(obj);
        FlagTrap::operator=(obj);
        this->name = obj.name;
        this->hit_points = obj.hit_points;
        this->energy = obj.energy;
        this->attack_damage = obj.attack_damage;
    }
    return *this;
}

DiamondTrap::~DiamondTrap(){
    std::cout << GREEN"•DiamondTrap• Destructor called" RESET<< std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " CYAN << this->name << RESET "\nClapTrap name: " CYAN << ClapTrap::name << RESET << std::endl;
}
void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}