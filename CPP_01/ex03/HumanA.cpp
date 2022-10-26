/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:29:00 by potero            #+#    #+#             */
/*   Updated: 2022/10/26 12:11:35 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA(void) {

	std::cout << HumanA::getName() << "has been destoyed" << std::endl;
	return ;
};

HumanA::HumanA(Weapon& weapon_type, std::string name) {

	_name = name;
	_weapon_type = weapon_type;
	return ;
}

void	HumanA::attack() {

	std::cout << this->_name << " attacks with his " << _weapon_type->getType() << std::endl;
};

void	HumanA::setWeapon(Weapon& weapon_type) {

	this->_weapon_type = wepon_type;
}
