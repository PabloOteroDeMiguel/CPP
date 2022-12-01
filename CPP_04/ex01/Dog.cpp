/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:47:44 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/29 18:58:11 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal() {

	std::cout << "Dog it´s called!" << std::endl;
	this->_type = "Dog";
}

Dog::~Dog(void) {

	std::cout << "Dog destroyed (No real animal sufferd)." << std::endl;
	return;
}

Dog::Dog(Dog& cpy) {

	*this = cpy;
	return;
}

Dog	Dog::operator=(Dog& rhs) {

	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return (*this);
}

void	Dog::makeSound() const {

	std::cout << "Woof Woof" << std::endl;
}
