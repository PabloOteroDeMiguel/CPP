/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:26:33 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/01 10:15:14 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {

	std::cout << "WrongAnimal it´s called!" << std::endl;
	this->_type = "Default";
	return;
}

WrongAnimal::~WrongAnimal(void) {

	std::cout << "WrongAnimal " << this->getType();
	std::cout << " destroyed (No real animal sufferd)." << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal& cpy) {

	*this = cpy;
	return;
}

WrongAnimal	WrongAnimal::operator=(WrongAnimal& rhs){

	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return (*this);
}

const std::string	WrongAnimal::getType() const {

	return(this->_type);
}

void	WrongAnimal::makeSound() const {

	std::cout << "...sound of silence..." << std::endl;
}
