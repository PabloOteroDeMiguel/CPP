/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:04:41 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/26 08:29:30 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void	leaks(void) {
	system("leaks a.out");
}

int	main(void) {

//	atexit(leaks);
	Intern	someRandomIntern;
	Bureaucrat	president("President", 1);

	Form* rrf;
	Form* rr;
	rr = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf = someRandomIntern.makeForm("roboto", "Bender");
	if (rr != NULL) {
		president.signForm(*rr);
	}	
	if (rrf != NULL) {
		president.signForm(*rrf);
	}

//	delete rr; //Nothing to delete here.
	delete rrf;

	return(0);
}
