/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:49:34 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/31 17:08:16 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"

int	main() {

	Karen	karen;
	void (Karen::* pntr) (std::string) = &Karen::test;
	void (Karen::* pntr2) (std::string) = &Karen::test2;
	//tengo que creear un typedef para hacer un array de funciones puntero y otra array con las palabras clave

	(karen.*pntr) ("shit");
}
	
