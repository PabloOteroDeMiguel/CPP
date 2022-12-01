/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:47:38 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/01 09:15:40 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {

	std::cout << "Animal it´s called!" << std::endl;
	this->_type = "Default";
	return;
}

Animal::~Animal(void) {

	std::cout << "Animal " << this->getType();
	std::cout << " destroyed (No real animal sufferd)." << std::endl;
	return;
}

Animal::Animal(Animal& cpy) {

	*this = cpy;
	return;
}

Animal	Animal::operator=(Animal& rhs){

	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return (*this);
}

const std::string	Animal::getType() const {

	return(this->_type);
}

void	Animal::makeSound() const {

	std::cout << "...sound of silence..." << std::endl;
}
