/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:06:06 by potero            #+#    #+#             */
/*   Updated: 2022/11/08 16:48:45 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {

	
	Fixed a;

	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
/*
	Fixed const	a(42.43f);
	Fixed 		b;
	Fixed		c;
	Fixed		d(a);

	b = Fixed(1234.4321f);
*/
/*	
	if (a < b) {
		std::cout << a << " is smaller than " << b << std::endl;
	}
	if (a > c) {
		std::cout << a << " is bigger than " << c << std::endl;
	}

	if (a >= a) {
		std::cout << a << " is bigger or equal than " << a << std::endl;
	}

	if (a >= c) {
		std::cout << a << " is bigger or equal than " << c << std::endl;
	}
	else
		std::cout << a << " is NOT bigger or equal than " << c << std::endl;

	if (a <= c) {
		std::cout << a << " is smaller or equal than " << a << std::endl;
	}
	else
		std::cout << a << " is NOT smaller or equal than " << c << std::endl;

	if (a <= a) {
		std::cout << a << " is smaller or equal than " << a << std::endl;
	}

	if (d == a) {
		std::cout << d << " is equal to " << a << std::endl;
	}
	else
		std::cout << d << " is NOT equal to " << a << std::endl;
	
	if (b != a) {
		std::cout << b << " is NOT equal to " << a << std::endl;
	}
*/
/*
	Fixed 	e = a;
	Fixed 	s = (e + b);
	std::cout << e << " + " << b << " = " << s << std::endl;

	Fixed	r = (e - b);
	std::cout << e << " - " << b << " = " << r << std::endl;

	Fixed	m = (e * b);
	std::cout << e << " * " << b << " = " << m << std::endl;

	Fixed	n = (e / b);
	std::cout << e << " / " << b << " = " << n << std::endl;
*/
/*
	Fixed u(1);
	std::cout << u << " <-> " << u++ << std::endl;
	std::cout << u << " <-> " << ++u << std::endl;

	std::cout << u << " <-> " << u-- << std::endl;
	std::cout << u << " <-> " << --u << std::endl;
*/

	return (0);
}
