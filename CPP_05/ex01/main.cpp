/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:04:41 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/20 09:53:59 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void) {

	try
	{
		Form	form("Form", 20, 20);
		std::cout << "Required to sign 0:" << std::endl;
		Form	wrong("Wrong", 0, 20);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "------------------------------" << std::endl;
		std::cout << "Required to execute 170:" << std::endl;
		Form	wrong("Wrong", 120, 170);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "------------------------------" << std::endl;
		Bureaucrat	boss("Boss", 1);
		Form		pay("Payroll", 1, 5);
		std::cout << "Boss signs Payroll:" << std::endl;
		boss.signForm(pay);
		std::cout << "Payroll form status:" << std::endl;
		std::cout << pay << std::endl;
		std::cout << "Boss signs Payroll again:" << std::endl;
		boss.signForm(pay);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "------------------------------" << std::endl;
		Bureaucrat	worker("Worker", 120);
		Form		pay("Payroll", 10, 5);
		std::cout << "Worker signs Payroll:" << std::endl;
		worker.signForm(pay);
		std::cout << "Payroll form status:" << std::endl;
		std::cout << pay << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return(0);

}
