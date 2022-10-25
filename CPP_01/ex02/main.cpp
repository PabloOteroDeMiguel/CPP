/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:07:11 by potero            #+#    #+#             */
/*   Updated: 2022/10/25 21:21:08 by potero           ###   ########.fr       */
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
	std::cout << "Pointer: " << stringPTR << std::endl;
	std::cout << "Reference: "<< stringREF << std::endl;
	return (0);	
}
