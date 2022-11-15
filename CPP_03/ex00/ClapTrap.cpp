/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:13:59 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/15 13:29:38 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void) {

	this->_name = "Default name";
	this->_hitpoints = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;

	return;
}


ClapTrap::ClapTrap(std::string name) {

	this->_name = name;
	this->_hitpoints = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;

	return;
}

ClapTrap::~ClapTrap(void) {

	std::cout << "Destrcutor called" << std::endl;
	return;
}

std::string	ClapTrap::getName() {

	return (this->_name);
}

int	ClapTrap::getHitpoints() {

	return (this->_hitpoints);
}

int	ClapTrap::getEnergyPoints() {

	return (this->_energy_points);
}

int	ClapTrap::getAttackDamage() {

	return (this->_attack_damage);
}

ClapTrap::ClapTrap(ClapTrap& cpy) {

	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
	return;
}

ClapTrap&	ClapTrap::operator=(ClapTrap& rhs){

	std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_hitpoints = getHitpoints();
		this->_energy_points = getEnergyPoints();
		this->_attack_damage = getAttackDamage();
	}
	return (*this);
}
