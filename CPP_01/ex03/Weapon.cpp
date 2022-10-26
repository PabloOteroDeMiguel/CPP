/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:28:38 by potero            #+#    #+#             */
/*   Updated: 2022/10/26 13:35:14 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str) {

	this->_type = str;
	return ;
}

Weapon::~Weapon(void) {

	return ;
}

std::string	Weapon::getType(void) {

	return (this->_type);
}

void Weapon::setType(std::string str) {

	this->_type = str;

}
