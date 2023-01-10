/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 09:18:30 by potero-d          #+#    #+#             */
/*   Updated: 2023/01/10 10:48:56 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Literal.hpp"

Literal::Literal(void) {

	this->l_string = "";
	this->dot = 1;
	return;
}

Literal::Literal(std::string argument) {

	this->l_string = argument;
	this->dot = 1;
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
		this->dot = rhs.dot;
	}
	return(*this);
}

std::string	Literal::getString() {

	return(this->l_string);
}

void	Literal::getInt() {

	std::cout << "Int: ";
	if (this->l_int < -2147483647 || this->l_int > 2147483647 || this->possible == 1) {

		std::cout << "impossible" << std::endl;
	}
	else {

		std::cout << this->l_int << std::endl;
	}
}

void	Literal::getChar() {

	std::cout << "Char: ";
	if (this->possible == 1) {

		std::cout << "impossible" << std::endl;
	}
	else if (!isprint(this->l_char)) {

		std::cout << "Non displayable" << std::endl;
	}
	else {

		std::cout << this->l_char << std::endl;
	}
}

void	Literal::getFloat() {

	std::cout << "Float: ";
	if (this->possible == 1 && pseudo(this->l_string) == 1) {

		std::cout << "impossible" << std::endl;
	}
	else {

		std::cout << this->l_float << "f" << std::endl;
	}
}

void	Literal::getDouble() {

	std::cout << "Double: ";
	if (this->possible == 1 && pseudo(this->l_string) == 1) {

		std::cout << "impossible" << std::endl;
	}
	else {

		std::cout << this->l_double << std::endl;
	}
}

// https://tylerayoung.com/2014/05/02/stupid-type-conversions-in-c98/ ---> c98 conversions

void	Literal::cast() {

	double	lit;

	lit = 0;
	this->possible = check_string(this->l_string);
	if (this->l_string.length() == 1) {
		
		this->l_char = this->l_string[0];
		this->l_int = static_cast<int>(this->l_char);
		this->l_float = static_cast<float>(this->l_char);
		this->l_double = static_cast<double>(this->l_char);
	}
	else {

		lit = std::atof(this->l_string.c_str());
		this->l_char = static_cast<char>(lit);
		this->l_int = static_cast<int>(lit);
		this->l_float = static_cast<float>(lit);
		this->l_double = static_cast<double>(lit);
	}
	std::cout.precision(this->dot);
	std::cout << std::fixed;
	getChar();
	getInt();
	getFloat();
	getDouble();
}

int	Literal::check_string(std::string arg) {

	int	i;
	int	d;

	i = 0;
	d = 0;
	if (this->l_string.length() == 1) {

		return (0);
	}
	if (arg[i] == '-' || arg[i] == '+') {

		i++;
	}
	while (arg[i]) {

		if (isdigit(arg[i]) ||						// is digit
				(arg[i] == 'f' && !arg[i + 1]) ||	// ends in f
					(arg[i] == '.' && d == 0)) {	// has just one . (dot)
			if (d == 1) {

				this->dot++;
			}
			if (arg[i] == '.') {

				d = 1;		
			}
			i++;
		}	
		else {

			return (1);
		}
	}
	
	if (this->dot > 1) {

		this->dot--;
	}

	return (0);
}

int	Literal::pseudo(std::string arg) {

	if (arg.compare("nan") == 0 ||
			arg.compare("-inf") == 0 ||
				arg.compare("inf") == 0 ||
					arg.compare("nanf") == 0 ||
						arg.compare("-inff") == 0 ||
							arg.compare("inff") == 0) {

	   return(0);
	}
	return(1);
}
