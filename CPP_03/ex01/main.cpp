/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:13:47 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/17 16:16:58 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {

	ClapTrap Yo("Viernes");
	ClapTrap Tu;
	ClapTrap El("Lunes");

//	Tu("Jueves");
	Yo.attack("Lunes");
	El.takeDamage(10);
	El.attack("Viernes");
	El.takeDamage(10);
	El.beRepaired(10);
	Yo.takeDamage(5);
	Yo.beRepaired(10);
	std::cout << Yo.getName() << " has " << Yo.getEnergyPoints(); 
	std::cout << " energy points." << std::endl;
}
