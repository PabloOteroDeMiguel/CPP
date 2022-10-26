/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:28:38 by potero            #+#    #+#             */
/*   Updated: 2022/10/26 11:08:39 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string&	Weapon::getType(void) {

	return (this->_type);
}

std::string Weapon::setType(std::string str) {

	this->_type = str;
}
