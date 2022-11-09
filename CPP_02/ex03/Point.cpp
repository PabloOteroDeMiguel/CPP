/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:58:37 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/09 10:58:32 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Point::Point(void) {

	this->_x = 0;
	this->_y = 0;
	return;
}

Point::~Point(void) {

	return;
}

Point::Point(const Point& cpy) {

	*this = cpy;
	return;
}

Point::Point(const Fixed &x, const Fixed &y) {

	this->_x = x.toFloat();
	this->_y = y.toFloat();
	return;
}
/*
Point&	Point::operator=(Point & rhs) {

	if (this != &rhs) {
		this->_x = rhs.getX();
		this->_y = rhs.getY();
	}
	return (*this);
}
*/
Fixed const Point::getX(void) {

	return (this->_x);
}

Fixed const Point::getY(void) {

	return (this->_y);
}
