/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:05:45 by potero            #+#    #+#             */
/*   Updated: 2022/11/10 11:48:00 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include<iostream>
#include<ostream>
#include<cmath>

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

				/*comparison operators*/
				bool	operator<(const Fixed &foo) const;
				bool	operator>(const Fixed &foo) const;
				bool	operator<=(const Fixed &foo) const;
				bool	operator>=(const Fixed &foo) const;
				bool	operator==(const Fixed &foo) const;
				bool	operator!=(const Fixed &foo) const;

				/*arithmetic operators*/
				Fixed	operator+(const Fixed &foo);
				Fixed	operator-(const Fixed &foo);
				Fixed	operator*(const Fixed &foo);
				Fixed	operator/(const Fixed &foo);

				/*++--*/
				Fixed	operator++();
				Fixed	operator++(int);
				Fixed	operator--();
				Fixed	operator--(int);

				/*max--min*/
				const static Fixed&	max(const Fixed &foo1, const Fixed &foo2);
				Fixed&				max(Fixed &foo1, Fixed &foo2);
				const static Fixed&	min(const Fixed &foo1, const Fixed &foo2);
				Fixed& 				min(Fixed &foo1, Fixed &foo2);

	private:
				int	_int_p;
				static int const _bits = 8;

};

std::ostream& operator<<(std::ostream& out, const Fixed &foo);

#endif
