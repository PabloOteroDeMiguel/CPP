/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:05:56 by potero            #+#    #+#             */
/*   Updated: 2022/11/08 10:25:58 by potero-d         ###   ########.fr       */
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

/*----ex01----*/

Fixed::Fixed(int const num) {

	std::cout << "Int constructor called" << std::endl;
	setRawBits(num * (1<<this->_bits));
	return;
}

Fixed::Fixed(float const num) {

	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(num * (1<<this->_bits))); //if I don't use roundf return less digits
	return;
}

std::ostream& operator<<(std::ostream& out, const Fixed &foo) {

	out << foo.toFloat();
	return (out);
}

float	Fixed::toFloat(void) const {

//	std::cout << getRawBits() << " / " << (float)(1<<this->_bits) << " = " << std::endl;
	return ((getRawBits() / (float)(1<<this->_bits)));
}

int	Fixed::toInt(void) const {

	return ((getRawBits() / (1<<this->_bits)));
}
