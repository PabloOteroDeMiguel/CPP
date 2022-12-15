/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:26:34 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/15 10:46:26 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice(void) : AMateria() {

	std::cout << "\033[1;36m";
	std::cout << "Ice";
	std::cout << "\033[0m" << std::endl;
	this->_type = "ice";
	return;
}

Ice::~Ice(void) {

	std::cout << "\033[1;36m";
	std::cout << "Ice destroyed";
	std::cout << "\033[0m" << std::endl;
	return;
}

Ice::Ice(Ice& cpy) {

	*this = cpy;
	return;
}

Ice&	Ice::operator=(Ice& rhs) {

	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return(*this);
}

AMateria*	Ice::clone() const {

	std::cout << "\033[1;36m";
	std::cout << "Ice cloned";
	std::cout << "\033[0m" << std::endl;
	AMateria*	cln = new Ice();
	return(cln);
}

virtual void Cure::use(ICharacter& target) {

	std::cout << "\033[1;36m";
	std::cout << "* heals " << target.getName << "’s wounds *";
	std::cout << "\033[0m" << std::endl;
}
