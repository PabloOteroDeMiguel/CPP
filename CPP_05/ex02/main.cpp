/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:04:41 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/22 13:45:15 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void) {

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
