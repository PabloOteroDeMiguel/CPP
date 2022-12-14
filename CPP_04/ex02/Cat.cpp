/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:47:46 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/14 09:27:59 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal() {

	std::cout << "\033[1;33m";
	std::cout << "Cat it´s called!";
	std::cout << "\033[0m" << std::endl;
	this->_type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat(void) {

	delete this->brain;
	std::cout << "\033[1;33m";
	std::cout << "Cat destroyed (No real animal sufferd).";
	std::cout << "\033[0m" << std::endl;
	return;
}

Cat::Cat(Cat& cpy) {

	*this = cpy;
	return;
}

Cat&	Cat::operator=(Cat& rhs) {

	std::cout << "Cat '=' called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs.getType();
		delete this->brain;							//Delete or leaks
		this->brain = new Brain(*rhs.getBrain());	//This it's equal to lines 42 43y
		//this->brain = new Brain();
		//*this->brain = *rhs.getBrain();
	}
	return (*this);
}

void	Cat::makeSound() const {

	std::cout << "Meeeeeeeow" << std::endl;
}

Brain*	Cat::getBrain() {

	return(this->brain);
}
