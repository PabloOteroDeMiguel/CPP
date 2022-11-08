/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:06:06 by potero            #+#    #+#             */
/*   Updated: 2022/11/08 10:50:34 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {

	/*
	Fixed a;

	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;*/

	Fixed const	a(42.43f);
	Fixed		b;
	Fixed		c;

	b = Fixed(1234.4321f);
	if (a < b) {
		std::cout << a << " is smaller than " << b << std::endl;
	}
	if (a > c) {
		std::cout << a << " is bigger than " << c << std::endl;
	}

	return (0);
}
