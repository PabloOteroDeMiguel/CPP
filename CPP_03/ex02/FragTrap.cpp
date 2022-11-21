/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:45:18 by potero            #+#    #+#             */
/*   Updated: 2022/11/21 17:31:37 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {

	this->_hitpoints = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;

	std::cout << "\033[1;31m";
	std::cout << "FragTrap " << this->getName();
	std::cout << "\033[0m" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {

	this->_hitpoints = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;

	std::cout << "\033[1;31m";
	std::cout << "FragTrap " << this->getName() << " welcome!";
	std::cout << "\033[0m" << std::endl;

	return;
}

FragTrap::~FragTrap(void) {

	std::cout << "\033[1;31m";
	std::cout << "FragTrap " << this->_name << " destuctor called.";
	std::cout << "\033[0m" << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap& cpy) {

	std::cout << "FragTrap copy constructor called." << std::endl;
	*this = cpy;
	return;
}

FragTrap&	FragTrap::operator=(FragTrap& rhs) {

	std::cout << "FragTrap assignation operator called." << std::endl;

	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_hitpoints = getHitpoints();
		this->_energy_points = getEnergyPoints();
		this->_attack_damage = getAttackDamage();
	}
	return (*this);
}

void FragTrap::highFivesGuys(void) {

	std::cout << "\033[1;34m";
	std::cout << "FragTrap " << this->getName() << " give me five!";
	std::cout << "\033[0m" << std::endl;
}

