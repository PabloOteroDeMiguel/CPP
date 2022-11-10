/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:06:06 by potero            #+#    #+#             */
/*   Updated: 2022/11/10 13:28:50 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main(void) {

//	Fixed const	b1(2);
//	Fixed const	b2(4);
	Point const	a(-2, 0);
	Point const	b(2, 0);
	Point const	c(0, 2);
	Point const	point(0, 1);
	Point const	point1(10, 10);
	Point const	point2(1, 1);

	/*
	std::cout << &(*a.getX()) << std::endl;
	std::cout << &(*a.getY())<< std::endl;
	std::cout << &(*b.getX()) << std::endl;
	std::cout << &(*b.getY()) << std::endl;
	*/
	std::cout << bsp(a, b, c, point) << std::endl;
	std::cout << bsp(a, b, c, point1) << std::endl;
	std::cout << bsp(a, b, c, point2) << std::endl;

	return (0);
}
