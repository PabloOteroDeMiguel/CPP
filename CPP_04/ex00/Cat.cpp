/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:47:46 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/29 18:39:38 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal() {

	std::cout << "Cat it´s called!" << std::endl;
	this->_type = "Cat";
}

Cat::~Cat(void) {

	std::cout << "Cat destroyed (No real animal sufferd)." << std::endl;
	return;
}

Cat::Cat(Cat& cpy) {

	*this = cpy;
	return;
}

Cat	Cat::operator=(Cat& rhs) {

	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return (*this);
}

void	Cat::makeSound() const {

	std::cout << "Meeeeeeeow" << std::endl;
}
