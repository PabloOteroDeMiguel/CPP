/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:27:51 by potero-d          #+#    #+#             */
/*   Updated: 2022/08/29 11:45:07 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>

double	cube (double num) {

	double	result;

	result = num * num * num;
	return (result);
}

int main () {

	double	answer;
	double	num;

	std::cout << "Enter a number: " << std::endl;
	std::cin >> num;
	answer =  cube(num);
	std::cout << "The cube of " << num << " is: " << answer << std::endl;

	return 0;
}
