/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:18:33 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/01 13:25:15 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {

	Zombie *horde;

	horde = zombieHorde(3, "Horde");

	std::cout << horde << std::endl;
	std::cout << horde[0].getName() << std::endl;
	std::cout << horde[1].getName() << std::endl;
	std::cout << horde[2].getName() << std::endl;

	delete[] horde;

	return (0);
}
