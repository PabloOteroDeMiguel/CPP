/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:47:07 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/14 12:50:29 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) {

	this->_type = type;
	return;
}

AMateria::~AMateria(void) {

	return;
}

AMateria::AMateria(AMateria& cpy) {

	*this = cpy;
	return;	
}

AMateria::AMAteria&	operator=(AMateria& rhs) {

	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return (*this);
}

AMateria::std::string const & getType() const {

	return(this->_type);
}
