/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:06:06 by potero            #+#    #+#             */
/*   Updated: 2022/11/10 16:33:11 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main(void) {

	Point const	a(-2.3, 0);
	Point const	b(2, 0);
	Point const	c(0, 4.65f);
	Point const	point(0, 1.34);
	Point const	point1(10.21f, 10);
	Point const	point2(0, 0);

	std::cout << "Triangle: a(" << a.getX()->toFloat() << ", " << a.getY()->toFloat() << ") ";
	std::cout << "b(" << b.getX()->toFloat()<< ", " << b.getY()->toFloat() << ") ";
	std::cout << "c(" << c.getX()->toFloat() << ", " << c.getY()->toFloat() << ")" << std::endl;

	std::cout << "Point(" << point.getX()->toFloat() << ", ";
	std::cout << point.getY()->toFloat() << ")" << std::endl;
	if (bsp(a, b, c, point) == 1)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << "Point(" << point1.getX()->toFloat() << ", ";
	std::cout << point1.getY()->toFloat() << ")" << std::endl;
	if (bsp(a, b, c, point1) == 1)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << "Point(" << point2.getX()->toFloat() << ", ";
	std::cout << point2.getY()->toFloat() << ")" << std::endl;
	if (bsp(a, b, c, point2) == 1)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	Point const	d(-2, 0);
	Point const	e(2, 0);
	Point const	f(0, 4);
	Point const	point3(0, 1);
	Point const	point4(-10, 10);
	Point const	point5(0, 0);

	std::cout << "Triangle: a(" << d.getX()->toFloat() << ", " << d.getY()->toFloat() << ") ";
	std::cout << "b(" << e.getX()->toFloat()<< ", " << e.getY()->toFloat() << ") ";
	std::cout << "c(" << f.getX()->toFloat() << ", " << f.getY()->toFloat() << ")" << std::endl;

	std::cout << "Point(" << point3.getX()->toFloat() << ", ";
	std::cout << point3.getY()->toFloat() << ")" << std::endl;
	if (bsp(a, b, c, point3) == 1)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << "Point(" << point4.getX()->toFloat() << ", ";
	std::cout << point4.getY()->toFloat() << ")" << std::endl;
	if (bsp(a, b, c, point4) == 1)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	std::cout << "Point(" << point5.getX()->toFloat() << ", ";
	std::cout << point5.getY()->toFloat() << ")" << std::endl;
	if (bsp(a, b, c, point5) == 1)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;
	return (0);
}
