/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:18:05 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/14 16:42:55 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
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
	
	std::cout << "\033[1;30m";
	std::cout << this->_name << "ready to play.";
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
	return;
}

Character::Character(Character& cpy) {

	*this = cpy;
	return;
}

Character&	Character::operator=(Character& rhs) {

	int	i;

	i = 0;
	if (this != &rhs) {

		this->_name = rhs.getName();
		while (i < 4) {

			if (this->materia[i])
				delete this->materia[i];
			if (rhs.materia[i])
				this->materia[i] = rhs.materia[i]->clone();
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
