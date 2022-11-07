/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:05:45 by potero            #+#    #+#             */
/*   Updated: 2022/11/07 12:15:04 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include<iostream>
#include<ostream>

class Fixed {

	public:
				Fixed(void);
				Fixed(const Fixed& cpy);
				~Fixed(void);
				Fixed &	operator=(Fixed & 	rhs);
				int getRawBits(void) const;
	private:
				int	_int_p;

};

#endif
