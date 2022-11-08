/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:05:45 by potero            #+#    #+#             */
/*   Updated: 2022/11/07 22:21:51 by potero           ###   ########.fr       */
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
				Fixed(int const num);
				Fixed(float const num);
				~Fixed(void);
				Fixed&	operator=(const Fixed & rhs);
				int		getRawBits(void) const;
				void	setRawBits(int const raw);
				float	toFloat(void) const;
				int		toInt(void) const;

	private:
				int	_int_p;
				static int const _bits = 8;

};

std::ostream& operator<<(std::ostream& out, const Fixed &foo);

#endif