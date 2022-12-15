/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:27:14 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/15 12:45:00 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria() {

//	std::cout << "\033[1;35m";
//	std::cout << "Cure";
//	std::cout << "\033[0m" << std::endl;
	this->_type = "cure";
	return;
}

Cure::~Cure(void) {

//	std::cout << "\033[1;35m";
//	std::cout << "Cure destroyed";
//	std::cout << "\033[0m" << std::endl;
	return;
}

Cure::Cure(Cure& cpy) {

	*this = cpy;
	return;
}

Cure&	Cure::operator=(Cure& rhs) {

	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return(*this);
}

AMateria*	Cure::clone() const {

	std::cout << "\033[1;35m";
	std::cout << "Cure cloned";
	std::cout << "\033[0m" << std::endl;
	AMateria*	cln =  new Cure();
	return (cln);
}

void Cure::use(ICharacter& target) {

	std::cout << "\033[1;35m";
	std::cout << "* heals " << target.getName() << "’s wounds *";
	std::cout << "\033[0m" << std::endl;
}


