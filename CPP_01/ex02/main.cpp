/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:07:11 by potero            #+#    #+#             */
/*   Updated: 2022/11/01 13:27:34 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ostream>
#include <iostream>

int	main() {

	std::string	str;
	std::string *stringPTR;
	std::string &stringREF = str;

	str = "HI THIS IS BRAIN";
	std::cout << str << std::endl;
	stringPTR = &str;
	std::cout << "stringPTR-> Pointer: " << stringPTR << std::endl;
	std::cout << "stringRef-> Reference: "<< stringREF << std::endl;
	return (0);	
}
