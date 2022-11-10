/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:58:37 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/10 11:47:56 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Point::Point(void) {

	this->_x = new Fixed(0);
	this->_y = new Fixed(0);
	return;
}

Point::~Point(void) {

	delete _x;
	delete _y;
	return;
}

Point::Point(const Point& cpy) {

	*this = cpy;
	return;
}

Point::Point(float const x, float const y) {

	this->_x = new Fixed(x);
	this->_y = new Fixed(y);
	return;
}

const Point&	Point::operator=(const Point& rhs) {

	std::cout << "Assigment called" << std::endl;
	if (this != &rhs) {
		this->_x = new Fixed(*rhs.getX());
		this->_y = new Fixed(*rhs.getY());
	}
	return (*this);
}

const Fixed* Point::getX(void) const {

	return (this->_x);
}

const Fixed* Point::getY(void) const {

	return (this->_y);
}
