/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:04:41 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/19 12:16:10 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void) {

	Bureaucrat	me("Me", 5);
	Bureaucrat	you(me);

	std::cout << me.getName() << "(" << me.getGrade() << ")." << std::endl;
	std::cout << you.getName() << "(" << you.getGrade() << ")." << std::endl;

	try
	{
		Bureaucrat	he("Me", 0);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return(0);

}
