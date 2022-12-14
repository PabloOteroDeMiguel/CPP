/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:18:05 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/14 15:39:27 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const& name) : ICharacter() {

	int	i;

	i =  0;
	while (i < 4) {

		materia[i] = NULL;
		i++;
	}
	this->_name = name;
	
	std::cout << "\033[1;30m";
	std::cout << this->_name << "ready to play."
	std::cout << "\033[0m" << std::endl;
}

Character::~Character() {

	delete materia;
	return;
}

Character::Character(Character& cpy) {

	*this = cpy;
	return;
}

Character&	Character::operator=(Character& rhs) {

