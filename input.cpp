/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 10:05:47 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/13 12:07:59 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <string>


int	main() {

//	int		age;
	std::string	name;
/*
	std::cout << "Enter your age: ";
	std::cin >> age;

	std::cout << "You, Robot, are " << age << " years old.\n";
*/ 
/*Why if I uncomment this part the next doesn´t work?*/

	std::cout << "Enter your name: ";
	std::getline (std::cin,name);

	std::cout << "Hello " << name  << "." << std::endl;

	return 0;

}
