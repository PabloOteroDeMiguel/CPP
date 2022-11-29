/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:47:38 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/29 12:34:33 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {

	std::cout << "Animal it´s called!" << std::endl;
	this->_type = "Default";
	return;
}

Animal::~Animal(void) {

	std::cout << "Animal destroyed (no real animal sufferd)." << std::endl;
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

std::string	Animal::getType() {

	return(this->_type);
}

/*
std::string	const Animal::getType() {

	return(this->_type);
}*/
