/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:04:36 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/19 12:39:10 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {

	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
	std::cout << "Bureaucrat " << this->_name << "(";
	std::cout << this->_grade << ")." << std::endl;
	return;
}

Bureaucrat::~Bureaucrat(void) {

	std::cout << "Bureaucrat " << this->_name << "(";
	std::cout << this->_grade << ") destroyed." << std::endl;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat& cpy) : _name(cpy._name) {

	*this = cpy;
	return;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat& rhs) {

	//this->_name = rhs.getName();	// Because it's const so I use _name(cpy._name) in line 35
									// How can I copy with =?
	this->_grade = rhs.getGrade();
	return(*this);
}	

std::string	Bureaucrat::getName() {

	return (this->_name);
}

int	Bureaucrat::getGrade() {

	return (this->_grade);
}

void	Bureaucrat::incrementGrade() {

	int	grade;

	grade = _grade;
	if (grade-- < 1)
		throw Bureaucrat::GradeTooHighException();
	else {

		this->_grade--;
		std::cout << this->_name << " grade increase to ";
		std::cout << this->_grade <<"." << std::endl;
	}
}

void	Bureaucrat::decrementGrade() {

	int	grade;

	grade = _grade;
	if (grade++ > 150)
		throw Bureaucrat::GradeTooLowException();
	else {

		this->_grade++;
		std::cout << this->_name << "grade decrease to ";
		std::cout << this->_grade <<"." << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {

	return("Grade too High.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {

	return ("Grade too Low.");
}

