/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:58:27 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/10 11:47:58 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point {

	public:
		Point(void);
		Point(float const x, float const y);
		Point(const Point& cpy);
		~Point(void);

		const Point&		operator=(const Point & rhs);
		const Fixed*		getX(void) const; 
		const Fixed*		getY(void) const; 

	private:
		Fixed const *_x;
		Fixed const *_y;	

};
