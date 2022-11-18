/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:42:24 by potero            #+#    #+#             */
/*   Updated: 2022/11/18 12:41:12 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {

	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;

	std::cout << "\033[1;33m";
	std::cout << "ScavTrap " << this->getName();
	std::cout << "\033[0m" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {

	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;

	std::cout << "\033[1;33m";
	std::cout << "ScavTrap " << this->getName() << " welcome!";
	std::cout << "\033[0m" << std::endl;

	return;
}

ScavTrap::~ScavTrap(void) {

	std::cout << "\033[1;33m";
	std::cout << "ScavTrap " << this->_name << " destuctor called.";
	std::cout << "\033[0m" << std::endl;
	return;
}
