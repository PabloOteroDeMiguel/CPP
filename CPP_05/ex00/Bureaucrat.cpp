/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:04:36 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/15 18:23:06 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const & name, int grade) {

	this->_name = name;
	if (grade < 1)
		this->GradeTooHighException();
	else if (grade > 150)
		this->GradeTooLowException();
	else
		this->_grade = grade;
	return;
}

Bureaucrat::~Bureaucrat(void) {

	std::cout << "Bureaucrat " << this->_name << " destroyed." << std::endl;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat& coy) {

	*this = cpy;
	return;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat& rhs); {


}	
void	Bureaucrat::GradeTooHighException(void) {

}

void	Bureaucrat::GradeTooLowException(void) {

}
