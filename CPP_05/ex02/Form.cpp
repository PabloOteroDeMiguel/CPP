/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:08:44 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/20 17:42:47 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) :
	_requiredSign(150), _requiredExecute(150) {

	this->_signed = false;
	return;
}

Form::Form(std::string name, int requiredSign, int requiredExecute, std::string target) :
	_name(name), _requiredSign(requiredSign),
		_requiredExecute(requiredExecute), _target(target) {

	this->_signed = false;
	if (requiredSign < 1)
		throw Form::GradeTooHighException();
	else if (requiredSign > 150)
		throw Form::GradeTooLowException();
	if (requiredExecute < 1)
		throw Form::GradeTooHighException();
	else if (requiredExecute > 150)
		throw Form::GradeTooLowException();
	std::cout << *this << std::endl;
	return;
}

Form::~Form(void) {

	std::cout << "Form " << this->getName() << " destroyed." << std::endl;
}

Form::Form(Form const & cpy) :
	_name(cpy._name), _requiredSign(cpy.getRequiredSign()),
		_requiredExecute(cpy.getRequiredExecute()), _target(cpy.getTarget()) {

	*this = cpy;
	return;
}

Form& Form::operator=(Form const & rhs) {

	if (this != &rhs) {
		this->_signed = rhs.getSigned();
	}
	return (*this);
}

std::string	Form::getName() const {

	return(this->_name);
}

bool	Form::getSigned() const {

	return(this->_signed);
}

int	Form::getRequiredSign() const {

	return(this->_requiredSign);
}

int	Form::getRequiredExecute() const {

	return(this->_requiredExecute);
}

std::string	Form::getTarget() const {

	return(this->_target);
}

void	Form::setSigned(bool b) {

	this->_signed = b;
}

void	Form::beSigned(Bureaucrat const &buro) {

	if (buro.getGrade() > this->_requiredSign)
		throw Form::GradeTooLowException();
	else if (this->_signed == true)
		throw Form::AlreadySignedException();
	else
		this->_signed = true;
}

void	Form::execute(Bureaucrat const & executor) const {

	if (this->_signed && executor.getGrade() > this->getRequiredExecute())
		throw GradeTooLowException();
	else if (!this->_signed)
		throw NotSignedException();

	this->action();
}

const char* Form::GradeTooHighException::what() const throw() {

	return("Grade too High.");
}

const char* Form::GradeTooLowException::what() const throw() {

	return("Grade too Low.");
}

const char*	Form::AlreadySignedException::what() const throw() {

	return("Already Signed Form.");
}

const char*	Form::NotSignedException::what() const throw() {

	return("Form not signed for execution.");
}


std::ostream& operator<<(std::ostream& out, const Form& form) {

	std::string	sig;

	if (form.getSigned() == true)
		sig = "\033[1;32mSIGNED.\033[0m";
	else
		sig = "\033[0;31mNOT SIGNED.\033[0m";

	out << "Form: " << form.getName() << "." << '\n'
		<< '\t' << "Grade required to sign: " << form.getRequiredSign() << '\n'
		<< '\t' << "Grade required to execute: " << form.getRequiredExecute() << '\n' 
		<< sig;
	return(out);
}
