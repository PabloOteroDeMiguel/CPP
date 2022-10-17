/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exponent.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:12:27 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/17 13:21:38 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <cmath>

int	power(int base, int pow) {

	int	i;
	int	result = 1;

	for (i = 0; i < pow; i++) {
		result = result * base;
	}
	return (result);
}


int main() {

	int	base;
	int	pow;

	std::cout << "Enter base: ";
	std::cin >> base;
	std::cout << "Enter pow: ";
	std::cin >> pow;
	if (pow < 0) {
		std::cout << "Invalid power number." << std::endl;
	}
	else
		std::cout << base << "^" << pow << " = " << power(base, pow) << std::endl;

	return (0);
}
