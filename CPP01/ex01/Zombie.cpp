#include "Zombie.hpp"

Zombie::Zombie(){
    this->name = "unknown";
}

Zombie::Zombie(std::string name){
    this->name = name;
}

Zombie::~Zombie(){
    std::cout << getName() << " -  destroy" << std::endl;
}

std::string Zombie::getName(){
    return (this->name);
}

void Zombie::setName(std::string name){
    this->name = name;
}

void Zombie::announce(){
    std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

