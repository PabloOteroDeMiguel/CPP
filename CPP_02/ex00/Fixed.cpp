/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:05:56 by potero            #+#    #+#             */
/*   Updated: 2022/11/08 09:23:54 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {

	std::cout << "Default constructor called" << std::endl;
	this->_int_p = 0;
	return;
}

Fixed::Fixed(const Fixed& cpy) {

	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
	return;
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
	return;
}

int Fixed::getRawBits( void ) const{

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_int_p);
}

void Fixed::setRawBits(int const raw) {

	this->_int_p = raw;
}	

Fixed&	Fixed::operator=(const Fixed & rhs){

	std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs) {
		this->_int_p = rhs.getRawBits();
	}
	return (*this);
}
