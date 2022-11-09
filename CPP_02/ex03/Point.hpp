/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:58:27 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/09 10:58:31 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point {

	public:
		Point(void);
		Point(const Fixed &x, const Fixed &y);
		Point(const Point& cpy);
		~Point(void);

	//	Point&		operator=(Point & rhs);
		Fixed const	getX(void); 
		Fixed const	getY(void); 

	private:
		Fixed const _x;
		Fixed const	_y;

};
