/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:13:47 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/29 09:52:56 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {

	ClapTrap Viernes("Viernes");
	ClapTrap Lunes("Lunes");

	Viernes.attack("Lunes");
	Lunes.takeDamage(10);
	/*
	std::cout << "Lunes try attack:" << std::endl;
	Lunes.attack("Viernes");
	std::cout << "Lunes try take damage:" << std::endl;
	Lunes.takeDamage(10);
	std::cout << "Lunes try be repaired:" << std::endl;
	Lunes.beRepaired(10);
	Viernes.takeDamage(5);
	Viernes.beRepaired(10);
	Viernes.beRepaired(10);
	std::cout << Viernes.getName() << " has " << Viernes.getEnergyPoints(); 
	std::cout << " energy points." << std::endl;
	*/
	ScavTrap Miercoles("Miercoles");
	ScavTrap Jueves("Jueves");
	Miercoles.guardGate();
//	Lunes.guardGate(); //Doesn´t compile because function is on the child.
	Jueves.attack("Miercoles");
	Miercoles.takeDamage(20);
	Miercoles.beRepaired(10);
	std::cout << Miercoles.getName() << " has " << Miercoles.getEnergyPoints(); 
	std::cout << " energy points." << std::endl;

}
