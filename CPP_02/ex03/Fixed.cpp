/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:05:56 by potero            #+#    #+#             */
/*   Updated: 2022/11/09 10:03:42 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {

//	std::cout << "Default constructor called" << std::endl;
	this->_int_p = 0;
	return;
}

Fixed::Fixed(const Fixed& cpy) {

//	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
	return;
}

Fixed::~Fixed(void) {

//	std::cout << "Destructor called" << std::endl;
	return;
}
int Fixed::getRawBits( void ) const{

	return (this->_int_p);
}

void Fixed::setRawBits(int const raw) {

	this->_int_p = raw;
}	

Fixed&	Fixed::operator=(const Fixed & rhs){

//	std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs) {
		this->_int_p = rhs.getRawBits();
	}
	return (*this);
}

/*----ex01----*/

Fixed::Fixed(int const num) {

//	std::cout << "Int constructor called" << std::endl;
	setRawBits(num * (1<<this->_bits));
	return;
}

Fixed::Fixed(float const num) {

//	std::cout << "Float constructor called" << std::endl;
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


/*----ex02----*/

bool	Fixed::operator<(const Fixed &foo) const {

	if (this->getRawBits() < foo.getRawBits()) {
		return (true);
	}
	return (false);
}

bool	Fixed::operator>(const Fixed &foo) const {

	if (this->getRawBits() > foo.getRawBits()) {
		return (true);
	}
	return (false);
}

bool	Fixed::operator<=(const Fixed &foo) const {

	if (this->getRawBits() <= foo.getRawBits()) {
		return (true);
	}
	return (false);
}

bool	Fixed::operator>=(const Fixed &foo) const {

	if (this->getRawBits() >= foo.getRawBits()) {
		return (true);
	}
	return (false);
}

bool	Fixed::operator==(const Fixed &foo) const {

	if (this->getRawBits() == foo.getRawBits()) {
		return (true);
	}
	return (false);
}

bool	Fixed::operator!=(const Fixed &foo) const {

	if (this->getRawBits() != foo.getRawBits()) {
		return (true);
	}
	return (false);
}

Fixed	Fixed::operator+(const Fixed &foo) {

	Fixed s = Fixed(this->toFloat() + foo.toFloat());
	
	return (s);
}

Fixed	Fixed::operator-(const Fixed &foo) {

	Fixed r = Fixed(this->toFloat() - foo.toFloat());
	
	return (r);
}

Fixed	Fixed::operator*(const Fixed &foo) {

	Fixed r = Fixed(this->toFloat() * foo.toFloat());
	
	return (r);
}

Fixed	Fixed::operator/(const Fixed &foo) {

	Fixed r = Fixed(this->toFloat() / foo.toFloat());
	
	return (r);
}

Fixed	Fixed::operator++() {

	_int_p++;
	return(*this);
}

Fixed	Fixed::operator++(int) {

	Fixed	plus = (*this);
	_int_p++;
	return (plus);
}

Fixed	Fixed::operator--() {

	_int_p--;
	return(*this);
}

Fixed	Fixed::operator--(int) {

	Fixed	plus = (*this);
	_int_p--;
	return (plus);
}

Fixed&	Fixed::max(Fixed &foo1, Fixed &foo2) {

	if (foo1 >= foo2) {
		return (foo1);
	}
	return (foo2);
}

const Fixed&	Fixed::max(const Fixed &foo1, const Fixed &foo2) {

	if (foo1 >= foo2) {
		return (foo1);
	}
	return (foo2);
}

Fixed&	Fixed::min(Fixed &foo1, Fixed &foo2) {

	if (foo1 <= foo2) {
		return (foo1);
	}
	return (foo2);
}

const Fixed&	Fixed::min(const Fixed &foo1, const Fixed &foo2) {

	if (foo1 <= foo2) {
		return (foo1);
	}
	return (foo2);
}
