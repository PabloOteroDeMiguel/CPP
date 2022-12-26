/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 09:18:35 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/26 12:20:27 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LITERAL_HPP
# define LITERAL_HPP

#include<iostream>
#include<ostream>
#include<string>

class Literal {

	public:

		Literal();
		Literal(std::string argument);
		~Literal();
		Literal(Literal& cpy);
		Literal&	operator=(Literal& rhs);
		
		std::string	getString();
		int			getInt();
		char		getChar();
		float		getFloat();
		double		getDouble();
		
		void		cast();

	private:

		std::string	l_string;
		int			l_int;
		char		l_char;
		float		l_float;
		double		l_double;

};

#endif
