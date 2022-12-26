/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 09:18:30 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/26 12:49:05 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Literal.hpp"

Literal::Literal(void) {

	this->l_string = "";
	return;
}

Literal::Literal(std::string argument) {

	this->l_string = argument;
	return;
}

Literal::~Literal(void) {

	return;
}

Literal::Literal(Literal& cpy) {

	*this = cpy;
	return;
}

Literal&	Literal::operator=(Literal& rhs) {

	if(this != &rhs) {

		this->l_string = rhs.l_string;
	}
	return(*this);
}

std::string	Literal::getString() {

	return(this->l_string);
}

int	Literal::getInt() {

	return(this->l_int);
}

char	Literal::getChar() {

	return(this->l_char);
}

float	Literal::getFloat() {

	return(this->l_float);
}

double	Literal::getDouble() {

	return(this->l_double);
}

void	Literal::cast() {

	int	lit;

	std::string::size_type sz;
	lit = std::stoi(this->l_string, &sz); 
	std::cout << "Lit: " << lit << std::endl;
	this->l_int = static_cast<int>(lit);
	this->l_char = static_cast<char>(lit);
	this->l_float = static_cast<float>(lit);
	this->l_double = static_cast<double>(lit);
}
