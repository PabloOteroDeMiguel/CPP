/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:18:05 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/15 13:07:45 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Character::Character(void) {

	int	i;

	i =  0;
	while (i < 4) {

		materia[i] = NULL;
		i++;
	}
	this->_name = "Default";
	
	std::cout << "\033[1;30m";
	std::cout << this->_name << "ready to play.";
	std::cout << "\033[0m" << std::endl;
}

Character::Character(std::string const& name) {

	int	i;

	i =  0;
	while (i < 4) {

		materia[i] = NULL;
		i++;
	}
	this->_name = name;
	
	std::cout << "\033[1;29m";
	std::cout << this->_name << " ready to play.";
	std::cout << "\033[0m" << std::endl;
}

Character::~Character() {

	int	i;

	i = 0;
	while (i < 4) {

		if (this->materia[i])
			delete this->materia[i];
		i++;
	}
	std::cout << "\033[1;29m";
	std::cout << this->_name << " left the game.";
	std::cout << "\033[0m" << std::endl;
	return;
}

Character::Character(Character& cpy) {

	*this = cpy;
	return;
}

Character&	Character::operator=(Character& rhs) {

	int	i;

	i = 0;

	std::cout << "I'm here" << std::endl;
	if (this != &rhs) {

		std::cout << "I'm here" << std::endl;
		this->_name = rhs.getName();
		while (i < 4) {

			if (this->materia[i])
				delete this->materia[i];
			if (rhs.materia[i]) {

				std::cout << "I'm here" << std::endl;
				this->materia[i] = rhs.materia[i]->clone();
				std::cout << &(*this->materia[i]) << std::endl;
			}
			else
				this->materia[i] = NULL;
			i++;
		}
	}
	return (*this);
}

std::string const & Character::getName() const {

	return (this->_name);
}

void Character::equip(AMateria* m) {

	int	i;

	i = 0;
	while (i < 4) {

		if (!this->materia[i])
			break;
		i++;
	}
	if (i < 4) 
		materia[i] = m->clone();
	else {

		std::cout << "\033[1;31m";
		std::cout << "Full inventory";
		std::cout << "\033[0m" << std::endl;
	}
}

void Character::unequip(int idx) {

	//delete this->materia[idx];
	this->materia[idx] = NULL;
	std::cout << "Empty slot " << idx << std::endl;
}

void Character::use(int idx, ICharacter& target) {

	if (this->materia[idx])
		this->materia[idx]->use(target);
	else {
		std::cout << "\033[1;31m";
		std::cout << "No materia equiped";
		std::cout << "\033[0m" << std::endl;
	}
}

void Character::printMateria() {

	int	i;

	i = 0;
	while (i < 4) {

		if (this->materia[i]){

			std::cout << i << ": ";
			std::cout << this->materia[i]->getType() << std::endl;
			std::cout << &(*this->materia[i]) << std::endl;
		}
		else {
			std::cout << i << ": empty" << std::endl;
			std::cout << &(*this->materia[i]) << std::endl;
		}
		i++;
	}
}


