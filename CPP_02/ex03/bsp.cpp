/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:58:42 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/10 13:28:45 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

/*
*****sarrus******
ax ay 1
bx by 1
cx cy 1

ax*by*1 + ay*1*cx + bx*cy*1 - 
by*cx*1 + ay*bx*1 + cy*ax*1
*/
Fixed area(Point const a, Point const b, Point const c) {

	Fixed sarrus1;
	Fixed sarrus2;
	
	sarrus1 = a.getX()->toFloat() * b.getY()->toFloat() 
				+ b.getX()->toFloat() * c.getY()->toFloat() 
					+ a.getY()->toFloat() * c.getX()->toFloat();
	sarrus2 = c.getX()->toFloat() * b.getY()->toFloat() 
				+ a.getY()->toFloat() * b.getX()->toFloat() 
					+ c.getY()->toFloat() * a.getX()->toFloat();
	std::cout << a.getX()->toFloat() << " * " << b.getY()->toFloat() << " + ";
	std::cout << b.getX()->toFloat() << " * " << c.getY()->toFloat() << " + ";
	std::cout << a.getY()->toFloat() << " * " << c.getX()->toFloat() << " = ";
	std::cout << sarrus1 << std::endl;

	if (sarrus1 - sarrus2 < 0)
		return (Fixed(-1) * (sarrus1 - sarrus2) / 2);
	else
		return ((sarrus1 - sarrus2) / 2);
}



bool	bsp( Point const a, Point const b, Point const c, Point const point) {

	Fixed	area_abc;
	Fixed	area_abp;
	Fixed	area_acp;
	Fixed	area_bcp;

	area_abc = area(a, b, c);
	area_abp = area(a, b, point);
	area_acp = area(a, c, point);
	area_bcp = area(b, c, point);
	std::cout << "area_abc = " << area_abc << std::endl;
	std::cout << "area_abp = " << area_abp << std::endl;
	std::cout << "area_acp = " << area_acp << std::endl;
	std::cout << "area_bcp = " << area_bcp << std::endl;

	if (area_abp == 0 || area_acp == 0 || area_bcp == 0)
		return (false);
	if (area_abp + area_acp + area_bcp == area_abc)
		return (true);
	return (false);
}
