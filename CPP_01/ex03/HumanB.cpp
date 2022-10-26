/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:29:29 by potero            #+#    #+#             */
/*   Updated: 2022/10/26 15:22:17 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB(void) {

	std::cout << this->_name << " has been destoyed" << std::endl;
	return ;
}

HumanB::HumanB(std::string name) {

	_name = name;
	return ;
}

void	HumanB::attack() {

	std::cout << this->_name << " attacks with " << _weapon_type->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon_type) {

	this->_weapon_type = &weapon_type;
}
/*
void	HumanB::setWeapon(Weapon weapon_type) {

	this->_weapon_type = &weapon_type;
}*/
//Si hacemos el setWeapon sin referencia lo que estamos enviando es una coopia de la clase
//por lo que no se modificaría al hacer un setWeapon en el main
//en cambio al mandarlo como referencia lo que mandamos es una direccion de memoria que
//si se modifica al hacer un setWeapon en el main
