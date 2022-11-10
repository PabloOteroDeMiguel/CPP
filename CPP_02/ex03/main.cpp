/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:06:06 by potero            #+#    #+#             */
/*   Updated: 2022/11/10 11:44:52 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main(void) {

//	Fixed const	b1(2);
//	Fixed const	b2(4);
	Point 	a;
	Point	b(7, 2.3f);

	a = b;
	std::cout << &(*a.getX()) << std::endl;
	std::cout << &(*a.getY())<< std::endl;
	std::cout << &(*b.getX()) << std::endl;
	std::cout << &(*b.getY()) << std::endl;
	return (0);
}
