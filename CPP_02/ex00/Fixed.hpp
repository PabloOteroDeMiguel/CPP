/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:05:45 by potero            #+#    #+#             */
/*   Updated: 2022/11/08 09:24:01 by potero-d         ###   ########.fr       */
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
				Fixed&	operator=(const Fixed & rhs);
				int		getRawBits(void) const;
				void	setRawBits(int const raw);
	private:
				int	_int_p;
				static int const _bits = 8;

};

#endif
