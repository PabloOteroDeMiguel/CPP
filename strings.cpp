/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 19:15:11 by potero-d          #+#    #+#             */
/*   Updated: 2022/08/12 19:49:41 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <string>

int	main() {

	std::string	str = "Hello Robot!";

	std::cout << "Hello ";
	std::cout << "Robot!" << std::endl;
	std::cout << str << std::endl;
	std::cout <<str.length() << std::endl;
	std::cout <<str.find( "o R" ) << std::endl;
	std::cout <<str.substr(5, 5) << std::endl;

	return 0;
}
