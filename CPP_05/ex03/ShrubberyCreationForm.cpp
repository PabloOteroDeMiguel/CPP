/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:28:13 by potero            #+#    #+#             */
/*   Updated: 2022/12/22 14:02:59 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : 
	Form("ShrubberyCreationForm", 145, 137, "") {

	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
	Form("ShrubberyCreationForm", 145, 137, target) {

	std::cout << *this << std::endl;
	return;
}


ShrubberyCreationForm::~ShrubberyCreationForm(void) {

	std::cout << "Form " << this->getName() << " destroyed." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & cpy) : 
	Form(cpy) {

	return;
}	

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {

	if (this != &rhs) {
		this->setSigned(rhs.getSigned());
	}
	return (*this);
}

void	ShrubberyCreationForm::action(void) const {

	std::ofstream	fd_out;
	std::string		shrubbery;

	shrubbery =
"         __ _.--..--._ _\n"
"     .-' _/   _/\\_   \\_'-.\n"
"    |__ /   _/\\__/\\_   \\__|\n"
"       |___/\\_\\__/  \\___|\n"
"              \\__/\n"
"              \\__/\n"
"               \\__/\n"
"                \\__/\n"
"             ____\\__/___\n"
"       . - '             ' -.\n"
"      /                      \\ \n"
"~~~~~~~  ~~~~~ ~~~~~  ~~~ ~~~  ~~~~~\n"
"  ~~~   ~~~~~   ~~~   ~~ ~  ~ ~ ~~~~~\n"
"                                    \n"    
"--------------------------------------";

	fd_out.open(this->getTarget() + "_shrubberry", std::ios::trunc);
	if (fd_out.fail()) {
		std::cout << "Error creating file." << std::endl;
	}
	fd_out << shrubbery;
	fd_out.close();
}
