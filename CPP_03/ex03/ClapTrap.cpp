/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:13:59 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/23 10:54:56 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {

	this->_name = "Default name";
	this->_hitpoints = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;

	std::cout << "\033[1;32m";
	std::cout << "ClapTrap " << this->_name << ".";
	std::cout << "\033[0m" << std::endl;
	return;
}


ClapTrap::ClapTrap(std::string name) {

	this->_name = name;
	this->_hitpoints = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;

	std::cout << "\033[1;32m";
	std::cout << "ClapTrap " << name << " welcome!";
	std::cout << "\033[0m" << std::endl;

	return;
}

ClapTrap::~ClapTrap(void) {

	std::cout << "\033[1;32m";
	std::cout << "ClapTrap " << this->_name << " destrcutor called.";
	std::cout << "\033[0m" << std::endl;
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

void	ClapTrap::setEnergyPoints(unsigned int amount) {

	this->_energy_points -= amount;
}

void	ClapTrap::setHitPoints(unsigned int amount) {

	this->_hitpoints -= amount;
}

void	ClapTrap::setHealedPoints(unsigned int amount) {

	this->_hitpoints += amount;
	if (this->_hitpoints > 10) {
		this->_hitpoints = 10;
	}
}

int	ClapTrap::getAttackDamage() {

	return (this->_attack_damage);
}

ClapTrap::ClapTrap(ClapTrap& cpy) {

	std::cout << "Copy constructor called." << std::endl;
	*this = cpy;
	return;
}

ClapTrap&	ClapTrap::operator=(ClapTrap& rhs){

	std::cout << "Assignation operator called." << std::endl;

	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_hitpoints = getHitpoints();
		this->_energy_points = getEnergyPoints();
		this->_attack_damage = getAttackDamage();
	}
	return (*this);
}

/*++++++++ACTIONS++++++++*/

int	ClapTrap::isDead() {

	if (this->getHitpoints() <= 0) {
		std::cout << "\033[1;36m";
		std::cout << "ClapTrap " << this->getName();
		std::cout << " is dead, shouldn't try to move.";
		std::cout << "\033[0m" << std::endl;
		return (1);
	}
	return(0);
}

void	ClapTrap::attack(std::string const & target) {

	if (!this->isDead()) { 
		std::cout << "\033[1;36m";
		std::cout << "ClapTrap " << this->getName() << " attack ";
		std::cout << target << ", with a dirty move, causing ";
		std::cout <<  this->getAttackDamage() <<  " points of damage!";
		std::cout << "\033[0m" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {

	if (!this->isDead()) { 
		std::cout << "\033[1;36m";
		std::cout << "ClapTrap " << this->getName() << " is attacked, getting ";
		std::cout << amount << " points of damage.";
		this->setHitPoints(amount);
	
		if (this->getHitpoints() <= 0)
			std::cout << "\nClapTrap " << this->getName() << " should be dead.";
	std::cout << "\033[0m" << std::endl;
	}	
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (!this->isDead() && this->getEnergyPoints() >= 10) { 
		std::cout << "\033[1;36m";
		std::cout << "ClapTrap " << this->getName() << " is healed ";
		std::cout << amount << " points.";
		std::cout << "\033[0m" << std::endl;
		this->setHealedPoints(amount);
		this->setEnergyPoints(10);
	}
	else if (this->getEnergyPoints() < 10) {
		std::cout << "\033[1;36m";
		std::cout << "ClapTrap " << this->getName() << " doesn´t have enough energy.";
		std::cout << "\033[0m" << std::endl;
	}

}
