/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:27:14 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/14 13:05:26 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) {

	this->_type = "cure";
	return;
}

Cure::~Cure(void) {

	return;
}

Cure::Cure(Cure& cpy) {

	*this = cpy;
	return;
}

Cure::Cure&	operator=(Cure& rhs) {

	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return(*this);
}

virtual AMateria*	Cure::clone() const {

	new AMateria*	cln(this->_type);
	return (cln);
}
