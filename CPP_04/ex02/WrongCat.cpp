/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:26:37 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/01 09:34:34 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal() {

	std::cout << "WrongCat it´s called!" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat(void) {

	std::cout << "WrongCat destroyed (No real animal sufferd)." << std::endl;
	return;
}

WrongCat::WrongCat(WrongCat& cpy) {

	*this = cpy;
	return;
}

WrongCat	WrongCat::operator=(WrongCat& rhs) {

	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return (*this);
}

void	WrongCat::makeSound() const {

	std::cout << "Wrong Meeeeeeeow" << std::endl;
}
