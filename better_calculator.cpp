/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   better_calculator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:04:46 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/17 11:20:33 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <cmath>

int	main() {

	int		num1;
	int		num2;
	int		result;
	char	op;

	std::cout << "Enter firt number: ";
	std::cin >> num1;
	std::cout << "Enter operator: ";
	std::cin >> op;
	std::cout << "Enter second number: ";
	std::cin >> num2;

	if (op == '+') {
		result = num1 + num2;
	}
	else if (op == '-') {
		result = num1 - num2;
	}
	else if (op == '*') {
		result = num1 * num2;
	}
	else if (op == '/') {
		result = num1 / num2;
	}
	else {
		std::cout << "Bad operator"<< std::endl;
		return (0);
	}
	std::cout << result <<std::endl;

	return (0);
}
