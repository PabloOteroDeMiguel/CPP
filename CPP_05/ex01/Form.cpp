/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:08:44 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/19 16:31:08 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) :  _requiredSign(150), _requiredExecute(150) {

	this->_signed = false;
	return;
}

Form::Form(std::string name, int requiredSign, int requiredExecute) :
			_name(name), _requiredSign(requiredSign), _requiredExecute(requiredExecute) {

//	this->_name = name;
	this->_signed = false;
/*
	if (requiredSign < 1)
		throw From::GradeTooHighException();
	else if (requiredSign > 150)
		throw From::GradeTooLowException();
	else*/
//		this->_requiredSign = requiredSign;
/*	if (requiredExecute < 1)
		throw From::GradeTooHighException();
	else if (requiredExecute > 150)
		throw From::GradeTooLowException();
	else*/
//		this->_requiredExecute = requiredExecute;

	std::cout << *this << std::endl;
	return;
}

Form::~Form(void) {

	std::cout << "Form " << this->_name << " destroyed." << std::endl;
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
