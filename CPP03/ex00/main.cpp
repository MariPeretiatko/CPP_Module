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

#include "ClapTrap.h"

int main()
{
	ClapTrap tmp("123");
	tmp.attack("456");
	tmp.takeDamage(4);
    tmp.beRepaired(10);
    tmp.takeDamage(4);
    tmp.beRepaired(10);
    tmp.beRepaired(10);
    tmp.takeDamage(4);
    tmp.beRepaired(1);
    tmp.beRepaired(1);
    tmp.beRepaired(1);
    tmp.beRepaired(1);
    tmp.beRepaired(1);
    tmp.beRepaired(1);
    tmp.beRepaired(1);
    tmp.beRepaired(1);
    tmp.takeDamage(40);
    tmp.beRepaired(1);
	return 0;
}

