/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:04:41 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/19 17:31:44 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void) {
/*
	Form	form("Form", 20, 20);
	Form	empty;
//	Form	other(form);
//	Form	last("Last", 10, 10);
	std::cout << empty << std::endl;
//	std::cout << other << std::endl;
//	last = form;
//	std::cout << last << std::endl;
*/
	try
	{
		Form	form("Form", 20, 20);
		Form	wrong("Wrong", 0, 20);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form	wrong("Wrong", 120, 170);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return(0);

}
