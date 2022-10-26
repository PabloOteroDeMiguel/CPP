/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:29:00 by potero            #+#    #+#             */
/*   Updated: 2022/10/26 13:53:16 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA(void) {

	std::cout << this->_name << " has been destoyed" << std::endl;
	return ;
}

HumanA::HumanA(std::string name, Weapon& weapon_type) : _name(name), _weapon_type(weapon_type) {

	return ;
}

void	HumanA::attack() {

	std::cout << this->_name << " attacks with his " << _weapon_type.getType() << std::endl;
}
