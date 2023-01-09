/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 09:18:35 by potero-d          #+#    #+#             */
/*   Updated: 2023/01/09 15:42:34 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LITERAL_HPP
# define LITERAL_HPP

#include<iostream>
#include<ostream>
#include<string>
#include<ctype.h>

class Literal {

	public:

		Literal();
		Literal(std::string argument);
		~Literal();
		Literal(Literal& cpy);
		Literal&	operator=(Literal& rhs);
		
		std::string	getString();
		void		getInt();
		void		getChar();
		void		getFloat();
		void		getDouble();
		
		void		cast();
		int			check_string(std::string arg);
		int			pseudo(std::string arg);

	private:

		std::string	l_string;
		int			l_int;
		char		l_char;
		float		l_float;
		double		l_double;
		int			dot;
		int			possible;

};

#endif
