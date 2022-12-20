/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:04:36 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/20 09:56:43 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {

	this->_grade = 150;
	return;
}

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

	if (this != &rhs)
		this->_grade = rhs.getGrade();
	return(*this);
}	

std::string	Bureaucrat::getName() const {

	return (this->_name);
}

int	Bureaucrat::getGrade() const {

	return (this->_grade);
}

void	Bureaucrat::incrementGrade() {

	int	grade;

	grade = this->_grade;
	if (--grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else {
		this->_grade--;
		std::cout << this->_name << " grade increase to ";
		std::cout << this->_grade <<"." << std::endl;
	}
}

void	Bureaucrat::decrementGrade() {

	int	grade;

	grade = this->_grade;
	if (++grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else {
		this->_grade++;
		std::cout << this->_name << " grade decrease to ";
		std::cout << this->_grade <<"." << std::endl;
	}
}

void	Bureaucrat::signForm(Form &form) {

	try
	{
		form.beSigned(*this);
		std::cout << *this << " signs Form: " << form.getName() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << *this << " cannot sign Form ";
		std::cout << form.getName() << " because: ";
		std::cout << '\n' << "Grade required: " << form.getRequiredSign(); 
		std::cout << "." << std::endl;
	}
	catch (Form::AlreadySignedException &e)
	{	
		std::cout << e.what() << std::endl;
		std::cout << *this << " cannot sign Form ";
		std::cout << form.getName() << " because: ";
		std::cout << '\n' << "Form already Signed." << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {

	return("Grade too High.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {

	return ("Grade too Low.");
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& buro) {

	out << buro.getName() << ", bureaucrat grade " << buro.getGrade();
	return(out);
}
