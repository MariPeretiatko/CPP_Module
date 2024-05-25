/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:20:57 by mperetia          #+#    #+#             */
/*   Updated: 2024/05/21 18:12:59 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap() : name("unknown") , hit_points(10), energy(10), attack_damage(0){
    std::cout << GREEN "•ClapTrap• Default constructor called" RESET<< std::endl;
}

ClapTrap::ClapTrap(const std::string new_name) : name(new_name), hit_points(10), energy(10), attack_damage(0){
    std::cout << GREEN "•ClapTrap• String constructor called" RESET<< std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << GREEN"•ClapTrap• Destructor called" RESET<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj){
    std::cout << GREEN"•ClapTrap• Copy constructor called" RESET<< std::endl;
	if(this != &obj)
		*this = obj;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& obj){
	if(this != &obj){
		this->name = obj.name;
		this->hit_points = obj.hit_points;
		this->energy = obj.energy;
		this->attack_damage = obj.attack_damage;
	}
	return *this;
}

std::string ClapTrap::getName(){
	return this->name;
}

unsigned int ClapTrap::getHitPoints(){
	return this->hit_points;
}

unsigned int ClapTrap::getEnergy(){
	return this->energy;
}

unsigned int ClapTrap::getAttackDamage(){
	return this->attack_damage;
}

void ClapTrap::attack(const std::string &target)
{
    if(this->hit_points <= 0)
        std::cout << CYAN << name <<RESET RED " is dead!" RESET << std::endl;
	else if(this->energy <= 0)
        std::cout << CYAN  << name <<RESET RED " is out of energy!" RESET << std::endl;
	else{
        --this->energy;
        std::cout << CYAN<< this->name <<RESET RED" attacks " RESET CYAN<< target << RESET", causing "
                  << this->attack_damage << " points of damage!\n";
    }
    std::cout << CYAN"•ClapTrap•\n" RESET;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hit_points = (amount >= this->hit_points) ? 0: this->hit_points - amount;
    if(this->hit_points == 0)
        std::cout << CYAN << name <<RESET RED " is dead!" RESET << std::endl;
    else {
        std::cout << CYAN << this->name << RESET " received " RED << amount << RESET " of damage!" << std::endl;
        std::cout << CYAN << this->name << RESET " has " GREEN << this->hit_points << RESET " HP remaining!" << std::endl;
    }
    std::cout << CYAN"•ClapTrap•\n" RESET;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->hit_points <= 0)
        std::cout << CYAN << name << RESET " can't repair the HP " << CYAN << name << RESET RED " is dead!" RESET << std::endl;
    else if(this->energy <= 0)
        std::cout << CYAN  << name <<RESET RED " is out of energy!" RESET << std::endl;
    else {
        --this->energy;
        this->hit_points += amount;
        std::cout << CYAN << this->name << RESET " has " GREEN << this->hit_points << RESET " HP remaining!" << std::endl;
    }
    std::cout << CYAN"•ClapTrap•\n" RESET;
}
