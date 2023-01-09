/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 09:18:30 by potero-d          #+#    #+#             */
/*   Updated: 2023/01/09 12:08:22 by potero-d         ###   ########.fr       */
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

	if (!isprint(this->l_char)) {

		std::cout << "Non displayable";
		return(0);
	}
	return(this->l_char);

}

float	Literal::getFloat() {

	return(this->l_float);
}

double	Literal::getDouble() {

	return(this->l_double);
}

// https://tylerayoung.com/2014/05/02/stupid-type-conversions-in-c98/ ---> c98 conversions

void	Literal::cast() {

//	int		lit;
//	float	lit_f;
//	double	lit_d;
	double	lit;

//	std::string::size_type sz;
//	lit = std::stoi(this->l_string, &sz); 
//	lit_f = std::stof(this->l_string, &sz); 
//	lit_d = std::stod(this->l_string, &sz); 
	lit = std::atof(this->l_string.c_str());
	std::cout << "Lit: " << lit << std::endl;
	this->l_int = static_cast<int>(lit);
	this->l_char = static_cast<char>(lit);
	std::cout.precision(5);
	std::cout << "fixed:\n" << std::fixed;
//	this->l_float = static_cast<float>(lit_f);
	this->l_float = static_cast<float>(lit);
//	this->l_double = static_cast<double>(lit_d);
	this->l_double = static_cast<double>(lit);
}
