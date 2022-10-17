/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ponters.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:46:13 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/17 16:23:35 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <cmath>

void	pointer(int *number, double *dbl) {

	*number = *number + 2;
	*dbl = 1.5;
}

int main() {

	int			number;
	int			*pNumber = &number;
	double		dbl;
	double		*pDbl = &dbl;
	std::string str;
	std::string	*pStr = &str;

	number = 7;
	dbl = 2.3;
	str = "Yo";

	std::cout << pNumber << std::endl;
	std::cout << pDbl << std::endl;
	std::cout << pStr << std::endl;

	std::cout << number << std::endl;
	std::cout << dbl << std::endl;
	std::cout << str << std::endl;

	std::cout << *pNumber << std::endl;
	std::cout << *pDbl << std::endl;
	std::cout << *pStr << std::endl;

	pointer(&number, pDbl);
	std::cout << number << std::endl;
	std::cout << dbl << std::endl;

	return (0);
}
