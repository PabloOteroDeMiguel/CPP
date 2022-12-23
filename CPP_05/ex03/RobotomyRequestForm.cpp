/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:27:58 by potero            #+#    #+#             */
/*   Updated: 2022/12/23 10:58:48 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) :
	Form("RobotomyRequestForm", 72, 45, "") {

	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
	Form("RobotomyRequestForm", 72, 45, target) {
	
	std::cout << *this << std::endl;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {

	std::cout << "Form " << this->getName() << " destroyed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & cpy) :
	Form(cpy) {

	return;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {

	if (this != &rhs) {
		this->setSigned(rhs.getSigned());
	}
	return (*this);
}

void	RobotomyRequestForm::action(void) const {

	srand((unsigned) time(NULL));
	int	random;

	random = rand() % 10;;
	//std::cout << "Random: " << random << std::endl;
	if (random % 2 == 0) {
		std::cout << "Bruum Bruumm.....BzzzZzzzzzzz....Bzzzz.." << std::endl;
		std::cout << this->getTarget();
		std::cout << " has been robotomized successfully." << std::endl;
	}
	else {
		std::cout << "Bruum Bruumm.....BzzzZzzzzzzz....Clank.." << std::endl;
		std::cout << this->getTarget();
		std::cout << " failure been robotomized." << std::endl;
	}
}
