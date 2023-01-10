/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:13:45 by potero-d          #+#    #+#             */
/*   Updated: 2023/01/10 12:20:45 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Data.hpp"

Data::Data(void) {

	this->_id = "";
	return;
}

Data::Data(std::string id) : _id(id) {

	return;
}

Data::~Data(void) {

	return(0);
}

Data::Data(Data& cpy) {

	*this = copy;
	return;
}

Data&	Data::operator=(Data& rhs) {

	if(this != &rhs) {

		this->_id = rhs.getId();
	}
	return(*this);
}

std::string Data::getId() {

	return(this->_id);
}
