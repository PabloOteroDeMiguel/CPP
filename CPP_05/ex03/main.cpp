/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:04:41 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/23 12:21:27 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

/*
void	tree(void) {

	try
	{
		std::cout << "------------Tree-------------" << std::endl;
		Bureaucrat	worker("Worker", 120);
		Bureaucrat	lowWorker("LowWorker", 140);
		ShrubberyCreationForm tree("home");

		std::cout << worker << " try execute Form: " << tree.getName() << std::endl;
		worker.executeForm(tree);
		worker.signForm(tree);
		std::cout << tree << std::endl;
		std::cout << lowWorker << " try execute Form: " << tree.getName() << std::endl;
		lowWorker.executeForm(tree);
		std::cout << worker << " try execute Form: " << tree.getName() << std::endl;
		worker.executeForm(tree);
		std::cout << "-----------------------------" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	roboto(void) {

	try
	{
		std::cout << "-------------Robot------------" << std::endl;
		Bureaucrat	robot("Robot", 20);
		Bureaucrat	lowRobot("Robot", 80);
		RobotomyRequestForm kitchen("Kitchen");
		RobotomyRequestForm bathroom("Bathroom");

		std::cout << robot << " try execute Form: " << kitchen.getName() << std::endl;
		robot.executeForm(kitchen);
		robot.signForm(kitchen);
		robot.signForm(bathroom);
		std::cout << kitchen << std::endl;
		std::cout << lowRobot << " try execute Form: " << kitchen.getName() << std::endl;
		lowRobot.executeForm(kitchen);
		std::cout << robot << " try execute Form: " << kitchen.getName() << std::endl;
		robot.executeForm(kitchen);
		sleep(1);
		robot.executeForm(bathroom);
		std::cout << "-----------------------------" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	pardon(void) {

	try
	{
		std::cout << "-----------Pardon-------------" << std::endl;
		Bureaucrat	president("President", 1);
		Bureaucrat	me("Me", 10);
		PresidentialPardonForm	pardon("Turkey");

		std::cout << president << " try execute Form: " << pardon.getName() << std::endl;
		president.executeForm(pardon);
		me.signForm(pardon);
		std::cout << pardon << std::endl;
		std::cout << me << " try execute Form: " << pardon.getName() << std::endl;
		me.executeForm(pardon);
		std::cout << president << " try execute Form: " << pardon.getName() << std::endl;
		president.executeForm(pardon);
		std::cout << "-----------------------------" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
*/
int	main(void) {

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

	delete rr; //Nothing to delete here.
	delete rrf;

	return(0);
}
