/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:42:24 by potero            #+#    #+#             */
/*   Updated: 2022/11/17 17:23:49 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {

	ClapTrap	scavTrap;
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;

	std::cout << "ScavTrap " << this->getName() << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) {

	ClapTrap	scavTrap(name);
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;

	std::cout << "ScavTrap " << this->getName() << " welcome!" << std::endl;
	return;
}

ScavTrap::~ScavTrap(void) {

	std::cout << "ScavTrap destuctor called." << std::endl;
	return;
}
