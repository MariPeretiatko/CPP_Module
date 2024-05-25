/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 00:21:26 by mperetia          #+#    #+#             */
/*   Updated: 2024/05/12 01:43:42 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
