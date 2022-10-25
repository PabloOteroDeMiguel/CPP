/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:18:41 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/25 16:08:23 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(void) {
	
	return ;
}

Zombie::Zombie(std::string name) : _name(name) { 
	
	return ;
}

Zombie::~Zombie(void) {
	
	std::cout << Zombie::getName() << " has been destroyed" << std::endl;
	return ;
}

void	Zombie::announce(void) {

	std::cout << Zombie::getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName(void) {

	return (this->_name);
}

void	Zombie::setHordeName(std::string horde) {

	this->_hordName = horde;
}

void	Zombie::setName(std::string name) {

	this->_name = name;
}
