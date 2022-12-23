/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:04:41 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/23 10:28:00 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void) {

	/*
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
	*/
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
	/*
	try
	{
		std::cout << "------------------------------" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	*/
	return(0);

}
