#include "ClapTrap.h"
#include "ScavTrap.h"

ScavTrap::ScavTrap() : ClapTrap(){
    std::cout << GREEN "•ScavTrap• Default Constructor called" RESET<< std::endl;
    this->hit_points = 100;
    this->energy = 50;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string new_name) : ClapTrap(new_name){
    std::cout << GREEN "•ScavTrap• String constructor called" RESET<< std::endl;
    this->hit_points = 100;
    this->energy = 50;
    this->attack_damage = 20;
}

ScavTrap::~ScavTrap() {
    std::cout << GREEN"•ScavTrap• Destructor called" RESET<< std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj) {
    if (this != &obj) {
        ClapTrap::operator=(obj);
    }
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj.name) {
    std::cout << GREEN "•ScavTrap• Copy Constructor Called" RESET<< std::endl;
    if (this != &obj)
        *this = obj;
}

void ScavTrap::attack(const std::string &target) {
    if(this->hit_points <= 0)
        std::cout << CYAN << name <<RESET RED " is dead!" RESET << std::endl;
    else if(this->energy <= 0)
        std::cout << CYAN  << name <<RESET RED " is out of energy!" RESET << std::endl;
    else{
        --this->energy;
        std::cout << CYAN<< this->name <<RESET RED" attacks " RESET CYAN<< target << RESET", causing "
            RED << this->attack_damage << RESET " points of damage!\n";
    }
    std::cout << CYAN"•ScavTrap•\n" RESET;
}

void ScavTrap::guardGate() {
    std::cout << CYAN << this->name << RESET << " is now in Gate Keeper mode." << std::endl;
}

void ScavTrap::setDefaultValues() {
    this->energy = 50;
}
