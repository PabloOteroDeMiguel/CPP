/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:17:34 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/25 16:01:00 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {

	int			i;
	std::string	zombie_name;
	Zombie 		*horde;

	i = 0;
	if (N < 0) {
		std::cout << "Impossible horde size" << std::endl;
	}

 	horde = new Zombie[N];

	while (i < N) {
		std::cout << "Zombie[" << i << "] name:";
		std::cin >> zombie_name;
		horde[i].setName(zombie_name);
		horde[i].setHordeName(name);
		i++;
	}
	i = 0;
	while (i < N) {
		horde[i].announce();
		i++;
	}
	
	return (horde);
}

