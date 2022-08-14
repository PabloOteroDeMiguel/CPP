/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:07:05 by potero            #+#    #+#             */
/*   Updated: 2022/08/14 17:28:03 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <ctype.h>

int	main ( int argc, char ** argv) {

	int	i;
	int	character;

	if ( argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	
	i = 1;
	while ( argv[i] )
	{
		character = 0;
		while ( argv[i][character] )
		{
			std::cout << (char) toupper(argv[i][character]);
			character++;
		}
		std::cout << " ";
		i++;
	}
	std::cout << std::endl;

	return 0;
}
