/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:20:58 by mperetia          #+#    #+#             */
/*   Updated: 2024/05/21 18:13:30 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ClapTrap.h"
#include "FragTrap.h"

int main()
{
    FragTrap tmp("qwerty");
    std::cout <<tmp.getName() << std::endl;
    std::cout <<tmp.getEnergy() << std::endl;
    tmp.attack("10");
    tmp.takeDamage(15);
    tmp.beRepaired(1);
    tmp.highFivesGuys();

	return 0;
}

