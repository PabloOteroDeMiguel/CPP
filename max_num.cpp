/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_num.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:10:01 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/17 11:03:38 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <string>

int	getMax(int num1, int num2) {

	int	result;

	if (num1 > num2)
		result = num1;
	else
		result = num2;

	return (result);
}

int	main() {

	std::cout << getMax(2, 5) << std::endl;

	return (0);
}
