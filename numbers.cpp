/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:50:28 by potero-d          #+#    #+#             */
/*   Updated: 2022/08/13 10:02:50 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <cmath>

int	main() {

	std::cout << 10 / 3 << std::endl;
	std::cout << 10 / 3.0 << std::endl;

	/*cmath*/

	std::cout << pow(2, 5) << std::endl;
	std::cout << sqrt(65) << std::endl;
	std::cout << round(5.1) << std::endl;
	std::cout << ceil(5.1) << std::endl;
	std::cout << floor(5.7) << std::endl;
	std::cout << fmax(2, 5) << std::endl;

	return 0;
}
