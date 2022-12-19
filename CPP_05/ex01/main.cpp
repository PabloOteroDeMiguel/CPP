/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:04:41 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/19 15:30:20 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void) {

	Bureaucrat	first("First", 1);
	Bureaucrat	asskisser(first);
	Bureaucrat last("Last", 150);

	std::cout << first.getName() << ", bureaucrat grade ";
	std::cout << first.getGrade() << "." << std::endl;
	std::cout << first << std::endl;
	std::cout << asskisser << std::endl;

	try
	{
		std::cout <<"New Bureaucrat with grade 0: ";
		Bureaucrat	she("She", 0);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout <<"New Bureaucrat with grade 200: ";
		Bureaucrat	he("He", 200);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout <<"Increase first to 0: ";
		first.incrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout <<"Decrease last to 151: ";
		last.decrementGrade();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout <<"Normal Bureaucrat: ";
		Bureaucrat normal("Normal", 75);
		normal.decrementGrade();
		normal.incrementGrade();
		normal.incrementGrade();
		normal.incrementGrade();
		std::cout << normal << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return(0);

}
