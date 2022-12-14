/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:26:34 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/14 13:05:26 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) {

	this->_type = "ice";
	return;
}

Ice::~Ice(void) {

	return;
}

Ice::Ice(Ice& cpy) {

	*this = cpy;
	return;
}

Ice::Ice&	operator=(Ice& rhs) {

	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return(*this);
}

virtual AMateria*	Ice::clone() const {

	new AMateria*	cln(this->_type);
	return (cln);
}
