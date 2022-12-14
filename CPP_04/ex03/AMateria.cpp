/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:47:07 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/14 15:27:20 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {

	std::cout << "Materia" << std::endl;
	this->_type = "default";
	return;
}

AMateria::AMateria(std::string const & type) {

	std::cout << "Materia" << std::endl;
	this->_type = type;
	return;
}

AMateria::~AMateria(void) {

	std::cout << "Materia destroyed" << std::endl;
	return;
}

AMateria::AMateria(AMateria& cpy) {

	*this = cpy;
	return;	
}

AMateria&	AMateria::operator=(AMateria& rhs) {

	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return (*this);
}

std::string const & AMateria::getType() const {

	return(this->_type);
}
/*
void AMateria::use(ICharacter& target) {

	std::cout << "...Materia does what materia does..." << std::endl;
}*/
