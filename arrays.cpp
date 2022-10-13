/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrays.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:52:50 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/13 12:02:49 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <cmath>

int	main() {

	int	luckyNums [] = {4, 8, 15, 16, 23, 42};

	std::cout << luckyNums[0] << std::endl;
	luckyNums[0] = 0;
	std::cout << luckyNums[0] << std::endl;

	return 0;
}
