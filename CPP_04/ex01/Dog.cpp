/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:47:44 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/12 16:59:40 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() {

	std::cout << "Dog it´s called!" << std::endl;
	this->_type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog(void) {

	delete this->brain;
	std::cout << "Dog destroyed (No real animal sufferd)." << std::endl;
	return;
}

Dog::Dog(Dog& cpy) {

	*this = cpy;
	return;
}

Dog&	Dog::operator=(Dog& rhs) {

	std::cout << "Dog '=' called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs.getType();
		delete this->brain;
		this->brain = new Brain(*rhs.getBrain());
	}
	return (*this);
}

void	Dog::makeSound() const {

	std::cout << "Woof Woof" << std::endl;
}

Brain*	Dog::getBrain() {

	return(this->brain);
}
