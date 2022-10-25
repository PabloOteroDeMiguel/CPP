/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:18:33 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/25 15:15:08 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {

	Zombie *paco;

	Zombie luis("Luis");

	paco = newZombie("Paco");
	delete paco;

	randomChump("Juan");

	return (0);
}
