/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:06:33 by potero            #+#    #+#             */
/*   Updated: 2022/11/24 12:51:16 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("_clap_name") {

	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 30;

	std::cout << "\033[1;37m";
	std::cout << "DiamondTrap " << this->getName();
	std::cout << "\033[0m" << std::endl;

	return;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {

	this->_name_d = name;
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 30;

	std::cout << "\033[1;37m";
	std::cout << "DiamondTrap " << this->getNameD();
	std::cout << "\033[0m" << std::endl;

	return;
}

DiamondTrap::~DiamondTrap(void) {

	std::cout << "\033[1;37m";
	std::cout << "DiamondTrap " << this->_name_d << " destuctor called.";
	std::cout << "\033[0m" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(DiamondTrap& cpy) {

	std::cout << "ScavTrap copy constructor called." << std::endl;
	*this = cpy;
	return;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap& rhs) {

	std::cout << "DiamondTrap assignation operator called." << std::endl;

	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_name_d = rhs.getNameD();
		this->_hitpoints = getHitpoints();
		this->_energy_points = getEnergyPoints();
		this->_attack_damage = getAttackDamage();
	}
	return (*this);
}

std::string	DiamondTrap::getNameD() {

	return (this->_name_d);
}

void	DiamondTrap::whoAmI() {

	std::cout << "\033[1;30m";
	std::cout << "Who am I? ";
	std::cout << "I am DiamondTrap " << this->getNameD() << " grandChild of ClapTrap "; 
	std::cout << this->getName() << "!!!";
	std::cout << "\033[0m" << std::endl;
	return;
}




