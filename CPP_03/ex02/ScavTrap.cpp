/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:42:24 by potero            #+#    #+#             */
/*   Updated: 2022/11/29 09:53:09 by potero-d         ###   ########.fr       */
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

ScavTrap::ScavTrap(ScavTrap& cpy) {

	std::cout << "ScavTrap copy constructor called." << std::endl;
	*this = cpy;
	return;
}

ScavTrap&	ScavTrap::operator=(ScavTrap& rhs) {

	std::cout << "ScavTrap assignation operator called." << std::endl;

	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_hitpoints = getHitpoints();
		this->_energy_points = getEnergyPoints();
		this->_attack_damage = getAttackDamage();
	}
	return (*this);
}

void 	ScavTrap::attack(std::string const & target) {

	if (!this->isDead()) { 
		std::cout << "\033[1;35m";
		std::cout << "ScavTrap " << this->getName() << " attack ";
		std::cout << target << ", with a clean move, causing ";
		std::cout <<  this->getAttackDamage() <<  " points of damage!";
		std::cout << "\033[0m" << std::endl;
	}
}



void	ScavTrap::guardGate() {

	std::cout << "\033[1;35m";
	std::cout << "ScavTrap " << this->getName();
	std::cout << " has enterred in Gate keeper mode.";
	std::cout << "\033[0m" << std::endl;
}
