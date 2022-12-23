/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 11:02:46 by potero            #+#    #+#             */
/*   Updated: 2022/12/23 12:13:24 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {

	forms[0] = "tree";
	forms[1] = "roboto";
	forms[2] = "pardon";
	knowForms[0] = &Intern::makeTreeForm;
	knowForms[1] = &Intern::makeRobotoForm;
	knowForms[2] = &Intern::makePardonForm;
	std::cout << "Welcome Intern!" << std::endl;

	return;
}

Intern::~Intern(void) {

	std::cout << "Should we fire the Intern?" << std::endl;
	return;
}

Intern::Intern(Intern & cpy) {

	*this = cpy;
	return;
}

Intern&	Intern::operator=(Intern const & rhs) {

	if (this != &rhs) {

		this->forms[0] = rhs.forms[0];
		this->forms[1] = rhs.forms[1];
		this->forms[2] = rhs.forms[2];
		this->knowForms[0] = rhs.knowForms[0];
		this->knowForms[1] = rhs.knowForms[1];
		this->knowForms[2] = rhs.knowForms[2];
	}
	return(*this);
}

Form*	Intern::makeForm(std::string name, std::string target) {

	int	i;

	i = 0;

	while(name != forms[i] && i < 3) {

		i++;
	}
	if (i == 3) {

		std::cout << "Intern doesn´t know that Form." << std::endl;
		std::cout << "It can´t be done." << std::endl;
		return (NULL);
	}	
	return(this->*knowForms[i])(target);
}

Form*	Intern::makeTreeForm(std::string target) {

	std::cout << "Intern prepare ShrubberyCreationForm: " << std::endl;
	Form	*form = new ShrubberyCreationForm(target);
	return (form);
}

Form*	Intern::makeRobotoForm(std::string target) {

	std::cout << "Intern prepare RobotomyRequestForm: " << std::endl;
	Form	*form = new RobotomyRequestForm(target);
	return (form);
}

Form*	Intern::makePardonForm(std::string target) {

	std::cout << "Intern prepare PresidentialPardonForm: " << std::endl;
	Form	*form = new PresidentialPardonForm(target);
	return (form);
}
