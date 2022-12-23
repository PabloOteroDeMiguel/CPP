/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:27:50 by potero            #+#    #+#             */
/*   Updated: 2022/12/23 10:36:47 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
	Form("PresidentialPardonForm", 25, 5, "") {

	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
	Form("PresidentialPardonForm", 25, 5, target) {
	
	std::cout << *this << std::endl;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {

	std::cout << "Form " << this->getName() << " destroyed." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & cpy) :
	Form(cpy) {

	return;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {

	if (this != &rhs) {
		this->setSigned(rhs.getSigned());
	}
	return (*this);
}

void	PresidentialPardonForm::action(void) const {

	std::cout << this->getTarget() << " as been pardoned by Zafod Beeblebrox." << std::endl;
}
