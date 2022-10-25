/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:18:41 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/25 15:15:09 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) { 
	
	announce();
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
